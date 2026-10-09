//
//  HomeCardCalendarPopup.m
//  MioPlugin
//
//  月历弹层 —— XOS 同款（XOS反编译 FUN__part3.c 实证，无猜测）：
//
//  【容器】FUN_00153438（15839-15902）：全屏遮罩 + tap 手势关闭；
//   面板宽 = min(屏宽-32, ~340)，背景 systemBackground，cornerRadius=16，带 shadow，
//   屏幕居中；弹出动画 0.25s。
//
//  【内容】FUN_00153830（~15913-16600）：
//   ◀ 左 (16,14,36,30)、▶ 右 (W-52,14,36,30) 夹居中年月标题 font17 Bold；
//   （Mio 调整：XOS 原版样式按钮 (88,14) 会压住居中标题 → 移到第二行 (16,48,80,20)）
//   样式按钮「样式-黑」font11 Medium 橙色左对齐；三胶囊右对齐第二行（间距 6）
//   font11 Medium 高 17，开启态底色各异；
//   星期行 y=76 h=18，cellW=(W-32)/7，font11 Medium，周末列 accent 红；
//   网格首行 y=94，行高 42：今天块 = min(cellW-4,35) 方形圆角 8 居中 y=rowY+1；
//   日号 (colX,rowY+3,cellW,17) font14；农历 (colX,rowY+19,cellW,11) font7.5；
//   休班角标 (colX+cellW-14,rowY+1,12,12) font7 圆角 6：1=休(红底) 2=班(橙底)；
//   网格总高 = 首行 y + rows*42 + 12（面板高随月份行数调整）。
//
//  【动作】cadis_calendarPrev/NextMonth = FUN_00155054/00155068（月偏移 ±1 + rebuild）；
//   cadis_switchCalendarStyle = FUN_00155348（选样式黑/白）；
//   cadis_toggleMondayFirst/Holiday/XiuBan = FUN_00155138/0015507c/001551f4
//   （取反存 NSUserDefaults + rebuild）；cadis_dismissCalendarPopup = FUN_001556dc。
//
//  【持久化键】（NSUserDefaults；XOS CadisCalendar* 同语义）
//   MioCalMondayFirst（周一起始，默认关）/ MioCalShowHoliday（节日显示，默认开——
//   与 XOS 弹层截图一致：节日/节气红字显示中）/ MioCalXiuBan（休班角标，默认关）；
//   MioCalStyle（integer 0黑/1白，XOS CadisCalendarStyle）。
//
//  【数据】调休 = 国务院办公厅《2026 年部分节假日安排》（2025-11-04 发布，官方实锤）；
//   节气 = 21 世纪寿星通式 D=[Y×0.2422+C]−[Y/4]（2026-10-08 寒露 / 10-23 霜降
//   与 XOS 弹层截图一致，个别年份或差 1 天为公式固有精度）。
//

#import "HomeCardCalendarPopup.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/WPUtility.h"
#import <objc/runtime.h>

#pragma mark - 弹层

@interface HomeCardCalendarPopup () <UIGestureRecognizerDelegate>
@property (nonatomic, strong) UIView *mask;
@property (nonatomic, strong) UIView *panel;
@property (nonatomic, strong) UIView *content;   // rebuild 时清空重画
@end

#pragma mark - 手势 target（block 转发；UIGestureRecognizer 对 target 非强持有）

@interface CalTapTarget : NSObject
@property (nonatomic, copy) void (^block)(void);
- (void)onTap;
@end
@implementation CalTapTarget
- (void)onTap { if (self.block) self.block(); }
@end

@implementation HomeCardCalendarPopup

#pragma mark - 农历（iOS 系统中国农历 NSCalendarIdentifierChinese，ICU 权威历法，无数据表。
// 压缩表方案已弃用：实测 2015 年起春节累计偏移 14-17 天，数据不可靠）

