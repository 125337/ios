#import "AutoTransferHook.h"
#import "AutoTransferConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <substrate.h>

static NSMutableSet *_processedTransferIds = nil;
static NSMutableDictionary *_pendingTransferData = nil;

static NSString *extractXMLValue(NSString *content, NSString *tagName) {
    NSString *pattern = [NSString stringWithFormat:@"<%@>(?:<!\\[CDATA\\[)?(.*?)(?:\\]\\]>)?</%@>", tagName, tagName];
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:0 error:nil];
    NSTextCheckingResult *match = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match && [match numberOfRanges] > 1) {
        return [content substringWithRange:[match rangeAtIndex:1]];
    }
    NSString *simplePattern = [NSString stringWithFormat:@"<%@>(.*?)</%@>", tagName, tagName];
    NSRegularExpression *simpleRegex = [NSRegularExpression regularExpressionWithPattern:simplePattern options:0 error:nil];
    NSTextCheckingResult *simpleMatch = [simpleRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (simpleMatch && [simpleMatch numberOfRanges] > 1) {
        return [content substringWithRange:[simpleMatch rangeAtIndex:1]];
    }
    return nil;
}

static void sendAutoReply(NSString *sessionUserName, NSString *replyText) {
    // 发送逻辑统一走 ServiceHelper（与红包统计同步共用）
    WXSendTextMessage(replyText, sessionUserName);
}

static void pushLocalNotification(NSString *title, NSString *message) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            if (@available(iOS 10.0, *)) {
                UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
                UNMutableNotificationContent *content = [[UNMutableNotificationContent alloc] init];
                content.title = title ?: @"自动收款";
                content.body = message ?: @"转账已自动确认收款";
                content.sound = [UNNotificationSound defaultSound];
                UNTimeIntervalNotificationTrigger *trigger = [UNTimeIntervalNotificationTrigger triggerWithTimeInterval:0.5 repeats:NO];
                UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:@"AutoTransfer" content:content trigger:trigger];
                [center addNotificationRequest:request withCompletionHandler:nil];
            }
        } @catch (NSException *e) {}
    });
}

#pragma mark - 定额自动拉群（WCR 同款 FixedInvite）

/// 微信原生拉人进群：CGroupMgr InviteGroupMember/AddGroupMember（与 WCR 踢人用的 DeleteGroupMember:withMemberList:scene: 同族接口）
static BOOL mioInviteUserToChatRoom(NSString *userName, NSString *roomId) {
    if (!userName.length || ![roomId hasSuffix:@"@chatroom"]) return NO;
    id grpMgr = WXGetService(objc_getClass("CGroupMgr"));
    if (!grpMgr) {
        WPLog(@"AutoTransfer", @"[FixedInvite] [ERROR] CGroupMgr 服务不可用 (room=%@ user=%@)", roomId, userName);
        return NO;
    }
    NSArray<NSString *> *candidates = @[
        @"InviteGroupMember:withMemberList:scene:",
        @"AddGroupMember:withMemberList:scene:",
    ];
    for (NSString *selName in candidates) {
        SEL sel = NSSelectorFromString(selName);
        if (![grpMgr respondsToSelector:sel]) continue;
        @try {
            ((void (*)(id, SEL, id, id, unsigned long))objc_msgSend)(grpMgr, sel, roomId, @[userName], (unsigned long)1);
            WPLog(@"AutoTransfer", @"[FixedInvite] 已调用 %@ room=%@ user=%@", selName, roomId, userName);
            return YES;
        } @catch (NSException *e) {
            WPLog(@"AutoTransfer", @"[FixedInvite] [ERROR] %@ 异常: %@", selName, e);
            return NO;
        }
    }
    WPLog(@"AutoTransfer", @"[FixedInvite] [ERROR] CGroupMgr 无可用拉人接口 (room=%@ user=%@)", roomId, userName);
    return NO;
}

