#import "RedEnvelopHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import "WeChatRedEnvelopParam.h"
#import "WeChatRedEnvelopTaskManager.h"
#import "../../Core/WeChatAlertHelper.h"
#import "../../Settings/Common/WPBorderLayer.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static void reLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"redenvelop.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static id getService(Class serviceClass) {
    Class MMServiceCenterClass = objc_getClass("MMServiceCenter");
    if (!MMServiceCenterClass) return nil;
    id center = ((id (*)(id, SEL, ...))objc_msgSend)(MMServiceCenterClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class, ...))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static NSInteger _statTotalCount = 0;
static NSInteger _statTotalAmount = 0;
static NSMutableSet *_countedSendIds = nil;

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
    PluginConfig *config = [PluginConfig shared];
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

    WeChatRedEnvelopTaskManager *taskMgr = [WeChatRedEnvelopTaskManager shared];

    if (msgId.length > 0) {
        if ([taskMgr isProcessed:msgId]) return;
        [taskMgr markProcessed:msgId];
    }

    id contactMgr = getService(objc_getClass("CContactMgr"));
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
    BOOL isGroupSender = isSender && toUsr && [toUsr containsString:@"chatroom"];
    BOOL isPersonalSender = isSender && !isGroupSender;

    BOOL shouldReceive = NO;
    if (isGroupReceiver) shouldReceive = YES;
    else if (isGroupSender && config.redEnvelopCatchMe) shouldReceive = YES;
    else if (!isGroupReceiver && !isSender && config.personalRedEnvelopEnable) shouldReceive = YES;
    else if (isPersonalSender && config.redEnvelopCatchMe) shouldReceive = YES;

    reLog([NSString stringWithFormat:@"[STAT] from=%@ to=%@ self=%@ sender=%d groupRecv=%d groupSend=%d personalSend=%d catch=%d should=%d",
          fromUsr ?: @"-", toUsr ?: @"-", selfUserName ?: @"-", isSender, isGroupReceiver, isGroupSender, isPersonalSender, config.redEnvelopCatchMe, shouldReceive]);

    if (config.redEnvelopBlackList.count > 0) {
        for (NSString *blackItem in config.redEnvelopBlackList) {
            if ([fromUsr containsString:blackItem]) { shouldReceive = NO; break; }
        }
    }

    if (config.redEnvelopGroupFilterEnabled && config.redEnvelopGroupFilterList.count > 0 && isGroupReceiver) {
        for (NSString *groupItem in config.redEnvelopGroupFilterList) {
            if ([fromUsr containsString:groupItem] || [toUsr containsString:groupItem]) {
                shouldReceive = NO;
                reLog([NSString stringWithFormat:@"[FILTER] 群过滤命中: %@ 匹配 %@", fromUsr, groupItem]);
                break;
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
        reLog([NSString stringWithFormat:@"[WARN] 无法解析nativeUrl: %@", [nativeUrl substringToIndex:MIN(nativeUrl.length, 100)]]);
        return;
    }

    WeChatRedEnvelopParam *param = [[WeChatRedEnvelopParam alloc] init];
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
                reLog([NSString stringWithFormat:@"[FILTER] 关键词过滤命中: %@", trimmed]);
                break;
            }
        }
    }

    if (!shouldReceive) return;

    reLog([NSString stringWithFormat:@"[HB] 红包参数: sendId=%@ sign=%@ channel=%@ msgType=%@ session=%@ isGroupSender=%d",
          param.sendId, [param.sign substringToIndex:MIN(param.sign.length, 16)], param.channelId, param.msgType, param.sessionUserName, param.isGroupSender]);

    if (!param.sendId.length) {
        reLog(@"[WARN] sendId为空，跳过");
        return;
    }

    [taskMgr savePendingParam:param];
    reLog([NSString stringWithFormat:@"[SAVE] 已保存 pending param: sendId=%@", param.sendId]);

    [taskMgr startBackgroundKeepAlive];

    int delay = (int)config.redEnvelopDelay;
    reLog([NSString stringWithFormat:@"[DISPATCH] 准备查询: sendId=%@ delay=%d", param.sendId, delay]);

    [taskMgr addTaskWithParam:param delay:delay];
}

