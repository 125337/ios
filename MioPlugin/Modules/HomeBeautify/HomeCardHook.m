//
//  HomeCardHook.m
//  MioPlugin
//
//  首页卡片 Hook —— 移植自 XOS（Cadis）主页卡片（XOS反编译 FUN__part3.c，无猜测）：
//
//  【XOS 原实现实证】（全部 Cadis* 键名/默认值/几何取自反编译）：
//   · FUN_00147794 读 CadisEnabled（总开关）
//   · FUN_00144b10 读 CadisCardHeight（卡片高度，<=0 → 100）
//   · FUN_00147810 读 CadisCardOffsetY（卡片Y偏移）
//   · FUN_00147870 读 CadisCardBottomAdjust（底部占位修正）
//   · FUN_001478d0 读 CadisCardMargin（卡片边距，未设置 → 16，<0 → 0）
//   · FUN_0014796c 读 CadisBorderWidth（边框粗细，未设置 → 0，>0 才画边框）
//   · FUN_00136a4c 读 CadisCardBgColor / CadisBorderColor（UIColor，带默认色兜底）
//   · tableView:heightForHeaderInSection:（FUN_00152ce0→FUN_00159b64，仅 section 0）：
//       header 高 = 卡片高 + 12 + CadisCardBottomAdjust（+日历/天气挂件额外高度，Mio 无此件）
//   · tableView:viewForHeaderInSection:（FUN_00151594，仅 section 0）：整体替换 header：
//       容器(0,0,W,高) → 卡片 UIView(margin, 4+offsetY, W-2*margin, 卡片高)
//       layer.cornerRadius=10、masksToBounds=1、clipsToBounds=1
//       backgroundColor=CadisCardBgColor；边框宽>0 → borderWidth+BorderColor.CGColor
//       卡内 UIImageView（日历/天气/背景图，contentMode=2 AspectFit）
//       图片：CadisSelectedCardDark/Light 按当前外观取文件名，目录+文件名 imageWithContentsOfFile，
//             带 path→image 静态缓存
//   · traitCollectionDidChange 重铺（浅/深色换图）
//
//  【Mio 移植差异】
//   · 总开关一开必建卡片；卡片/日历/天气底色默认全透明（XOS L15018/19804/15347 实锤
//     均为 clearColor 兜底），背景图/配置色浮在其上，无图无色时内容直接浮在列表底
//   · 分组条共存：XOS 主页列表分组是浮层（XZYCLGSideRailView）不占 section 0 header，
//     Mio 电报/侧边分组条占 header → 分组条开 = 追加式共存（原 header 在上、卡片接其下，
//     高 = 原高 + 卡片高 + 12 + 底部占位修正）；分组条关 = XOS 式整体替换
//   · 边框/背景色支持浅/深色双配置（addColorRowInGroup darkKey 双预览），trait 切换实时换
//  · 配置变更后经 viewWillAppear 指纹比对触发主表 reloadData 重建 header
//
//  【日历/天气挂件】（XOS 反编译实证，键名/默认值/几何全部取自反编译）：
//   · 日历 CadisCalendarMode/Pos/OffsetY/Spacing/BgHeight/ContentScale + CalendarColor/
//     CalendarAccentColor/CalendarSelectedColor（Light/Dark 后缀双键，Mio 用 darkKey 等价）
//     FUN_00147c54/00147cac(未设→1)/00147d30(默认50)/00147dc0/00147e4c/00147ed8(≤0→100,钳50-200,/100)
//     FUN_00136804：日历总高 = BgHeight + 128；FUN_001369e0/00136d4c/00136db8 三色兜底系统色
//     位置（FUN_00151594 14959/15133/15457）：0上方 y=0、1中 y=Y%×(卡高-(日历高-8)) 叠卡片上、
//     2下方 y=卡高+12+底部修正；卡片中时卡高钳制 max(卡高, 日历高-8)（FUN_00159c48）
//     FUN_00159db8 布局（周视图）：内区 (16,0,w-32,总高-8) 圆角14，月标题 15 Bold + 副标题
//     "本周 M.D - M.D"，星期行 11 Medium 周末列 accent，周日期行日号 17 + 农历 9pt（压缩表），
//     今天 = SelectedColor 圆角块白字；点按 = cadis_calendarTapped（FUN_0015342c 弹层：
//     城市 CadisWeatherCity / 中英文 CadisWeatherLang / 刷新）
//   · 天气 CadisWeatherMode/Pos(0卡片内/1日历内/2联系人内)/OffsetX(默认85)/OffsetY(默认5)/
//     Alpha(0-100，FUN_0014b634 应用 /100 钳[0,1]，默认90) + WeatherColor（药丸底色）
//     FUN_00151594 内联段 15303-15451：SF Symbol 14 Medium 图标 + 12 Medium 白字，
//     徽章宽 = 10+图标+4+文字+10，高 = max+12，CAShapeLayer 药丸圆角 = 高×0.5，
//     定位 = 基准 + X%×(卡宽-徽宽) / Y%×(区域高-徽高)；显示位置 1 且日历开 → 日历区域定位
//     天气数据：XOS 默认 source=wttr（wttr.in，无 key），和风为付费配置不移植
//

#import "HomeCardHook.h"
#import "HomeCardConfig.h"
#import "HomeCardCalendarPopup.h"
#import "../SessionGroups/SessionGroupsConfig.h"
#import "../SideGroups/SideGroupsConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Config/WPColorUtil.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

// 叠加视图 tag（'MC'/'MI'/'ME'/'MF'，避开微信原生 tag）
static const NSInteger kHCCardTag = 0x4D43;      // 卡片视图（挂在 header 容器上）
static const NSInteger kHCImageTag = 0x4D49;     // 卡内背景图（挂在卡片上）
static const NSInteger kHCCalTag = 0x4D45;       // 日历挂件（挂在 header 容器上）
static const NSInteger kHCWeatherTag = 0x4D46;   // 天气徽章（挂在 header 容器上）

// 手势 target 关联键（objc_setAssociatedObject 键必须 const void* 自指指针）
static const void *kHCTapTargetKey = &kHCTapTargetKey;

static IMP orig_NMFVC_viewWillAppear = NULL;
static IMP orig_NMFVC_viewDidAppear = NULL;
static IMP orig_NMFVC_traitCollectionDidChange = NULL;
static IMP orig_NMFVC_heightForHeader = NULL;
static IMP orig_NMFVC_viewForHeader = NULL;
static IMP orig_tableLayout = NULL;    // MainFrameTableView.layoutSubviews（unstick 用）

// HC 宿主 cell 直读缓存（SG sHeaderHostCell 同款：weak 挂引用，cell 销毁自动置 nil；
// hook_viewForHeader 出口赋值，unstick 热路径免 subviews 遍历/免查微信内部记录）
static __weak UITableViewCell *sHCHeaderCell = nil;
static BOOL hcHookInstalled = NO;
static NSCache<NSString *, UIImage *> *hcImageCache = nil;
static NSString *hcLastGeoKey = nil;   // 配置指纹：变化才 reloadData 重建 header

static void HCScheduleSync(id vc, NSTimeInterval delay);   // 定义在 Apply 段，天气菜单先用
static void HCShowCalendarMenu(id vc);                     // 定义在天气徽章段，天气徽章点按先用

#pragma mark - Helpers

static BOOL HCIsMainFrameVC(id vc) {
    if (!vc) return NO;
    NSString *cls = NSStringFromClass([vc class]);
    return [cls containsString:@"NewMainFrameViewController"];
}

static UITableView *HCMainTableView(id vc) {
    if ([vc respondsToSelector:@selector(m_tableView)]) {
        return ((UITableView *(*)(id, SEL))objc_msgSend)(vc, @selector(m_tableView));
    }
    return nil;
}

static BOOL HCStripOccupied(void) {
    // 电报分组条 / 侧边分组条与首页卡片同占 section 0 header：
    // 分组条开 → 追加式共存（原生/分组条 header 在上，卡片接在其下）；
    // 分组条关 → XOS 式整体替换（原生 section 0 header 内容弃用，XOS 同款）
    return [SessionGroupsConfig shared].sgEnabled || [SideGroupsConfig shared].sdEnabled;
}

// 卡片高度（XOS FUN_00144b10：<=0 → 100）
static CGFloat HCCardHeight(HomeCardConfig *cfg) {
    return cfg.hcCardHeight > 0 ? cfg.hcCardHeight : 100.0;
}

// 卡片边距（XOS FUN_001478d0：<0 → 0，未设置默认 16 由配置默认值兜底）
static CGFloat HCCardMargin(HomeCardConfig *cfg) {
    return cfg.hcCardMargin > 0 ? cfg.hcCardMargin : 0.0;
}

static UIColor *HCColor(NSString *hex) {
    if (hex.length == 0) return nil;
    return [WPColorUtil colorFromHexString:hex];
}

// 浅/深色取色：深色优先用深色值，缺省回落浅色值（addColorRowInGroup 双预览语义）
static UIColor *HCColorForMode(NSString *hex, NSString *hexDark, BOOL dark) {
    NSString *pick = dark ? (hexDark.length > 0 ? hexDark : hex)
                          : (hex.length > 0 ? hex : hexDark);
    return HCColor(pick);
}

// 卡片图片：按浅/深色取磁盘文件（XOS 同款 path→image 缓存）
static UIImage *HCImageForDark(BOOL dark) {
    NSString *path = dark ? [HomeCardConfig darkImagePath] : [HomeCardConfig lightImagePath];
    if (!path) return nil;
    UIImage *img = [hcImageCache objectForKey:path];
    if (!img) {
        img = [UIImage imageWithContentsOfFile:path];
        if (img) [hcImageCache setObject:img forKey:path];
    }
    return img;
}