/// 单笔转账金额等于档位金额 → 把转账人拉进对应群
static void processFixedInvite(long long feeAmount, NSString *fromUsr, BOOL isGroup) {
    if (feeAmount <= 0 || !fromUsr.length) return;
    if (isGroup) {
        WPLog(@"AutoTransfer", @"[FixedInvite] 群聊转账不触发拉群 (fee=%lld分)", feeAmount);
        return;
    }
    id selfContact = WXGetSelfContact();
    NSString *selfName = WXSafeStringGet(selfContact, @"m_nsUsrName");
    if (selfName.length && [fromUsr isEqualToString:selfName]) return;

    AutoTransferConfig *config = [AutoTransferConfig shared];
    NSArray<NSDictionary *> *rules = config.autoTransferFixedInviteRules;
    if (rules.count == 0) return;

    for (NSDictionary *rule in rules) {
        double amountYuan = [rule[@"amount"] doubleValue];
        NSString *room = rule[@"inviteChatRoom"];
        long long ruleCents = (long long)(amountYuan * 100.0 + 0.5);
        if (ruleCents <= 0 || ruleCents != feeAmount) continue;
        if (![room isKindOfClass:[NSString class]] || ![room hasSuffix:@"@chatroom"]) continue;

        WPLog(@"AutoTransfer", @"[FixedInvite] 定额命中: %.2f元 -> %@ (from=%@)", feeAmount / 100.0, room, fromUsr);
        BOOL ok = mioInviteUserToChatRoom(fromUsr, room);
        if (ok) {
            NSString *nick = WXDisplayNameForWxid(fromUsr);
            pushLocalNotification(@"定额拉群",
                [NSString stringWithFormat:@"已将 %@ 拉进群聊（%.2f元）", nick, feeAmount / 100.0]);
        }
        break;  // 单笔转账最多命中一档
    }
}