static void handleHongbaoResponse(id res, id req) {
    PluginConfig *config = [PluginConfig shared];
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
                reLog([NSString stringWithFormat:@"[STAT] 抢到红包: %.2f元 发送人=%@ 祝福=%@ 总额=%.2f/%ld个 累计:%ld个/%.2f元",
                      amount / 100.0, nickName, wishing,
                      totalAmountVal / 100.0, (long)totalNum,
                      (long)_statTotalCount, _statTotalAmount / 100.0]);
            } else if (receiveStatus == 2) {
                reLog(@"[STAT] 红包已被领取");
            } else if (hbStatus == 4) {
                reLog(@"[STAT] 红包已过期");
            } else {
                reLog([NSString stringWithFormat:@"[STAT] 红包结果: receiveStatus=%ld hbStatus=%ld keys=%@",
                      (long)receiveStatus, (long)hbStatus, [responseDict allKeys]]);
            }
        }
        return;
    }

    reLog(@"[RESP] 收到查询响应(cgiCmdid=3)，开始处理");

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
    WeChatRedEnvelopParam *param = nil;
    WeChatRedEnvelopTaskManager *taskMgr = [WeChatRedEnvelopTaskManager shared];

    if (sendId.length > 0) {
        param = [taskMgr popPendingParamBySendId:sendId];
    }

    if (!param && requestSendId.length > 0) {
        param = [taskMgr popPendingParamBySendId:requestSendId];
        if (param) {
            reLog([NSString stringWithFormat:@"[MATCH] 通过requestSendId匹配: %@ -> %@", requestSendId, param.sendId]);
        }
    }

    if (!param && requestSign.length > 0) {
        param = [taskMgr findPendingParamBySign:requestSign];
        if (param) {
            reLog([NSString stringWithFormat:@"[MATCH] 通过sign匹配: %@", [requestSign substringToIndex:MIN(requestSign.length, 16)]]);
        }
    }

    if (!param) {
        reLog([NSString stringWithFormat:@"[WARN] 未找到待处理红包: sendId=%@ reqSendId=%@ sign=%@",
              sendId, requestSendId ?: @"-", requestSign.length > 0 ? [requestSign substringToIndex:MIN(requestSign.length, 16)] : @"-"]);
        return;
    }

    BOOL signMatch = requestSign.length > 0 ? [requestSign isEqualToString:param.sign] : YES;
    BOOL shouldOpen = config.autoRedEnvelop;
    if (!param.isGroupSender && !signMatch) shouldOpen = NO;
    reLog([NSString stringWithFormat:@"[CHECK] signMatch=%d shouldOpen=%d isGroupSender=%d sendId=%@", signMatch, shouldOpen, param.isGroupSender, param.sendId]);

    if (!shouldOpen) return;

    reLog([NSString stringWithFormat:@"[OPEN] 打开红包 sendId=%@ timingId=%@", param.sendId, timingIdentifier]);

    id logicMgr = getService(objc_getClass("WCRedEnvelopesLogicMgr"));
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
        reLog([NSString stringWithFormat:@"[OK] 红包已打开: sendId=%@", param.sendId]);
    } else {
        SEL openIMSel = NSSelectorFromString(@"OpenOpenIMRedEnvelopesRequest:");
        if ([logicMgr respondsToSelector:openIMSel]) {
            ((void (*)(id, SEL, NSDictionary *, ...))objc_msgSend)(logicMgr, openIMSel, params);
            reLog([NSString stringWithFormat:@"[OK] IM红包已打开: sendId=%@", param.sendId]);
        }
    }

    if (config.redEnvelopAutoReply && config.redEnvelopAutoReplyStr.length > 0) {
        BOOL isGroup = [param.sessionUserName containsString:@"@chatroom"];
        if (!isGroup || config.redEnvelopAutoReplyInGroup) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                reLog(@"[REPLY] dispatch_after 触发，开始执行");
                @try {
                    id msgMgr = getService(objc_getClass("CMessageMgr"));
                    if (!msgMgr) {
                        reLog(@"[REPLY] CMessageMgr 未找到，跳过");
                        return;
                    }

                    Class msgWrapClass = objc_getClass("CMessageWrap");
                    if (!msgWrapClass) {
                        reLog(@"[REPLY] CMessageWrap class not found");
                        return;
                    }

                    id msg = [[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)];
                    if (msg) {
                        @try {
                            [msg setValue:config.redEnvelopAutoReplyStr forKey:@"m_nsContent"];
                            [msg setValue:param.sessionUserName forKey:@"m_nsToUsr"];
                        } @catch (NSException *e) {
                            reLog([NSString stringWithFormat:@"[REPLY] 设置属性异常: %@ - %@", e.name, e.reason]);
                        }

                        @try {
                            SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                            [msgMgr performSelector:addMsgSel withObject:param.sessionUserName withObject:msg];
#pragma clang diagnostic pop
                            reLog([NSString stringWithFormat:@"[REPLY] 自动回复已发送: %@ -> %@", config.redEnvelopAutoReplyStr, param.sessionUserName]);
                        } @catch (NSException *e) {
                            reLog([NSString stringWithFormat:@"[REPLY] AddMsg异常: %@ - %@", e.name, e.reason]);
                        }
                    }
                } @catch (NSException *e) {
                    reLog([NSString stringWithFormat:@"[WARN] 自动回复异常: %@ - %@", e.name, e.reason]);
                }
            });
        }
    }
}

