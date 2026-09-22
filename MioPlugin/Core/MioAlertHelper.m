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
static char kWAlertMenuBlocksKey;          // 菜单弹窗的 per-index block 数组

// 菜单弹窗最多按钮数（含动态菜单的现有调用点最多 7 项）
static const int kWAlertMenuSlots = 12;

// 纯 C IMP：WCUIAlertView 调用 addBtnTitle:@"确定" target:alert sel:@selector(__walert_confirm)
// 当按钮被点击，MRC 代码调用 objc_msgSend(alert, @selector(__walert_confirm))
// alert = self, 可以通过 associated object 拿到 confirm block
// 注意：空输入也回调（传空串），输入校验由调用方负责 —— 统一弹窗后的契约
static void __walert_confirm_IMP(id self, SEL _cmd) {
    WPLogDebug(@"Alert", @"CONFIRM CALLBACK FIRED (C IMP on WCUIAlertView)");

    void(^confirmBlock)(NSString *) = objc_getAssociatedObject(self, &kWAlertConfirmBlockKey);

    // 获取输入文本：tipsVc.tipsTextView → tipsVc.tipsTextField → getTextFieldText
    NSString *input = nil;
    @try {
        input = [self valueForKeyPath:@"tipsVc.tipsTextView.text"];
    } @catch (NSException *e) {}
    if (!input || input.length == 0) {
        @try {
            input = [self valueForKeyPath:@"tipsVc.tipsTextField.text"];
        } @catch (NSException *e) {}
    }
    if (!input || input.length == 0) {
        SEL getText = NSSelectorFromString(@"getTextFieldText");
        if ([self respondsToSelector:getText]) {
            input = ((id(*)(id, SEL))objc_msgSend)(self, getText);
        }
    }

    if (confirmBlock) {
        confirmBlock(input ?: @"");
    } else {
        WPLogDebug(@"Alert", @"confirm block missing — skipped");
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

    // 菜单弹窗：__walert_menu_0 ~ __walert_menu_11，各自读 block 数组对应下标
    for (int i = 0; i < kWAlertMenuSlots; i++) {
        int idx = i;
        SEL menuSel = NSSelectorFromString([NSString stringWithFormat:@"__walert_menu_%d", idx]);
        class_addMethod(alertClass, menuSel, imp_implementationWithBlock(^(id _self) {
            NSArray *blocks = objc_getAssociatedObject(_self, &kWAlertMenuBlocksKey);
            if (idx < (int)blocks.count) {
                void(^b)(void) = blocks[idx];
                if (b) b();
            }
        }), "v@:");
    }
    WPLogDebug(@"Alert", @"menu IMPs injected into WCUIAlertView");
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

// 取内部输入框（showTextFieldWithMaxLen: 创建的单行 field）
+ (UITextField *)textFieldInsideAlert:(id)alert {
    @try {
        id v = [alert valueForKeyPath:@"tipsVc.tipsTextField"];
        if ([v isKindOfClass:[UITextField class]]) return v;
    } @catch (NSException *e) {}
    @try {
        id v = [alert valueForKeyPath:@"tipsVc.tipsTextView"];
        if ([v isKindOfClass:[UITextField class]]) return v;
    } @catch (NSException *e) {}
    return nil;
}

+ (WCUIAlertView *)createAlertWithTitle:(NSString *)title message:(NSString *)message {
    Class alertClass = [self alertClass];
    if (!alertClass) return nil;
    WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc],
        @selector(initWithTitle:message:), title ?: @"Mio助手", message ?: @"");
    return alert;
}

#pragma mark - 文本输入弹窗

+ (void)showInputAlertWithInitialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm {
    [self showInputAlertWithInitialText:text message:@"" target:target onConfirm:confirm];
}

+ (void)showInputAlertWithInitialText:(NSString *)text
                              message:(NSString *)message
                               target:(id)target
                            onConfirm:(void(^)(NSString *inputText))confirm {
    [self showInputAlert:@"Mio助手"
                 message:message
             initialText:text
             placeholder:nil
                keyboard:UIKeyboardTypeDefault
                  secure:NO
                  target:target
              onConfirm:confirm];
}

