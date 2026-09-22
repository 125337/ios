#import "MioAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"

// ==================== WCUIAlertView 本地声明 ====================
@interface WCUIAlertView : NSObject
- (id)initWithTitle:(NSString *)title message:(NSString *)message;
- (void)showTextFieldWithMaxLen:(NSInteger)maxLen;
- (void)setTextFieldDefaultText:(NSString *)text;
- (void)addBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;
- (void)addCancelBtnTitle:(NSString *)title target:(id)target sel:(SEL)sel;
- (void)show;
- (NSString *)getTextFieldText;
@end

// ==================== 回调：纯 C 函数 IMP 注入到 WCUIAlertView ====================
// addBtnTitle:handler: 传 block 给 MRC 代码会 SIGSEGV（MRC 只 assign，ARC 自动释放 + 调用时 ABI 不兼容）
// addBtnTitle:target:sel: 传 target/selector —— 但 MRC 不 retain target
// ✅ 最终方案：class_addMethod 注入纯 C IMP 到 WCUIAlertView，target = alert 自身
//    C IMP 通过 objc_getAssociatedObject 读取 confirm block，无 ARC/MRC 兼容问题

static char kWAlertConfirmBlockKey;
static char kWAlertSimpleConfirmBlockKey;  // 无输入框确认弹窗的 block

// 纯 C IMP：WCUIAlertView 调用 addBtnTitle:@"确定" target:alert sel:@selector(__walert_confirm)
// 当按钮被点击，MRC 代码调用 objc_msgSend(alert, @selector(__walert_confirm))
// alert = self, 可以通过 associated object 拿到 confirm block
static void __walert_confirm_IMP(id self, SEL _cmd) {
    WPLogDebug(@"Alert", @"CONFIRM CALLBACK FIRED (C IMP on WCUIAlertView)");

    void(^confirmBlock)(NSString *) = objc_getAssociatedObject(self, &kWAlertConfirmBlockKey);
    WPLogDebug(@"Alert", @"   self=%@ confirmBlock=%s", self, confirmBlock ? "YES" : "NO");

    // 获取输入文本
    NSString *input = nil;
    @try {
        input = [self valueForKeyPath:@"tipsVc.tipsTextView.text"];
        WPLogDebug(@"Alert", @"   tipsVc.tipsTextView.text = %@", input ?: @"(nil)");
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"   tipsVc.textView error: %@", e);
    }
    if (!input || input.length == 0) {
        @try {
            input = [self valueForKeyPath:@"tipsVc.tipsTextField.text"];
            WPLogDebug(@"Alert", @"   tipsVc.tipsTextField.text = %@", input ?: @"(nil)");
        } @catch (NSException *e) {}
    }
    if (!input || input.length == 0) {
        SEL getText = NSSelectorFromString(@"getTextFieldText");
        if ([self respondsToSelector:getText]) {
            input = ((id(*)(id, SEL))objc_msgSend)(self, getText);
            WPLogDebug(@"Alert", @"   getTextFieldText = %@", input ?: @"(nil)");
        }
    }

    WPLogDebug(@"Alert", @"   FINAL input: [%@] len=%lu", input ?: @"(nil)", (unsigned long)(input ? input.length : 0));

    if (input.length > 0 && confirmBlock) {
        WPLogDebug(@"Alert", @"   → calling confirmBlock...");
        confirmBlock(input);
        WPLogDebug(@"Alert", @"   → confirmBlock returned");
    } else {
        WPLogDebug(@"Alert", @"   skip: input=%lu confirm=%s",
            (unsigned long)(input.length), confirmBlock ? "YES" : "NO");
    }
}

// 确保 C IMP 只注入一次
static void walertEnsureCIMPInjected(Class alertClass) {
    SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
    if ([alertClass instancesRespondToSelector:confirmSel]) return;

    class_addMethod(alertClass, confirmSel, (IMP)__walert_confirm_IMP, "v@:");
    WPLogDebug(@"Alert", @"__walert_confirm C IMP injected into WCUIAlertView");

    // 第二个 IMP：简单确认回调（无输入框，纯 void(^)(void)）
    SEL simpleConfirmSel = NSSelectorFromString(@"__walert_simple_confirm");
    class_addMethod(alertClass, simpleConfirmSel, imp_implementationWithBlock(^(id _self) {
        void(^cb)(void) = objc_getAssociatedObject(_self, &kWAlertSimpleConfirmBlockKey);
        if (cb) cb();
    }), "v@:");
    WPLogDebug(@"Alert", @"__walert_simple_confirm C IMP injected into WCUIAlertView");
}

