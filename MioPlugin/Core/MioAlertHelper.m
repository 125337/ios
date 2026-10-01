#import "MioAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"
#import "../Modules/SettingEntry/WPCommonUI.h"

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

#pragma mark - 日期时间选择面板（WCRMomentsScheduledDatePickerPanel 同款还原）

// 六轮 年/月/日/时/分/秒 + 底部弹出面板（逐项对应 WCR 反编译：
// 行高 34、列宽 max(w-36,240)/6、systemFont 17 居中 + 单位后缀、年月联动当月天数、
// 确定校验 >=60s 且 <=31622400s、0.25s 弹入）
static const NSInteger kMioPanelTag = 0x4D494F50; // 'MIOP' 防重复弹出标记
static const double kMioPanelHeight = 310;        // WCR 固定面板高（不含底部安全区）

@interface _MioSchedPickerPanel : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
@property (nonatomic, strong) NSCalendar *calendar;
@property (nonatomic, strong) UIPickerView *picker;
@property (nonatomic, copy) void(^onPick)(NSDate *);
@property (nonatomic, assign) NSInteger minYear, maxYear;
@property (nonatomic, assign) NSInteger selYear, selMonth, selDay, selHour, selMinute, selSecond;
@end

@implementation _MioSchedPickerPanel

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor whiteColor];
        if (@available(iOS 13.0, *)) {
            self.backgroundColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *tc) {
                return (tc.userInterfaceStyle == UIUserInterfaceStyleDark)
                    ? [UIColor colorWithRed:0.11 green:0.11 blue:0.12 alpha:1] : [UIColor whiteColor];
            }];
        }
        _calendar = [[NSCalendar currentCalendar] copy];
        NSDate *now = [NSDate date];
        NSDateComponents *c = [_calendar components:NSCalendarUnitYear fromDate:now];
        _minYear = (NSInteger)c.year;
        _maxYear = _minYear + 5;

        // 顶栏：左标题 右绿色确定（WCR 同款）
        UILabel *lb = [[UILabel alloc] initWithFrame:CGRectMake(16, 12, frame.size.width - 32 - 60, 22)];
        lb.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
        lb.textColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *tc) {
            return (tc.userInterfaceStyle == UIUserInterfaceStyleDark)
                ? [UIColor whiteColor] : [UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:1];
        }];
        lb.tag = 0x544C4241; // 供 showDateTimePickerPanel 设置标题
        [self addSubview:lb];

        UIButton *ok = [UIButton buttonWithType:UIButtonTypeSystem];
        ok.frame = CGRectMake(frame.size.width - 76, 8, 60, 30);
        [ok setTitle:@"确定" forState:UIControlStateNormal];
        [ok setTitleColor:[UIColor colorWithRed:0.035 green:0.733 blue:0.027 alpha:1] forState:UIControlStateNormal]; // 微信绿 #09BB07
        ok.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
        [ok addTarget:self action:@selector(onConfirm) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:ok];

        CGFloat pickerY = 44;
        _picker = [[UIPickerView alloc] initWithFrame:CGRectMake(0, pickerY, frame.size.width, frame.size.height - pickerY)];
        _picker.dataSource = self;
        _picker.delegate = self;
        [_picker setShowsSelectionIndicator:YES];
        [self addSubview:_picker];
    }
    return self;
}

// 当月天数（WCR wcr_daysInMonth 同款：rangeOfUnit:Day inUnit:Month）
- (NSInteger)daysInMonth {
    NSDateComponents *c = [[NSDateComponents alloc] init];
    c.year = self.selYear;
    c.month = self.selMonth;
    c.day = 1;
    NSDate *d = [self.calendar dateFromComponents:c];
    if (!d) return 30;
    NSRange r = [self.calendar rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:d];
    return r.length > 0 ? (NSInteger)r.length : 30;
}