// 配置指纹（几何/颜色/图片路径变化 → reloadData 重建 header；含深色标志，外观切换即整体重建换色）
static NSString *HCGeoKey(void) {
    HomeCardConfig *cfg = [HomeCardConfig shared];
    BOOL dark = NO;
    if (@available(iOS 12.0, *)) {
        dark = [UITraitCollection currentTraitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return [NSString stringWithFormat:
            @"%d|%@|%@|%.1f|%.1f|%.1f|%.1f|%.1f|%@|%@|%@|%@|%@|%d"
            @"|%d|%ld|%.1f|%.1f|%.1f|%@|%@|%@|%ld"
            @"|%d|%ld|%.1f|%.1f|%.1f|%ld|%@|%@|%@|%@|%@|%@",
            cfg.hcEnabled,
            [HomeCardConfig lightImagePath] ?: @"", [HomeCardConfig darkImagePath] ?: @"",
            cfg.hcCardHeight, cfg.hcCardOffsetY, cfg.hcCardBottomFix, cfg.hcCardMargin,
            cfg.hcBorderWidth, cfg.hcBorderColor ?: @"", cfg.hcBorderColorDark ?: @"",
            cfg.hcCardBgColor ?: @"", cfg.hcCardBgColorDark ?: @"",
            HCStripOccupied() ? @"strip" : @"free", dark,
            cfg.hcWeatherEnabled, (long)cfg.hcWeatherPos, cfg.hcWeatherX, cfg.hcWeatherY,
            cfg.hcWeatherAlpha, cfg.hcWeatherBgColor ?: @"", cfg.hcWeatherBgColorDark ?: @"",
            cfg.hcWeatherCity ?: @"", (long)cfg.hcWeatherLang,
            cfg.hcCalEnabled, (long)cfg.hcCalPos, cfg.hcCalY, cfg.hcCalBgHeight, cfg.hcCalScale,
            (long)[HomeCardCalendarPopup currentStyle],   // 布局样式 0-8（弹层切换后指纹变化 → 重建）
            cfg.hcCalBgColor ?: @"", cfg.hcCalBgColorDark ?: @"",
            cfg.hcCalHolidayColor ?: @"", cfg.hcCalHolidayColorDark ?: @"",
            cfg.hcCalSelectedColor ?: @"", cfg.hcCalSelectedColorDark ?: @""];
}

#pragma mark - Header 构建（XOS FUN_00151594 section-0 同构 + 日历/天气挂件）

// iOS 13 以下 secondaryLabelColor 兜底
static UIColor *HCSecondaryLabel(void) {
    if (@available(iOS 13.0, *)) return [UIColor secondaryLabelColor];
    return [UIColor colorWithWhite:0.0 alpha:0.35];
}

// header 追加高度（XOS FUN_00159b64 同构：卡片高 + 12 + 底部占位修正，
// 卡片中放日历时卡片高钳制 max(卡高, 日历高-8)（FUN_00159c48），日历上/下方时追加日历总高）
static CGFloat HCHeaderExtra(HomeCardConfig *cfg) {
    CGFloat cardH = HCCardHeight(cfg);
    BOOL calOn = cfg.hcCalEnabled;
    NSInteger calPos = MIN(MAX((NSInteger)cfg.hcCalPos, 0), 2);
    CGFloat calH = calOn ? cfg.hcCalBgHeight + 128.0 : 0.0;
    if (calOn && calPos == 1 && cardH < calH - 8.0) {
        cardH = calH - 8.0;
    }
    return cardH + 12.0 + cfg.hcCardBottomFix + ((calOn && calPos != 1) ? calH : 0.0);
}

// 手势 target（block 转发；UIGestureRecognizer 持有 target，随日历视图释放）
@interface HCCalTapTarget : NSObject
@property (nonatomic, copy) void (^block)(void);
@end

// 农历日文本（转调 HomeCardCalendarPopup 的系统农历，全插件共用单份）
static NSString *HCLunarDayText(NSDate *date) {
    return [HomeCardCalendarPopup lunarDayText:date];
}

#pragma mark - 日历挂件布局样式（XOS CadisCalendarStyle 剔除月历迷你后重排 0-8）

// 样式渲染上下文（当日数据一次算好，各布局共用；数据全部按日动态计算）
typedef struct {
    NSInteger year, month, day, weekday;   // weekday 1=周日 … 7=周六
    NSInteger weekOfYear, daysInMonth, daysInYear, dayOfYear;
    __strong NSString *lunarMD;            // 农历月日"八月廿六"
    __strong NSArray *yi, *ji;             // 当日宜/忌词（各 4 个）
    __strong NSDate *today;
} HCStyleCtx;

// 农历月名（XOS 词表：正月…腊月）
static NSString *HCLunarMonthName(NSInteger m) {
    static NSArray *names = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        names = @[@"正月", @"二月", @"三月", @"四月", @"五月", @"六月",
                  @"七月", @"八月", @"九月", @"十月", @"冬月", @"腊月"];
    });
    return (m >= 1 && m <= 12) ? names[m - 1] : @"";
}

// 公历月中文名（中式传统样式左上大字：图1 顶部"十月"为公历十月中文数字）
static NSString *HCSolarCnMonth(NSInteger m) {
    static NSArray *n = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        n = @[@"一月", @"二月", @"三月", @"四月", @"五月", @"六月",
              @"七月", @"八月", @"九月", @"十月", @"十一月", @"十二月"];
    });
    return (m >= 1 && m <= 12) ? n[m - 1] : @"";
}

// 周名（1=周日）：short → "周二"；full → "星期二"
static NSString *HCWeekName(NSInteger weekday, BOOL full) {
    static NSArray *n = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ n = @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"]; });
    return full ? [NSString stringWithFormat:@"星期%@", n[weekday - 1]]
                : [NSString stringWithFormat:@"周%@", n[weekday - 1]];
}

// 英文周缩写（极简横条右上角 TUE 等）
static NSString *HCWeekAbbr(NSInteger weekday) {
    static NSArray *n = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ n = @[@"SUN", @"MON", @"TUE", @"WED", @"THU", @"FRI", @"SAT"]; });
    return n[weekday - 1];
}

// 英文月缩写（翻页日历台历头 OCT 等）
static NSString *HCMonthAbbr(NSInteger month) {
    static NSArray *n = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        n = @[@"JAN", @"FEB", @"MAR", @"APR", @"MAY", @"JUN",
              @"JUL", @"AUG", @"SEP", @"OCT", @"NOV", @"DEC"];
    });
    return (month >= 1 && month <= 12) ? n[month - 1] : @"";
}

static UILabel *HCStyleLbl(UIView *parent, CGRect f, NSString *text, CGFloat size,
                           CGFloat weight, UIColor *color, NSTextAlignment align) {
    UILabel *l = [[UILabel alloc] initWithFrame:f];
    l.text = text;
    l.font = weight > 0 ? [UIFont systemFontOfSize:size weight:weight] : [UIFont systemFontOfSize:size];
    l.textColor = color;
    l.textAlignment = align;
    l.userInteractionEnabled = NO;
    [parent addSubview:l];
    return l;
}

// 虚线分隔（dashed CAShapeLayer）
static void HCDashLine(UIView *parent, CGRect f, UIColor *color) {
    UIView *v = [[UIView alloc] initWithFrame:f];
    v.userInteractionEnabled = NO;
    CAShapeLayer *l = [CAShapeLayer layer];
    UIBezierPath *p = [UIBezierPath bezierPath];
    [p moveToPoint:CGPointMake(0, f.size.height / 2.0)];
    [p addLineToPoint:CGPointMake(f.size.width, f.size.height / 2.0)];
    l.path = p.CGPath;
    l.strokeColor = color.CGColor;
    l.lineWidth = 1.0;
    l.lineDashPattern = @[@3, @3];
    [v.layer addSublayer:l];
    [parent addSubview:v];
}

// 实线分隔
static void HCSolidLine(UIView *parent, CGRect f, UIColor *color) {
    UIView *v = [[UIView alloc] initWithFrame:f];
    v.backgroundColor = color;
    v.userInteractionEnabled = NO;
    [parent addSubview:v];
}

// 进度条（轨道 = secondary 18% 透明，填充圆角）
static void HCProgressBar(UIView *parent, CGRect f, double pct, UIColor *fill, BOOL dark) {
    UIView *track = [[UIView alloc] initWithFrame:f];
    track.backgroundColor = [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.12];
    track.layer.cornerRadius = f.size.height / 2.0;
    track.layer.masksToBounds = YES;
    track.userInteractionEnabled = NO;
    CGFloat fw = MAX(MIN(pct / 100.0, 1.0) * f.size.width, f.size.height);
    UIView *bar = [[UIView alloc] initWithFrame:CGRectMake(0, 0, fw, f.size.height)];
    bar.backgroundColor = fill;
    bar.layer.cornerRadius = f.size.height / 2.0;
    bar.layer.masksToBounds = YES;
    [track addSubview:bar];
    [parent addSubview:track];
}

// 宜/忌 小方块标签（绿宜/红忌），返回右缘 x
static CGFloat HCYiJiBadge(UIView *parent, CGFloat x, CGFloat y, NSString *tag, UIColor *color) {
    UILabel *b = [[UILabel alloc] initWithFrame:CGRectMake(x, y, 14, 14)];
    b.text = tag;
    b.font = [UIFont systemFontOfSize:9.0 weight:UIFontWeightMedium];
    b.textColor = UIColor.whiteColor;
    b.textAlignment = NSTextAlignmentCenter;
    b.backgroundColor = color;
    b.layer.cornerRadius = 3.0;
    b.layer.masksToBounds = YES;
    b.userInteractionEnabled = NO;
    [parent addSubview:b];
    return x + 18.0;
}