@implementation MioAlertHelper

+ (Class)alertClass {
    static Class _alertClass = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _alertClass = objc_getClass("WCUIAlertView");
        WPLogDebug(@"Alert", _alertClass ? @"WCUIAlertView class found"
                              : @"WCUIAlertView class NOT found");
    });
    return _alertClass;
}

#pragma mark - 文本输入弹窗

+ (void)showInputAlertWithInitialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm {
    [self showInputAlertWithInitialText:text message:@"" target:target onConfirm:confirm];
}

+ (void)showInputAlertWithInitialText:(NSString *)text
                              message:(NSString *)message
                               target:(id)target
                            onConfirm:(void(^)(NSString *inputText))confirm {
    Class alertClass = [self alertClass];
    if (!alertClass) {
        WPLogDebug(@"Alert", @"WCUIAlertView not available — abort");
        return;
    }

    @try {
        // ① alloc + init
        WPLogDebug(@"Alert", @"alloc+initWithTitle: Mio助手");
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:), @"Mio助手", message ?: @"");
        if (!alert) { WPLogDebug(@"Alert", @"init nil"); return; }
        WPLogDebug(@"Alert", @"   alert=%@", alert);

        // ② textField
        SEL stfSel = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stfSel]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stfSel, 99999);
            WPLogDebug(@"Alert", @"showTextFieldWithMaxLen available");
        } else { WPLogDebug(@"Alert", @"showTextFieldWithMaxLen NOT found"); }

        // ③ pre-fill
        if (text.length > 0) {
            SEL dtfSel = NSSelectorFromString(@"setTextFieldDefaultText:");
            if ([alert respondsToSelector:dtfSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(alert, dtfSel, text);
                WPLogDebug(@"Alert", @"setTextFieldDefaultText available");
            } else { WPLogDebug(@"Alert", @"setTextFieldDefaultText NOT found"); }
        }

        // ④ cancel
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", target, NULL);
            WPLogDebug(@"Alert", @"addCancelBtnTitle available");
        }

        // ⑤ confirm: inject C IMP + addBtnTitle:target:sel:
        walertEnsureCIMPInjected(alertClass);
        if (confirm) {
            objc_setAssociatedObject(alert, &kWAlertConfirmBlockKey, [confirm copy], OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btnSel]) {
            // target = alert 自身，保证点击时 target 存活（alert 正在显示）
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, @"确定", alert, confirmSel);
            WPLogDebug(@"Alert", @"addBtnTitle:target:sel: (target=alert, sel=__walert_confirm) available");
        }

        // ⑥ show
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
            WPLogDebug(@"Alert", @"show available — alert displayed");
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"EXCEPTION: %@", e);
    }
}

#pragma mark - 纯提示弹窗

+ (void)showTipAlert:(NSString *)message {
    [self showTipAlert:message buttonTitle:@"我知道了"];
}

+ (void)showTipAlert:(NSString *)message buttonTitle:(NSString *)buttonTitle {
    Class alertClass = [self alertClass];
    if (!alertClass) return;
    @try {
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:), @"Mio助手", message);
        if (!alert) return;
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, buttonTitle, nil, NULL);
        }
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
            WPLogDebug(@"Alert", @"tip shown: Mio助手");
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"tip error: %@", e);
    }
}

#pragma mark - 确认弹窗（双按钮：取消 + 确认）

+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm {
    Class alertClass = [self alertClass];
    if (!alertClass) return;
    @try {
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)(
            [alertClass alloc], @selector(initWithTitle:message:), @"Mio助手", message);
        if (!alert) return;

        // 取消按钮
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", nil, NULL);
        }

        // 确认按钮 → 注入 C IMP
        walertEnsureCIMPInjected(alertClass);
        if (onConfirm) {
            objc_setAssociatedObject(alert, &kWAlertSimpleConfirmBlockKey, [onConfirm copy],
                                     OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        SEL simpleConfirmSel = NSSelectorFromString(@"__walert_simple_confirm");
        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btnSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, confirmTitle, alert, simpleConfirmSel);
        }

        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
            WPLogDebug(@"Alert", @"confirm shown: %@", confirmTitle);
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"confirm error: %@", e);
    }
}

@end