+ (BOOL)lunarMonthDay:(NSDate *)date month:(NSInteger *)outMonth day:(NSInteger *)outDay leap:(BOOL *)outLeap {
    static NSCalendar *cn = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        cn = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierChinese];
    });
    NSDateComponents *c = [cn components:NSCalendarUnitMonth | NSCalendarUnitDay fromDate:date];
    // 农历闰月：components 读取时 month 为负值（-6 = 闰六月，NSCalendar 文档化行为；
    // leapMonth 属性读取方向不保证填充，不依赖）
    NSInteger m = c.month;
    BOOL leap = (m < 0);
    if (leap) m = -m;
    if (m < 1 || m > 12 || c.day < 1 || c.day > 30) return NO;
    if (outMonth) *outMonth = m;
    if (outDay) *outDay = c.day;
    if (outLeap) *outLeap = leap;
    return YES;
}

+ (NSString *)lunarDayText:(NSDate *)date {
    NSInteger d = 0;
    if (![self lunarMonthDay:date month:nil day:&d leap:nil]) return nil;
    static NSString *const ones[] = { @"一", @"二", @"三", @"四", @"五", @"六", @"七", @"八", @"九", @"十" };
    if (d == 10) return @"初十";
    if (d == 20) return @"二十";
    if (d == 30) return @"三十";
    if (d < 10) return [NSString stringWithFormat:@"初%@", ones[d - 1]];
    if (d < 20) return [NSString stringWithFormat:@"十%@", ones[d - 11]];
    return [NSString stringWithFormat:@"廿%@", ones[d - 21]];
}

#pragma mark - 节气 / 节日 / 调休

// 24 节气（21 世纪寿星通式：D=[Y×0.2422+C]−[Y/4]，Y=年份后两位）
static NSString *SolarTermFor(int year, int month, int day) {
    static const struct { int month; double c; const char *name; } terms[] = {
        {1, 5.4055, "小寒"},   {1, 20.12,  "大寒"},
        {2, 3.87,   "立春"},   {2, 18.73,  "雨水"},
        {3, 5.63,   "惊蛰"},   {3, 20.646, "春分"},
        {4, 4.81,   "清明"},   {4, 20.1,   "谷雨"},
        {5, 5.52,   "立夏"},   {5, 21.04,  "小满"},
        {6, 5.678,  "芒种"},   {6, 21.37,  "夏至"},
        {7, 7.108,  "小暑"},   {7, 22.83,  "大暑"},
        {8, 7.5,    "立秋"},   {8, 23.13,  "处暑"},
        {9, 7.646,  "白露"},   {9, 23.042, "秋分"},
        {10, 8.318, "寒露"},   {10, 23.438,"霜降"},
        {11, 7.438, "立冬"},   {11, 22.36, "小雪"},
        {12, 7.18,  "大雪"},   {12, 21.94, "冬至"},
    };
    int yy = year % 100;
    for (int i = 0; i < 24; i++) {
        if (terms[i].month != month) continue;
        int d = (int)(yy * 0.2422 + terms[i].c) - yy / 4;
        if (d == day) return [NSString stringWithUTF8String:terms[i].name];
    }
    return nil;
}

// 节日名（公历节日 > 农历节日（闰月不算）> 除夕 > 节气）
static NSString *FestivalName(int gy, int gm, int gd, NSDate *date) {
    if (gm == 1 && gd == 1) return @"元旦";
    if (gm == 5 && gd == 1) return @"劳动节";
    if (gm == 10 && gd == 1) return @"国庆节";

    NSInteger lm = 0, ld = 0;
    BOOL leap = NO;
    if ([HomeCardCalendarPopup lunarMonthDay:date month:&lm day:&ld leap:&leap]) {
        if (!leap) {
            if (lm == 1 && ld == 1) return @"春节";
            if (lm == 1 && ld == 15) return @"元宵节";
            if (lm == 5 && ld == 5) return @"端午节";
            if (lm == 7 && ld == 7) return @"七夕节";
            if (lm == 8 && ld == 15) return @"中秋节";
            if (lm == 9 && ld == 9) return @"重阳节";
            if (lm == 12 && ld == 8) return @"腊八节";
            if (lm == 12) {   // 除夕 = 腊月最后一天（次日转入正月）
                NSCalendar *g = [NSCalendar currentCalendar];
                NSDate *next = [g dateByAddingUnit:NSCalendarUnitDay value:1 toDate:date options:0];
                NSInteger nm = 0;
                if ([HomeCardCalendarPopup lunarMonthDay:next month:&nm day:nil leap:nil] && nm == 1) {
                    return @"除夕";
                }
            }
        }
    }
    return SolarTermFor(gy, gm, gd);
}