// 初始定位（WCR wcr_setDate_ 同款：nil→now+300s，逐组件 clamp 后 selectRow）
- (void)applyDate:(NSDate *)date {
    NSDate *src = date ?: [NSDate dateWithTimeIntervalSinceNow:300];
    NSDateComponents *c = [self.calendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay
                                                    |NSCalendarUnitHour|NSCalendarUnitMinute|NSCalendarUnitSecond
                                           fromDate:src];
    NSInteger y = (NSInteger)c.year;
    if (y > self.maxYear) y = self.maxYear;
    if (y < self.minYear) y = self.minYear;
    self.selYear = y;
    self.selMonth = MIN(12, MAX(1, (NSInteger)c.month));
    self.selDay = MIN([self daysInMonth], MAX(1, (NSInteger)c.day));
    self.selHour = MIN(23, MAX(0, (NSInteger)c.hour));
    self.selMinute = MIN(59, MAX(0, (NSInteger)c.minute));
    self.selSecond = MIN(59, MAX(0, (NSInteger)c.second));

    [self.picker selectRow:(self.selYear - self.minYear) inComponent:0 animated:NO];
    [self.picker selectRow:(self.selMonth - 1) inComponent:1 animated:NO];
    [self.picker selectRow:(self.selDay - 1) inComponent:2 animated:NO];
    [self.picker selectRow:self.selHour inComponent:3 animated:NO];
    [self.picker selectRow:self.selMinute inComponent:4 animated:NO];
    [self.picker selectRow:self.selSecond inComponent:5 animated:NO];
}

// 合成选中时间（WCR wcr_selectedDate 同款：NSDateComponents → calendar date，失败回落 now）
- (NSDate *)selectedDate {
    NSDateComponents *c = [[NSDateComponents alloc] init];
    c.year = self.selYear;
    c.month = self.selMonth;
    c.day = MIN([self daysInMonth], self.selDay);
    c.hour = self.selHour;
    c.minute = self.selMinute;
    c.second = self.selSecond;
    NSDate *d = [self.calendar dateFromComponents:c];
    return d ?: [NSDate date];
}

// 确定（WCR onConfirm 同款校验：<60s toast；>31622400s toast；通过→onPick）
- (void)onConfirm {
    NSDate *d = [self selectedDate];
    double delta = [d timeIntervalSinceNow];
    if (delta < 60.0) {
        WPShowToast(@"定时时间至少为 1 分钟后");
        return;
    }
    if (delta > 31622400.0) {
        WPShowToast(@"定时时间不能超过一年");
        return;
    }
    void (^cb)(NSDate *) = self.onPick;
    void (^dismiss)(void) = ^{ [self.superview removeFromSuperview]; }; // superview=dim
    if (cb) cb(d);
    dismiss();
}

#pragma mark - UIPickerViewDataSource / Delegate

- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView { return 6; }

- (NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component {
    switch (component) {
        case 0: return self.maxYear - self.minYear + 1;
        case 1: return 12;
        case 2: return [self daysInMonth];
        case 3: return 24;
        case 4: return 60;
        case 5: return 60;
        default: return 0;
    }
}

- (CGFloat)pickerView:(UIPickerView *)pickerView rowHeightForComponent:(NSInteger)component { return 34.0; }

- (CGFloat)pickerView:(UIPickerView *)pickerView widthForComponent:(NSInteger)component {
    CGFloat w = self.bounds.size.width;
    if (w < 1.0) w = 1.0;
    CGFloat usable = w - 36.0;
    if (usable < 240.0) usable = 240.0;
    return usable / 6.0;
}

- (NSString *)unitSuffixForComponent:(NSInteger)component {
    static NSArray *units = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ units = @[@"年", @"月", @"日", @"时", @"分", @"秒"]; });
    return (component >= 0 && component < 6) ? units[component] : @"";
}

// 行标题（WCR wcr_pickerTitleForRow 同款：%02ld 年 / %ld 月 ...，年为两位显示）
- (NSString *)titleForRow:(NSInteger)row component:(NSInteger)component {
    NSInteger v = 0;
    switch (component) {
        case 0: v = self.minYear + row; return [NSString stringWithFormat:@"%02ld", (long)(v % 100)];
        case 1: v = row + 1; break;
        case 2: v = row + 1; break;
        case 3: v = row; return [NSString stringWithFormat:@"%02ld", (long)v];
        case 4: v = row; return [NSString stringWithFormat:@"%02ld", (long)v];
        case 5: v = row; return [NSString stringWithFormat:@"%02ld", (long)v];
        default: return @"-";
    }
    return [NSString stringWithFormat:@"%ld", (long)v];
}