static void processTransferMessage(id wrap) {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    if (!config.autoConfirmTransfer && !config.autoTransferFixedInviteEnabled) return;
    if (!wrap) return;

    unsigned int msgType = 0;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")])
        msgType = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
    if (msgType != 49) return;

    NSString *transferID = nil;
    NSString *invalidTimeStr = nil;
    NSString *totalFee = nil;
    NSString *feedesc = nil;
    NSString *payMemo = nil;
    unsigned int receiveStatus = 0;

    id payInfoItem = [wrap valueForKey:@"m_oWCPayInfoItem"];
    if (payInfoItem) {
        WPLog(@"AutoTransfer", @"[INFO] m_oWCPayInfoItem可用(旧版本)");
        transferID = [payInfoItem valueForKey:@"m_nsTransferID"];
        invalidTimeStr = [NSString stringWithFormat:@"%llu", ((unsigned long long (*)(id, SEL, ...))objc_msgSend)(payInfoItem, NSSelectorFromString(@"m_uiInvalidTime"))];
        totalFee = [payInfoItem valueForKey:@"m_total_fee"];
        payMemo = [payInfoItem valueForKey:@"m_payMemo"];
        if ([payInfoItem respondsToSelector:NSSelectorFromString(@"m_c2cPayReceiveStatus")])
            receiveStatus = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(payInfoItem, NSSelectorFromString(@"m_c2cPayReceiveStatus"));
    }

    NSString *content = [wrap valueForKey:@"m_nsContent"];
    if (!content.length) return;

    if (!transferID.length) {
        if ([content containsString:@"<transferid>"] && [content containsString:@"<wcpayinfo>"]) {
            WPLog(@"AutoTransfer", @"[INFO] 使用XML解析(8.0.60+)");
            transferID = extractXMLValue(content, @"transferid");
            invalidTimeStr = extractXMLValue(content, @"invalidtime");
            totalFee = extractXMLValue(content, @"total_fee");
            feedesc = extractXMLValue(content, @"feedesc");
            payMemo = extractXMLValue(content, @"pay_memo");
        } else {
            return;
        }
    }

    if (!transferID.length) return;

    if (!_processedTransferIds) _processedTransferIds = [NSMutableSet set];
    @synchronized (_processedTransferIds) {
        if ([_processedTransferIds containsObject:transferID]) return;
        [_processedTransferIds addObject:transferID];
    }

    if (payInfoItem && receiveStatus != 0) {
        WPLog(@"AutoTransfer", @"[SKIP] 转账已处理(状态码): %u", receiveStatus);
        return;
    }
    if (feedesc.length > 0) {
        if ([feedesc containsString:@"已收款"] || [feedesc containsString:@"已确认"] || [feedesc containsString:@"已退回"]) {
            WPLog(@"AutoTransfer", @"[SKIP] 转账已处理(feedesc): %@", feedesc);
            return;
        }
    }

    NSString *fromUsr = [wrap valueForKey:@"m_nsFromUsr"];
    NSString *toUsr = [wrap valueForKey:@"m_nsToUsr"];
    BOOL isGroup = [fromUsr containsString:@"@chatroom"] || [toUsr containsString:@"@chatroom"];
    NSString *sessionUserName = isGroup ? fromUsr : fromUsr;

    // 私聊/群聊开关只约束自动收款；定额拉群独立生效
    if (config.autoConfirmTransfer) {
        if (isGroup && !config.autoConfirmTransferGroup) return;
        if (!isGroup && !config.autoConfirmTransferPersonal) return;
    }

    long long feeAmount = 0;

    if (payInfoItem && [payInfoItem respondsToSelector:NSSelectorFromString(@"m_uiTransferAmount")]) {
        unsigned int transferAmount = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(
            payInfoItem, NSSelectorFromString(@"m_uiTransferAmount"));
        if (transferAmount > 0) {
            feeAmount = (long long)transferAmount;
            WPLog(@"AutoTransfer", @"[FEE] 来源=m_uiTransferAmount, 值=%u分=%.2f元", transferAmount, feeAmount / 100.0);
        }
    }

    if (feeAmount == 0 && payInfoItem) {
        @try {
            NSString *totalFeeProp = [payInfoItem valueForKey:@"m_total_fee"];
            if (totalFeeProp.length > 0) {
                feeAmount = (long long)([totalFeeProp doubleValue] * 100);
                WPLog(@"AutoTransfer", @"[FEE] 来源=m_total_fee, 值=%@=%.2f元", totalFeeProp, feeAmount / 100.0);
            }
        } @catch (NSException *e) {}
    }

    if (feeAmount == 0 && totalFee.length > 0) {
        feeAmount = (long long)([totalFee doubleValue] * 100);
        WPLog(@"AutoTransfer", @"[FEE] 来源=XML total_fee, 值=%@=%.2f元", totalFee, feeAmount / 100.0);
    }

    if (feeAmount == 0 && feedesc.length > 0) {
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"[￥¥]([\\d.]+)"
            options:0 error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:feedesc
            options:0 range:NSMakeRange(0, feedesc.length)];
        if (match && [match numberOfRanges] > 1) {
            NSString *feeStr = [feedesc substringWithRange:[match rangeAtIndex:1]];
            feeAmount = (long long)([feeStr doubleValue] * 100);
            WPLog(@"AutoTransfer", @"[FEE] 来源=feedesc(￥格式), 值=%@=%.2f元", feeStr, feeAmount / 100.0);
        }
    }

    if (feeAmount == 0 && feedesc.length > 0) {
        NSRegularExpression *regex = [NSRegularExpression
            regularExpressionWithPattern:@"([\\d.]+)元"
            options:0 error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:feedesc
            options:0 range:NSMakeRange(0, feedesc.length)];
        if (match && [match numberOfRanges] > 1) {
            NSString *feeStr = [feedesc substringWithRange:[match rangeAtIndex:1]];
            feeAmount = (long long)([feeStr doubleValue] * 100);
            WPLog(@"AutoTransfer", @"[FEE] 来源=feedesc(元格式), 值=%@=%.2f元", feeStr, feeAmount / 100.0);
        }
    }

    WPLog(@"AutoTransfer", @"[FEE] 最终金额: %lld分=%.2f元", feeAmount, feeAmount / 100.0);

    // ★ 定额自动拉群（WCR 同款）：金额命中档位 → 拉转账人进指定群
    // 不受自动收款开关/私聊群聊开关/金额上限约束，只看 fixedInviteEnabled 与规则表
    if (config.autoTransferFixedInviteEnabled) {
        processFixedInvite(feeAmount, fromUsr, isGroup);
    }

    if (config.autoConfirmTransfer && config.autoConfirmTransferMaxAmount > 0 && feeAmount > config.autoConfirmTransferMaxAmount) {
        WPLog(@"AutoTransfer", @"[SKIP] 超过金额上限: %lld > %lld", feeAmount, config.autoConfirmTransferMaxAmount);
        return;
    }

    unsigned long long invalidTime = (unsigned long long)[invalidTimeStr longLongValue];

    WPLogDebug(@"AutoTransfer", @"检测到转账: transferID=%@ from=%@ fee=%lld memo=%@ isGroup=%d",
        transferID, fromUsr, feeAmount, payMemo, isGroup);

    WPLogDebug(@"AutoTransfer", @"[DEBUG] XML字段: total_fee=%@ feedesc=%@ paysubtype=%@ bubbletype=%@ invalidtime=%@",
        extractXMLValue(content, @"total_fee") ?: @"(nil)",
        extractXMLValue(content, @"feedesc") ?: @"(nil)",
        extractXMLValue(content, @"paysubtype") ?: @"(nil)",
        extractXMLValue(content, @"bubbletype") ?: @"(nil)",
        extractXMLValue(content, @"invalidtime") ?: @"(nil)");

    WPLogDebug(@"AutoTransfer", @"[DEBUG] ObjC属性: payInfoItem=%@ m_uiTransferAmount=%@ m_total_fee=%@",
        payInfoItem ? @"可用" : @"nil",
        payInfoItem ? [payInfoItem valueForKey:@"m_uiTransferAmount"] ?: @"(nil)" : @"(N/A)",
        payInfoItem ? [payInfoItem valueForKey:@"m_total_fee"] ?: @"(nil)" : @"(N/A)");


    WPLog(@"AutoTransfer", @"[DEBUG] 完整XML: %@", content);

    if (!_pendingTransferData) _pendingTransferData = [NSMutableDictionary dictionary];
    NSDictionary *transferData = @{
        @"transferID": transferID ?: @"",
        @"fromUsr": fromUsr ?: @"",
        @"invalidTime": @(invalidTime),
        @"isGroup": @(isGroup),
        @"feeAmount": @(feeAmount),
        @"sessionUserName": sessionUserName ?: @""
    };
    @synchronized (_pendingTransferData) {
        _pendingTransferData[transferID] = transferData;
    }

    NSUInteger delay = config.autoConfirmTransferDelay;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            if (!config.autoConfirmTransfer) return;
            WPLog(@"AutoTransfer", @"[CONFIRM] 使用方案A: 直接调用ConfirmTransferMoney:");
            Class requestClass = objc_getClass("WCPayConfirmTransferRequest");
            if (!requestClass) {
                WPLog(@"AutoTransfer", @"[ERROR] WCPayConfirmTransferRequest class not found");
                return;
            }
            id request = [[requestClass alloc] init];
            [request setValue:transferID forKey:@"m_nsTransferID"];
            [request setValue:fromUsr forKey:@"m_nsFromUserName"];
            [request setValue:@(invalidTime) forKey:@"m_uiInvalidTime"];
            [request setValue:@((unsigned long long)(isGroup ? 1 : 0)) forKey:@"groupType"];
            if (isGroup) {
                [request setValue:fromUsr forKey:@"group_username"];
            }
            id payLogicMgr = WXGetService(objc_getClass("WCPayLogicMgr"));
            if (!payLogicMgr) {
                WPLog(@"AutoTransfer", @"[ERROR] WCPayLogicMgr service not found");
                return;
            }
            SEL confirmSelA = NSSelectorFromString(@"ConfirmTransferMoney:");
            if ([payLogicMgr respondsToSelector:confirmSelA]) {
                ((void (*)(id, SEL, id))objc_msgSend)(payLogicMgr, confirmSelA, request);
                WPLog(@"AutoTransfer", @"[CONFIRM-A] 已确认收款: transferID=%@ fee=%.2f", transferID, feeAmount / 100.0);
            } else {
                WPLog(@"AutoTransfer", @"[ERROR] WCPayLogicMgr does not respond to ConfirmTransferMoney:");
                return;
            }

            if (config.autoConfirmTransferAutoReply && config.autoConfirmTransferAutoReplyStr.length > 0) {
                sendAutoReply(sessionUserName, config.autoConfirmTransferAutoReplyStr);
            }

            NSString *notifyMsg = [NSString stringWithFormat:@"已收款 %.2f元", feeAmount / 100.0];
            pushLocalNotification(@"自动收款", notifyMsg);
        } @catch (NSException *e) {
            WPLog(@"AutoTransfer", @"[ERROR] 确认收款异常: %@", e);
        }
    });
}

