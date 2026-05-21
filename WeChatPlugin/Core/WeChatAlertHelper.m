#import "WeChatAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>

// ==================== WCUIAlertView 本地声明 ====================
// 照抄锤子助手反编译 FUN_008462a0 "addBtnTitle:handler:" — handler 是 block 参数
// 注意：addBtnTitle:handler: 和 addBtnTitle:target:sel: 是不同的方法！
@interface WCUIAlertView : NSObject
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (void)showTextFieldWithMaxLen:(NSInteger)maxLen;
- (void)setTextFieldDefaultText:(NSString *)text;
- (void)addBtnTitle:(NSString *)title handler:(void(^)(id btn))handler;       // ⭐ 锤子 confirm 用这个
- (void)addBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;          // 备选
- (void)addCancelBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;
- (void)show;
- (NSString *)getTextFieldText;
@end

// ==================== 日志 ====================
static void walertLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *logLine = [NSString stringWithFormat:@"[%@] %@\n", timestamp, content];
        NSString *logPath = [folderPath stringByAppendingPathComponent:@"wechat_alert.log"];
        NSFileHandle *fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        if (!fh) {
            [[NSFileManager defaultManager] createFileAtPath:logPath contents:nil attributes:nil];
            fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        }
        [fh seekToEndOfFile];
        [fh writeData:[logLine dataUsingEncoding:NSUTF8StringEncoding]];
        [fh closeFile];
    } @catch (NSException *e) {}
}

@implementation WeChatAlertHelper

+ (Class)alertClass {
    static Class _alertClass = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _alertClass = objc_getClass("WCUIAlertView");
        walertLog(_alertClass ? @"[WeChatAlert] ✅ WCUIAlertView class found"
                              : @"[WeChatAlert] ❌ WCUIAlertView class NOT found");
    });
    return _alertClass;
}

#pragma mark - 文本输入弹窗