static IMP orig_OnWCToHongbaoCommonResponse2 = NULL;
static IMP orig_OnWCToHongbaoCommonResponse3 = NULL;
static IMP orig_DetailViewWillAppear = NULL;
static IMP orig_StoryViewWillAppear = NULL;

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
    [WeChatAlertHelper showTipAlert:fullMsg buttonTitle:@"好的"];
}
@end

static REDetailButtonHandler *_detailHandler = nil;

// 仿 Mikoto：在 viewDidLoad 中直接从 VC ivar 读取数据并添加按钮
static void addDetailButtonIfNeeded(id self) {
    @try {
        Class vcClass = object_getClass(self);
        reLog([NSString stringWithFormat:@"[DETAIL] ====== enter addDetailButtonIfNeeded self=<%@:%p> ======",
               NSStringFromClass(vcClass), self]);

        // Step 1: 读取 detailInfo
        id detailInfo = nil;
        id mData = [self valueForKey:@"m_data"];
        reLog([NSString stringWithFormat:@"[DETAIL] step1 m_data=%@", mData ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([mData class]), mData] : @"nil"]);
        if (mData) {
            detailInfo = [mData valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
            reLog([NSString stringWithFormat:@"[DETAIL] step1 m_data.m_oWCRedEnvelopesDetailInfo=%@",
                   detailInfo ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([detailInfo class]), detailInfo] : @"nil"]);
        }
        if (!detailInfo) {
            detailInfo = [self valueForKey:@"m_oWCRedEnvelopesDetailInfo"];
            reLog([NSString stringWithFormat:@"[DETAIL] step1 self.m_oWCRedEnvelopesDetailInfo=%@",
                   detailInfo ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([detailInfo class]), detailInfo] : @"nil"]);
        }
        if (!detailInfo) {
            reLog([NSString stringWithFormat:@"[DETAIL] step1 FAIL: no detailInfo on %@, dump ivars:", NSStringFromClass(vcClass)]);
            unsigned int count = 0;
            Ivar *ivars = class_copyIvarList([self class], &count);
            for (unsigned int i = 0; i < count && i < 20; i++) {
                const char *name = ivar_getName(ivars[i]);
                const char *type = ivar_getTypeEncoding(ivars[i]);
                id val = nil;
                @try { val = [self valueForKey:@(name)]; } @catch (NSException *e) {}
                reLog([NSString stringWithFormat:@"[DETAIL]   %s %s = %@", name, type,
                       val ? [NSString stringWithFormat:@"<%@: %p>", NSStringFromClass([val class]), val] : @"nil"]);
            }
            free(ivars);
            reLog(@"[DETAIL] ====== exit(no detailInfo) ======");
            return;
        }
        reLog([NSString stringWithFormat:@"[DETAIL] step1 OK detailInfo=<%@:%p>", NSStringFromClass([detailInfo class]), detailInfo]);

        // Step 2: 获取 handler
        if (!_detailHandler) {
            _detailHandler = [[REDetailButtonHandler alloc] init];
            reLog([NSString stringWithFormat:@"[DETAIL] step2 handler created: %p", _detailHandler]);
        }

        // Step 3: 获取 self.view
        UIView *selfView = [self valueForKey:@"view"];
        if (!selfView) {
            reLog(@"[DETAIL] step3 FAIL: self.view is nil");
            reLog(@"[DETAIL] ====== exit(no view) ======");
            return;
        }
        reLog([NSString stringWithFormat:@"[DETAIL] step3 selfView=<%@:%p> frame=%@ bounds=%@ window=%@ superview=<%@:%p> alpha=%.2f hidden=%d clipsToBounds=%d",
               NSStringFromClass([selfView class]), selfView,
               NSStringFromCGRect(selfView.frame), NSStringFromCGRect(selfView.bounds),
               selfView.window ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([selfView.window class]), selfView.window] : @"nil",
               selfView.superview ? NSStringFromClass([selfView.superview class]) : @"nil", selfView.superview,
               selfView.alpha, selfView.hidden, selfView.clipsToBounds]);

        // Step 4: 检查是否已有按钮
        UIButton *existBtn = (UIButton *)[selfView viewWithTag:99992];
        if (existBtn) {
            reLog([NSString stringWithFormat:@"[DETAIL] step4 SKIP: button already exists tag=99992 frame=%@ hidden=%d alpha=%.2f window=%@",
                   NSStringFromCGRect(existBtn.frame), existBtn.hidden, existBtn.alpha,
                   existBtn.window ? @"YES" : @"nil"]);
            reLog(@"[DETAIL] ====== exit(already exists) ======");
            return;
        }
        reLog(@"[DETAIL] step4 no existing button with tag 99992");

        // Step 5: 计算按钮位置
        CGFloat viewW = selfView.bounds.size.width;
        CGFloat viewH = selfView.bounds.size.height;
        BOOL boundsZero = (viewW <= 0 || viewH <= 0);
        if (boundsZero) {
            CGSize screen = [UIScreen mainScreen].bounds.size;
            viewW = screen.width;
            viewH = screen.height;
            reLog([NSString stringWithFormat:@"[DETAIL] step5 bounds ZERO, fallback to screen: %.0fx%.0f", viewW, viewH]);
        }
        CGFloat btnX = viewW - 50;
        CGFloat btnY = viewH / 2 - 22;
        reLog([NSString stringWithFormat:@"[DETAIL] step5 computed frame: (%.0f, %.0f, 44, 44) [boundsZero=%d viewBounds=%@]",
               btnX, btnY, boundsZero, NSStringFromCGRect(selfView.bounds)]);

        // Step 6: 创建按钮
        UIButton *floatBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        floatBtn.tag = 99992;
        floatBtn.frame = CGRectMake(btnX, btnY, 44, 44);
        floatBtn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
        floatBtn.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.6];
        floatBtn.layer.cornerRadius = 22;
        floatBtn.layer.masksToBounds = YES;
        floatBtn.titleLabel.font = [UIFont systemFontOfSize:12];
        floatBtn.titleLabel.textAlignment = NSTextAlignmentCenter;
        [floatBtn setTitle:@"详情" forState:UIControlStateNormal];
        [floatBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [floatBtn addTarget:_detailHandler action:@selector(onDetailTap:) forControlEvents:UIControlEventTouchUpInside];
        reLog(@"[DETAIL] step6 button created");

        // Step 7: 添加到视图
        reLog([NSString stringWithFormat:@"[DETAIL] step7 before addSubview: subviews.count=%lu", (unsigned long)selfView.subviews.count]);
        [selfView addSubview:floatBtn];
        [selfView bringSubviewToFront:floatBtn];
        objc_setAssociatedObject(floatBtn, "detailInfo", detailInfo, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        // Step 8: 验证按钮状态
        reLog([NSString stringWithFormat:@"[DETAIL] step8 verify: btn.frame=%@ btn.bounds=%@ btn.superview=%@ btn.window=%@ btn.hidden=%d btn.alpha=%.2f btn.userInteractionEnabled=%d btn.opaque=%d",
               NSStringFromCGRect(floatBtn.frame), NSStringFromCGRect(floatBtn.bounds),
               floatBtn.superview ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([floatBtn.superview class]), floatBtn.superview] : @"nil",
               floatBtn.window ? [NSString stringWithFormat:@"<%@:%p>", NSStringFromClass([floatBtn.window class]), floatBtn.window] : @"nil",
               floatBtn.hidden, floatBtn.alpha, floatBtn.userInteractionEnabled, floatBtn.opaque]);

        // Step 9: 打印视图层级（按钮向上溯源）
        UIView *v = floatBtn;
        int depth = 0;
        NSMutableString *chain = [NSMutableString string];
        while (v && depth < 10) {
            NSString *indent = [@"" stringByPaddingToLength:depth * 2 withString:@" " startingAtIndex:0];
            [chain appendFormat:@"%@[%d] <%@:%p> frame=%@ hidden=%d alpha=%.2f userInteraction=%d\n",
             indent, depth, NSStringFromClass([v class]), v,
             NSStringFromCGRect(v.frame), v.hidden, v.alpha, v.userInteractionEnabled];
            v = v.superview;
            depth++;
        }
        reLog([NSString stringWithFormat:@"[DETAIL] step9 view chain:\n%@", chain]);

        reLog([NSString stringWithFormat:@"[DETAIL] ====== SUCCESS: button added to %@ ======", NSStringFromClass(vcClass)]);
    } @catch (NSException *e) {
        reLog([NSString stringWithFormat:@"[DETAIL] EXCEPTION: %@ - %@\n%@", e.name, e.reason,
               [e.callStackSymbols componentsJoinedByString:@"\n"]]);
    }
}