// ── 样式 1 中式传统（宜忌）图1：左月名红字 + 右农历|年|周；星期行 + 虚线 + 7 日 + 宜忌行 ──
static void HCStyleTraditional(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                               UIColor *accent, UIColor *selected, UIColor *label) {
    CGFloat pad = 14.0, cw = (W - pad * 2.0) / 7.0;
    HCStyleLbl(v, CGRectMake(pad, 4, W * 0.4, 24), HCSolarCnMonth(c->month), 20.0, UIFontWeightBold,
               accent, NSTextAlignmentLeft);
    NSString *right = [NSString stringWithFormat:@"%@ | %ld | 第%ld周",
                       c->lunarMD, (long)c->year, (long)c->weekOfYear];
    HCStyleLbl(v, CGRectMake(W - pad - 180, 10, 180, 16), right, 11.0, 0, HCSecondaryLabel(),
               NSTextAlignmentRight);

    NSArray<NSString *> *wn = @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"];
    for (NSInteger i = 0; i < 7; i++) {
        BOOL wk = (i == 0 || i == 6);
        HCStyleLbl(v, CGRectMake(pad + cw * i, 32, cw, 14), wn[i], 11.0,
                   UIFontWeightMedium, wk ? accent : HCSecondaryLabel(), NSTextAlignmentCenter);
    }
    HCDashLine(v, CGRectMake(pad, 49, W - pad * 2.0, 1), [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.18]);

    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSInteger offset = c->weekday - 1;
    for (NSInteger i = 0; i < 7; i++) {
        NSDate *d = [g dateByAddingUnit:NSCalendarUnitDay value:i - offset toDate:c->today options:0];
        NSDateComponents *dc = [g components:NSCalendarUnitDay fromDate:d];
        BOOL isToday = (i == offset), wk = (i == 0 || i == 6);
        CGFloat cx = pad + cw * i;
        if (isToday) {
            UIView *pill = [[UIView alloc] initWithFrame:CGRectMake(cx + 1.5, 54, cw - 3.0, 42)];
            pill.backgroundColor = selected;
            pill.layer.cornerRadius = 8.0;
            pill.layer.masksToBounds = YES;
            [v addSubview:pill];
        }
        HCStyleLbl(v, CGRectMake(cx, 56, cw, 22), [NSString stringWithFormat:@"%ld", (long)dc.day],
                   17.0, UIFontWeightMedium, isToday ? UIColor.whiteColor : (wk ? accent : label),
                   NSTextAlignmentCenter);
        HCStyleLbl(v, CGRectMake(cx, 80, cw, 12), HCLunarDayText(d) ?: @"", 9.0, 0,
                   isToday ? UIColor.whiteColor : (wk ? accent : HCSecondaryLabel()),
                   NSTextAlignmentCenter);
    }

    CGFloat y = H - 19.0;
    CGFloat x = HCYiJiBadge(v, pad, y, @"宜", [UIColor systemGreenColor]);
    HCStyleLbl(v, CGRectMake(x, y - 1, W / 2.0 - x, 15), [c->yi componentsJoinedByString:@" "],
               10.0, 0, label, NSTextAlignmentLeft);
    x = HCYiJiBadge(v, W / 2.0 + 6.0, y, @"忌", accent);
    HCStyleLbl(v, CGRectMake(x, y - 1, W - pad - x, 15), [c->ji componentsJoinedByString:@" "],
               10.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
}

// ── 样式 2 今日聚焦（进度）图2：左大日号 + 右本月/本年双进度条 ──
static void HCStyleFocus(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                         UIColor *accent, UIColor *label) {
    CGFloat lw2 = 72.0;
    HCStyleLbl(v, CGRectMake(0, 8, lw2, 48), [NSString stringWithFormat:@"%ld", (long)c->day],
               40.0, UIFontWeightBold, label, NSTextAlignmentCenter);
    HCStyleLbl(v, CGRectMake(0, 60, lw2, 16), HCWeekName(c->weekday, NO), 13.0,
               UIFontWeightMedium, accent, NSTextAlignmentCenter);

    CGFloat x2 = lw2 + 10.0, w2 = W - x2 - 14.0;
    UIView *bar = [[UIView alloc] initWithFrame:CGRectMake(x2, 12, 3, 26)];
    bar.backgroundColor = accent;
    bar.layer.cornerRadius = 1.5;
    [v addSubview:bar];
    HCStyleLbl(v, CGRectMake(x2 + 9, 8, w2 - 9, 20),
               [NSString stringWithFormat:@"%ld年%ld月", (long)c->year, (long)c->month],
               15.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2 + 9, 30, w2 - 9, 14),
               [NSString stringWithFormat:@"%@  第%ld周", c->lunarMD, (long)c->weekOfYear],
               11.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);

    double mp = floor((double)c->day / (double)c->daysInMonth * 100.0);
    double yp = floor((double)c->dayOfYear / (double)c->daysInYear * 100.0);
    HCStyleLbl(v, CGRectMake(x2 + 9, 52, w2 - 40, 13), @"本月进度", 10.0, 0,
               HCSecondaryLabel(), NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2 + 9, 49, w2 - 9, 15), [NSString stringWithFormat:@"%.0f%%", mp],
               12.0, UIFontWeightBold, accent, NSTextAlignmentRight);
    HCProgressBar(v, CGRectMake(x2 + 9, 68, w2 - 9, 5), mp, accent, dark);
    HCStyleLbl(v, CGRectMake(x2 + 9, 82, w2 - 40, 13), @"本年进度", 10.0, 0,
               HCSecondaryLabel(), NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2 + 9, 79, w2 - 9, 15), [NSString stringWithFormat:@"%.0f%%", yp],
               12.0, UIFontWeightBold, label, NSTextAlignmentRight);
    HCProgressBar(v, CGRectMake(x2 + 9, 98, w2 - 9, 5), yp, label, dark);
}

// ── 样式 3 倒计时 图3：左红色大数字（距周末天数）+ 竖线 + 右全量日期信息 + 宜忌一行 ──
static void HCStyleCountdown(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                             UIColor *accent, UIColor *label) {
    CGFloat lw2 = 76.0;
    NSInteger days = (7 - c->weekday) % 7;   // 距下一个周六
    HCStyleLbl(v, CGRectMake(0, 10, lw2, 44), [NSString stringWithFormat:@"%ld", (long)days],
               36.0, UIFontWeightBold, accent, NSTextAlignmentCenter);
    HCStyleLbl(v, CGRectMake(0, 58, lw2, 14), @"天后 周末", 11.0, 0, HCSecondaryLabel(),
               NSTextAlignmentCenter);

    HCSolidLine(v, CGRectMake(lw2 + 6.0, 14, 1, H - 28), [UIColor colorWithWhite:0.0 alpha:0.22]);
    CGFloat x2 = lw2 + 20.0, w2 = W - x2 - 14.0;
    HCStyleLbl(v, CGRectMake(x2, 10, w2, 22),
               [NSString stringWithFormat:@"%ld年%ld月%ld日", (long)c->year, (long)c->month, (long)c->day],
               16.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 34, w2, 16), HCWeekName(c->weekday, YES), 12.0, 0,
               HCSecondaryLabel(), NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 52, w2, 14),
               [NSString stringWithFormat:@"%@ 第%ld周", c->lunarMD, (long)c->weekOfYear],
               11.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
    NSString *yj = [NSString stringWithFormat:@"宜 %@   忌 %@",
                    [c->yi componentsJoinedByString:@"·"], [c->ji componentsJoinedByString:@"·"]];
    HCStyleLbl(v, CGRectMake(x2, H - 22, w2, 14), yj, 9.5, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
}

// ── 样式 4 极简横条 图4：大日期数字 + 英文周缩写 + 横线 + 农历/宜忌首词 + 5 天条 ──
static void HCStyleMinimal(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                           UIColor *accent, UIColor *label) {
    CGFloat pad = 14.0;
    HCStyleLbl(v, CGRectMake(pad, 4, W - pad * 2.0 - 60, 30),
               [NSString stringWithFormat:@"%04ld.%02ld.%02ld", (long)c->year, (long)c->month, (long)c->day],
               22.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(W - pad - 60, 10, 60, 18), HCWeekAbbr(c->weekday), 15.0,
               UIFontWeightBold, accent, NSTextAlignmentRight);
    HCSolidLine(v, CGRectMake(pad, 42, W - pad * 2.0, 1), [UIColor colorWithWhite:0.0 alpha:0.22]);
    HCStyleLbl(v, CGRectMake(pad, 48, 140, 18), c->lunarMD, 13.0, UIFontWeightMedium, label,
               NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(W - pad - 170, 50, 170, 16),
               [NSString stringWithFormat:@"宜%@  忌%@",
                c->yi.firstObject ?: @"", c->ji.firstObject ?: @""], 10.5, 0,
               HCSecondaryLabel(), NSTextAlignmentRight);

    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    CGFloat sw = (W - pad * 2.0) / 5.0, y = H - 34.0;
    for (NSInteger k = 0; k < 5; k++) {
        NSDate *d = [g dateByAddingUnit:NSCalendarUnitDay value:k - 2 toDate:c->today options:0];
        NSDateComponents *dc = [g components:NSCalendarUnitDay fromDate:d];
        CGFloat cx = pad + sw * k;
        if (k == 2) {
            UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(cx + (sw - 26.0) / 2.0, y, 26, 26)];
            dot.backgroundColor = label;
            dot.layer.cornerRadius = 13.0;
            dot.layer.masksToBounds = YES;
            [v addSubview:dot];
            HCStyleLbl(v, CGRectMake(cx + (sw - 26.0) / 2.0, y + 3, 26, 20),
                       [NSString stringWithFormat:@"%ld", (long)dc.day], 14.0, UIFontWeightBold,
                       [UIColor colorWithWhite:dark ? 0.0 : 1.0 alpha:1.0], NSTextAlignmentCenter);
        } else {
            HCStyleLbl(v, CGRectMake(cx, y + 4, sw, 18), [NSString stringWithFormat:@"%ld", (long)dc.day],
                       13.0, 0, HCSecondaryLabel(), NSTextAlignmentCenter);
        }
    }
}

