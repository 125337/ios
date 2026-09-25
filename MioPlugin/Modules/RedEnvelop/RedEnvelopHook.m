#import "RedEnvelopHook.h"
#import "RedEnvelopConfig.h"
#import "MioRedEnvelopParam.h"
#import "MioRedEnvelopTaskManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Settings/Common/WPBorderLayer.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <substrate.h>

static NSInteger _statTotalCount = 0;
static NSInteger _statTotalAmount = 0;
static NSMutableSet *_countedSendIds = nil;

/// 红包同步上下文：sendId -> 会话信息（响应回来时才知道抢到多少钱，消息进来时才知道来源，两段拼一起）
/// @{@"session": wxid, @"sessionName": 显示名, @"senderName": 群内发送者显示名, @"isGroup": @(BOOL)}
static NSMutableDictionary<NSString *, NSDictionary *> *_syncCtxMap = nil;

static void syncSaveContext(NSString *sendId, NSString *sessionWxid, BOOL isGroup, NSString *groupSenderWxid) {
    if (!sendId.length) return;
    if (!_syncCtxMap) _syncCtxMap = [NSMutableDictionary dictionary];
    NSString *sessionName = WXDisplayNameForWxid(sessionWxid);
    // 群红包发送者从消息内容前缀（"wxid:\n..."）解析；私聊发送者即对方本人
    NSString *senderName = isGroup
        ? (groupSenderWxid.length ? WXDisplayNameForWxid(groupSenderWxid) : sessionName)
        : sessionName;
    NSDictionary *ctx = @{@"session": sessionWxid ?: @"",
                          @"sessionName": sessionName ?: @"",
                          @"senderName": senderName ?: @"",
                          @"isGroup": @(isGroup)};
    @synchronized (_syncCtxMap) {
        if (_syncCtxMap.count > 100) {  // 防膨胀：超限清最早的一半
            NSArray *keys = _syncCtxMap.allKeys;
            for (NSUInteger i = 0; i < keys.count / 2; i++) [_syncCtxMap removeObjectForKey:keys[i]];
        }
        _syncCtxMap[sendId] = ctx;
    }
}

static NSDictionary *syncContextForSendId(NSString *sendId) {
    if (!sendId.length) return nil;
    @synchronized (_syncCtxMap) {
        return _syncCtxMap[sendId];
    }
}

/// 抢到红包后按用户配置把统计信息同步到目标窗口
static void syncRedEnvelopResult(NSInteger amountFen, NSString *sendId, NSInteger totalAmountFen, NSInteger totalNum) {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    NSInteger mode = config.redEnvelopSyncMode;
    if (mode == 0) return;

    NSString *target = nil;
    if (mode == 1) {  // 个人窗口 = 发给自己的会话
        target = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
    } else if (mode == 2) {
        target = @"filehelper";
    } else if (mode == 3) {  // 当前窗口 = 红包来源会话
        target = syncContextForSendId(sendId)[@"session"];
    } else if (mode == 4) {
        target = config.redEnvelopSyncCustomTarget;
    }
    if (!target.length) {
        WPLog(@"RedEnv", @"[SYNC] 同步目标为空 (mode=%ld)，跳过", (long)mode);
        return;
    }

    NSDictionary *ctx = syncContextForSendId(sendId);
    BOOL isGroup = ctx[@"isGroup"] ? [ctx[@"isGroup"] boolValue] : NO;
    NSString *sessionName = ctx[@"sessionName"] ?: @"未知会话";
    NSString *senderName = ctx[@"senderName"] ?: @"-";

    NSString *srcLine = isGroup
        ? [NSString stringWithFormat:@"来源: 群聊「%@」", sessionName]
        : [NSString stringWithFormat:@"来源: 私聊（%@）", sessionName];
    NSString *amountLine = totalAmountFen > 0
        ? [NSString stringWithFormat:@"🧧 抢到红包 %.2f元（红包总额 %.2f元/%ld个）",
           amountFen / 100.0, totalAmountFen / 100.0, (long)totalNum]
        : [NSString stringWithFormat:@"🧧 抢到红包 %.2f元", amountFen / 100.0];
    NSString *text = [NSString stringWithFormat:@"%@\n%@\n发送者: %@\n累计: %ld个 / %.2f元",
                      amountLine, srcLine, senderName,
                      (long)_statTotalCount, _statTotalAmount / 100.0];

    WPLog(@"RedEnv", @"[SYNC] 同步红包信息 -> %@ (mode=%ld) 金额=%ld分", target, (long)mode, (long)amountFen);
    WXSendTextMessage(text, target);
}

static IMP orig_onNewSyncAddMessage = NULL;
static IMP orig_addMessageLibWithWrap = NULL;
static IMP orig_onNewSyncNotAddDBMessage = NULL;
static IMP orig_AddMsgMsgWrap = NULL;
static IMP orig_AsyncOnAddMsgMsgWrap = NULL;

