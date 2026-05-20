#import "WeChatAlertHelper.h"
#import <objc/runtime.h>

// ==================== WCUIAlertView 本地声明（基于运行时 dump 的真实方法） ====================
// WCUIAlertView 是 NSObject 子类（非 UIView），管理自己的 UI。
// 声明此接口后，使用标准 ObjC 语法调用，ARC 自动 _Block_copy 管理 block 生命周期。
@interface WCUIAlertView : NSObject
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (void)showTextFieldWithMaxLen:(NSInteger)maxLen;
- (void)setTextFieldDefaultText:(NSString *)text;
- (void)setTextFieldPlaceHolder:(NSString *)placeholder;
- (id)getTextField;
- (NSString *)getTextFieldText;
- (void)addBtnTitle:(NSString *)title handler:(void(^)(id button))handler;
- (void)addCancelBtnTitle:(NSString *)title handler:(void(^)(id button))handler;
- (void)addCancelBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;
- (void)show;
- (void)dismissAnimated:(BOOL)animated;
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

        // 5. addBtnTitle:handler: → 确定按钮（ARC 标准 ObjC 调用，block 自动 copy 到堆）
        __weak id weakAlert = alert;
        [alert addBtnTitle:@"" handler:^(id button) {
            @try {
                NSString *inputText = [weakAlert getTextFieldText];
                walertLog([NSString stringWithFormat:@"[WeChatAlert] input: %@", inputText]);
                if (inputText.length > 0 && confirm) {
                    confirm(inputText);
                }
            } @catch (NSException *e) {
                walertLog([NSString stringWithFormat:@"[WeChatAlert] ❌ get input: %@", e]);
            }
        }];

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