// 调休（国务院办公厅《2026 年部分节假日安排》官方实锤：1=休 2=班；其余年份无内置数据）
static NSDictionary<NSString *, NSNumber *> *XiuBanMap(void) {
    static NSDictionary *map = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        map = @{
            // 元旦：1.1-1.3 放假，1.4（周日）上班
            @"2026-01-01": @1, @"2026-01-02": @1, @"2026-01-03": @1, @"2026-01-04": @2,
            // 春节：2.15-2.23 放假 9 天，2.14、2.28（周六）上班
            @"2026-02-14": @2, @"2026-02-15": @1, @"2026-02-16": @1, @"2026-02-17": @1,
            @"2026-02-18": @1, @"2026-02-19": @1, @"2026-02-20": @1, @"2026-02-21": @1,
            @"2026-02-22": @1, @"2026-02-23": @1, @"2026-02-28": @2,
            // 清明节：4.4-4.6 放假（无调休）
            @"2026-04-04": @1, @"2026-04-05": @1, @"2026-04-06": @1,
            // 劳动节：5.1-5.5 放假，5.9（周六）上班
            @"2026-05-01": @1, @"2026-05-02": @1, @"2026-05-03": @1, @"2026-05-04": @1,
            @"2026-05-05": @1, @"2026-05-09": @2,
            // 端午节：6.19-6.21 放假（无调休）
            @"2026-06-19": @1, @"2026-06-20": @1, @"2026-06-21": @1,
            // 中秋节：9.25-9.27 放假（无调休）
            @"2026-09-25": @1, @"2026-09-26": @1, @"2026-09-27": @1,
            // 国庆节：10.1-10.7 放假，9.20（周日）、10.10（周六）上班
            @"2026-09-20": @2, @"2026-10-01": @1, @"2026-10-02": @1, @"2026-10-03": @1,
            @"2026-10-04": @1, @"2026-10-05": @1, @"2026-10-06": @1, @"2026-10-07": @1,
            @"2026-10-10": @2,
        };
    });
    return map;
}

#pragma mark - 开关（NSUserDefaults 持久化，XOS CadisCalendar* 同语义）

static NSString * const kKeyMondayFirst = @"MioCalMondayFirst";
static NSString * const kKeyShowHoliday = @"MioCalShowHoliday";
static NSString * const kKeyXiuBan      = @"MioCalXiuBan";
static NSString * const kKeyStyle       = @"MioCalStyle";

static BOOL CalMondayFirst(void) { return [[NSUserDefaults standardUserDefaults] boolForKey:kKeyMondayFirst]; }

// 节日显示默认开（与 XOS 弹层截图一致：节日/节气红字显示中）
static BOOL CalShowHoliday(void) {
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    return [ud objectForKey:kKeyShowHoliday] ? [ud boolForKey:kKeyShowHoliday] : YES;
}
static BOOL CalXiuBan(void)      { return [[NSUserDefaults standardUserDefaults] boolForKey:kKeyXiuBan]; }
static NSInteger CalStyle(void)  { return (NSInteger)[[NSUserDefaults standardUserDefaults] integerForKey:kKeyStyle]; }

static void CalSetBool(NSString *key, BOOL value) { [[NSUserDefaults standardUserDefaults] setBool:value forKey:key]; }

#pragma mark - 卡片布局样式（Mio 扩展：首页卡片挂件布局样式，与弹层黑白主题键 MioCalStyle 分离）

static NSString * const kKeyCardStyle = @"MioCalCardStyle";   // 卡片样式 0=默认周历 1-8=布局样式（值序 = styleNames，XOS 剔除月历迷你后重排）