+ (void)showInputAlert:(NSString *)title initialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        walertLog(@"❌ WCUIAlertView not available — abort");
        return;
    }

    // ===== 照抄锤子助手 FUN_0076f720 流程 =====
    // 1. alloc + initWithTitle:message:
    // 2. showTextFieldWithMaxLen:99999
    // 3. setTextFieldDefaultText:
    // 4. addCancelBtnTitle:target:sel:
    // 5. addBtnTitle:handler: ⭐(block 回调，不是 target/sel！)
    // 6. show

    @try {
        // ① alloc + init
        walertLog([NSString stringWithFormat:@"① alloc+initWithTitle: %@", title]);
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:), title, @"");
        if (!alert) {
            walertLog(@"❌ init returned nil");
            return;
        }
        walertLog([NSString stringWithFormat:@"   alert = %@", alert]);

        // ② textField
        SEL stfSel = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stfSel]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stfSel, 99999);
            walertLog(@"② showTextFieldWithMaxLen:99999 ✅");
        } else {
            walertLog(@"② ⚠️ showTextFieldWithMaxLen: NOT found");
        }

        // ③ pre-fill text
        if (text.length > 0) {
            SEL dtfSel = NSSelectorFromString(@"setTextFieldDefaultText:");
            if ([alert respondsToSelector:dtfSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(alert, dtfSel, text);
                walertLog([NSString stringWithFormat:@"③ setTextFieldDefaultText: %@ ✅", text]);
            } else {
                walertLog(@"③ ⚠️ setTextFieldDefaultText: NOT found");
            }
        } else {
            walertLog(@"③ pre-fill: (empty)");
        }

        // ④ cancel button
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", target, NULL);
            walertLog(@"④ addCancelBtnTitle: ✅");
        } else {
            walertLog(@"④ ⚠️ addCancelBtnTitle: NOT found");
        }

        // ⑤ confirm button — 照抄锤子: addBtnTitle:handler: (block 参数!)
        id alertRef = alert;
        void(^confirmBlock)(NSString *) = [confirm copy]; // ARC → MRC 安全: 显式 copy

        SEL handlerSel = NSSelectorFromString(@"addBtnTitle:handler:");
        BOOL usedHandlerAPI = NO;
        if ([alert respondsToSelector:handlerSel]) {
            // 照抄锤子 FUN_008462a0: (*(code *)objc_msgSend)(alert, "addBtnTitle:handler:")
            // get input via valueForKeyPath:@"tipsVc.tipsTextView.text" (照抄锤子 FUN_0076ffbc)
            id handlerBlock = ^(id btn) {
                walertLog(@"🔥🔥🔥 CONFIRM CALLBACK FIRED (addBtnTitle:handler:) 🔥🔥🔥");
                walertLog([NSString stringWithFormat:@"   btn = %@", btn]);

                // 获取输入文本(照抄锤子 FUN_0076ffbc 第1行: valueForKeyPath:@"tipsVc.tipsTextView.text")
                NSString *input = nil;
                @try {
                    input = [alertRef valueForKeyPath:@"tipsVc.tipsTextView.text"];
                    walertLog([NSString stringWithFormat:@"   tipsVc.tipsTextView.text = %@", input ?: @"(nil)"]);
                } @catch (NSException *e) {
                    walertLog([NSString stringWithFormat:@"   tipsVc error: %@", e]);
                }
                if (!input || input.length == 0) {
                    @try {
                        input = [alertRef valueForKeyPath:@"tipsVc.tipsTextField.text"];
                        walertLog([NSString stringWithFormat:@"   tipsVc.tipsTextField.text = %@", input ?: @"(nil)"]);
                    } @catch (NSException *e) {}
                }
                if (!input || input.length == 0) {
                    SEL getText = NSSelectorFromString(@"getTextFieldText");
                    if ([alertRef respondsToSelector:getText]) {
                        input = ((id(*)(id, SEL))objc_msgSend)(alertRef, getText);
                        walertLog([NSString stringWithFormat:@"   getTextFieldText = %@", input ?: @"(nil)"]);
                    }
                }
                if (!input) input = @"";
                walertLog([NSString stringWithFormat:@"   FINAL input: [%@]", input]);

                if (input.length > 0 && confirmBlock) {
                    walertLog(@"   → calling confirmBlock...");
                    confirmBlock(input);
                    walertLog(@"   → confirmBlock returned");
                } else {
                    walertLog([NSString stringWithFormat:@"   ⚠️ skip: input.len=%lu confirmBlock=%s",
                        (unsigned long)input.length, confirmBlock ? "YES" : "NO"]);
                }
            };
            // MRC 环境下 block 可能存为 assign，显式 copy 保证堆上存活
            id copiedHandler = [handlerBlock copy];
            ((void(*)(id, SEL, id, id))objc_msgSend)(alert, handlerSel, @"确定", copiedHandler);
            usedHandlerAPI = YES;
            walertLog(@"⑤ addBtnTitle:handler: ✅ (锤子风格 block 回调)");
        } else {
            walertLog(@"⑤ ⚠️ addBtnTitle:handler: NOT found");
        }

        // ⑥ fallback confirm: addBtnTitle:target:sel: (if handler API not available)
        if (!usedHandlerAPI) {
            walertLog(@"⑥ fallback: using addBtnTitle:target:sel:");
            SEL btnTargetSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
            if ([alert respondsToSelector:btnTargetSel]) {
                // Store confirm block on alert for the injected method
                objc_setAssociatedObject(alert, @selector(showInputAlert:initialText:target:onConfirm:),
                    confirmBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);

                // Inject handler method into WCUIAlertView
                SEL confirmMethSel = NSSelectorFromString(@"__walert_confirm_handler");
                if (![alertClass instancesRespondToSelector:confirmMethSel]) {
                    IMP imp = imp_implementationWithBlock(^(id _self) {
                        walertLog(@"🔥 CONFIRM CALLBACK FIRED (addBtnTitle:target:sel: fallback) 🔥");
                        void(^cb)(NSString *) = objc_getAssociatedObject(_self, @selector(showInputAlert:initialText:target:onConfirm:));
                        NSString *input = nil;
                        @try { input = [_self valueForKeyPath:@"tipsVc.tipsTextView.text"]; } @catch (NSException *e) {}
                        if (!input || input.length == 0) {
                            @try { input = [_self valueForKeyPath:@"tipsVc.tipsTextField.text"]; } @catch (NSException *e) {}
                        }
                        if (!input || input.length == 0) {
                            SEL gt = NSSelectorFromString(@"getTextFieldText");
                            if ([_self respondsToSelector:gt]) input = ((id(*)(id, SEL))objc_msgSend)(_self, gt);
                        }
                        walertLog([NSString stringWithFormat:@"   input=[%@] cb=%s", input ?: @"", cb ? "YES" : "NO"]);
                        if (input.length > 0 && cb) cb(input);
                    });
                    class_addMethod(alertClass, confirmMethSel, imp, "v@:");
                }
                ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnTargetSel, @"确定", alert, confirmMethSel);
                walertLog(@"⑥ fallback confirm ✅");
            }
        }

        // ⑦ show (照抄锤子 FUN_00856a00)
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
            walertLog(@"⑦ show ✅ — alert displayed");
        } else {
            walertLog(@"⑦ ⚠️ show NOT found");
        }
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"❌ EXCEPTION: %@", e]);
    }
}

#pragma mark - 纯提示弹窗

+ (void)showTipAlert:(NSString *)title message:(NSString *)message {
    [self showTipAlert:title message:message buttonTitle:@"我知道了"];
}

+ (void)showTipAlert:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        walertLog(@"❌ WCUIAlertView not available — tip abort");
        return;
    }

    @try {
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:), title, message);
        if (!alert) { walertLog(@"❌ tip init nil"); return; }
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, buttonTitle, nil, NULL);
        }
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
            walertLog([NSString stringWithFormat:@"✅ tip alert shown: %@", title]);
        }
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"❌ tip error: %@", e]);
    }
}

@end