+ (void)showInputAlert:(NSString *)title
               message:(NSString *)message
           initialText:(NSString *)initialText
           placeholder:(NSString *)placeholder
              keyboard:(UIKeyboardType)keyboardType
                secure:(BOOL)secure
                target:(id)target
            onConfirm:(void(^)(NSString *inputText))confirm {
    @try {
        WCUIAlertView *alert = [self createAlertWithTitle:title message:message];
        if (!alert) { WPLogDebug(@"Alert", @"WCUIAlertView unavailable — input alert aborted"); return; }

        // ① 输入框
        SEL stfSel = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stfSel]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stfSel, 99999);
        }

        // ② 反向配置输入框：预填/占位/键盘/密码打点
        UITextField *field = [self textFieldInsideAlert:alert];
        if (field) {
            field.text = initialText ?: @"";
            if (placeholder.length > 0) field.placeholder = placeholder;
            if (keyboardType != UIKeyboardTypeDefault) field.keyboardType = keyboardType;
            field.secureTextEntry = secure;
            field.clearButtonMode = UITextFieldViewModeWhileEditing;
        } else if (initialText.length > 0) {
            // KVC 直取失败的兜底：走微信自身的预填方法
            SEL dtfSel = NSSelectorFromString(@"setTextFieldDefaultText:");
            if ([alert respondsToSelector:dtfSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(alert, dtfSel, initialText);
            }
        }

        // ③ 取消
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", target, NULL);
        }

        // ④ 确定：C IMP + associated block
        walertEnsureCIMPInjected([alert class]);
        if (confirm) {
            objc_setAssociatedObject(alert, &kWAlertConfirmBlockKey, [confirm copy], OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btnSel]) {
            // target = alert 自身，保证点击时 target 存活（alert 正在显示）
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, @"确定", alert, confirmSel);
        }

        // ⑤ show
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"input alert EXCEPTION: %@", e);
    }
}

#pragma mark - 菜单弹窗

+ (void)showMenuAlert:(NSString *)message
              buttons:(NSArray<NSString *> *)titles
             onButton:(void(^)(NSInteger index))onButton {
    @try {
        WCUIAlertView *alert = [self createAlertWithTitle:nil message:message];
        if (!alert) return;

        walertEnsureCIMPInjected([alert class]);
        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        NSMutableArray *blocks = [NSMutableArray array];
        for (NSInteger i = 0; i < (NSInteger)titles.count && i < kWAlertMenuSlots; i++) {
            NSInteger captured = i;
            void(^b)(void) = ^{
                if (onButton) onButton(captured);
            };
            [blocks addObject:b];
            if ([alert respondsToSelector:btnSel]) {
                SEL menuSel = NSSelectorFromString([NSString stringWithFormat:@"__walert_menu_%d", (int)captured]);
                ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, titles[i], alert, menuSel);
            }
        }
        objc_setAssociatedObject(alert, &kWAlertMenuBlocksKey, [blocks copy], OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", nil, NULL);
        }

        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"menu alert EXCEPTION: %@", e);
    }
}

#pragma mark - 纯提示弹窗

+ (void)showTipAlert:(NSString *)message {
    [self showTipAlert:message buttonTitle:@"我知道了"];
}

+ (void)showTipAlert:(NSString *)message buttonTitle:(NSString *)buttonTitle {
    @try {
        WCUIAlertView *alert = [self createAlertWithTitle:@"Mio助手" message:message];
        if (!alert) return;
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, buttonTitle ?: @"我知道了", nil, NULL);
        }
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"tip error: %@", e);
    }
}

#pragma mark - 确认弹窗（双按钮：取消 + 确认）

+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm {
    @try {
        WCUIAlertView *alert = [self createAlertWithTitle:@"Mio助手" message:message];
        if (!alert) return;

        // 取消按钮
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", nil, NULL);
        }

        // 确认按钮 → 注入 C IMP
        walertEnsureCIMPInjected([alert class]);
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
        }
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"confirm error: %@", e);
    }
}

@end