// ── 样式 5 双栏信息 图5：左昨天/今天/明天栏 + 竖线 + 右信息/宜忌/本月进度条 ──
static void HCStyleDual(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                        UIColor *accent, UIColor *label) {
    CGFloat lw2 = 64.0;
    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate *prev = [g dateByAddingUnit:NSCalendarUnitDay value:-1 toDate:c->today options:0];
    NSDate *next = [g dateByAddingUnit:NSCalendarUnitDay value:1 toDate:c->today options:0];
    HCStyleLbl(v, CGRectMake(0, 2, lw2, 16),
               [NSString stringWithFormat:@"%ld", (long)[g component:NSCalendarUnitDay fromDate:prev]],
               14.0, UIFontWeightMedium, HCSecondaryLabel(), NSTextAlignmentCenter);
    HCStyleLbl(v, CGRectMake(0, 19, lw2, 12), @"昨天", 9.0, 0, HCSecondaryLabel(), NSTextAlignmentCenter);

    UIView *blk = [[UIView alloc] initWithFrame:CGRectMake(lw2 / 2.0 - 24.0, 35, 48, 42)];
    blk.backgroundColor = label;
    blk.layer.cornerRadius = 10.0;
    blk.layer.masksToBounds = YES;
    [v addSubview:blk];
    HCStyleLbl(v, CGRectMake(lw2 / 2.0 - 24.0, 38, 48, 22),
               [NSString stringWithFormat:@"%ld", (long)c->day], 16.0, UIFontWeightBold,
               [UIColor colorWithWhite:dark ? 0.0 : 1.0 alpha:1.0], NSTextAlignmentCenter);
    HCStyleLbl(v, CGRectMake(lw2 / 2.0 - 24.0, 61, 48, 12), @"今天", 9.0, 0,
               [UIColor colorWithWhite:dark ? 0.0 : 1.0 alpha:0.85], NSTextAlignmentCenter);

    HCStyleLbl(v, CGRectMake(0, 81, lw2, 16),
               [NSString stringWithFormat:@"%ld", (long)[g component:NSCalendarUnitDay fromDate:next]],
               14.0, UIFontWeightMedium, HCSecondaryLabel(), NSTextAlignmentCenter);
    HCStyleLbl(v, CGRectMake(0, 98, lw2, 12), @"明天", 9.0, 0, HCSecondaryLabel(), NSTextAlignmentCenter);

    HCSolidLine(v, CGRectMake(lw2 + 6.0, 8, 1, H - 16), [UIColor colorWithWhite:0.0 alpha:0.22]);
    CGFloat x2 = lw2 + 20.0, w2 = W - x2 - 14.0;
    HCStyleLbl(v, CGRectMake(x2, 8, w2 - 60, 20),
               [NSString stringWithFormat:@"%ld年%ld月", (long)c->year, (long)c->month],
               15.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(W - 14.0 - 60, 10, 60, 16), HCWeekName(c->weekday, YES), 12.0,
               UIFontWeightBold, accent, NSTextAlignmentRight);
    HCStyleLbl(v, CGRectMake(x2, 30, w2, 14),
               [NSString stringWithFormat:@"%@ 第%ld周", c->lunarMD, (long)c->weekOfYear],
               10.5, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
    HCDashLine(v, CGRectMake(x2, 48, w2, 1), [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.18]);

    CGFloat x = HCYiJiBadge(v, x2, 54, @"宜", [UIColor systemGreenColor]);
    HCStyleLbl(v, CGRectMake(x, 53, W - 14.0 - x, 15), [c->yi componentsJoinedByString:@" "],
               10.0, 0, label, NSTextAlignmentLeft);
    x = HCYiJiBadge(v, x2, 74, @"忌", accent);
    HCStyleLbl(v, CGRectMake(x, 73, W - 14.0 - x, 15), [c->ji componentsJoinedByString:@" "],
               10.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);

    double mp = floor((double)c->day / (double)c->daysInMonth * 100.0);
    HCProgressBar(v, CGRectMake(x2, H - 26, w2, 4), mp, accent, dark);
    HCStyleLbl(v, CGRectMake(x2, H - 20, w2, 12),
               [NSString stringWithFormat:@"本月进度 %.0f%%", mp], 9.0, 0,
               HCSecondaryLabel(), NSTextAlignmentRight);
}

// ── 样式 6 时间线 图6：标题 + 竖线三节点（昨天/今天/明天），今天行高亮条 ──
static void HCStyleTimeline(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                            UIColor *accent, UIColor *label) {
    CGFloat pad = 14.0;
    HCStyleLbl(v, CGRectMake(pad, 4, W - pad * 2.0 - 90, 18),
               [NSString stringWithFormat:@"%ld年%ld月", (long)c->year, (long)c->month],
               14.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(W - pad - 90, 6, 90, 14), c->lunarMD, 11.0, 0, accent,
               NSTextAlignmentRight);

    HCSolidLine(v, CGRectMake(pad + 20.0, 28, 2, H - 34), [UIColor colorWithWhite:0.0 alpha:0.18]);
    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSArray *tags = @[@"昨天", @"今天", @"明天"];
    for (NSInteger i = 0; i < 3; i++) {
        NSDate *d = [g dateByAddingUnit:NSCalendarUnitDay value:i - 1 toDate:c->today options:0];
        NSDateComponents *dc = [g components:NSCalendarUnitDay | NSCalendarUnitWeekday fromDate:d];
        BOOL isToday = (i == 1);
        CGFloat rowY = 24.0 + i * 31.0;
        if (isToday) {
            UIView *hl = [[UIView alloc] initWithFrame:CGRectMake(pad + 28.0, rowY + 2, W - pad - 28.0 - 8.0, 27)];
            hl.backgroundColor = [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.08];
            hl.layer.cornerRadius = 8.0;
            [v addSubview:hl];
        }
        HCStyleLbl(v, CGRectMake(pad, rowY + 2, 14, 26), [NSString stringWithFormat:@"%ld", (long)dc.day],
                   isToday ? 16.0 : 13.0, isToday ? UIFontWeightBold : 0,
                   isToday ? label : HCSecondaryLabel(), NSTextAlignmentRight);
        UIView *dot = [[UIView alloc] initWithFrame:isToday
            ? CGRectMake(pad + 16.0, rowY + 12.5, 10, 10) : CGRectMake(pad + 18.0, rowY + 14.5, 6, 6)];
        dot.backgroundColor = isToday ? accent : [UIColor colorWithWhite:0.0 alpha:0.3];
        dot.layer.cornerRadius = (isToday ? 10.0 : 6.0) / 2.0;
        [v addSubview:dot];
        HCStyleLbl(v, CGRectMake(pad + 34.0, rowY + 2, 46, 26), tags[i],
                   isToday ? 13.0 : 12.0, isToday ? UIFontWeightBold : 0,
                   isToday ? label : HCSecondaryLabel(), NSTextAlignmentLeft);
        NSString *detail = [NSString stringWithFormat:@"%@ %@",
                            HCWeekName(dc.weekday, NO), HCLunarDayText(d) ?: @""];
        HCStyleLbl(v, CGRectMake(pad + 84.0, rowY + 2, W - pad - 84.0 - 12.0, 26), detail,
                   isToday ? 12.0 : 11.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
    }
}

// ── 样式 7 圆环进度 图1：左侧单大环双弧（黑=年进度、红=月进度叠外层，环心日号）
//     + 右侧信息列（年月/星期周数/农历红字 + 月/年进度图例两行）──
static void HCStyleRings(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                         UIColor *accent, UIColor *label) {
    CGPoint center = CGPointMake(W * 0.21, H / 2.0 + 4.0);
    CGFloat radius = 36.0, lw2 = 7.0;
    CAShapeLayer *track = [CAShapeLayer layer];
    track.path = [UIBezierPath bezierPathWithArcCenter:center radius:radius
                                            startAngle:-M_PI_2 endAngle:M_PI_2 * 3.0 clockwise:YES].CGPath;
    track.strokeColor = [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.08].CGColor;
    track.fillColor = nil;
    track.lineWidth = lw2;
    [v.layer addSublayer:track];

    // 年进度弧（label 色）→ 月进度弧（accent）叠其上（图1：红弧为月进度 19% 起于顶部顺时针）
    double yp = floor((double)c->dayOfYear / (double)c->daysInYear * 100.0);
    double mp = floor((double)c->day / (double)c->daysInMonth * 100.0);
    NSArray<NSNumber *> *pcts = @[@(MAX(MIN(yp / 100.0, 1.0), 0.02)), @(MAX(MIN(mp / 100.0, 1.0), 0.02))];
    NSArray<UIColor *> *cols = @[label, accent];
    for (NSInteger i = 0; i < 2; i++) {
        CAShapeLayer *arc = [CAShapeLayer layer];
        arc.path = track.path;
        arc.strokeColor = cols[i].CGColor;
        arc.fillColor = nil;
        arc.lineWidth = lw2;
        arc.lineCap = kCALineCapRound;
        arc.strokeEnd = pcts[i].doubleValue;
        [v.layer addSublayer:arc];
    }
    HCStyleLbl(v, CGRectMake(center.x - radius, center.y - 18, radius * 2, 36),
               [NSString stringWithFormat:@"%ld", (long)c->day], 30.0, UIFontWeightBold,
               label, NSTextAlignmentCenter);

    // 右侧信息列
    CGFloat x2 = center.x + radius + lw2 + 18.0, w2 = W - x2 - 14.0;
    HCStyleLbl(v, CGRectMake(x2, 8, w2, 22),
               [NSString stringWithFormat:@"%ld年%ld月", (long)c->year, (long)c->month],
               17.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 34, w2, 15),
               [NSString stringWithFormat:@"%@  第%ld周", HCWeekName(c->weekday, YES), (long)c->weekOfYear],
               12.0, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 53, w2, 16), c->lunarMD, 13.5, UIFontWeightMedium, accent,
               NSTextAlignmentLeft);
    // 图例两行：色点 + 灰标签 + 黑粗百分比
    NSArray<NSString *> *caps = @[@"月进度", @"年进度"];
    NSArray<NSString *> *vals = @[[NSString stringWithFormat:@"%.0f%%", mp],
                                  [NSString stringWithFormat:@"%.0f%%", yp]];
    for (NSInteger i = 0; i < 2; i++) {
        CGFloat y = 76.0 + i * 19.0;
        UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(x2, y + 4.0, 9, 9)];
        dot.backgroundColor = i == 0 ? accent : label;
        dot.layer.cornerRadius = 4.5;
        [v addSubview:dot];
        HCStyleLbl(v, CGRectMake(x2 + 15, y, 52, 16), caps[i], 11.0, 0, HCSecondaryLabel(),
                   NSTextAlignmentLeft);
        HCStyleLbl(v, CGRectMake(x2 + 68, y - 1, w2 - 68, 17), vals[i], 12.5,
                   UIFontWeightSemibold, label, NSTextAlignmentLeft);
    }
}

// ── 样式 8 翻页日历 图2：左侧台历页（OCT 红头 + 特大日号 + TUE）
//     + 右侧全量信息（完整日期/农历红字/周数 + 虚线 + 宜忌两行）──
static void HCStyleFlip(UIView *v, CGFloat W, CGFloat H, BOOL dark, HCStyleCtx *c,
                        UIColor *accent, UIColor *label) {
    CGFloat pad = 14.0, pw = 88.0;
    UIView *page = [[UIView alloc] initWithFrame:CGRectMake(pad + 8.0, 8.0, pw, H - 16.0)];
    page.backgroundColor = [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:dark ? 0.10 : 0.045];
    page.layer.cornerRadius = 10.0;
    page.layer.masksToBounds = YES;
    [v addSubview:page];

    UIView *band = [[UIView alloc] initWithFrame:CGRectMake(0, 0, pw, 24)];
    band.backgroundColor = accent;
    [page addSubview:band];
    HCStyleLbl(page, CGRectMake(0, 3, pw, 18), HCMonthAbbr(c->month), 13.0, UIFontWeightBold,
               UIColor.whiteColor, NSTextAlignmentCenter);
    HCStyleLbl(page, CGRectMake(0, 26, pw, 44), [NSString stringWithFormat:@"%ld", (long)c->day],
               34.0, UIFontWeightBold, label, NSTextAlignmentCenter);
    HCStyleLbl(page, CGRectMake(0, H - 16.0 - 24.0, pw, 16), HCWeekAbbr(c->weekday), 11.0,
               UIFontWeightSemibold, HCSecondaryLabel(), NSTextAlignmentCenter);

    CGFloat x2 = pad + 8.0 + pw + 16.0, w2 = W - x2 - pad;
    HCStyleLbl(v, CGRectMake(x2, 8, w2, 22),
               [NSString stringWithFormat:@"%ld年%ld月%ld日", (long)c->year, (long)c->month, (long)c->day],
               17.0, UIFontWeightBold, label, NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 34, w2, 17), c->lunarMD, 13.5, UIFontWeightMedium, accent,
               NSTextAlignmentLeft);
    HCStyleLbl(v, CGRectMake(x2, 55, w2, 14),
               [NSString stringWithFormat:@"第%ld周", (long)c->weekOfYear], 11.5, 0,
               HCSecondaryLabel(), NSTextAlignmentLeft);
    HCDashLine(v, CGRectMake(x2, 76, w2, 1), [UIColor colorWithWhite:dark ? 1.0 : 0.0 alpha:0.18]);

    CGFloat x = HCYiJiBadge(v, x2, 84, @"宜", [UIColor systemGreenColor]);
    HCStyleLbl(v, CGRectMake(x, 83, W - pad - x, 15), [c->yi componentsJoinedByString:@" "],
               10.5, 0, label, NSTextAlignmentLeft);
    x = HCYiJiBadge(v, x2, 102, @"忌", accent);
    HCStyleLbl(v, CGRectMake(x, 101, W - pad - x, 15), [c->ji componentsJoinedByString:@" "],
               10.5, 0, HCSecondaryLabel(), NSTextAlignmentLeft);
}