static void replaced_DetailViewWillAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_DetailViewWillAppear) {
        ((void (*)(id, SEL, BOOL))orig_DetailViewWillAppear)(self, _cmd, animated);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.redEnvelopeDetail) return;

    addDetailButtonIfNeeded(self);
}

static void replaced_StoryViewWillAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_StoryViewWillAppear) {
        ((void (*)(id, SEL, BOOL))orig_StoryViewWillAppear)(self, _cmd, animated);
    }

    PluginConfig *config = [PluginConfig shared];
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
    reLog(@"RedEnvelopHook install (v3 - 模块化架构)");

    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        IMP imp1 = [HookEngine swizzleMethod:NSSelectorFromString(@"onNewSyncAddMessage:")
                                         inClass:CMessageMgrClass
                                         withIMP:(IMP)replaced_onNewSyncAddMessage];
        if (imp1) {
            orig_onNewSyncAddMessage = imp1;
            reLog(@"[+] onNewSyncAddMessage: hooked");
        }

        IMP imp1b = [HookEngine swizzleMethod:NSSelectorFromString(@"addMessageLibWithWrap:withVC:")
                                          inClass:CMessageMgrClass
                                          withIMP:(IMP)replaced_addMessageLibWithWrap];
        if (imp1b) {
            orig_addMessageLibWithWrap = imp1b;
            reLog(@"[+] addMessageLibWithWrap:withVC: hooked");
        } else {
            IMP imp1b2 = [HookEngine swizzleMethod:NSSelectorFromString(@"addMessageLibWithWrap:WithVC:")
                                              inClass:CMessageMgrClass
                                              withIMP:(IMP)replaced_addMessageLibWithWrap];
            if (imp1b2) {
                orig_addMessageLibWithWrap = imp1b2;
                reLog(@"[+] addMessageLibWithWrap:WithVC: hooked");
            }
        }

        IMP imp1c = [HookEngine swizzleMethod:NSSelectorFromString(@"onNewSyncNotAddDBMessage:")
                                          inClass:CMessageMgrClass
                                          withIMP:(IMP)replaced_onNewSyncNotAddDBMessage];
        if (imp1c) {
            orig_onNewSyncNotAddDBMessage = imp1c;
            reLog(@"[+] onNewSyncNotAddDBMessage: hooked");
        }

        IMP imp1d = [HookEngine swizzleMethod:NSSelectorFromString(@"AddMsg:MsgWrap:")
                                          inClass:CMessageMgrClass
                                          withIMP:(IMP)replaced_AddMsgMsgWrap];
        if (imp1d) {
            orig_AddMsgMsgWrap = imp1d;
            reLog(@"[+] AddMsg:MsgWrap: hooked");
        }

        IMP imp1e = [HookEngine swizzleMethod:NSSelectorFromString(@"AsyncOnAddMsg:MsgWrap:")
                                          inClass:CMessageMgrClass
                                          withIMP:(IMP)replaced_AsyncOnAddMsgMsgWrap];
        if (imp1e) {
            orig_AsyncOnAddMsgMsgWrap = imp1e;
            reLog(@"[+] AsyncOnAddMsg:MsgWrap: hooked");
        }
    }

    Class LogicMgrClass = objc_getClass("WCRedEnvelopesLogicMgr");
    if (LogicMgrClass) {
        IMP imp2 = [HookEngine swizzleMethod:NSSelectorFromString(@"OnWCToHongbaoCommonResponse:Request:")
                                         inClass:LogicMgrClass
                                         withIMP:(IMP)replaced_OnWCToHongbaoCommonResponse2];
        if (imp2) {
            orig_OnWCToHongbaoCommonResponse2 = imp2;
            reLog(@"[+] OnWCToHongbaoCommonResponse:Request: hooked");
        }

        IMP imp3 = [HookEngine swizzleMethod:NSSelectorFromString(@"OnWCToHongbaoCommonResponse:Request:WithType:")
                                         inClass:LogicMgrClass
                                         withIMP:(IMP)replaced_OnWCToHongbaoCommonResponse3];
        if (imp3) {
            orig_OnWCToHongbaoCommonResponse3 = imp3;
            reLog(@"[+] OnWCToHongbaoCommonResponse:Request:WithType: hooked");
        }
    }

    Class DetailVCClass = objc_getClass("WCRedEnvelopesRedEnvelopesDetailViewController");
    if (DetailVCClass) {
        IMP imp4 = [HookEngine swizzleMethod:NSSelectorFromString(@"viewWillAppear:")
                                        inClass:DetailVCClass
                                        withIMP:(IMP)replaced_DetailViewWillAppear];
        if (imp4) {
            orig_DetailViewWillAppear = imp4;
            reLog(@"[+] WCRedEnvelopesRedEnvelopesDetailViewController viewWillAppear: hooked");
        }
    }

    Class StoryVCClass = objc_getClass("WCRedEnvelopesStoryViewController");
    if (StoryVCClass) {
        IMP imp5 = [HookEngine swizzleMethod:NSSelectorFromString(@"viewWillAppear:")
                                        inClass:StoryVCClass
                                        withIMP:(IMP)replaced_StoryViewWillAppear];
        if (imp5) {
            orig_StoryViewWillAppear = imp5;
            reLog(@"[+] WCRedEnvelopesStoryViewController viewWillAppear: hooked");
        }
    }

    reLog(@"RedEnvelopHook install complete");
}

@end
