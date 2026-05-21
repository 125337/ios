#import "WeChatAlertHelper.h"
#import <objc/runtime.h>

// ==================== WCUIAlertView 本地声明（基于运行时 dump 的真实方法） ====================
// WCUIAlertView 是 NSObject 子类（非 UIView），管理自己的 UI。
@interface WCUIAlertView : NSObject
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (void)showTextFieldWithMaxLen:(NSInteger)maxLen;
- (void)setTextFieldDefaultText:(NSString *)text;
- (void)addBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;
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
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
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

// ==================== 回调注入：用 class_addMethod + imp_implementationWithBlock 注入到 WCUIAlertView ====================
// addBtnTitle:target:sel: 在 MRC 环境下不会 retain target，独立的 _WeChatAlertCallback 对象可能被提前释放。
// 解决方案：把回调方法注入到 WCUIAlertView 自身，target = alert，确保回调时 target 一定存活。
// 同时用 objc_setAssociatedObject 存储 confirm block，alert 存活期间 block 不会被释放。

static char kWAlertConfirmBlockKey;

static void walertInjectConfirmHandler(Class alertClass) {
    SEL confirmSel = NSSelectorFromString(@"__walert_confirm_handler");
    if ([alertClass instancesRespondToSelector:confirmSel]) return; // 已注入

    IMP confirmIMP = imp_implementationWithBlock(^(id _self) {
        walertLog(@"[WeChatAlert] confirm callback fired");

        void(^confirmBlock)(NSString *) = objc_getAssociatedObject(_self, &kWAlertConfirmBlockKey);

        NSString *inputText = nil;
        @try {
            SEL getTextSel = NSSelectorFromString(@"getTextFieldText");
            if ([_self respondsToSelector:getTextSel]) {
                inputText = ((id(*)(id, SEL))objc_msgSend)(_self, getTextSel);
            }
        } @catch (NSException *e) {
            walertLog([NSString stringWithFormat:@"[WeChatAlert] getTextFieldText failed: %@", e]);
        }
        if (!inputText || inputText.length == 0) {
            @try { inputText = [_self valueForKeyPath:@"tipsVc.tipsTextView.text"]; } @catch (NSException *e) {}
        }
        if (!inputText || inputText.length == 0) {
            @try { inputText = [_self valueForKeyPath:@"tipsVc.tipsTextField.text"]; } @catch (NSException *e) {}
        }
        walertLog([NSString stringWithFormat:@"[WeChatAlert] input: %@", inputText]);
        if (inputText.length > 0 && confirmBlock) {
            confirmBlock(inputText);
        }
    });
    class_addMethod(alertClass, confirmSel, confirmIMP, "v@:");
    walertLog(@"[WeChatAlert] ✅ __walert_confirm_handler injected into WCUIAlertView");
}

@implementation WeChatAlertHelper

+ (Class)alertClass {
    static Class _alertClass = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _alertClass = objc_getClass("WCUIAlertView");
        walertLog(_alertClass ? @"[WeChatAlert] WCUIAlertView class found"
                              : @"[WeChatAlert] ⚠️ WCUIAlertView class NOT found");
    });
    return _alertClass;
}

#pragma mark - 文本输入弹窗

+ (void)showInputAlert:(NSString *)title initialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        walertLog(@"[WeChatAlert] ❌ WCUIAlertView not available");
        return;
    }

    @try {
        // 1. alloc + initWithTitle:message:
        WCUIAlertView *alert = [[alertClass alloc] initWithTitle:title message:@""];
        if (!alert) {
            walertLog(@"[WeChatAlert] ❌ alloc failed");
            return;
        }

        // 2. showTextFieldWithMaxLen:99999 → 开启文本输入模式
        [alert showTextFieldWithMaxLen:99999];

        // 3. setTextFieldDefaultText: → 预填文本
        if (text.length > 0) {
            [alert setTextFieldDefaultText:text];
        }

        // 4. addCancelBtnTitle:target:sel: → 取消按钮
        [alert addCancelBtnTitle:@"取消" target:target sel:NULL];

        // 5. 注入回调方法到 WCUIAlertView（只注入一次）+ addBtnTitle
        walertInjectConfirmHandler(alertClass);
        // 将 confirm block 关联到 alert，alert 存活期间 block 被 retain
        if (confirm) {
            objc_setAssociatedObject(alert, &kWAlertConfirmBlockKey, confirm, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        SEL confirmSel = NSSelectorFromString(@"__walert_confirm_handler");
        [alert addBtnTitle:@"确定" target:alert sel:confirmSel];

        // 6. show
        [alert show];
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ✅ input alert shown: %@", title]);
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ❌ input alert error: %@", e]);
    }
}

#pragma mark - 纯提示弹窗

+ (void)showTipAlert:(NSString *)title message:(NSString *)message {
    [self showTipAlert:title message:message buttonTitle:@"我知道了"];
}

+ (void)showTipAlert:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        walertLog(@"[WeChatAlert] ❌ WCUIAlertView not available");
        return;
    }

    @try {
        // 1. alloc + initWithTitle:message:
        WCUIAlertView *alert = [[alertClass alloc] initWithTitle:title message:message];
        if (!alert) {
            walertLog(@"[WeChatAlert] ❌ alloc failed");
            return;
        }

        // 2. 确认按钮
        [alert addCancelBtnTitle:buttonTitle target:nil sel:NULL];

        // 3. show
        [alert show];
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ✅ tip alert shown: %@", title]);
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ❌ tip alert error: %@", e]);
    }
}

@end