// 样式分派（0 = 默认周历走 HCBuildCalendar 原有渲染，1-8 走本函数）
static void HCStyleRender(UIView *bgv, NSInteger style, CGFloat W, CGFloat H, BOOL dark,
                          UIColor *accent, UIColor *selected) {
    UIColor *label = dark ? [UIColor whiteColor] : [UIColor blackColor];

    // 当日上下文（全部动态：日历组件/农历/周数/宜忌，无写死数据）
    static HCStyleCtx c;
    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate *now = [NSDate date];
    NSDateComponents *cur = [g components:NSCalendarUnitYear | NSCalendarUnitMonth
                                        | NSCalendarUnitDay | NSCalendarUnitWeekday
                                        | NSCalendarUnitWeekOfYear | NSCalendarUnitDayOfYear
                                   fromDate:now];
    NSInteger lm = 0;
    [HomeCardCalendarPopup lunarMonthDay:now month:&lm day:nil leap:nil];
    c.year = cur.year; c.month = cur.month; c.day = cur.day; c.weekday = cur.weekday;
    c.weekOfYear = cur.weekOfYear; c.dayOfYear = cur.dayOfYear;
    c.daysInMonth = [g rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:now].length;
    c.daysInYear = [g rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitYear forDate:now].length;
    c.lunarMD = [NSString stringWithFormat:@"%@%@", HCLunarMonthName(lm),
                 [HomeCardCalendarPopup lunarDayText:now] ?: @""];
    NSArray *yj = [HomeCardCalendarPopup yiJiForDate:now];
    c.yi = yj.count > 0 ? yj[0] : @[]; c.ji = yj.count > 1 ? yj[1] : @[];
    c.today = now;

    switch (style) {
        case 1: HCStyleTraditional(bgv, W, H, dark, &c, accent, selected, label); break;
        case 2: HCStyleFocus(bgv, W, H, dark, &c, accent, label); break;
        case 3: HCStyleCountdown(bgv, W, H, dark, &c, accent, label); break;
        case 4: HCStyleMinimal(bgv, W, H, dark, &c, accent, label); break;
        case 5: HCStyleDual(bgv, W, H, dark, &c, accent, label); break;
        case 6: HCStyleTimeline(bgv, W, H, dark, &c, accent, label); break;
        case 7: HCStyleRings(bgv, W, H, dark, &c, accent, label); break;
        case 8: HCStyleFlip(bgv, W, H, dark, &c, accent, label); break;
        default: break;
    }
}


// ── 日历挂件（XOS FUN_00159db8 同构）：
//    总高 = CadisCalendarBgHeight + 128；内区 (16,0,w-32,总高-8) 圆角14 底色；
//    样式 0 = 默认周历（下方原渲染：月标题 15 Bold + 副标题"本周 M.D - M.D"（周日始）+
//    星期行 11 Medium 周末 accent + 日号 17 + 农历 9pt + 今天块 selected 圆角白字；
//    Mio 调整：内容块总高 98 在内区内垂直居中、今天块紧凑高 38）；
//    样式 1-8 = HCStyleRender 分派（中式传统/今日聚焦/倒计时/极简横条/
//    双栏信息/时间线/圆环进度/翻页日历；月历迷你未移植，值序为剔除后重排）；
//    点按弹月历弹层（XOS cadis_calendarTapped → FUN_0015342c，见 HomeCardCalendarPopup）；
//    内容缩放 = 钳制(50-200)/100（FUN_00147ed8）──
static UIView *HCBuildCalendar(id vc, CGFloat width, BOOL dark, HomeCardConfig *cfg) {
    CGFloat calH = cfg.hcCalBgHeight + 128.0;
    CGFloat gridW = width - 32.0 - 24.0;   // 内区宽再收 12 边距
    CGFloat cw = gridW / 7.0;
    if (cw < 1.0) cw = 1.0;

    UIColor *bg = HCColorForMode(cfg.hcCalBgColor, cfg.hcCalBgColorDark, dark)
        ?: [UIColor clearColor];   // XOS FUN_001369e0 默认 clearColor（日历透明浮在背景图上）
    UIColor *accent = HCColorForMode(cfg.hcCalHolidayColor, cfg.hcCalHolidayColorDark, dark)
        ?: [UIColor systemRedColor];
    UIColor *selected = HCColorForMode(cfg.hcCalSelectedColor, cfg.hcCalSelectedColorDark, dark)
        ?: [UIColor systemBlueColor];

    UIView *cal = [[UIView alloc] initWithFrame:CGRectMake(0, 0, width, calH)];

    // 内区背景（XOS FUN_00159db8 19800-19808：cornerRadius 14、masksToBounds）
    UIView *bgv = [[UIView alloc] initWithFrame:CGRectMake(16, 0, width - 32.0, calH - 8.0)];
    bgv.layer.cornerRadius = 14.0;
    bgv.layer.masksToBounds = YES;
    bgv.backgroundColor = bg;
    [cal addSubview:bgv];

    NSInteger style = [HomeCardCalendarPopup currentStyle];
    if (style != 0) {   // 样式 1-8：布局渲染进内区（0 = 默认周历走下方原渲染）
        HCStyleRender(bgv, style, width - 32.0, calH - 8.0, dark, accent, selected);
    } else {
    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate *now = [NSDate date];
    NSDateComponents *cur = [g components:NSCalendarUnitYear | NSCalendarUnitMonth
                                        | NSCalendarUnitDay | NSCalendarUnitWeekday
                                 fromDate:now];
    NSInteger offset = cur.weekday - 1;   // 今天在周内的列（0 = 周日列，周日始）

    // 内容块（标题 4 → 农历底 98，总高 98）在 bgv 内垂直居中（原版贴顶、下方留白失衡）
    CGFloat bgvH = calH - 8.0;
    CGFloat cellTop = MAX((bgvH - 98.0) / 2.0, 4.0);

    // 月标题（XOS 19822-19839：15 Bold，frame (12,4,内宽-24,20)）
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(28, cellTop + 4.0, gridW, 20)];
    title.text = [NSString stringWithFormat:@"%ld年%ld月", (long)cur.year, (long)cur.month];
    title.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightBold];
    title.textColor = [UIColor labelColor];
    [cal addSubview:title];

    // 副标题"本周 10.4 - 10.10"（XOS 同款：本周范围，周日始）
    NSDate *ws = [g dateByAddingUnit:NSCalendarUnitDay value:-offset toDate:now options:0];
    NSDate *we = [g dateByAddingUnit:NSCalendarUnitDay value:6 - offset toDate:now options:0];
    NSDateComponents *c1 = [g components:NSCalendarUnitMonth | NSCalendarUnitDay fromDate:ws];
    NSDateComponents *c2 = [g components:NSCalendarUnitMonth | NSCalendarUnitDay fromDate:we];
    UILabel *sub = [[UILabel alloc] initWithFrame:CGRectMake(28, cellTop + 25.0, gridW, 13)];
    sub.text = [NSString stringWithFormat:@"本周 %ld.%ld - %ld.%ld",
                (long)c1.month, (long)c1.day, (long)c2.month, (long)c2.day];
    sub.font = [UIFont systemFontOfSize:10.0];
    sub.textColor = HCSecondaryLabel();
    [cal addSubview:sub];

    // 星期行（XOS：11 Medium 居中，周末列 accent 色）
    NSArray<NSString *> *weekNames = @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"];
    for (NSInteger i = 0; i < 7; i++) {
        UILabel *wd = [[UILabel alloc] initWithFrame:CGRectMake(28 + cw * i, cellTop + 42.0, cw, 14)];
        wd.text = weekNames[i];
        wd.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
        wd.textAlignment = NSTextAlignmentCenter;
        wd.textColor = (i == 0 || i == 6) ? accent : HCSecondaryLabel();
        [cal addSubview:wd];
    }

    // 周日期行（日号 17 Medium + 农历 9pt；今天 = 选中色圆角块，两行白字；周末列 accent）
    CGFloat cellY = cellTop + 60.0;
    CGFloat cellH = 44.0;   // 今天块包两行并在农历下方多留 6pt（日号 22 + 农历 12 + 边距），随内容块居中
    for (NSInteger i = 0; i < 7; i++) {
        NSDate *d = [g dateByAddingUnit:NSCalendarUnitDay value:i - offset toDate:now options:0];
        NSDateComponents *dc = [g components:NSCalendarUnitDay fromDate:d];
        BOOL isToday = (i == offset);
        BOOL weekend = (i == 0 || i == 6);
        CGFloat cx = 28 + cw * i;
        if (isToday) {
            CGFloat pw = MAX(cw - 6.0, 1.0), ph = MAX(cellH - 2.0, 1.0);
            UIView *pill = [[UIView alloc] initWithFrame:
                            CGRectMake(cx + (cw - pw) / 2.0, cellY + 1.0, pw, ph)];
            pill.backgroundColor = selected;
            pill.layer.cornerRadius = 10.0;
            [cal addSubview:pill];
        }
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(cx, cellY + 2.0, cw, 22)];
        dl.text = [NSString stringWithFormat:@"%ld", (long)dc.day];
        dl.font = [UIFont systemFontOfSize:17.0 weight:UIFontWeightMedium];
        dl.textAlignment = NSTextAlignmentCenter;
        dl.textColor = isToday ? UIColor.whiteColor : (weekend ? accent : [UIColor labelColor]);
        [cal addSubview:dl];

        UILabel *ll = [[UILabel alloc] initWithFrame:CGRectMake(cx, cellY + 26.0, cw, 12)];
        ll.text = HCLunarDayText(d) ?: @"";
        ll.font = [UIFont systemFontOfSize:9.0];
        ll.textAlignment = NSTextAlignmentCenter;
        ll.textColor = isToday ? UIColor.whiteColor : (weekend ? accent : HCSecondaryLabel());
        [cal addSubview:ll];
    }
    }   // end style == 0（默认周历原渲染）

    // 点按弹月历弹层（XOS cadis_calendarTapped → FUN_0015342c：归零月偏移 + 弹层；
    // 天气设置菜单保留给天气徽章点按，XOS 两者动作不同：calendarTapped ≠ weatherBadgeTapped）
    HCCalTapTarget *tgt = [HCCalTapTarget new];
    tgt.block = ^{ [HomeCardCalendarPopup show]; };
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:tgt
                                                                          action:@selector(hcOnTap)];
    // UIGestureRecognizer 对 target 非强持有（Frida 实证：局部 tgt 释放后 _target 变 nil，
    // 手势识别发 action 无接收者 → 点不动）；关联手势强持有，生命周期随手势/视图
    objc_setAssociatedObject(tap, kHCTapTargetKey, tgt, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [cal addGestureRecognizer:tap];

    return cal;
}

