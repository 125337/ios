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
                if (a.confirmBlock) a.confirmBlock(input ?: @"");
            }), "v@:");

        // 取消：no-op（注册真实 selector，避免 NULL sel 吞按钮分发）
        class_addMethod([_WAlertAnchor class], NSSelectorFromString(@"__walert_cancel"),
            imp_implementationWithBlock(^(id _self) {}), "v@:");

        // 简单确认（无输入框）
        class_addMethod([_WAlertAnchor class], NSSelectorFromString(@"__walert_simple_confirm"),
            imp_implementationWithBlock(^(id _self) {
                void(^cb)(void) = ((_WAlertAnchor *)_self).simpleBlock;
                if (cb) cb();
            }), "v@:");

        // 菜单弹窗：__walert_menu_0 ~ __walert_menu_11
        for (int i = 0; i < kWAlertMenuSlots; i++) {
            int idx = i;
            SEL menuSel = NSSelectorFromString([NSString stringWithFormat:@"__walert_menu_%d", idx]);
            class_addMethod([_WAlertAnchor class], menuSel, imp_implementationWithBlock(^(id _self) {
                NSArray *blocks = ((_WAlertAnchor *)_self).menuBlocks;
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

+ (void)showInputAlert:(NSString *)title
               message:(NSString *)message
           initialText:(NSString *)initialText
           placeholder:(NSString *)placeholder
              keyboard:(UIKeyboardType)keyboardType
                secure:(BOOL)secure
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
        SEL cancelAPI = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelAPI]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelAPI, @"取消", anchor,
                NSSelectorFromString(@"__walert_cancel"));
        } else {
            WPLog(@"Alert", @"!!! addCancelBtnTitle:target:sel: 不存在，取消按钮未注册");
        }

        // ④ 确定：target=锚点（WCR 同款；锚点永不释放 + currentAlert 持有弹窗）
        SEL confirmAPI = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:confirmAPI]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, confirmAPI, @"确定", anchor,
                NSSelectorFromString(@"__walert_confirm"));
        } else {
            WPLog(@"Alert", @"!!! addBtnTitle:target:sel: 不存在，确定按钮未注册");
        }

        // ⑤ show（回调经微信 target/sel 分发至锚点，(84).log 实证可达；
        //    勿再直挂 UIButton——双通道会导致回调触发两次）
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
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"confirm error: %@", e);
    }
}

#pragma mark - 日期时间选择弹窗（自建卡片，不依赖 WCUIAlertView 内部结构）

static UIWindow *MioAlertKeyWindow(void) {
    for (UIWindowScene *sc in [UIApplication sharedApplication].connectedScenes) {
        if (sc.activationState != UISceneActivationStateForegroundActive) continue;
        for (UIWindow *w in sc.windows) {
            if (w.isKeyWindow) return w;
        }
        return sc.windows.firstObject;
    }
    return [UIApplication sharedApplication].keyWindow; // 旧系统兜底
}

static const NSInteger kMioDatePickerTag = 0x4D494F44; // 'MIOD' 防重复弹出标记

+ (UIColor *)mioDynamicLight:(UIColor *)light dark:(UIColor *)dark {
    return [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *tc) {
        return (tc.userInterfaceStyle == UIUserInterfaceStyleDark) ? dark : light;
    }];
}