static void processRedEnvelopMessage(id wrap);

static void replaced_onNewSyncAddMessage(id self, SEL _cmd, id wrap) {
    if (orig_onNewSyncAddMessage) {
        ((void (*)(id, SEL, id))orig_onNewSyncAddMessage)(self, _cmd, wrap);
    }
    processRedEnvelopMessage(wrap);
}

static void replaced_addMessageLibWithWrap(id self, SEL _cmd, id wrap, id vc) {
    if (orig_addMessageLibWithWrap) {
        ((void (*)(id, SEL, id, id))orig_addMessageLibWithWrap)(self, _cmd, wrap, vc);
    }
    processRedEnvelopMessage(wrap);
}

static void replaced_onNewSyncNotAddDBMessage(id self, SEL _cmd, id wrap) {
    if (orig_onNewSyncNotAddDBMessage) {
        ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, wrap);
    }
    processRedEnvelopMessage(wrap);
}

static void replaced_AddMsgMsgWrap(id self, SEL _cmd, id fromUsr, id wrap) {
    if (orig_AddMsgMsgWrap) {
        ((void (*)(id, SEL, id, id))orig_AddMsgMsgWrap)(self, _cmd, fromUsr, wrap);
    }
    processRedEnvelopMessage(wrap);
}

static void replaced_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    if (orig_AsyncOnAddMsgMsgWrap) {
        ((void (*)(id, SEL, id, id))orig_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    }
    processRedEnvelopMessage(wrap);
}