#pragma mark - 天气徽章（XOS FUN_00151594 内联段 15303-15451 同构）

// 天气缓存（XOS CadisWeatherCache + CadisWeatherUpdated 同语义：间隔内直接用缓存）
static NSString *hcWeatherText = nil;
static NSString *hcWeatherSym = nil;
static NSTimeInterval hcWeatherAt = 0;
static const NSTimeInterval kHCWeatherCacheInterval = 600.0;

// 天气描述 → SF Symbol（XOS 15226-15300 同一套图标集，按关键字区间映射）
static NSString *HCWeatherSymbolForDesc(NSString *desc) {
    if (!desc.length) return @"cloud.sun.fill";
    NSString *low = [desc lowercaseString];
    NSArray<NSArray<NSString *> *> *rules = @[
        @[@"雷", @"cloud.bolt.rain.fill"], @[@"thunder", @"cloud.bolt.rain.fill"],
        @[@"暴雨", @"cloud.heavyrain.fill"], @[@"大雨", @"cloud.heavyrain.fill"],
        @[@"heavy", @"cloud.heavyrain.fill"],
        @[@"阵雨", @"cloud.rain.fill"], @[@"drizzle", @"cloud.drizzle.fill"],
        @[@"雨", @"cloud.rain.fill"], @[@"rain", @"cloud.rain.fill"],
        @[@"冰雹", @"cloud.hail.fill"], @[@"hail", @"cloud.hail.fill"],
        @[@"雪", @"cloud.snow.fill"], @[@"sleet", @"cloud.sleet.fill"], @[@"snow", @"cloud.snow.fill"],
        @[@"雾", @"cloud.fog.fill"], @[@"霾", @"cloud.fog.fill"],
        @[@"fog", @"cloud.fog.fill"], @[@"mist", @"cloud.fog.fill"], @[@"haze", @"cloud.fog.fill"],
        @[@"烟", @"smoke.fill"], @[@"smoke", @"smoke.fill"],
        @[@"尘", @"sun.dust.fill"], @[@"沙", @"sun.dust.fill"],
        @[@"dust", @"sun.dust.fill"], @[@"sand", @"sun.dust.fill"],
        @[@"多云", @"cloud.sun.fill"], @[@"partly", @"cloud.sun.fill"],
        @[@"阴", @"cloud.fill"], @[@"overcast", @"cloud.fill"],
        @[@"cloudy", @"cloud.fill"], @[@"cloud", @"cloud.fill"],
        @[@"晴", @"sun.max.fill"], @[@"sunny", @"sun.max.fill"],
        @[@"clear", @"sun.max.fill"], @[@"sun", @"sun.max.fill"],
    ];
    for (NSArray<NSString *> *r in rules) {
        if ([low containsString:r[0]]) return r[1];
    }
    return @"cloud.sun.fill";
}

// SF Symbol 14 Medium（XOS 15306：pointSize 14 weight Medium；iOS 13 以下无图标仅文字）
static void HCApplyWeatherIcon(UIImageView *icon, NSString *sym) {
    UIImage *img = nil;
    if (@available(iOS 13.0, *)) {
        img = [UIImage systemImageNamed:sym
                      withConfiguration:
              [UIImageSymbolConfiguration configurationWithPointSize:14.0
                                                               weight:UIImageSymbolWeightMedium]];
    }
    icon.image = img;
    icon.hidden = (img == nil);
}

// 徽章布局（XOS 15338-15376：宽 = 10+图标宽+4+文字宽+10，高 = max(图标高,文字高)+12，
// 图标 x=10，文字 x=图标右+4；最终位置 = 基准 + 百分比 ×(可用区-徽章尺寸)，15441-15442）
static void HCLayoutWeatherBadge(UIView *badge, UIImageView *icon, UILabel *label,
                                 CGFloat xPct, CGFloat xBase, CGFloat xAvail,
                                 CGFloat yPct, CGFloat yBase, CGFloat yAvail) {
    [icon sizeToFit];
    [label sizeToFit];
    CGFloat iw = MAX(CGRectGetWidth(icon.frame), 1.0);
    CGFloat ih = MAX(CGRectGetHeight(icon.frame), 1.0);
    CGFloat lw = MAX(CGRectGetWidth(label.frame), 1.0);
    CGFloat lh = MAX(CGRectGetHeight(label.frame), 1.0);
    CGFloat bw = 10.0 + iw + 4.0 + lw + 10.0;
    CGFloat bh = MAX(ih, lh) + 12.0;
    badge.frame = CGRectMake(xBase + (xPct / 100.0) * (xAvail - bw),
                             yBase + (yPct / 100.0) * (yAvail - bh), bw, bh);
    badge.layer.cornerRadius = bh * 0.5;   // 药丸（XOS CAShapeLayer 圆角 = 高×0.5）
    icon.frame = CGRectMake(10.0, (bh - ih) / 2.0, iw, ih);
    label.frame = CGRectMake(10.0 + iw + 4.0, (bh - lh) / 2.0, lw, lh);
}

