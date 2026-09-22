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

// ==================== WCR 同款锚点：target 必须是长生命周期对象 ====================
// WCR 反编译（presentTextAlertTitle:.../showCornerRadiusInputAlert）实证其用法：
//   addBtnTitle:@"确定" target:self(VC) sel:...  +  [self setCurrentAlert:alert]
// Mio 此前 target=alert 且本文件是 ARC —— 函数返回即 release；微信 MRC 内部对 target
// 只 assign 不 retain，点击分发时 target 已悬垂 → respondsToSelector 静默失败
// （(80).log 症状：注册在、回调无、不崩）。对齐 WCR：全局锚点单例充当"VC"角色——
// currentAlert 强持有弹窗防释放，回调 block 挂锚点属性，target=锚点永不释放。

@interface _WAlertAnchor : NSObject
@property (nonatomic, strong) id currentAlert;                 // 强持有弹窗（WCR setCurrentAlert 同款）
@property (nonatomic, copy) void(^confirmBlock)(NSString *);   // 输入弹窗回调
@property (nonatomic, copy) void(^simpleBlock)(void);          // 确认弹窗回调
@property (nonatomic, copy) NSArray *menuBlocks;               // 菜单弹窗 per-index 回调
@end

@implementation _WAlertAnchor
@end

static _WAlertAnchor *kWAlertAnchor = nil;

// 菜单弹窗最多按钮数（含动态菜单的现有调用点最多 7 项）
static const int kWAlertMenuSlots = 12;

static _WAlertAnchor *walertAnchor(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        kWAlertAnchor = [[_WAlertAnchor alloc] init];

        // 确定（输入弹窗）：从 currentAlert 读输入文本（WCR currentAlertTextFromSender_ 同款路径）
        class_addMethod([_WAlertAnchor class], NSSelectorFromString(@"__walert_confirm"),
            imp_implementationWithBlock(^(id _self) {
                _WAlertAnchor *a = (_WAlertAnchor *)_self;
                NSString *input = nil;
                id alert = a.currentAlert;
                if (alert) {
                    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; } @catch (NSException *e) {}
                    if (!input || input.length == 0) {
                        @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextField.text"]; } @catch (NSException *e) {}
                    }
                    if (!input || input.length == 0) {
                        SEL getText = NSSelectorFromString(@"getTextFieldText");
                        if ([alert respondsToSelector:getText]) {
                            input = ((id(*)(id, SEL))objc_msgSend)(alert, getText);
                        }
                    }
                }
                WPLog(@"Alert", @"CONFIRM CALLBACK FIRED input=%@ block=%@", input ?: @"<nil>",
                      a.confirmBlock ? @"yes" : @"no");
                if (a.confirmBlock) a.confirmBlock(input ?: @"");
            }), "v@:");

        // 取消：no-op（注册真实 selector，避免 NULL sel 吞按钮分发）
        class_addMethod([_WAlertAnchor class], NSSelectorFromString(@"__walert_cancel"),
            imp_implementationWithBlock(^(id _self) {}), "v@:");

        // 简单确认（无输入框）
        class_addMethod([_WAlertAnchor class], NSSelectorFromString(@"__walert_simple_confirm"),
            imp_implementationWithBlock(^(id _self) {
                void(^cb)(void) = ((_WAlertAnchor *)_self).simpleBlock;
                WPLog(@"Alert", @"SIMPLE CONFIRM FIRED block=%@", cb ? @"yes" : @"no");
                if (cb) cb();
            }), "v@:");

        // 菜单弹窗：__walert_menu_0 ~ __walert_menu_11
        for (int i = 0; i < kWAlertMenuSlots; i++) {
            int idx = i;
            SEL menuSel = NSSelectorFromString([NSString stringWithFormat:@"__walert_menu_%d", idx]);
            class_addMethod([_WAlertAnchor class], menuSel, imp_implementationWithBlock(^(id _self) {
                NSArray *blocks = ((_WAlertAnchor *)_self).menuBlocks;
                WPLog(@"Alert", @"MENU FIRED idx=%d blocks=%lu", idx, (unsigned long)blocks.count);
                if (idx < (int)blocks.count) {
                    void(^b)(void) = blocks[idx];
                    if (b) b();
                }
            }), "v@:");
        }
        WPLogDebug(@"Alert", @"anchor IMPs injected (WCR mode: target=anchor + currentAlert)");
    });
    return kWAlertAnchor;
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

