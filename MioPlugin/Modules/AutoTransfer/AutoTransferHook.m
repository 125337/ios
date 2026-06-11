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
    if (!replyText.length || !sessionUserName.length) return;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
            if (!msgMgr) {
                WPLog(@"AutoTransfer", @"[REPLY] CMessageMgr不可用，无法发送自动回复");
                return;
            }

            Class msgWrapClass = objc_getClass("CMessageWrap");
            if (!msgWrapClass) {
                WPLog(@"AutoTransfer", @"[REPLY] CMessageWrap类不可用，无法发送自动回复");
                return;
            }

            id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
            if (!msg) {
                WPLog(@"AutoTransfer", @"[REPLY] 消息对象创建失败");
                return;
            }

            [msg setValue:replyText forKey:@"m_nsContent"];
            [msg setValue:sessionUserName forKey:@"m_nsToUsr"];

            // ✅ 补充：获取当前用户 ID
            id contactMgr = WXGetService(objc_getClass("CContactMgr"));
            id selfContact = nil;
            NSString *selfUserName = nil;
            if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
                selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
            }
            if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
                selfUserName = ((id (*)(id, SEL))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
            }

            // ✅ 设置发送方为当前用户（解决消息显示在错误一侧的问题）
            if (selfUserName) {
                [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
            }

            // ✅ 设置消息状态为"已发送"（解决消息显示异常的问题）
            [msg setValue:@(4) forKey:@"m_uiStatus"];

            // ✅ 设置消息时间戳（解决消息排序问题）
            [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

            SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
            if (![msgMgr respondsToSelector:addMsgSel]) {
                WPLog(@"AutoTransfer", @"[REPLY] AddMsg:MsgWrap:方法不可用");
                return;
            }

            ((void(*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionUserName, msg);
            [_WPLogManager appendLineWithTag:@"AutoTransfer" content:[NSString stringWithFormat:
                @"自动回复已发送: %@ -> %@", replyText, sessionUserName]];
        } @catch (NSException *e) {
            WPLog(@"AutoTransfer", @"[REPLY] 自动回复异常: %@", e);
        }
    });
}

static void pushLocalNotification(NSString *message) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            if (@available(iOS 10.0, *)) {
                UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
                UNMutableNotificationContent *content = [[UNMutableNotificationContent alloc] init];
                content.title = @"自动收款";
                content.body = message ?: @"转账已自动确认收款";
                content.sound = [UNNotificationSound defaultSound];
                UNTimeIntervalNotificationTrigger *trigger = [UNTimeIntervalNotificationTrigger triggerWithTimeInterval:0.5 repeats:NO];
                UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:@"AutoTransfer" content:content trigger:trigger];
                [center addNotificationRequest:request withCompletionHandler:nil];
            }
        } @catch (NSException *e) {}
    });
}

static void processTransferMessage(id wrap) {
    AutoTransferConfig *config = [AutoTransferConfig shared];
    if (!config.autoConfirmTransfer) return;
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

    if (isGroup && !config.autoConfirmTransferGroup) return;
    if (!isGroup && !config.autoConfirmTransferPersonal) return;

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

    if (config.autoConfirmTransferMaxAmount > 0 && feeAmount > config.autoConfirmTransferMaxAmount) {
        WPLog(@"AutoTransfer", @"[SKIP] 超过金额上限: %lld > %lld", feeAmount, config.autoConfirmTransferMaxAmount);
        return;
    }

    unsigned long long invalidTime = (unsigned long long)[invalidTimeStr longLongValue];

    [_WPLogManager appendLineWithTag:@"AutoTransfer" content:[NSString stringWithFormat:
        @"检测到转账: transferID=%@ from=%@ fee=%lld memo=%@ isGroup=%d",
        transferID, fromUsr, feeAmount, payMemo, isGroup]];

    [_WPLogManager appendLineWithTag:@"AutoTransfer" content:[NSString stringWithFormat:
        @"[DEBUG] XML字段: total_fee=%@ feedesc=%@ paysubtype=%@ bubbletype=%@ invalidtime=%@",
        extractXMLValue(content, @"total_fee") ?: @"(nil)",
        extractXMLValue(content, @"feedesc") ?: @"(nil)",
        extractXMLValue(content, @"paysubtype") ?: @"(nil)",
        extractXMLValue(content, @"bubbletype") ?: @"(nil)",
        extractXMLValue(content, @"invalidtime") ?: @"(nil)"]];

    [_WPLogManager appendLineWithTag:@"AutoTransfer" content:[NSString stringWithFormat:
        @"[DEBUG] ObjC属性: payInfoItem=%@ m_uiTransferAmount=%@ m_total_fee=%@",
        payInfoItem ? @"可用" : @"nil",
        payInfoItem ? [payInfoItem valueForKey:@"m_uiTransferAmount"] ?: @"(nil)" : @"(N/A)",
        payInfoItem ? [payInfoItem valueForKey:@"m_total_fee"] ?: @"(nil)" : @"(N/A)"]];

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
            pushLocalNotification(notifyMsg);
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
        pushLocalNotification(msg);
    }
}

@implementation AutoTransferHook

+ (void)install {
    HookTableItem items[] = {
        {@"CMessageMgr", @"onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage, &orig_onNewSyncAddMessage},
        {@"CMessageMgr", @"onNewSyncNotAddDBMessage:",
            (IMP)replaced_at_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage},
        {@"CMessageMgr", @"AddMsg:MsgWrap:",
            (IMP)replaced_at_AddMsgMsgWrap, &orig_AddMsgMsgWrap},
        {@"CMessageMgr", @"AsyncOnAddMsg:MsgWrap:",
            (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap},
        {@"WCPayLogicMgr", @"insideCallBackOnConfirmTransferMoneyResponse:OnRequest:",
            (IMP)replaced_at_ConfirmTransferResponse, &orig_ConfirmTransferResponse},
    };

    [HookEngine installHookTable:@"AutoTransfer" items:items
                           count:sizeof(items) / sizeof(items[0])];
}

@end
