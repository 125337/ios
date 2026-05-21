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

// ==================== 回调 trampoline ====================
// WCUIAlertView 是微信 MRC 编译的，addBtnTitle:handler: block 在 ARC 下生命周期不兼容导致 SIGSEGV。
// 改用 addBtnTitle:target:sel: + 关联对象，让回调对象和 alert 同生命周期，彻底避免 ARC block 问题。
@interface _WeChatAlertCallback : NSObject
@property (nonatomic, copy) void(^confirmBlock)(NSString *);
@property (nonatomic, unsafe_unretained) WCUIAlertView *alert;
@end

@implementation _WeChatAlertCallback

- (void)handleConfirm {
    NSString *inputText = nil;
    @try {
        // 优先用 getTextFieldText（运行时 dump 的真实方法）
        inputText = [self.alert getTextFieldText];
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"[WeChatAlert] getTextFieldText failed: %@", e]);
    }
    if (!inputText || inputText.length == 0) {
        @try {
            inputText = [self.alert valueForKeyPath:@"tipsVc.tipsTextView.text"];
        } @catch (NSException *e) {}
    }
    if (!inputText || inputText.length == 0) {
        @try {
            inputText = [self.alert valueForKeyPath:@"tipsVc.tipsTextField.text"];
        } @catch (NSException *e) {}
    }
    walertLog([NSString stringWithFormat:@"[WeChatAlert] input: %@", inputText]);
    if (inputText.length > 0 && self.confirmBlock) {
        self.confirmBlock(inputText);
    }
}

@end

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
        //    照抄锤子助手：init title=@"提示" message=@""，然后 setTextFieldDefaultText 预填
        WCUIAlertView *alert = [[alertClass alloc] initWithTitle:title message:@""];
        if (!alert) {
            walertLog(@"[WeChatAlert] ❌ alloc failed");
            return;
        }

        // 2. showTextFieldWithMaxLen:99999 → 开启文本输入模式（锤子 setStyle:1 等价）
        [alert showTextFieldWithMaxLen:99999];

        // 3. setTextFieldDefaultText: → 预填文本（锤子 setMessage: 等价）
        if (text.length > 0) {
            [alert setTextFieldDefaultText:text];
        }

        // 4. addCancelBtnTitle:target:sel: → 取消按钮
        [alert addCancelBtnTitle:@"取消" target:target sel:NULL];

        // 5. addBtnTitle:target:sel: → 确定按钮（target/selector 模式，避免 block → MRC 崩溃）
        _WeChatAlertCallback *cb = [[_WeChatAlertCallback alloc] init];
        cb.alert = alert;
        cb.confirmBlock = confirm;
        // 关联到 alert，保证回调对象和 alert 同生命周期
        objc_setAssociatedObject(alert, @selector(showInputAlert:initialText:target:onConfirm:), cb, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [alert addBtnTitle:@"确定" target:cb sel:@selector(handleConfirm)];

        // 6. show → 直接加到 window 层级，绕过 UIViewController presentation
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