// j1 节点取值：{key:[{value:"..."}]} → 首个 value（XOS FUN_00157be0 18186-18249 同款取法）
static NSString *HCJ1Value(NSDictionary *node, NSString *key) {
    NSArray *arr = node[key];
    if (![arr isKindOfClass:[NSArray class]] || arr.count == 0) return nil;
    id first = arr[0];
    if (![first isKindOfClass:[NSDictionary class]]) return nil;
    NSString *v = first[@"value"];
    if (![v isKindOfClass:[NSString class]]) return nil;
    v = [v stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return v.length > 0 ? v : nil;
}

// wttr.in j1 JSON 拉天气（XOS FUN_0015660c URL / 00157be0 解析，反编译同款）。
// 必须用 ?format=j1：实测 one-line format 下 lang 参数不生效（描述恒英文），XOS 正是因此用 j1。
//   URL：城市空 https://wttr.in/?format=j1&lang={zh|en}（IP 定位）；非空 .../{城市}?format=j1&lang=
//   解析：current_condition[0].temp_C；英文模式 desc = weatherDesc（恒英文）；
//         中文模式 desc = lang_zh 优先，空则兜底 weatherDesc；
//         城市名（XOS 18329 分支）：中文模式且配置城市非空 → 配置名；否则 areaName 英文标准名
//         （areaName 解析失败回落配置名）；图标恒按英文描述映射（weatherDesc 恒英文）
static void HCFetchWeather(void (^done)(NSString *text, NSString *sym)) {
    HomeCardConfig *wcfg = [HomeCardConfig shared];
    BOOL en = (wcfg.hcWeatherLang == 1);
    NSString *city = [wcfg.hcWeatherCity stringByTrimmingCharactersInSet:
                      [NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
    NSString *lang = en ? @"en" : @"zh";
    NSString *urlStr;
    if (city.length > 0) {
        NSString *enc = [city stringByAddingPercentEncodingWithAllowedCharacters:
                         [NSCharacterSet URLQueryAllowedCharacterSet]];
        urlStr = [NSString stringWithFormat:@"https://wttr.in/%@?format=j1&lang=%@", enc, lang];
    } else {
        urlStr = [NSString stringWithFormat:@"https://wttr.in/?format=j1&lang=%@", lang];
    }
    NSURL *url = [NSURL URLWithString:urlStr];
    if (!url) return;
    [[[NSURLSession sharedSession] dataTaskWithURL:url
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            if (err) return;
            NSHTTPURLResponse *http = (NSHTTPURLResponse *)resp;
            if (![http isKindOfClass:[NSHTTPURLResponse class]] || http.statusCode != 200) return;
            id json = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
            if (![json isKindOfClass:[NSDictionary class]]) return;
            NSArray *cur = json[@"current_condition"];
            if (![cur isKindOfClass:[NSArray class]] || cur.count == 0) return;
            NSDictionary *c = cur[0];
            if (![c isKindOfClass:[NSDictionary class]]) return;
            NSString *temp = c[@"temp_C"];
            if (![temp isKindOfClass:[NSString class]]) return;
            temp = [temp stringByTrimmingCharactersInSet:
                    [NSCharacterSet whitespaceAndNewlineCharacterSet]];
            if (temp.length == 0) return;
            NSString *descEn = HCJ1Value(c, @"weatherDesc") ?: @"";
            NSString *descShow = descEn;
            if (!en) descShow = HCJ1Value(c, @"lang_zh") ?: descEn;
            NSString *areaName = @"";
            NSArray *areas = json[@"nearest_area"];
            if ([areas isKindOfClass:[NSArray class]] && areas.count > 0
                && [areas[0] isKindOfClass:[NSDictionary class]]) {
                areaName = HCJ1Value(areas[0], @"areaName") ?: @"";
            }
            // 城市名（XOS 18329 同款分支）：中文模式且配置城市非空 → 配置名；否则英文名
            NSString *cityName = (!en && city.length > 0) ? city
                               : (areaName.length > 0 ? areaName : city);
            // XOS 同款文本："新余市 17° Overcast" / 英文模式 "Xinyu 17° Overcast"
            hcWeatherText = cityName.length > 0
                ? [NSString stringWithFormat:@"%@ %@° %@", cityName, temp, descShow]
                : [NSString stringWithFormat:@"%@° %@", temp, descShow];
            hcWeatherSym = HCWeatherSymbolForDesc(descEn);
            hcWeatherAt = [NSDate date].timeIntervalSince1970;
            dispatch_async(dispatch_get_main_queue(), ^{ done(hcWeatherText, hcWeatherSym); });
        }] resume];
}

// 天气徽章：显示位置 1 且日历开 → 在日历区域按 Y% 定位（XOS 15395-15437 同语义），
// 否则（卡片内/联系人内但无联系人挂件）在卡片内定位；
// 可点按弹天气菜单（XOS 15445 cadis_weatherBadgeTapped → FUN_00155870）
static void HCAddWeatherBadge(id vc, UIView *container, HomeCardConfig *cfg, BOOL dark,
                              CGFloat cardX, CGFloat cardW, CGFloat cardY, CGFloat cardH,
                              CGFloat calTop, BOOL calOn) {
    BOOL inCalendar = (cfg.hcWeatherPos == 1 && calOn);
    CGFloat xBase = cardX, xAvail = cardW;
    CGFloat yBase = inCalendar ? calTop : cardY;
    CGFloat yAvail = inCalendar ? (cfg.hcCalBgHeight + 128.0 - 8.0) : cardH;

    UIView *badge = [[UIView alloc] initWithFrame:CGRectZero];
    badge.tag = kHCWeatherTag;
    badge.userInteractionEnabled = YES;   // XOS 同款可点（cadis_weatherBadgeTapped）
    // XOS L15347-15349 实锤：药丸底色默认 [UIColor clearColor]（透明浮层），非白底
    badge.backgroundColor = HCColorForMode(cfg.hcWeatherBgColor, cfg.hcWeatherBgColorDark, dark)
        ?: [UIColor clearColor];
    // XOS FUN_0014b634：透明度存 0-100，应用 /100 并钳制 [0,1]（默认 90 → 0.9）
    badge.alpha = MIN(MAX(cfg.hcWeatherAlpha / 100.0, 0.0), 1.0);

    UIImageView *icon = [[UIImageView alloc] initWithFrame:CGRectZero];
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.tintColor = [UIColor labelColor];
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightMedium];
    label.textColor = [UIColor labelColor];

    NSString *sym = @"cloud.sun.fill", *text = @"--";
    if (hcWeatherText && [NSDate date].timeIntervalSince1970 - hcWeatherAt < kHCWeatherCacheInterval) {
        sym = hcWeatherSym ?: sym;
        text = hcWeatherText;
    }
    label.text = text;
    HCApplyWeatherIcon(icon, sym);
    [badge addSubview:icon];
    [badge addSubview:label];
    HCLayoutWeatherBadge(badge, icon, label,
                         cfg.hcWeatherX, xBase, xAvail, cfg.hcWeatherY, yBase, yAvail);
    [container addSubview:badge];

    // 点按弹天气菜单（XOS 15445 cadis_weatherBadgeTapped 同款）
    HCCalTapTarget *tgt = [HCCalTapTarget new];
    tgt.block = ^{ HCShowCalendarMenu(vc); };
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:tgt
                                                                          action:@selector(hcOnTap)];
    // 同日历：手势对 target 非强持有（Frida 实证），关联强持有防 tgt 提前释放
    objc_setAssociatedObject(tap, kHCTapTargetKey, tgt, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [badge addGestureRecognizer:tap];

    if (!(hcWeatherText && [NSDate date].timeIntervalSince1970 - hcWeatherAt < kHCWeatherCacheInterval)) {
        __weak UIView *wBadge = badge;
        __weak UIImageView *wIcon = icon;
        __weak UILabel *wLabel = label;
        HCFetchWeather(^(NSString *t, NSString *s) {
            if (!wBadge.superview) return;   // header 已重建，丢弃
            wLabel.text = t;
            HCApplyWeatherIcon(wIcon, s);
            HCLayoutWeatherBadge(wBadge, wIcon, wLabel,
                                 cfg.hcWeatherX, xBase, xAvail, cfg.hcWeatherY, yBase, yAvail);
        });
    }
}

// 手势 target 实现（声明在日历段前）
@implementation HCCalTapTarget
- (void)hcOnTap { if (self.block) self.block(); }
@end

// 天气徽章点按菜单（XOS cadis_weatherBadgeTapped → FUN_00155870 同功能项：
// 设置城市（CadisWeatherCity）/ 中文-英文（CadisWeatherLang）/ 刷新天气）
static void HCShowCalendarMenu(id vc) {
    if (!vc || ![vc isKindOfClass:[UIViewController class]]) return;
    HomeCardConfig *cfg = [HomeCardConfig shared];
    NSString *langItem = (cfg.hcWeatherLang == 1) ? @"切换中文天气" : @"切换英文天气";
    __weak id wvc = vc;
    [MioAlertHelper showMenuAlert:@"天气设置"
                          buttons:@[@"设置城市", langItem, @"刷新天气"]
                        onButton:^(NSInteger index) {
        if (index == 0) {
            [MioAlertHelper showInputAlert:@"设置天气城市"
                                   message:@"留空则自动按 IP 定位"
                              initialText:(cfg.hcWeatherCity ?: @"")
                              placeholder:@"如：新余市"
                                  keyboard:UIKeyboardTypeDefault
                                    secure:NO
                                onConfirm:^(NSString *input) {
                HomeCardConfig *c = [HomeCardConfig shared];
                c.hcWeatherCity = [input stringByTrimmingCharactersInSet:
                                   [NSCharacterSet whitespaceAndNewlineCharacterSet]] ?: @"";
                [ConfigManager saveAll];   // 落盘（否则划后台/重启丢失）
                hcWeatherText = nil;   // 城市变了丢弃缓存，重建后立即拉新城市天气
                hcWeatherAt = 0;
                HCScheduleSync(wvc, 0.1);
            }];
        } else if (index == 1) {
            HomeCardConfig *c = [HomeCardConfig shared];
            c.hcWeatherLang = (c.hcWeatherLang == 1) ? 0 : 1;
            [ConfigManager saveAll];   // 落盘
            hcWeatherText = nil;   // 语言切换丢弃缓存，重建后立即拉新语言
            hcWeatherAt = 0;
            HCScheduleSync(wvc, 0.1);
        } else if (index == 2) {
            hcWeatherText = nil;
            hcWeatherAt = 0;
            HCScheduleSync(wvc, 0.0);
        }
    }];
}

// origHeight > 0 且 origView 非空 = 追加式共存（分组条 header 在上，卡片接其下）；
// 否则 = XOS 式整体替换（容器高 = 卡片高 + 12 + 底部占位修正）
static UIView *HCBuildHeader(id vc, CGFloat width, CGFloat origHeight, UIView *origView) {
    HomeCardConfig *cfg = [HomeCardConfig shared];
    CGFloat margin = HCCardMargin(cfg);
    BOOL calOn = cfg.hcCalEnabled;
    NSInteger calPos = MIN(MAX((NSInteger)cfg.hcCalPos, 0), 2);
    CGFloat calH = calOn ? cfg.hcCalBgHeight + 128.0 : 0.0;

    // 卡片高：卡片中放日历时钳制 max(卡高, 日历高-8)（XOS FUN_00159c48）
    CGFloat cardH = HCCardHeight(cfg);
    if (calOn && calPos == 1 && cardH < calH - 8.0) {
        cardH = calH - 8.0;
    }
    CGFloat containerH = origHeight + cardH + 12.0 + cfg.hcCardBottomFix
                       + ((calOn && calPos != 1) ? calH : 0.0);

    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, 0, width, containerH)];
    if (origView) {
        origView.frame = CGRectMake(0, 0, width, origHeight);
        origView.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [container addSubview:origView];
    }

    BOOL dark = NO;
    if (@available(iOS 12.0, *)) {
        dark = [vc traitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
    }

    // 卡片（XOS：日历在上方时卡片整体下移日历高，14972-14996）
    CGFloat cardY = origHeight + ((calOn && calPos == 0) ? calH : 0.0) + 4.0 + cfg.hcCardOffsetY;
    UIView *card = [[UIView alloc] initWithFrame:CGRectMake(margin, cardY,
                                                            width - margin * 2.0, cardH)];
    card.tag = kHCCardTag;
    card.layer.cornerRadius = 10.0;
    card.layer.masksToBounds = YES;
    card.clipsToBounds = YES;

    // 背景色（XOS L15018-15023 实锤：CadisCardBgColor 默认 [UIColor clearColor] 透明，
    // 无图无色时卡片隐形、内容直接浮在列表底上）
    UIColor *bg = HCColorForMode(cfg.hcCardBgColor, cfg.hcCardBgColorDark, dark);
    card.backgroundColor = bg ?: [UIColor clearColor];

    // 边框（XOS：宽度 > 0 才设置 border）
    if (cfg.hcBorderWidth > 0) {
        card.layer.borderWidth = cfg.hcBorderWidth;
        UIColor *bc = HCColorForMode(cfg.hcBorderColor, cfg.hcBorderColorDark, dark)
            ?: [UIColor separatorColor];
        card.layer.borderColor = bc.CGColor;
    }

    // 卡内背景图（XOS L15124 实锤 contentMode=2 AspectFill 铺满裁剪；浅/深色按当前外观）
    UIImage *img = HCImageForDark(dark);
    if (img) {
        UIImageView *iv = [[UIImageView alloc] initWithImage:img];
        iv.tag = kHCImageTag;
        iv.frame = card.bounds;
        iv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        iv.contentMode = UIViewContentModeScaleAspectFill;   // XOS L15124 setContentMode:2 实锤
        iv.userInteractionEnabled = NO;
        [card addSubview:iv];
    }
    [container addSubview:card];

    // 日历挂件（XOS：上方 y=0（14962-14966）；中 = Y%×(卡高-(日历高-8))（15137-15142）；
    // 下方 = 卡高+12+底部修正（15457-15466）；z 序在卡片之上，"卡片中"叠加）
    CGFloat calY = 0.0;
    if (calOn) {
        if (calPos == 0) {
            calY = origHeight;
        } else if (calPos == 1) {
            calY = origHeight + (cfg.hcCalY / 100.0) * (cardH - (calH - 8.0));
        } else {
            calY = origHeight + cardH + 12.0 + cfg.hcCardBottomFix;
        }
        UIView *cal = HCBuildCalendar(vc, width, dark, cfg);
        cal.tag = kHCCalTag;
        cal.frame = CGRectMake(0, calY, width, calH);
        // 内容缩放（XOS FUN_00147ed8：≤0 按 100，钳制 50-200，/100 应用）
        CGFloat s = MIN(MAX(cfg.hcCalScale <= 0 ? 100.0 : cfg.hcCalScale, 50.0), 200.0) / 100.0;
        if (s != 1.0) cal.transform = CGAffineTransformMakeScale(s, s);
        [container addSubview:cal];
    }

    // 天气徽章（z 序最上，XOS 15451 最后添加）
    if (cfg.hcWeatherEnabled) {
        HCAddWeatherBadge(vc, container, cfg, dark, margin, width - margin * 2.0, cardY, cardH,
                          calOn ? calY : 0.0, calOn);
    }

    // 宿主 = MMTableViewCell（SessionGroupsHook 分组条同款）：cell 类型的 header 微信不包装，
    // 直接躺 tableView subviews → unstick 摆完 frame 没人再动，滚到顶部钻进「Windows 已登录」
    // 提示条底下被导航栏裁掉。普通 UIView 会被包装成 header footer view，UITableView 对
    // wrapper 有持续 sticky 维护，滚动中把它钉回顶部 → 盖住提示条（实测截图）
    UITableViewCell *host = [[objc_getClass("MMTableViewCell") alloc]
        initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
    // 全宽三件套清零（SG 同款：防 MMTableViewCell 按 layoutMargins(16pt) 重排内容）
    host.separatorInset = UIEdgeInsetsZero;
    host.layoutMargins = UIEdgeInsetsZero;
    host.preservesSuperviewLayoutMargins = NO;
    host.backgroundColor = UIColor.clearColor;
    container.frame = CGRectMake(0, 0, width, containerH);
    container.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [host.contentView addSubview:container];
    return host;
}

#pragma mark - Apply（标题叠加：XOS xzy_updateHomeTopTitle 同构 + 深浅换图；幂等）

static void HCApply(id vc) {
    if (!HCIsMainFrameVC(vc)) return;

    UITableView *table = HCMainTableView(vc);
    if (!table) return;

    // 宿主直读缓存（SG 同款）： cellul 化后宿主是 MMTableViewCell，不进 UITableView 的
    // headerViewForSection: 记录（原生查找返回 nil）→ 换图刷新永远跳过；weak 缓存是
    // hook_viewForHeader 出口刚赋的新实例
    UIView *header = sHCHeaderCell;
    if (!header || ![header isDescendantOfView:table]) return;

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled) return;

    // ── 卡片实时刷新（浅/深色切换换图/换色；卡片由 viewForHeaderInSection 重建） ──
    BOOL dark = NO;
    if (@available(iOS 12.0, *)) {
        dark = [vc traitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    UIView *card = [header viewWithTag:kHCCardTag];
    if (card) {
        UIImageView *iv = [card viewWithTag:kHCImageTag];
        if (iv) {
            UIImage *img = HCImageForDark(dark);
            if (img) iv.image = img;
        }
        // 浅/深色实时换底色/边框（颜色为构建期取值，需随 trait 同步）
        UIColor *bg = HCColorForMode(cfg.hcCardBgColor, cfg.hcCardBgColorDark, dark);
        card.backgroundColor = bg ?: [UIColor clearColor];
        if (cfg.hcBorderWidth > 0) {
            UIColor *bc = HCColorForMode(cfg.hcBorderColor, cfg.hcBorderColorDark, dark)
                ?: [UIColor separatorColor];
            card.layer.borderColor = bc.CGColor;
        }
    }

    WPLog(@"HomeCard", @"[APPLY] header=%@ card=%@",
          NSStringFromClass(header.class), card ? @"y" : @"n");
}

// viewWillAppear/DidAppear 共用：指纹变化 → reloadData 重建 header → apply
static void HCScheduleSync(id vc, NSTimeInterval delay) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (!HCIsMainFrameVC(vc)) return;
        UITableView *table = HCMainTableView(vc);
        if (!table) return;

        NSString *key = HCGeoKey();
        if (![key isEqualToString:hcLastGeoKey]) {
            hcLastGeoKey = key;
            [table reloadData];
            // 同步跑完布局 → viewForHeaderInSection 执行 → sHCHeaderCell 就绪
            // （ cellul 化后 headerViewForSection: 查不到宿主，HCApply 只能依赖缓存）
            [table layoutIfNeeded];
        }
        HCApply(vc);
    });
}