+ (NSArray<NSString *> *)styleNames {
    static NSArray *names = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        names = @[@"默认周历", @"中式传统（宜忌）", @"今日聚焦（进度）", @"倒计时",
                  @"极简横条", @"双栏信息", @"时间线", @"圆环进度", @"翻页日历"];
    });
    return names;
}

+ (NSInteger)currentStyle {
    NSInteger s = (NSInteger)[[NSUserDefaults standardUserDefaults] integerForKey:kKeyCardStyle];
    return (s >= 0 && s <= 8) ? s : 0;   // 越界兜底回默认周历
}

// 当日宜忌：XOS 内置 25 词池（二进制 3466630-3466780 实证）。XOS 的逐日选词算法
// 未逆向（费用取舍）→ 用日期种子轮转替代：每天固定、跨样式一致、逐日不同，
// 但选词与 XOS 当天可能不一致（如需逐词一致再单独逆向选词函数）
+ (NSArray<NSArray<NSString *> *> *)yiJiForDate:(NSDate *)date {
    static NSArray<NSString *> *pool = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        pool = @[@"嫁娶", @"开光", @"祭祀", @"祈福", @"出行", @"解除", @"移徙", @"入宅",
                 @"开市", @"交易", @"立券", @"安床", @"纳财", @"栽种", @"纳畜", @"安葬",
                 @"修造", @"动土", @"竖柱", @"上梁", @"求嗣", @"作灶", @"破土", @"掘井", @"词讼"];
    });
    static NSCalendar *g = nil;
    static dispatch_once_t once2;
    dispatch_once(&once2, ^{
        g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    });
    NSDateComponents *c = [g components:NSCalendarUnitYear | NSCalendarUnitMonth
                                      | NSCalendarUnitDay fromDate:date];
    long seed = (long)c.year * 10000L + (long)c.month * 100L + (long)c.day;
    // 宜：步长 11（与 25 互质 → 四词必不重复）；忌：起点错开 + 步长 17，与宜集合不相交
    NSInteger yi0 = (NSInteger)((seed * 7) % 25);
    NSArray *yi = @[pool[yi0], pool[(yi0 + 11) % 25], pool[(yi0 + 22) % 25], pool[(yi0 + 8) % 25]];
    NSInteger ji0 = (NSInteger)((seed * 13 + 9) % 25);
    for (NSInteger t = 0; t < 25; t++, ji0 = (ji0 + 3) % 25) {   // 确定性避让：撞宜则顺延
        NSArray *tryJi = @[pool[ji0], pool[(ji0 + 17) % 25], pool[(ji0 + 9) % 25], pool[(ji0 + 1) % 25]];
        BOOL hit = NO;
        for (NSString *w in tryJi) { if ([yi containsObject:w]) { hit = YES; break; } }
        if (!hit) return @[yi, tryJi];
    }
    return @[yi, @[]];
}

// iOS 13 以下兜底
static UIColor *CalQuaternaryFill(void) {
    if (@available(iOS 13.0, *)) return [UIColor quaternarySystemFillColor];
    return [UIColor colorWithWhite:0.0 alpha:0.06];
}
static UIColor *CalSecondaryLabel(void) {
    if (@available(iOS 13.0, *)) return [UIColor secondaryLabelColor];
    return [UIColor colorWithWhite:0.0 alpha:0.4];
}
static UIColor *CalSystemBg(void) {
    if (@available(iOS 13.0, *)) return [UIColor systemBackgroundColor];
    return [UIColor whiteColor];
}



static HomeCardCalendarPopup *hcCalPopup = nil;
static NSInteger hcCalMonthOffset = 0;   // 月偏移（XOS DAT_003e8a18 同语义）

+ (void)show {
    if (!hcCalPopup) {
        hcCalPopup = [[HomeCardCalendarPopup alloc] init];
        hcCalMonthOffset = 0;   // cadis_calendarTapped：归零回当月
    }
    [hcCalPopup present];
}