// ============ show 后按钮直挂（第二道保险）============
// 若微信 target/sel 分发仍不可达，遍历弹窗视图树找 title 匹配的 UIButton
// 直接 addTarget。target=锚点（永不释放），SEL 已注入锚点类。

static void walertCollectButtons(UIView *root, NSMutableArray<UIButton *> *out) {
    if ([root isKindOfClass:[UIButton class]]) [out addObject:(UIButton *)root];
    for (UIView *sub in root.subviews) walertCollectButtons(sub, out);
}

// titles 与 selNames 一一对应
static void walertDirectHookButtons(id alert, id target, NSArray<NSString *> *titles, NSArray<NSString *> *selNames) {
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
                [b addTarget:target action:s forControlEvents:UIControlEventTouchUpInside];
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

        _WAlertAnchor *anchor = walertAnchor();
        anchor.currentAlert = alert;                 // WCR setCurrentAlert 同款：强持有防释放
        anchor.confirmBlock = confirm ? [confirm copy] : nil;

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

        // ③ 取消：no-op selector，target=锚点（WCR 同款 target=VC 模式）
        static const char *const kCancelSels[] = {
            "addCancelBtnTitle:target:sel:", "addCancleBtnTitle:target:sel:",
            "addCancelTitle:target:sel:", "addCancelButtonTitle:target:sel:",
        };
        SEL cancelProbe = walertProbeSelector(alert, kCancelSels, 4);
        SEL cancelHook = NSSelectorFromString(@"__walert_cancel");
        if (cancelProbe) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelProbe, @"取消", anchor, cancelHook);
        } else {
            WPLog(@"Alert", @"取消按钮 API 未命中候选（跳过取消注册）");
            walertDumpMethods([alert class]);
        }

        // ④ 确定：target=锚点（WCR 同款；锚点永不释放 + currentAlert 持有弹窗）
        SEL confirmSel = NSSelectorFromString(@"__walert_confirm");
        static const char *const kConfirmSels[] = {
            "addBtnTitle:target:sel:", "addOneBtnTitle:target:sel:",
            "addButtonTitle:target:sel:", "addOKBtnTitle:target:sel:",
            "addOkBtnTitle:target:sel:", "addConfirmBtnTitle:target:sel:",
            "addBtnWithTitle:target:sel:", "addBtn:target:sel:",
        };
        SEL confirmProbe = walertProbeSelector(alert, kConfirmSels, 8);
        if (confirmProbe) {
            WPLog(@"Alert", @"确定按钮注册: %@ target=anchor", NSStringFromSelector(confirmProbe));
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, confirmProbe, @"确定", anchor, confirmSel);
        } else {
            WPLog(@"Alert", @"!!! 确定 API 未命中任何候选，dump WCUIAlertView 方法表");
            walertDumpMethods([alert class]);
        }

        // ⑤ show；随后直挂「确定」按钮（第二道保险）
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, anchor, @[@"确定", @"OK"], @[@"__walert_confirm"]);
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

        _WAlertAnchor *anchor = walertAnchor();
        anchor.currentAlert = alert;

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
                ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, titles[i], anchor, menuSel);
            }
        }
        anchor.menuBlocks = [blocks copy];

        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", anchor,
                NSSelectorFromString(@"__walert_cancel"));
        }

        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, anchor, titles, menuSelNames);
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
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, buttonTitle ?: @"我知道了",
                walertAnchor(), NSSelectorFromString(@"__walert_cancel"));
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

        _WAlertAnchor *anchor = walertAnchor();
        anchor.currentAlert = alert;
        anchor.simpleBlock = onConfirm ? [onConfirm copy] : nil;

        // 取消按钮
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", anchor,
                NSSelectorFromString(@"__walert_cancel"));
        }

        // 确认按钮 → target=锚点
        SEL simpleConfirmSel = NSSelectorFromString(@"__walert_simple_confirm");
        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btnSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, confirmTitle, anchor, simpleConfirmSel);
        }

        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            walertDirectHookButtons(alert, anchor, @[confirmTitle ?: @"确定"], @[@"__walert_simple_confirm"]);
        });
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"confirm error: %@", e);
    }
}

@end