#pragma mark - Hooks

static __weak id hcLastMainVC = nil;   // 最近一次经过的主 VC（弹层样式切换通知用）

static void hook_NMFVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewWillAppear)(self, _cmd, animated);
    hcLastMainVC = self;
    // XOS：viewWillAppear/viewDidAppear 后重铺；表格布局完成后 headerViewForSection:0
    // 才就绪，两次延时兜底（幂等清理，重复铺无副作用）
    HCScheduleSync(self, 0.15);
    HCScheduleSync(self, 0.6);
}

static void hook_NMFVC_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewDidAppear)(self, _cmd, animated);
    hcLastMainVC = self;
    HCScheduleSync(self, 0.05);
}

// 弹层「选择日历样式」后即时刷新首页卡片挂件（指纹已含样式值，重铺即重建新布局）
static void HCOnStyleChanged(NSNotification *note) {
    HCScheduleSync(hcLastMainVC, 0.0);
}

static void hook_NMFVC_traitCollectionDidChange(id self, SEL _cmd, UITraitCollection *previous) {
    ((void (*)(id, SEL, id))orig_NMFVC_traitCollectionDidChange)(self, _cmd, previous);
    // XOS：外观切换重铺 → 浅/深色卡片图片自动换
    HCScheduleSync(self, 0.15);
}

// XOS FUN_00152ce0→FUN_00159b64：仅 section 0 改高。
// 分组条开 → 原高 + 追加高（卡片高 + 12 + 底部占位修正 + 日历上/下方额外高）；
// 分组条关 → XOS 式整体替换（追加高即总高）
static CGFloat hook_NMFVC_heightForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    CGFloat orig = ((CGFloat (*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_heightForHeader)
        (self, _cmd, tableView, section);
    if (section != 0) return orig;

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled) return orig;

    CGFloat delta = HCHeaderExtra(cfg);
    return HCStripOccupied() ? orig + delta : delta;
}

// XOS FUN_00151594：仅 section 0 重建 header
static UIView *hook_NMFVC_viewForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (section != 0) {
        return ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
    }

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled) {
        return ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
    }

    CGFloat width = CGRectGetWidth(tableView.frame);
    if (width <= 0.0) width = [UIScreen mainScreen].bounds.size.width;

    BOOL strip = HCStripOccupied();
    UIView *host;
    if (strip) {
        // 追加式共存：原生/分组条 header 在上（原高），卡片接在其下
        UIView *origView = ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
        CGFloat origH = origView ? CGRectGetHeight(origView.frame) : 0.0;
        WPLog(@"HomeCard", @"[HEADER] wrap w=%.1f orig=%@ h=%.1f cardH=%.1f",
              width, origView ? NSStringFromClass(origView.class) : @"nil", origH, HCCardHeight(cfg));
        host = HCBuildHeader(self, width, origH, origView);
    } else {
        // XOS 式整体替换（原生 header 弃用，XOS 同款）
        WPLog(@"HomeCard", @"[HEADER] replace w=%.1f cardH=%.1f margin=%.1f bottomFix=%.1f",
              width, HCCardHeight(cfg), HCCardMargin(cfg), cfg.hcCardBottomFix);
        host = HCBuildHeader(self, width, 0.0, nil);
    }
    // 出口刷新缓存（SG 同款：创建/复用两条路径都刷新，防止复用实例更替后缓存陈旧）
    sHCHeaderCell = (UITableViewCell *)host;
    return host;
}

// header 去粘滞（SessionGroupsHook.m SGUnstickHeader 完全同款，源出 WCR
// WCRefineHomeHeaderUnstick unstickIfNeededOnTableView: Misc_part4.c:1970-2264）：
// plain tableView 的 section header 会 sticky 悬停钉顶，与微信「Windows 已登录」
// 浮层提示条同位重叠。每次 layoutSubviews 后把宿主 cell frame 用
// rectForHeaderInSection: 的内容坐标理论位置摆回去 → cell 是 table 直接子视图
// （MMTableViewCell 微信不包装），frame.y 恒定内容坐标 = 跟随内容滚动；UIKit 每次
// 想钉顶就被拉回内容流。条随列表滚走滚回，提示条浮层只在滚动经过顶部一瞬擦肩。
// 未接管时 weak 缓存为 nil，立即空操作
static void HCUnstickHeader(UITableView *table) {
    UITableViewCell *host = sHCHeaderCell;
    if (!host) return;                              // 未接管：weak 空，立即返回
    if (![host isDescendantOfView:table]) return;   // 归属检查：其他 table 触发的 layout 跳过（孤儿 view 亦为 NO）
    CGRect target = [table rectForHeaderInSection:0];
    if (target.size.height <= 0) return;
    // 只在 frame 真不一致时才写，避免高频空写触发多余布局
    CGRect f = host.frame;
    if (fabs(f.origin.y - target.origin.y) < 0.5 &&
        fabs(f.size.height - target.size.height) < 0.5) {
        return;
    }
    host.frame = target;
}

static void hook_tableLayoutSubviews(UITableView *table, SEL _cmd) {
    if (orig_tableLayout) ((void (*)(id, SEL))orig_tableLayout)(table, _cmd);
    @try {
        HCUnstickHeader(table);
    } @catch (NSException *e) {
        WPLog(@"HomeCard", @"[Unstick] err=%@", e);
    }
}

@implementation HomeCardHook

+ (void)install {
    if (hcHookInstalled) return;
    hcHookInstalled = YES;
    hcImageCache = [[NSCache alloc] init];

    Class cls = objc_getClass("NewMainFrameViewController");
    if (!cls) {
        WPLog(@"HomeCard", @"[Hook] ✗ NewMainFrameViewController 不存在");
        return;
    }

    MSHookMessageEx(cls, @selector(viewWillAppear:),
                    (IMP)hook_NMFVC_viewWillAppear, &orig_NMFVC_viewWillAppear);
    MSHookMessageEx(cls, @selector(viewDidAppear:),
                    (IMP)hook_NMFVC_viewDidAppear, &orig_NMFVC_viewDidAppear);
    MSHookMessageEx(cls, @selector(traitCollectionDidChange:),
                    (IMP)hook_NMFVC_traitCollectionDidChange,
                    &orig_NMFVC_traitCollectionDidChange);
    MSHookMessageEx(cls, @selector(tableView:heightForHeaderInSection:),
                    (IMP)hook_NMFVC_heightForHeader, &orig_NMFVC_heightForHeader);
    MSHookMessageEx(cls, @selector(tableView:viewForHeaderInSection:),
                    (IMP)hook_NMFVC_viewForHeader, &orig_NMFVC_viewForHeader);
    // header 去粘滞：与 SessionGroupsHook 链式叠加（各自摆各自的对象，幂等不冲突）；
    // 类缺失时跳过，header 降级为原生 sticky
    Class tableCls = objc_getClass("MainFrameTableView");
    if (tableCls) {
        MSHookMessageEx(tableCls, @selector(layoutSubviews),
                        (IMP)hook_tableLayoutSubviews, &orig_tableLayout);
    } else {
        WPLog(@"HomeCard", @"[Hook] MainFrameTableView 不存在，header 保持原生 sticky");
    }
    WPLog(@"HomeCard", @"[Hook] ✓ NewMainFrameViewController（viewWillAppear/DidAppear/trait/heightForHeader/viewForHeader）");

    // 弹层样式切换 → 即时重建卡片挂件（HomeCardCalendarPopup onSwitchStyle 发通知）
    [[NSNotificationCenter defaultCenter] addObserverForName:@"MioHomeCardStyleChanged"
                                                      object:nil queue:nil
                                                  usingBlock:HCOnStyleChanged];
    WPLog(@"HomeCard", @"[Hook] ✓ 日历样式变更通知监听");
}

@end