- (void)present {
    if (!self.mask) {
        self.mask = [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        self.mask.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.4];

        CGFloat sw = self.mask.bounds.size.width;
        CGFloat pw = MIN(sw - 32.0, 340.0);
        self.panel = [[UIView alloc] initWithFrame:CGRectMake(0, 0, pw, 100.0)];
        self.panel.backgroundColor = CalSystemBg();
        self.panel.layer.cornerRadius = 16.0;
        self.panel.layer.shadowColor = [UIColor blackColor].CGColor;
        self.panel.layer.shadowOpacity = 0.18;
        self.panel.layer.shadowOffset = CGSizeMake(0, 6);
        self.panel.layer.shadowRadius = 14.0;
        self.panel.layer.masksToBounds = NO;
        self.content = [[UIView alloc] initWithFrame:self.panel.bounds];
        [self.panel addSubview:self.content];
        [self.mask addSubview:self.panel];

        // 点遮罩关闭（触摸点在面板内不关闭，见 gestureRecognizerShouldBegin）
        CalTapTarget *tgt = [CalTapTarget new];
        __weak typeof(self) wself = self;
        tgt.block = ^{ [wself dismiss]; };
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:tgt action:@selector(onTap)];
        objc_setAssociatedObject(tap, @selector(onTap), tgt, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        tap.delegate = self;
        [self.mask addGestureRecognizer:tap];
    }

    [self rebuild];
    if (!self.mask.superview) {
        UIWindow *keyWindow = nil;
        NSArray<UIWindow *> *wins = [UIApplication sharedApplication].windows;
        for (UIWindow *w in wins) { if (w.isKeyWindow) { keyWindow = w; break; } }
        if (!keyWindow) keyWindow = wins.firstObject;
        if (!keyWindow) return;
        self.mask.alpha = 0.0;
        self.panel.transform = CGAffineTransformMakeScale(0.9, 0.9);
        [keyWindow addSubview:self.mask];
        __weak typeof(self) wself = self;
        [UIView animateWithDuration:0.25 animations:^{   // XOS 弹出动画 0.25s
            __strong typeof(self) sself = wself;
            sself.mask.alpha = 1.0;
            sself.panel.transform = CGAffineTransformIdentity;
        }];
    }
}

- (void)dismiss {   // XOS cadis_dismissCalendarPopup：动画后移除
    __weak typeof(self) wself = self;
    [UIView animateWithDuration:0.2 animations:^{
        __strong typeof(self) sself = wself;
        sself.mask.alpha = 0.0;
        sself.panel.transform = CGAffineTransformMakeScale(0.95, 0.95);
    } completion:^(BOOL finished) {
        __strong typeof(self) sself = wself;
        [sself.mask removeFromSuperview];
        sself.mask = nil;
        sself.panel = nil;
        sself.content = nil;
        hcCalPopup = nil;
    }];
}

// UIGestureRecognizerDelegate：触摸点在面板内不关闭
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gr {
    CGPoint p = [gr locationInView:self.mask];
    return !CGRectContainsPoint(self.panel.frame, p);
}

#pragma mark - 内容构建（XOS FUN_00153830 同构）