- (UIView *)pickerView:(UIPickerView *)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView *)view {
    UILabel *lb = ([view isKindOfClass:[UILabel class]]) ? (UILabel *)view : [[UILabel alloc] init];
    lb.textAlignment = NSTextAlignmentCenter;
    lb.font = [UIFont systemFontOfSize:17 weight:UIFontWeightRegular];
    lb.adjustsFontSizeToFitWidth = YES;
    lb.minimumScaleFactor = 0.7;
    lb.baselineAdjustment = UIBaselineAdjustmentAlignCenters;
    lb.lineBreakMode = NSLineBreakByCharWrapping;
    lb.textColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *tc) {
        return (tc.userInterfaceStyle == UIUserInterfaceStyleDark)
            ? [UIColor whiteColor] : [UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:1];
    }];
    lb.text = [NSString stringWithFormat:@"%@%@", [self titleForRow:row component:component],
                                                  [self unitSuffixForComponent:component]];
    return lb;
}

// 年/月变化联动当月天数（WCR didSelectRow 同款：日 clamp + reloadComponent(2) + selectRow）
- (void)pickerView:(UIPickerView *)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component {
    switch (component) {
        case 0: self.selYear = self.minYear + row; break;
        case 1: self.selMonth = row + 1; break;
        case 2: self.selDay = row + 1; break;
        case 3: self.selHour = row; break;
        case 4: self.selMinute = row; break;
        case 5: self.selSecond = row; break;
        default: break;
    }
    if (component < 2) {
        NSInteger dim = [self daysInMonth];
        if (self.selDay > dim) self.selDay = dim;
        [pickerView reloadComponent:2];
        [pickerView selectRow:(self.selDay - 1) inComponent:2 animated:NO];
    }
}

@end

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

+ (void)showDateTimePickerPanel:(NSString *)title
                    initialDate:(NSDate *)initialDate
                         onPick:(void(^)(NSDate *date))onPick {
    @try {
        UIWindow *window = MioAlertKeyWindow();
        if (!window) { WPLogDebug(@"Alert", @"no key window — picker panel aborted"); return; }

        // 防重复：先移除同 tag 旧弹层
        for (UIView *old in [window.subviews copy]) {
            if (old.tag == kMioPanelTag) [old removeFromSuperview];
        }

        CGFloat safeBottom = window.safeAreaInsets.bottom;
        CGFloat panelH = kMioPanelHeight + safeBottom;
        CGFloat hostH = window.bounds.size.height;

        UIView *dim = [[UIView alloc] initWithFrame:window.bounds];
        dim.tag = kMioPanelTag;
        dim.backgroundColor = [UIColor colorWithWhite:0 alpha:0.5];
        dim.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

        _MioSchedPickerPanel *panel = [[_MioSchedPickerPanel alloc] initWithFrame:CGRectMake(0, 0, window.bounds.size.width, panelH)];
        UILabel *lb = (UILabel *)[panel viewWithTag:0x544C4241];
        lb.text = title ?: @"选择时间";
        panel.onPick = onPick ? [onPick copy] : nil;
        [panel applyDate:initialDate];

        // 遮罩点击关闭；panel 点击不透传（挡住手势）
        [dim addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:dim action:@selector(removeFromSuperview)]];
        [panel addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:nil action:NULL]];

        [dim addSubview:panel];
        panel.frame = CGRectMake(0, hostH, window.bounds.size.width, panelH); // 初始在屏外
        [window addSubview:dim];

        // 底部弹入（WCR presentInView 同款 0.25s 动画）
        [UIView animateWithDuration:0.25 animations:^{
            panel.frame = CGRectMake(0, hostH - panelH, window.bounds.size.width, panelH);
        }];
    } @catch (NSException *e) {
        WPLogDebug(@"Alert", @"picker panel EXCEPTION: %@", e);
    }
}

@end