static IMP orig_onNewSyncAddMessage = NULL;
static IMP orig_onNewSyncNotAddDBMessage = NULL;
static IMP orig_AddMsgMsgWrap = NULL;
static IMP orig_AsyncOnAddMsgMsgWrap = NULL;

static void replaced_at_onNewSyncAddMessage(id self, SEL _cmd, id wrap) {
    if (orig_onNewSyncAddMessage) {
        ((void (*)(id, SEL, id))orig_onNewSyncAddMessage)(self, _cmd, wrap);
    }
    processTransferMessage(wrap);
}

static void replaced_at_onNewSyncNotAddDBMessage(id self, SEL _cmd, id wrap) {
    if (orig_onNewSyncNotAddDBMessage) {
        ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, wrap);
    }
    processTransferMessage(wrap);
}

static void replaced_at_AddMsgMsgWrap(id self, SEL _cmd, id fromUsr, id wrap) {
    if (orig_AddMsgMsgWrap) {
        ((void (*)(id, SEL, id, id))orig_AddMsgMsgWrap)(self, _cmd, fromUsr, wrap);
    }
    processTransferMessage(wrap);
}

static void replaced_at_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    if (orig_AsyncOnAddMsgMsgWrap) {
        ((void (*)(id, SEL, id, id))orig_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    }
    processTransferMessage(wrap);
}

