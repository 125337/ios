#import "WeChatAlertHelper.h"
#import <objc/runtime.h>

// ==================== WCUIAlertView 本地声明：让 ARC 正确管理 block 生命周期 ====================
// 声明此接口后，使用标准 ObjC 语法调用 WCUIAlertView 方法，
// ARC 能"看到" block 参数，自动触发 _Block_copy 将 block 从栈 copy 到堆。
// 使用 objc_msgSend 裸调则 ARC 看不到 block → 栈上 block 被释放 → crash。
@interface WCUIAlertView : UIView
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (void)setTag:(NSInteger)tag;
- (void)setMessage:(NSString *)message;
- (void)setStyle:(NSInteger)style;
- (void)addCancelActionWithTitle:(NSString *)title target:(id)target action:(SEL)action;
- (void)addActionWithTitle:(NSString *)title handler:(void(^)(id button))handler;
- (void)show;
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
        if (_alertClass) {
            walertLog(@"[WeChatAlert] WCUIAlertView class found");
        } else {
            walertLog(@"[WeChatAlert] ⚠️ WCUIAlertView class NOT found");
        }
    });
    return _alertClass;
}

#pragma mark - 文本输入弹窗

+ (void)showInputAlert:(NSString *)title initialText:(NSString *)text onConfirm:(void(^)(NSString *inputText))confirm {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        walertLog(@"[WeChatAlert] ❌ WCUIAlertView not available, cannot show input alert");
        return;
    }

    @try {
        // 1. alloc + initWithTitle:message:
        WCUIAlertView *alert = [[alertClass alloc] initWithTitle:title message:@""];
        if (!alert) {
            walertLog(@"[WeChatAlert] ❌ WCUIAlertView alloc failed");
            return;
        }

        // 2. setTag:99999
        [alert setTag:99999];

        // 3. setMessage: 预填文本
        if (text.length > 0) {
            [alert setMessage:text];
        }

        // 4. setStyle:1 → 文本输入模式
        [alert setStyle:1];

        // 5. 取消按钮
        [alert addCancelActionWithTitle:@"取消" target:nil action:NULL];

        // 6. 确定按钮 —— 标准 ObjC 调用，ARC 自动 copy block
        __weak WCUIAlertView *weakAlert = alert;
        [alert addActionWithTitle:@"" handler:^(id button) {
            @try {
                NSString *inputText = [weakAlert valueForKeyPath:@"tipsVc.tipsTextView.text"];
                if (!inputText || inputText.length == 0) {
                    inputText = [weakAlert valueForKeyPath:@"tipsVc.tipsTextField.text"];
                }
                walertLog([NSString stringWithFormat:@"[WeChatAlert] input text: %@", inputText]);
                if (inputText.length > 0 && confirm) {
                    confirm(inputText);
                }
            } @catch (NSException *e) {
                walertLog([NSString stringWithFormat:@"[WeChatAlert] ❌ get input: %@", e]);
            }
        }];

        // 7. show —— 直接加到 window 层级，不经过 UIViewController presentation
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
        walertLog(@"[WeChatAlert] ❌ WCUIAlertView not available, cannot show tip alert");
        return;
    }

    @try {
        // 1. alloc + initWithTitle:message:
        WCUIAlertView *alert = [[alertClass alloc] initWithTitle:title message:message];
        if (!alert) {
            walertLog(@"[WeChatAlert] ❌ WCUIAlertView alloc failed");
            return;
        }

        // 2. setTag:99999
        [alert setTag:99999];

        // 3. style:0 = 无输入框模式
        [alert setStyle:0];

        // 4. 确认按钮
        [alert addCancelActionWithTitle:buttonTitle target:nil action:NULL];

        // 5. show
        [alert show];
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ✅ tip alert shown: %@", title]);
    } @catch (NSException *e) {
        walertLog([NSString stringWithFormat:@"[WeChatAlert] ❌ tip alert error: %@", e]);
    }
}

@end