+ (void)showDatePickerAlert:(NSString *)title
                initialDate:(NSDate *)initialDate
                minimumDate:(NSDate *)minimumDate
                     onPick:(void(^)(NSDate *date))onPick {
    @try {
        UIWindow *window = MioAlertKeyWindow();
        if (!window) { WPLogDebug(@"Alert", @"no key window — date picker aborted"); return; }

        // 防重复：先移除同 tag 旧弹层
        for (UIView *old in [window.subviews copy]) {
            if (old.tag == kMioDatePickerTag) [old removeFromSuperview];
        }

        CGFloat cardW = 280;
        CGFloat pickerH = 216;
        CGFloat btnH = 44;
        CGFloat cardH = 48 + pickerH + btnH;

        UIView *dim = [[UIView alloc] initWithFrame:window.bounds];
        dim.tag = kMioDatePickerTag;
        dim.backgroundColor = [UIColor colorWithWhite:0 alpha:0.45];
        dim.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

        UIView *card = [[UIView alloc] initWithFrame:CGRectMake(0, 0, cardW, cardH)];
        card.center = CGPointMake(CGRectGetMidX(window.bounds), CGRectGetMidY(window.bounds));
        card.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin
                              | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
        card.layer.cornerRadius = 14;
        card.layer.masksToBounds = YES;
        card.backgroundColor = [self mioDynamicLight:[UIColor whiteColor]
                                                dark:[UIColor colorWithRed:0.17 green:0.17 blue:0.18 alpha:1]];
        [dim addSubview:card];

        UILabel *lb = [[UILabel alloc] initWithFrame:CGRectMake(12, 18, cardW - 24, 22)];
        lb.text = title ?: @"选择时间";
        lb.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
        lb.textAlignment = NSTextAlignmentCenter;
        lb.textColor = [self mioDynamicLight:[UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:1]
                                        dark:[UIColor whiteColor]];
        lb.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [card addSubview:lb];

        UIDatePicker *dp = [[UIDatePicker alloc] initWithFrame:CGRectMake(10, 48, cardW - 20, pickerH)];
        if (@available(iOS 13.4, *)) dp.preferredDatePickerStyle = UIDatePickerStyleWheels;
        dp.datePickerMode = UIDatePickerModeDateAndTime;
        dp.minuteInterval = 1;
        dp.date = initialDate ?: [NSDate date];
        if (minimumDate) dp.minimumDate = minimumDate;
        dp.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [card addSubview:dp];

        // 按钮行（iOS 原生 alert 风格：细分隔线 + 取消/确定等宽）
        CGFloat btnY = 48 + pickerH;
        UIView *hline = [[UIView alloc] initWithFrame:CGRectMake(0, btnY, cardW, 0.5)];
        hline.backgroundColor = [self mioDynamicLight:[UIColor colorWithWhite:0.78 alpha:1]
                                                 dark:[UIColor colorWithWhite:0.25 alpha:1]];
        hline.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [card addSubview:hline];
        UIView *vline = [[UIView alloc] initWithFrame:CGRectMake(cardW / 2, btnY, 0.5, btnH)];
        vline.backgroundColor = hline.backgroundColor;
        [card addSubview:vline];

        UIButton *cancel = [UIButton buttonWithType:UIButtonTypeSystem];
        cancel.frame = CGRectMake(0, btnY, cardW / 2, btnH);
        cancel.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin;
        [cancel setTitle:@"取消" forState:UIControlStateNormal];
        cancel.titleLabel.font = [UIFont systemFontOfSize:17];
        [cancel addTarget:dim action:@selector(removeFromSuperview) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:cancel];

        UIButton *ok = [UIButton buttonWithType:UIButtonTypeSystem];
        ok.frame = CGRectMake(cardW / 2, btnY, cardW / 2, btnH);
        ok.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin;
        [ok setTitle:@"确定" forState:UIControlStateNormal];
        ok.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
        // 确定回调经 associated block 分发（__datePickTapped:），回调后关闭弹层
        void (^pickBlock)(NSDate *) = onPick ? [onPick copy] : nil;
        objc_setAssociatedObject(ok, @selector(showDatePickerAlert:initialDate:minimumDate:onPick:), ^{
            if (pickBlock) pickBlock(dp.date);
            [dim removeFromSuperview];
        }, OBJC_ASSOCIATION_COPY_NONATOMIC);
        [ok addTarget:self action:@selector(__datePickTapped:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:ok];

        // 点空白处关闭
        [dim addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:dim action:@selector(removeFromSuperview)]];

        dim.alpha = 0;
        [window addSubview:dim];
        [UIView animateWithDuration:0.2 animations:^{ dim.alpha = 1; }];
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"date picker EXCEPTION: %@", e);
    }
}

+ (void)__datePickTapped:(UIButton *)sender {
    void (^cb)(void) = objc_getAssociatedObject(sender, @selector(showDatePickerAlert:initialDate:minimumDate:onPick:));
    if (cb) cb();
}

@end