static void processRedEnvelopMessage(id wrap) {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    if (!config.autoRedEnvelop) return;

    if (!wrap) return;

    unsigned int msgType = 0;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")])
        msgType = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
    if (msgType != 49) return;

    NSString *content = nil;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_nsContent")])
        content = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_nsContent"));

    if (![content isKindOfClass:[NSString class]] || [content rangeOfString:@"wxpay://"].location == NSNotFound) return;

    NSString *msgId = nil;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_nsMsgId")])
        msgId = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_nsMsgId"));
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMesLocalID")]) {
        unsigned int localId = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMesLocalID"));
        if (localId > 0 && !msgId.length) msgId = [NSString stringWithFormat:@"%u", localId];
    }

    MioRedEnvelopTaskManager *taskMgr = [MioRedEnvelopTaskManager shared];

    if (msgId.length > 0) {
        if ([taskMgr isProcessed:msgId]) return;
        [taskMgr markProcessed:msgId];
    }

    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) return;

    id selfContact = nil;
    if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")])
        selfContact = ((id (*)(id, SEL, ...))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
    if (!selfContact) return;

    NSString *fromUsr = nil;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_nsFromUsr")])
        fromUsr = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_nsFromUsr"));
    NSString *toUsr = nil;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_nsToUsr")])
        toUsr = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_nsToUsr"));
    NSString *selfUserName = nil;
    if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")])
        selfUserName = ((id (*)(id, SEL, ...))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));

    BOOL isSender = fromUsr && selfUserName && [fromUsr isEqualToString:selfUserName];
    BOOL isGroupReceiver = fromUsr && [fromUsr containsString:@"@chatroom"];
    BOOL isGroupSender = isSender && toUsr && [toUsr containsString:@"@chatroom"];
    BOOL isPersonalSender = isSender && !isGroupSender;

    BOOL shouldReceive = NO;
    if (isGroupReceiver) shouldReceive = YES;
    else if (isGroupSender && config.redEnvelopCatchMe) shouldReceive = YES;
    else if (!isGroupReceiver && !isSender && config.personalRedEnvelopEnable) shouldReceive = YES;
    else if (isPersonalSender && config.redEnvelopCatchMe) shouldReceive = YES;

    WPLog(@"RedEnv", @"[STAT] from=%@ to=%@ self=%@ sender=%d groupRecv=%d groupSend=%d personalSend=%d catch=%d should=%d",
          fromUsr ?: @"-", toUsr ?: @"-", selfUserName ?: @"-", isSender, isGroupReceiver, isGroupSender, isPersonalSender, config.redEnvelopCatchMe, shouldReceive);

    // ★★★ 统一群黑名单过滤 ★★★
    // 合并自原来的 redEnvelopBlackList + redEnvelopGroupFilterList
    // 设计参考：锤子助手 isRedEnvelopGroupFiter（同一个数据源，对所有群消息生效）
    //
    // 匹配策略（根据消息方向自动选择正确字段）：
    //   isGroupReceiver → 匹配 fromUsr（群 ID）
    //   isGroupSender   → 匹配 toUsr（群 ID）
    //   非群消息 → 不执行此过滤
    //
    if (config.redEnvelopGroupFilterEnabled && config.redEnvelopGroupFilterList.count > 0) {
        NSString *sessionToCheck = nil;
        NSString *directionTag = nil;
        if (isGroupReceiver) {
            sessionToCheck = fromUsr;
            directionTag = @"RECV";
        } else if (isGroupSender) {
            sessionToCheck = toUsr;
            directionTag = @"SEND";
        }
        
        if (sessionToCheck.length > 0) {
            WPLog(@"RedEnv", @"[FILTER] [%@] 检查会话: %@ | 过滤列表(%lu项): %@",
                  directionTag, sessionToCheck,
                  (unsigned long)config.redEnvelopGroupFilterList.count,
                  config.redEnvelopGroupFilterList);
            
            BOOL matched = NO;
            for (id groupItem in config.redEnvelopGroupFilterList) {
                // 防御性检查：确保过滤列表元素是 NSString
                if (![groupItem isKindOfClass:[NSString class]]) {
                    WPLog(@"RedEnv", @"[FILTER] ⚠ 过滤列表元素非 NSString: %@ (type=%@)",
                          groupItem, NSStringFromClass([groupItem class]));
                    continue;
                }
                if ([sessionToCheck isEqualToString:(NSString *)groupItem]) {
                    shouldReceive = NO;
                    matched = YES;
                    WPLog(@"RedEnv", @"[FILTER] ✅ [%@] 群黑名单命中: %@ == %@",
                          directionTag, sessionToCheck, groupItem);
                    break;
                }
            }
            
            if (!matched) {
                WPLog(@"RedEnv", @"[FILTER] ❌ [%@] 未命中黑名单: %@", directionTag, sessionToCheck);
            }
        }
    }

    if (!shouldReceive) return;

    NSString *nativeUrl = nil;

    id payInfoItem = nil;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_oWCPayInfoItem")])
        payInfoItem = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_oWCPayInfoItem"));

    if (payInfoItem) {
        if ([payInfoItem respondsToSelector:NSSelectorFromString(@"m_c2cNativeUrl")])
            nativeUrl = ((id (*)(id, SEL, ...))objc_msgSend)(payInfoItem, NSSelectorFromString(@"m_c2cNativeUrl"));
        if (!nativeUrl.length) {
            if ([payInfoItem respondsToSelector:NSSelectorFromString(@"m_nativeUrl")])
                nativeUrl = ((id (*)(id, SEL, ...))objc_msgSend)(payInfoItem, NSSelectorFromString(@"m_nativeUrl"));
        }
    }
    if (!nativeUrl.length) {
        NSRange wxpayRange = [content rangeOfString:@"wxpay://"];
        if (wxpayRange.location != NSNotFound) {
            NSUInteger bestEnd = NSNotFound;
            for (NSString *sep in @[@"\"", @"'", @"<", @"\n"]) {
                NSRange r = [content rangeOfString:sep options:0 range:NSMakeRange(wxpayRange.location, MIN(content.length - wxpayRange.location, 500))];
                if (r.location != NSNotFound && (bestEnd == NSNotFound || r.location < bestEnd)) bestEnd = r.location;
            }
            if (bestEnd == NSNotFound) bestEnd = MIN(wxpayRange.location + 300, content.length);
            nativeUrl = [content substringWithRange:NSMakeRange(wxpayRange.location, bestEnd - wxpayRange.location)];
        }
    }
    if (!nativeUrl.length) return;

    NSDictionary *nativeUrlDict = nil;
    Class WCBizUtilClass = objc_getClass("WCBizUtil");
    if (WCBizUtilClass && [WCBizUtilClass respondsToSelector:NSSelectorFromString(@"dictionaryWithDecodedComponets:separator:")]) {
        NSString *prefix = @"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?";
        if ([nativeUrl hasPrefix:prefix]) {
            nativeUrlDict = ((NSDictionary *(*)(id, SEL, NSString *, NSString *, ...))objc_msgSend)(
                WCBizUtilClass, NSSelectorFromString(@"dictionaryWithDecodedComponets:separator:"),
                [nativeUrl substringFromIndex:prefix.length], @"&");
        }
    }
    if (!nativeUrlDict) {
        WPLog(@"RedEnv", @"[WARN] 无法解析nativeUrl: %@", [nativeUrl substringToIndex:MIN(nativeUrl.length, 100)]);
        return;
    }

    MioRedEnvelopParam *param = [[MioRedEnvelopParam alloc] init];
    param.msgType = nativeUrlDict[@"msgtype"] ?: @"";
    param.sendId = nativeUrlDict[@"sendid"] ?: @"";
    param.channelId = nativeUrlDict[@"channelid"] ?: @"";
    param.nativeUrl = nativeUrl;
    param.sessionUserName = isGroupSender ? toUsr : fromUsr;
    param.sign = nativeUrlDict[@"sign"] ?: @"";
    param.isGroupSender = isGroupSender;
    param.wishing = nativeUrlDict[@"wishing"] ?: @"";

    if (config.redEnvelopTextFilterEnabled && config.redEnvelopTextFilter.length > 0) {
        NSArray *keywords = [config.redEnvelopTextFilter componentsSeparatedByString:@","];
        for (NSString *kw in keywords) {
            NSString *trimmed = [kw stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
            if (trimmed.length > 0 && [content containsString:trimmed]) {
                shouldReceive = NO;
                WPLog(@"RedEnv", @"[FILTER] 关键词过滤命中: %@", trimmed);
                break;
            }
        }
    }

    if (!shouldReceive) return;

    WPLog(@"RedEnv", @"[HB] 红包参数: sendId=%@ sign=%@ channel=%@ msgType=%@ session=%@ isGroupSender=%d",
          param.sendId, [param.sign substringToIndex:MIN(param.sign.length, 16)], param.channelId, param.msgType, param.sessionUserName, param.isGroupSender);

    if (!param.sendId.length) {
        WPLog(@"RedEnv", @"[WARN] sendId为空，跳过");
        return;
    }

    // 红包同步上下文：记录来源会话/发送者，等领取响应回来拼统计信息
    BOOL redEnvInGroup = param.isGroupSender || (fromUsr && [fromUsr containsString:@"@chatroom"]);
    NSString *groupSenderWxid = nil;
    if (redEnvInGroup && !param.isGroupSender) {
        // 群消息内容前缀 "wxid:\n<红包>" → 真实发送者 wxid
        NSRange sep = [content rangeOfString:@":\n"];
        if (sep.location != NSNotFound && sep.location > 0 && sep.location < 200) {
            NSString *candidate = [content substringToIndex:sep.location];
            if (candidate.length <= 64) groupSenderWxid = candidate;
        }
    }
    syncSaveContext(param.sendId, param.sessionUserName, redEnvInGroup, groupSenderWxid);

    [taskMgr savePendingParam:param];
    WPLog(@"RedEnv", @"[SAVE] 已保存 pending param: sendId=%@", param.sendId);

    [taskMgr startBackgroundKeepAlive];

    int delay = (int)config.redEnvelopDelay;
    WPLog(@"RedEnv", @"[DISPATCH] 准备查询: sendId=%@ delay=%d", param.sendId, delay);

    [taskMgr addTaskWithParam:param delay:delay];
}