- (void)rebuild {
    for (UIView *sub in self.content.subviews) [sub removeFromSuperview];

    BOOL dark = [WPUtility isDarkModeForCurrentEnvironment];
    UIColor *label = dark ? [UIColor whiteColor] : [UIColor blackColor];
    UIColor *secondary = CalSecondaryLabel();
    UIColor *accent = [UIColor systemRedColor];
    UIColor *orange = [UIColor systemOrangeColor];
    UIColor *blue = [UIColor systemBlueColor];

    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate *now = [NSDate date];
    NSDate *monthDate = [g dateByAddingUnit:NSCalendarUnitMonth value:hcCalMonthOffset toDate:now options:0];
    // 网格对齐的 weekday 必须取当月 1 号的（此前取 monthDate=今天的，导致首列错位）
    NSDateComponents *firstC = [g components:NSCalendarUnitYear | NSCalendarUnitMonth fromDate:monthDate];
    firstC.day = 1;
    NSDate *firstDate = [g dateFromComponents:firstC];
    NSDateComponents *mc = [g components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitWeekday
                                  fromDate:firstDate];
    NSDateComponents *todayC = [g components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay fromDate:now];
    NSInteger daysInMonth = [g rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:monthDate].length;

    CGFloat W = self.panel.bounds.size.width;
    BOOL mondayFirst = CalMondayFirst();
    BOOL showHoliday = CalShowHoliday();
    BOOL showXiuBan = CalXiuBan();

    // ── 第一行：◀ ▶ + 年月标题（居中）；第二行：样式-黑白 左 + 三胶囊右 ──
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(16, 14, W - 32, 30)];
    title.text = [NSString stringWithFormat:@"%ld年%ld月", (long)mc.year, (long)mc.month];
    title.font = [UIFont systemFontOfSize:17.0 weight:UIFontWeightBold];
    title.textAlignment = NSTextAlignmentCenter;
    title.textColor = label;
    [self.content addSubview:title];

    UIButton *prev = [UIButton buttonWithType:UIButtonTypeCustom];
    prev.frame = CGRectMake(16, 14, 36, 30);
    [prev setTitle:@"◀" forState:UIControlStateNormal];
    [prev setTitleColor:blue forState:UIControlStateNormal];
    prev.titleLabel.font = [UIFont systemFontOfSize:14.0];
    [prev addTarget:self action:@selector(onPrev) forControlEvents:UIControlEventTouchUpInside];
    [self.content addSubview:prev];

    UIButton *next = [UIButton buttonWithType:UIButtonTypeCustom];
    next.frame = CGRectMake(W - 52.0, 14, 36, 30);   // ▶ 右侧对称（◀ 左、▶ 右夹居中标题）
    [next setTitle:@"▶" forState:UIControlStateNormal];
    [next setTitleColor:blue forState:UIControlStateNormal];
    next.titleLabel.font = [UIFont systemFontOfSize:14.0];
    [next addTarget:self action:@selector(onNext) forControlEvents:UIControlEventTouchUpInside];
    [self.content addSubview:next];

    // 卡片样式按钮（XOS cadis_switchCalendarStyle 同位：选择首页卡片挂件布局样式）
    UIButton *styleBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    styleBtn.frame = CGRectMake(16, 48, 110, 20);
    [styleBtn setTitle:[NSString stringWithFormat:@"卡片：%@",
                        [HomeCardCalendarPopup styleNames][[HomeCardCalendarPopup currentStyle]]]
              forState:UIControlStateNormal];
    [styleBtn setTitleColor:orange forState:UIControlStateNormal];
    styleBtn.titleLabel.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
    styleBtn.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    [styleBtn addTarget:self action:@selector(onSwitchCardStyle) forControlEvents:UIControlEventTouchUpInside];
    [self.content addSubview:styleBtn];

    // ── 三胶囊右对齐（间距 6，右边距 12，高 17，与样式按钮同一行；开启态底色各异）──
    [self addCapsule:@"周一" width:W centeredY:58 right:12.0
                  on:mondayFirst onColor:blue action:@selector(onToggleMonday)];
    [self addCapsule:@"节日" width:W centeredY:58 right:(12.0 + 34.0 + 6.0)
                  on:showHoliday onColor:accent action:@selector(onToggleHoliday)];
    [self addCapsule:@"休"   width:W centeredY:58 right:(12.0 + 34.0 + 6.0 + 34.0 + 6.0)
                  on:showXiuBan onColor:orange action:@selector(onToggleXiuBan)];

    // ── 星期行（y=76 h=18，周末列 accent 红）──
    NSArray<NSString *> *weekNames = mondayFirst
        ? @[@"一", @"二", @"三", @"四", @"五", @"六", @"日"]
        : @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"];
    CGFloat cellW = (W - 32.0) / 7.0;
    for (NSInteger i = 0; i < 7; i++) {
        BOOL weekend = mondayFirst ? (i == 5 || i == 6) : (i == 0 || i == 6);
        UILabel *wd = [[UILabel alloc] initWithFrame:CGRectMake(16 + cellW * i, 76, cellW, 18)];
        wd.text = weekNames[i];
        wd.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
        wd.textAlignment = NSTextAlignmentCenter;
        wd.textColor = weekend ? accent : secondary;
        [self.content addSubview:wd];
    }

    // ── 月网格（首行 y=94，行高 42；今天块/日号/农历/休班角标 XOS 几何）──
    NSInteger w1 = mc.weekday;   // 1=周日 … 7=周六
    NSInteger lead = mondayFirst ? ((w1 == 1) ? 6 : w1 - 2) : (w1 - 1);
    NSInteger rows = (lead + daysInMonth + 6) / 7;
    NSDictionary<NSString *, NSNumber *> *xiuban = XiuBanMap();
    // 今天日号/农历 = 块填充色的反色（浅色黑块白字 / 深色白块黑字）
    UIColor *todaySubColor = dark ? [UIColor blackColor] : [UIColor whiteColor];

    for (NSInteger d = 1; d <= daysInMonth; d++) {
        NSInteger idx = lead + d - 1;
        NSInteger row = idx / 7, col = idx % 7;
        BOOL isToday = (mc.year == todayC.year && mc.month == todayC.month && d == todayC.day);
        BOOL weekend = mondayFirst ? (col == 5 || col == 6) : (col == 0 || col == 6);
        CGFloat colX = 16 + cellW * col;
        CGFloat rowY = 94.0 + row * 42.0;

        NSDateComponents *dc = [g components:NSCalendarUnitYear | NSCalendarUnitMonth fromDate:monthDate];
        dc.day = d;
        NSDate *date = [g dateFromComponents:dc];
        NSString *key = [NSString stringWithFormat:@"%04ld-%02ld-%02ld", (long)mc.year, (long)mc.month, (long)d];
        NSNumber *xb = xiuban[key];

        // 今天块 = label 色填充（浅色黑块 / 深色白块），反色日号白/黑字（不分黑白样式）
        if (isToday) {
            CGFloat side = MIN(cellW - 4.0, 35.0);
            UIView *blk = [[UIView alloc] initWithFrame:CGRectMake(colX + (cellW - side) / 2.0, rowY + 1, side, side)];
            blk.layer.cornerRadius = 8.0;
            blk.backgroundColor = label;
            [self.content addSubview:blk];
        }

        // 日号（今天白/黑随样式 / 周末红 / 其他 label）
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(colX, rowY + 3, cellW, 17)];
        dl.text = [NSString stringWithFormat:@"%ld", (long)d];
        dl.font = [UIFont systemFontOfSize:14.0];
        dl.textAlignment = NSTextAlignmentCenter;
        dl.textColor = isToday ? todaySubColor : (weekend ? accent : label);
        [self.content addSubview:dl];

        // 农历位（节日胶囊开 → 节日/节气红字优先；否则农历日；今天随样式白/黑）
        NSString *sub = nil;
        BOOL subRed = NO;
        if (showHoliday) {
            sub = FestivalName((int)mc.year, (int)mc.month, (int)d, date);
            if (sub) subRed = YES;
        }
        if (!sub) sub = [HomeCardCalendarPopup lunarDayText:date] ?: @"";
        UILabel *ll = [[UILabel alloc] initWithFrame:CGRectMake(colX, rowY + 19, cellW, 11)];
        ll.text = sub;
        ll.font = [UIFont systemFontOfSize:7.5];
        ll.textAlignment = NSTextAlignmentCenter;
        ll.textColor = isToday ? todaySubColor : (subRed ? accent : secondary);
        [self.content addSubview:ll];

        // 休班角标（休班胶囊开才显示：1=休 红底 / 2=班 橙底，白字）
        if (showXiuBan && xb) {
            UILabel *badge = [[UILabel alloc] initWithFrame:CGRectMake(colX + cellW - 14, rowY + 1, 12, 12)];
            badge.text = (xb.integerValue == 1) ? @"休" : @"班";
            badge.font = [UIFont systemFontOfSize:7.0];
            badge.textAlignment = NSTextAlignmentCenter;
            badge.textColor = [UIColor whiteColor];
            badge.backgroundColor = (xb.integerValue == 1) ? accent : orange;
            badge.layer.cornerRadius = 6.0;
            badge.layer.masksToBounds = YES;
            [self.content addSubview:badge];
        }
    }

    // 面板高度随月份行数调整并保持居中（网格总高 = 首行 y + rows*42 + 12）
    CGFloat ph = 94.0 + rows * 42.0 + 12.0;
    self.content.frame = CGRectMake(0, 0, W, ph);
    self.panel.frame = CGRectMake((self.mask.bounds.size.width - W) / 2.0,
                                  (self.mask.bounds.size.height - ph) / 2.0, W, ph);
}