static IMP orig_ConfirmTransferResponse = NULL;

static void replaced_at_ConfirmTransferResponse(id self, SEL _cmd, id response, id request) {
    if (orig_ConfirmTransferResponse) {
        ((void (*)(id, SEL, id, id))orig_ConfirmTransferResponse)(self, _cmd, response, request);
    }

    AutoTransferConfig *config = [AutoTransferConfig shared];
    if (!config.autoConfirmTransfer) return;
    if (!response) return;

    long long fee = 0;
    NSString *feeType = @"CNY";
    NSString *payer = @"";

    @try { fee = [[response valueForKey:@"m_llFee"] longLongValue]; } @catch (NSException *e) {}
    @try { id ft = [response valueForKey:@"m_nsFeeType"]; if (ft) feeType = ft; } @catch (NSException *e) {}
    @try { id p = [response valueForKey:@"m_nsPayer"]; if (p) payer = p; } @catch (NSException *e) {}

    if (fee > 0) {
        NSString *msg = [NSString stringWithFormat:@"已收款 %.2f%@ 来自%@", fee / 100.0, feeType, payer];
        WPLog(@"AutoTransfer", @"[OK] 自动收款成功(回调): %@", msg);
        pushLocalNotification(@"自动收款", msg);
    }
}

@implementation AutoTransferHook

+ (void)install {
    WPLog(@"AutoTransfer", @"AutoTransferHook install");

    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncAddMessage:), (IMP)replaced_at_onNewSyncAddMessage, &orig_onNewSyncAddMessage);
        WPLog(@"AutoTransfer", @"[+] onNewSyncAddMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncNotAddDBMessage:), (IMP)replaced_at_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage);
        WPLog(@"AutoTransfer", @"[+] onNewSyncNotAddDBMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:), (IMP)replaced_at_AddMsgMsgWrap, &orig_AddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AddMsg:MsgWrap: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:), (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AsyncOnAddMsg:MsgWrap: hooked");
    }

    Class PayLogicMgrClass = objc_getClass("WCPayLogicMgr");
    if (PayLogicMgrClass) {
        MSHookMessageEx(PayLogicMgrClass, @selector(insideCallBackOnConfirmTransferMoneyResponse:OnRequest:), (IMP)replaced_at_ConfirmTransferResponse, &orig_ConfirmTransferResponse);
        WPLog(@"AutoTransfer", @"[+] insideCallBackOnConfirmTransferMoneyResponse:OnRequest: hooked");
    }

    WPLog(@"AutoTransfer", @"AutoTransferHook install complete");
}

@end