static void handleHongbaoResponse(id res, id req) {
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    if (!config.autoRedEnvelop) return;

    NSInteger cgiCmdid = 0;
    if ([res respondsToSelector:NSSelectorFromString(@"cgiCmdid")])
        cgiCmdid = ((NSInteger (*)(id, SEL, ...))objc_msgSend)(res, NSSelectorFromString(@"cgiCmdid"));

    NSString *responseString = nil;
    if ([res respondsToSelector:NSSelectorFromString(@"retText")]) {
        id retText = ((id (*)(id, SEL, ...))objc_msgSend)(res, NSSelectorFromString(@"retText"));
        if (retText && [retText respondsToSelector:NSSelectorFromString(@"buffer")]) {
            id buffer = ((id (*)(id, SEL, ...))objc_msgSend)(retText, NSSelectorFromString(@"buffer"));
            if (buffer) responseString = [[NSString alloc] initWithData:buffer encoding:NSUTF8StringEncoding];
        }
        if (!responseString.length) responseString = [retText description];
    }

    NSDictionary *responseDict = nil;
    if (responseString.length > 0) {
        NSData *jsonData = [responseString dataUsingEncoding:NSUTF8StringEncoding];
        responseDict = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:nil];
        if (![responseDict isKindOfClass:[NSDictionary class]]) responseDict = nil;
    }

    if (cgiCmdid != 3) {
        if (responseDict) {
            NSInteger receiveStatus = [responseDict[@"receiveStatus"] integerValue];
            NSInteger hbStatus = [responseDict[@"hbStatus"] integerValue];
            NSString *sendId = responseDict[@"sendId"] ?: @"";
            NSString *nickName = responseDict[@"nickName"] ?: responseDict[@"sendNickName"] ?: @"";
            NSString *wishing = responseDict[@"wishing"] ?: @"";

            if (sendId.length > 0) {
                if (!_countedSendIds) _countedSendIds = [NSMutableSet set];
                @synchronized (_countedSendIds) {
                    if ([_countedSendIds containsObject:sendId]) return;
                    [_countedSendIds addObject:sendId];
                }
            }

            NSNumber *receiveAmount = responseDict[@"receiveAmount"];
            NSNumber *totalAmount = responseDict[@"totalAmount"];
            NSNumber *hbAmount = responseDict[@"hbAmount"];
            NSNumber *amountNum = responseDict[@"amount"];

            NSInteger amount = 0;
            if (receiveAmount && [receiveAmount integerValue] > 0) amount = [receiveAmount integerValue];
            else if (hbAmount && [hbAmount integerValue] > 0) amount = [hbAmount integerValue];
            else if (amountNum && [amountNum integerValue] > 0) amount = [amountNum integerValue];

            NSInteger totalAmountVal = [totalAmount integerValue];
            NSInteger totalNum = [responseDict[@"totalNum"] integerValue];

            if (amount > 0) {
                _statTotalCount++;
                _statTotalAmount += amount;
                WPLog(@"RedEnv", @"[STAT] 抢到红包: %.2f元 发送人=%@ 祝福=%@ 总额=%.2f/%ld个 累计:%ld个/%.2f元",
                      amount / 100.0, nickName, wishing,
                      totalAmountVal / 100.0, (long)totalNum,
                      (long)_statTotalCount, _statTotalAmount / 100.0);
                syncRedEnvelopResult(amount, sendId, totalAmountVal, totalNum);
            } else if (receiveStatus == 2) {
                WPLog(@"RedEnv", @"[STAT] 红包已被领取");
            } else if (hbStatus == 4) {
                WPLog(@"RedEnv", @"[STAT] 红包已过期");
            } else {
                WPLog(@"RedEnv", @"[STAT] 红包结果: receiveStatus=%ld hbStatus=%ld keys=%@",
                      (long)receiveStatus, (long)hbStatus, [responseDict allKeys]);
            }
        }
        return;
    }

    WPLog(@"RedEnv", @"[RESP] 收到查询响应(cgiCmdid=3)，开始处理");

    NSString *requestString = nil;
    if ([req respondsToSelector:NSSelectorFromString(@"reqText")]) {
        id reqText = ((id (*)(id, SEL, ...))objc_msgSend)(req, NSSelectorFromString(@"reqText"));
        if (reqText && [reqText respondsToSelector:NSSelectorFromString(@"buffer")]) {
            id buffer = ((id (*)(id, SEL, ...))objc_msgSend)(reqText, NSSelectorFromString(@"buffer"));
            if (buffer) requestString = [[NSString alloc] initWithData:buffer encoding:NSUTF8StringEncoding];
        }
        if (!requestString.length) requestString = [reqText description];
    }
    if (!requestString.length) return;

    Class WCBizUtilClass = objc_getClass("WCBizUtil");
    if (!WCBizUtilClass) return;
    SEL dictSel = NSSelectorFromString(@"dictionaryWithDecodedComponets:separator:");
    if (![WCBizUtilClass respondsToSelector:dictSel]) return;

    NSDictionary *requestDict = ((NSDictionary *(*)(id, SEL, NSString *, NSString *, ...))objc_msgSend)(
        WCBizUtilClass, dictSel, requestString, @"&");

    NSString *reqNativeUrl = [requestDict objectForKey:@"nativeUrl"];
    if (reqNativeUrl) reqNativeUrl = [reqNativeUrl stringByRemovingPercentEncoding];
    if (!reqNativeUrl.length) return;

    NSDictionary *reqUrlDict = ((NSDictionary *(*)(id, SEL, NSString *, NSString *, ...))objc_msgSend)(
        WCBizUtilClass, dictSel, reqNativeUrl, @"&");
    NSString *requestSign = [reqUrlDict objectForKey:@"sign"];
    NSString *requestSendId = [requestDict objectForKey:@"sendId"] ?: [reqUrlDict objectForKey:@"sendid"];

    if (!responseDict) return;

    NSInteger receiveStatus = [responseDict[@"receiveStatus"] integerValue];
    if (receiveStatus == 2) return;
    NSInteger hbStatus = [responseDict[@"hbStatus"] integerValue];
    if (hbStatus == 4) return;

    NSString *timingIdentifier = responseDict[@"timingIdentifier"];
    if (!timingIdentifier.length) return;

    NSString *sendId = responseDict[@"sendId"] ?: @"";
    MioRedEnvelopParam *param = nil;
    MioRedEnvelopTaskManager *taskMgr = [MioRedEnvelopTaskManager shared];

    if (sendId.length > 0) {
        param = [taskMgr popPendingParamBySendId:sendId];
    }

    if (!param && requestSendId.length > 0) {
        param = [taskMgr popPendingParamBySendId:requestSendId];
        if (param) {
            WPLog(@"RedEnv", @"[MATCH] 通过requestSendId匹配: %@ -> %@", requestSendId, param.sendId);
        }
    }

    if (!param && requestSign.length > 0) {
        param = [taskMgr findPendingParamBySign:requestSign];
        if (param) {
            WPLog(@"RedEnv", @"[MATCH] 通过sign匹配: %@", [requestSign substringToIndex:MIN(requestSign.length, 16)]);
        }
    }

    if (!param) {
        WPLog(@"RedEnv", @"[WARN] 未找到待处理红包: sendId=%@ reqSendId=%@ sign=%@",
              sendId, requestSendId ?: @"-", requestSign.length > 0 ? [requestSign substringToIndex:MIN(requestSign.length, 16)] : @"-");
        return;
    }

    BOOL signMatch = requestSign.length > 0 ? [requestSign isEqualToString:param.sign] : YES;
    BOOL shouldOpen = config.autoRedEnvelop;
    if (!param.isGroupSender && !signMatch) shouldOpen = NO;
    WPLog(@"RedEnv", @"[CHECK] signMatch=%d shouldOpen=%d isGroupSender=%d sendId=%@", signMatch, shouldOpen, param.isGroupSender, param.sendId);

    if (!shouldOpen) return;

    WPLog(@"RedEnv", @"[OPEN] 打开红包 sendId=%@ timingId=%@", param.sendId, timingIdentifier);

    id logicMgr = WXGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
    if (!logicMgr) return;

    NSMutableDictionary *params = [@{} mutableCopy];
    params[@"agreeDuty"] = @"0";
    params[@"channelId"] = param.channelId ?: @"";
    params[@"inWay"] = @"0";
    params[@"msgType"] = param.msgType ?: @"";
    params[@"nativeUrl"] = param.nativeUrl;
    params[@"sendId"] = param.sendId ?: @"";
    params[@"sessionUserName"] = param.sessionUserName ?: @"";
    params[@"timingIdentifier"] = timingIdentifier;

    SEL openSel = NSSelectorFromString(@"OpenRedEnvelopesRequest:");
    if ([logicMgr respondsToSelector:openSel]) {
        ((void (*)(id, SEL, NSDictionary *, ...))objc_msgSend)(logicMgr, openSel, params);
        WPLog(@"RedEnv", @"[OK] 红包已打开: sendId=%@", param.sendId);
    } else {
        SEL openIMSel = NSSelectorFromString(@"OpenOpenIMRedEnvelopesRequest:");
        if ([logicMgr respondsToSelector:openIMSel]) {
            ((void (*)(id, SEL, NSDictionary *, ...))objc_msgSend)(logicMgr, openIMSel, params);
            WPLog(@"RedEnv", @"[OK] IM红包已打开: sendId=%@", param.sendId);
        }
    }

    if (config.redEnvelopAutoReply && config.redEnvelopAutoReplyStr.length > 0) {
        BOOL isGroup = [param.sessionUserName containsString:@"@chatroom"];
        if (!isGroup || config.redEnvelopAutoReplyInGroup) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                WPLog(@"RedEnv", @"[REPLY] dispatch_after 触发，开始执行");
                @try {
                    id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
                    if (!msgMgr) {
                        WPLog(@"RedEnv", @"[REPLY] CMessageMgr 未找到，跳过");
                        return;
                    }

                    Class msgWrapClass = objc_getClass("CMessageWrap");
                    if (!msgWrapClass) {
                        WPLog(@"RedEnv", @"[REPLY] CMessageWrap class not found");
                        return;
                    }

                    id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
                    if (msg) {
                        @try {
                            [msg setValue:config.redEnvelopAutoReplyStr forKey:@"m_nsContent"];
                            [msg setValue:param.sessionUserName forKey:@"m_nsToUsr"];
                            
                            // ✅ 补充：获取当前用户 ID
                            id contactMgr = WXGetService(objc_getClass("CContactMgr"));
                            id selfContact = nil;
                            NSString *selfUserName = nil;
                            if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
                                selfContact = ((id (*)(id, SEL, ...))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
                            }
                            if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
                                selfUserName = ((id (*)(id, SEL, ...))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
                            }
                            
                            // ✅ 设置发送方为当前用户
                            if (selfUserName) {
                                [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
                            }
                            
                            // ✅ 设置消息状态为"已发送"
                            [msg setValue:@(4) forKey:@"m_uiStatus"];
                            
                            // ✅ 设置消息时间戳
                            [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];
                        } @catch (NSException *e) {
                            WPLog(@"RedEnv", @"[REPLY] 设置属性异常: %@ - %@", e.name, e.reason);
                        }

                        @try {
                            SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                            [msgMgr performSelector:addMsgSel withObject:param.sessionUserName withObject:msg];
#pragma clang diagnostic pop
                            WPLog(@"RedEnv", @"[REPLY] 自动回复已发送: %@ -> %@", config.redEnvelopAutoReplyStr, param.sessionUserName);
                        } @catch (NSException *e) {
                            WPLog(@"RedEnv", @"[REPLY] AddMsg异常: %@ - %@", e.name, e.reason);
                        }
                    }
                } @catch (NSException *e) {
                    WPLog(@"RedEnv", @"[WARN] 自动回复异常: %@ - %@", e.name, e.reason);
                }
            });
        }
    }
}