// 胶囊（开启态 = 语义色底白字：周一蓝 / 节日红 / 休橙；关闭态 = 灰底 secondary 字）
- (void)addCapsule:(NSString *)text width:(CGFloat)W centeredY:(CGFloat)cy right:(CGFloat)right
                on:(BOOL)on onColor:(UIColor *)onColor action:(SEL)action {
    UILabel *probe = [[UILabel alloc] initWithFrame:CGRectZero];
    probe.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
    probe.text = text;
    CGSize ts = [probe sizeThatFits:CGSizeZero];
    CGFloat cw = ts.width + 12.0, ch = 17.0;
    UIButton *cap = [UIButton buttonWithType:UIButtonTypeCustom];
    cap.frame = CGRectMake(W - right - cw, cy - ch / 2.0, cw, ch);
    [cap setTitle:text forState:UIControlStateNormal];
    cap.titleLabel.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
    [cap setTitleColor:on ? [UIColor whiteColor] : CalSecondaryLabel() forState:UIControlStateNormal];
    cap.backgroundColor = on ? onColor : CalQuaternaryFill();
    cap.layer.cornerRadius = ch / 2.0;
    cap.layer.masksToBounds = YES;
    [cap addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [self.content addSubview:cap];
}

#pragma mark - 动作

- (void)onPrev { hcCalMonthOffset--; [self rebuild]; }   // cadis_calendarPrevMonth
- (void)onNext { hcCalMonthOffset++; [self rebuild]; }   // cadis_calendarNextMonth

- (void)onSwitchCardStyle {   // 首页卡片挂件布局样式（0-8，值序 = styleNames）→ 存键 → 通知卡片刷新 + 重画弹层状态
    NSArray<NSString *> *names = [HomeCardCalendarPopup styleNames];
    NSInteger cur = [HomeCardCalendarPopup currentStyle];
    NSMutableArray<NSString *> *btns = [NSMutableArray arrayWithCapacity:names.count];
    for (NSInteger i = 0; i < (NSInteger)names.count; i++) {
        [btns addObject:(i == cur) ? [NSString stringWithFormat:@"✓ %@", names[i]] : names[i]];
    }
    [MioAlertHelper showMenuAlert:@"选择卡片样式"
                          buttons:btns
                        onButton:^(NSInteger index) {
        [[NSUserDefaults standardUserDefaults] setInteger:index forKey:kKeyCardStyle];
        // 卡片挂件布局随样式变化 → 通知 HomeCardHook 重建 header；
        // rebuild 刷新弹层自身「卡片：xxx」按钮标题（与 onToggle* 同款，弹层还开着时状态即时更新）
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MioHomeCardStyleChanged" object:nil];
        [self rebuild];
    }];
}

- (void)onToggleMonday  { CalSetBool(kKeyMondayFirst, !CalMondayFirst()); [self rebuild]; }   // FUN_00155138
- (void)onToggleHoliday { CalSetBool(kKeyShowHoliday, !CalShowHoliday()); [self rebuild]; }   // FUN_0015507c
- (void)onToggleXiuBan  { CalSetBool(kKeyXiuBan, !CalXiuBan()); [self rebuild]; }             // FUN_001551f4

@end
