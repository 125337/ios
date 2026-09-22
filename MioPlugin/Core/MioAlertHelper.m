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

    // 回调触发 + 读值一并打日志（闭环：既证明分发通了，也证明输入读到了）
    WPLog(@"Alert", @"CONFIRM CALLBACK FIRED input=%@ block=%@", input ?: @"<nil>",
          confirmBlock ? @"yes" : @"no");
    if (confirmBlock) {
        confirmBlock(input ?: @"");
    }
}

// 确保 C IMP 只注入一次
static void walertEnsureCIMPInjected(Class alertClass) {
    SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
    if ([alertClass instancesRespondToSelector:confirmSel]) return;

    class_addMethod(alertClass, confirmSel, (IMP)__walert_confirm_IMP, "v@:");
    WPLogDebug(@"Alert", @"__walert_confirm C IMP injected into WCUIAlertView");

    // 取消按钮回调：no-op（注册真实 selector，避免 NULL sel 在 MRC 侧吞掉按钮分发）
    SEL cancelHookSel = NSSelectorFromString(@"__walert_cancel");
    class_addMethod(alertClass, cancelHookSel, imp_implementationWithBlock(^(id _self) {}), "v@:");

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

// 按候选列表探测按钮注册 API（不同微信版本命名不一），返回命中的 SEL，未命中返回 NULL
static SEL walertProbeSelector(id alert, const char *const candidates[], NSInteger count) {
    for (NSInteger i = 0; i < count; i++) {
        SEL s = NSSelectorFromString(@(candidates[i]));
        if ([alert respondsToSelector:s]) return s;
    }
    return NULL;
}

// 一次性 dump WCUIAlertView 全部实例方法（候选全 miss 时定位真实按钮 API）
static void walertDumpMethods(Class cls) {
    static BOOL dumped = NO;
    if (dumped) return;
    dumped = YES;
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    NSMutableArray *names = [NSMutableArray array];
    for (unsigned int i = 0; i < count; i++) {
        [names addObject:NSStringFromSelector(method_getName(list[i]))];
    }
    free(list);
    WPLog(@"Alert", @"[WCDUMP] WCUIAlertView 实例方法(%u): %@", count, [names componentsJoinedByString:@" | "]);
}

// ============ show 后按钮直挂（绕过微信版本的按钮分发差异）============
// (80).log 实证：addBtnTitle:target:sel: 注册成功但微信点击不回调 target/sel
// （「确定按钮注册」日志在而 CONFIRM CALLBACK FIRED 不在 → 分发机制失联）。
// 修复：show 之后（主队列异步，等微信把按钮挂上视图树）递归遍历弹窗视图树，
// 找 title 匹配的 UIButton 直接 addTarget 注入 sel。IMP 是注入的 C 方法（永久有效）。
// target=alert 与微信自身设计一致（弹窗存活期内安全）。

static void walertCollectButtons(UIView *root, NSMutableArray<UIButton *> *out) {
    if ([root isKindOfClass:[UIButton class]]) [out addObject:(UIButton *)root];
    for (UIView *sub in root.subviews) walertCollectButtons(sub, out);
}

// titles 与 selNames 一一对应
static void walertDirectHookButtons(id alert, NSArray<NSString *> *titles, NSArray<NSString *> *selNames) {
    UIView *rootView = nil;
    if ([alert isKindOfClass:[UIView class]]) rootView = (UIView *)alert;
    if (!rootView) {
        @try {
            id tipsVc = [alert valueForKey:@"tipsVc"];
            if ([tipsVc isKindOfClass:[UIViewController class]]) rootView = [(UIViewController *)tipsVc view];
        } @catch (NSException *e) {}
    }
    NSMutableArray<UIButton *> *btns = [NSMutableArray array];
    if (rootView) walertCollectButtons(rootView, btns);

    NSMutableArray *descs = [NSMutableArray array];
    for (UIButton *b in btns) {
        [descs addObject:[NSString stringWithFormat:@"%@[%@]", NSStringFromClass([b class]),
                          [b titleForState:UIControlStateNormal] ?: @""]];
    }
    WPLog(@"Alert", @"[BTNHOOK] 视图树按钮(%lu) 起点=%@: %@", (unsigned long)btns.count,
          rootView ? NSStringFromClass([rootView class]) : @"nil",
          btns.count ? [descs componentsJoinedByString:@" | "] : @"无");

    for (UIButton *b in btns) {
        NSString *t = [b titleForState:UIControlStateNormal] ?: @"";
        for (NSUInteger i = 0; i < titles.count && i < selNames.count; i++) {
            if ([t isEqualToString:titles[i]]) {
                SEL s = NSSelectorFromString(selNames[i]);
                [b addTarget:alert action:s forControlEvents:UIControlEventTouchUpInside];
                WPLog(@"Alert", @"[BTNHOOK] 直挂 \"%@\" -> %@", t, selNames[i]);
            }
        }
    }
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

        // ③ 取消：真实 no-op selector（target=alert 自身保证存活；NULL sel 曾疑致按钮分发异常）
        static const char *const kCancelSels[] = {
            "addCancelBtnTitle:target:sel:", "addCancleBtnTitle:target:sel:",
            "addCancelTitle:target:sel:", "addCancelButtonTitle:target:sel:",
        };
        SEL cancelProbe = walertProbeSelector(alert, kCancelSels, 4);
        SEL cancelHook = NSSelectorFromString(@"__walert_cancel");
        if (cancelProbe) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelProbe, @"取消", alert, cancelHook);
        } else {
            WPLog(@"Alert", @"取消按钮 API 未命中候选（跳过取消注册）");
            walertDumpMethods([alert class]);
        }

        // ④ 确定：C IMP + associated block；多候选探测注册 API（addBtnTitle 曾疑似不存在致回调失联）
        walertEnsureCIMPInjected([alert class]);
        if (confirm) {
            objc_setAssociatedObject(alert, &kWAlertConfirmBlockKey, [confirm copy], OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
        static const char *const kConfirmSels[] = {
            "addBtnTitle:target:sel:", "addOneBtnTitle:target:sel:",
            "addButtonTitle:target:sel:", "addOKBtnTitle:target:sel:",
            "addOkBtnTitle:target:sel:", "addConfirmBtnTitle:target:sel:",
            "addBtnWithTitle:target:sel:", "addBtn:target:sel:",
        };
        SEL confirmProbe = walertProbeSelector(alert, kConfirmSels, 8);
        if (confirmProbe) {
            WPLog(@"Alert", @"确定按钮注册: %@ -> __walert_confirm", NSStringFromSelector(confirmProbe));
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, confirmProbe, @"确定", alert, confirmSel);
        } else {
            WPLog(@"Alert", @"!!! 确定 API 未命中任何候选，dump WCUIAlertView 方法表");
            walertDumpMethods([alert class]);
        }

        // ⑤ show；随后直挂「确定」按钮（(80).log 实证微信 addBtnTitle:target:sel: 注册在但不回调）
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, @[@"确定", @"OK"], @[@"__walert_confirm"]);
        });
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
        NSMutableArray *menuSelNames = [NSMutableArray array];
        for (NSInteger i = 0; i < (NSInteger)titles.count && i < kWAlertMenuSlots; i++) {
            NSInteger captured = i;
            void(^b)(void) = ^{
                if (onButton) onButton(captured);
            };
            [blocks addObject:b];
            [menuSelNames addObject:[NSString stringWithFormat:@"__walert_menu_%d", (int)captured]];
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
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, titles, menuSelNames);
        });
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
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, @[confirmTitle ?: @"确定"], @[@"__walert_simple_confirm"]);
        });
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"confirm error: %@", e);
    }
}

@end