static IMP orig_OnWCToHongbaoCommonResponse2 = NULL;
static IMP orig_OnWCToHongbaoCommonResponse3 = NULL;
static IMP orig_DetailViewDidLoad = NULL;

@interface REDetailButtonHandler : NSObject
- (void)onDetailTap:(UIButton *)sender;
@end

@implementation REDetailButtonHandler

- (void)onDetailTap:(UIButton *)sender {
    id detailInfo = objc_getAssociatedObject(sender, "detailInfo");
    if (!detailInfo) return;

    NSInteger totalAmount = 0, totalNum = 0, recNum = 0, recAmount = 0;
    @try { totalAmount = [[detailInfo valueForKey:@"m_lTotalAmount"] integerValue]; } @catch (NSException *e) {}
    @try { totalNum = [[detailInfo valueForKey:@"m_lTotalNum"] integerValue]; } @catch (NSException *e) {}
    @try { recNum = [[detailInfo valueForKey:@"m_lRecNum"] integerValue]; } @catch (NSException *e) {}
    @try { recAmount = [[detailInfo valueForKey:@"m_lRecAmount"] integerValue]; } @catch (NSException *e) {}

    NSInteger remainAmount = totalAmount - recAmount;
    NSInteger remainNum = totalNum - recNum;

    NSString *msg = [NSString stringWithFormat:
        @"总金额: %.2f元\n已领金额: %.2f元\n剩余金额: %.2f元\n总个数: %ld个\n已领个数: %ld个\n剩余个数: %ld个",
        totalAmount/100.0, recAmount/100.0, remainAmount/100.0,
        (long)totalNum, (long)recNum, (long)remainNum];

    NSString *fullMsg = [NSString stringWithFormat:@"红包详情\n\n%@", msg];
    [MioAlertHelper showTipAlert:fullMsg buttonTitle:@"好的"];
}
@end

static REDetailButtonHandler *_detailHandler = nil;

// 仿 Mikoto：只在 DetailVC.viewDidLoad 中注入按钮，StoryVC 不处理
static void addDetailButtonIfNeeded(id self) {
    @try {
        id detailInfo = nil;
        id mData = [self valueForKey:@"m_data"];
        if (mData) {
            detailInfo = [mData valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
        }
        if (!detailInfo) {
            detailInfo = [self valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
        }
        if (!detailInfo) {
            WPLog(@"RedEnv", @"[DETAIL] no detailInfo on %@", NSStringFromClass(object_getClass(self)));
            return;
        }

        _detailHandler = [[REDetailButtonHandler alloc] init];

        UIView *selfView = [self valueForKey:@"view"];
        if (!selfView) return;

        UIButton *floatBtn = (UIButton *)[selfView viewWithTag:99992];
        if (floatBtn) return;

        CGFloat viewW = selfView.bounds.size.width;
        CGFloat viewH = selfView.bounds.size.height;
        if (viewW <= 0 || viewH <= 0) {
            CGSize screen = [UIScreen mainScreen].bounds.size;
            viewW = screen.width;
            viewH = screen.height;
        }
        floatBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        floatBtn.tag = 99992;
        floatBtn.frame = CGRectMake(viewW - 50, viewH / 2 - 22, 44, 44);
        floatBtn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
        floatBtn.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.6];
        floatBtn.layer.cornerRadius = 22;
        floatBtn.layer.masksToBounds = YES;
        floatBtn.titleLabel.font = [UIFont systemFontOfSize:12];
        floatBtn.titleLabel.textAlignment = NSTextAlignmentCenter;
        [floatBtn setTitle:@"详情" forState:UIControlStateNormal];
        [floatBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [floatBtn addTarget:_detailHandler action:@selector(onDetailTap:) forControlEvents:UIControlEventTouchUpInside];
        [selfView addSubview:floatBtn];
        [selfView bringSubviewToFront:floatBtn];
        objc_setAssociatedObject(floatBtn, "detailInfo", detailInfo, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        WPLog(@"RedEnv", @"[DETAIL] 页面按钮已添加");
    } @catch (NSException *e) {
        WPLog(@"RedEnv", @"[DETAIL] 异常: %@ - %@", e.name, e.reason);
    }
}

static void replaced_DetailViewDidLoad(id self, SEL _cmd) {
    if (orig_DetailViewDidLoad) {
        ((void (*)(id, SEL))orig_DetailViewDidLoad)(self, _cmd);
    }

    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    if (!config.redEnvelopeDetail) return;

    addDetailButtonIfNeeded(self);
}

static void replaced_OnWCToHongbaoCommonResponse2(id self, SEL _cmd, id res, id req) {
    if (orig_OnWCToHongbaoCommonResponse2) {
        ((void (*)(id, SEL, id, id))orig_OnWCToHongbaoCommonResponse2)(self, _cmd, res, req);
    }
    handleHongbaoResponse(res, req);
}

static void replaced_OnWCToHongbaoCommonResponse3(id self, SEL _cmd, id res, id req, id type) {
    if (orig_OnWCToHongbaoCommonResponse3) {
        ((void (*)(id, SEL, id, id, id))orig_OnWCToHongbaoCommonResponse3)(self, _cmd, res, req, type);
    }
    handleHongbaoResponse(res, req);
}

@implementation RedEnvelopHook

+ (void)install {
    WPLog(@"RedEnv", @"RedEnvelopHook install (v3 - 模块化架构)");

    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncAddMessage:), (IMP)replaced_onNewSyncAddMessage, &orig_onNewSyncAddMessage);
        WPLog(@"RedEnv", @"[+] onNewSyncAddMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(addMessageLibWithWrap:withVC:), (IMP)replaced_addMessageLibWithWrap, &orig_addMessageLibWithWrap);
        if (orig_addMessageLibWithWrap) {
            WPLog(@"RedEnv", @"[+] addMessageLibWithWrap:withVC: hooked");
        } else {
            MSHookMessageEx(CMessageMgrClass, @selector(addMessageLibWithWrap:WithVC:), (IMP)replaced_addMessageLibWithWrap, &orig_addMessageLibWithWrap);
            if (orig_addMessageLibWithWrap) {
                WPLog(@"RedEnv", @"[+] addMessageLibWithWrap:WithVC: hooked");
            }
        }

        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncNotAddDBMessage:), (IMP)replaced_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage);
        WPLog(@"RedEnv", @"[+] onNewSyncNotAddDBMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:), (IMP)replaced_AddMsgMsgWrap, &orig_AddMsgMsgWrap);
        WPLog(@"RedEnv", @"[+] AddMsg:MsgWrap: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:), (IMP)replaced_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap);
        WPLog(@"RedEnv", @"[+] AsyncOnAddMsg:MsgWrap: hooked");
    }

    Class LogicMgrClass = objc_getClass("WCRedEnvelopesLogicMgr");
    if (LogicMgrClass) {
        MSHookMessageEx(LogicMgrClass, @selector(OnWCToHongbaoCommonResponse:Request:), (IMP)replaced_OnWCToHongbaoCommonResponse2, &orig_OnWCToHongbaoCommonResponse2);
        WPLog(@"RedEnv", @"[+] OnWCToHongbaoCommonResponse:Request: hooked");

        MSHookMessageEx(LogicMgrClass, @selector(OnWCToHongbaoCommonResponse:Request:WithType:), (IMP)replaced_OnWCToHongbaoCommonResponse3, &orig_OnWCToHongbaoCommonResponse3);
        WPLog(@"RedEnv", @"[+] OnWCToHongbaoCommonResponse:Request:WithType: hooked");
    }

    Class DetailVCClass = objc_getClass("WCRedEnvelopesRedEnvelopesDetailViewController");
    if (DetailVCClass) {
        MSHookMessageEx(DetailVCClass, @selector(viewDidLoad), (IMP)replaced_DetailViewDidLoad, &orig_DetailViewDidLoad);
        WPLog(@"RedEnv", @"[+] WCRedEnvelopesRedEnvelopesDetailViewController viewDidLoad hooked");
    }

    WPLog(@"RedEnv", @"RedEnvelopHook install complete");
    
    // ★ 配置加载确认：验证群黑名单数据是否正确从 NSUserDefaults 恢复
    RedEnvelopConfig *config = [RedEnvelopConfig shared];
    WPLog(@"RedEnv", @"[CONFIG] groupFilterEnabled=%d filterList=%@ (count=%lu class=%@)",
          config.redEnvelopGroupFilterEnabled,
          config.redEnvelopGroupFilterList,
          (unsigned long)config.redEnvelopGroupFilterList.count,
          NSStringFromClass([config.redEnvelopGroupFilterList class]));

    if (config.redEnvelopGroupFilterList.count > 0) {
        id firstItem = config.redEnvelopGroupFilterList.firstObject;
        WPLog(@"RedEnv", @"[CONFIG] 过滤列表元素类型: %@, isNSString=%d",
              NSStringFromClass([firstItem class]),
              [firstItem isKindOfClass:[NSString class]]);
        
        // 验证所有元素的类型
        BOOL allString = YES;
        for (id item in config.redEnvelopGroupFilterList) {
            if (![item isKindOfClass:[NSString class]]) {
                allString = NO;
                break;
            }
        }
        WPLog(@"RedEnv", @"[CONFIG] 全部元素均为 NSString: %@", allString ? @"✅ YES" : @"❌ NO");
    }
}

@end

@implementation MioRedEnvelopParam
@end
