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
//   · xzy_updateHomeTopTitle：headerViewForSection:0 上叠加标题（详见 HCApply 注释）
//
//  【Mio 移植差异】
//   · 总开关一开必建卡片（背景色空 → secondarySystemGroupedBackgroundColor 兜底，
//     对齐 XOS 默认色兜底语义，保证开关即可见）
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
//     FUN_00159db8 布局：内区 (16,0,w-32,总高-8) 圆角14，月标题 15 Bold (12,4,内宽-24,20)，
//     星期行 y=30 h=14 列宽 (内宽-24)/7 11 Medium，周末列 accent 色
//   · 天气 CadisWeatherMode/Pos(0卡片内/1日历内/2联系人内)/OffsetX(默认85)/OffsetY(默认5)/
//     Alpha(0-100，FUN_0014b634 应用 /100 钳[0,1]，默认90) + WeatherColor（药丸底色）
//     FUN_00151594 内联段 15303-15451：SF Symbol 14 Medium 图标 + 12 Medium 白字，
//     徽章宽 = 10+图标+4+文字+10，高 = max+12，CAShapeLayer 药丸圆角 = 高×0.5，
//     定位 = 基准 + X%×(卡宽-徽宽) / Y%×(区域高-徽高)；显示位置 1 且日历开 → 日历区域定位
//     天气数据：XOS 默认 source=wttr（wttr.in，无 key），和风为付费配置不移植
//

#import "HomeCardHook.h"
#import "HomeCardConfig.h"
#import "../SessionGroups/SessionGroupsConfig.h"
#import "../SideGroups/SideGroupsConfig.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColorUtil.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

// 叠加视图 tag（'MC'/'MT'/'MI'/'ME'/'MF'，避开微信原生 tag）
static const NSInteger kHCCardTag = 0x4D43;      // 卡片视图（挂在 header 容器上）
static const NSInteger kHCTitleTag = 0x4D54;     // 标题 label（挂在 header 容器上）
static const NSInteger kHCImageTag = 0x4D49;     // 卡内背景图（挂在卡片上）
static const NSInteger kHCCalTag = 0x4D45;       // 日历挂件（挂在 header 容器上）
static const NSInteger kHCWeatherTag = 0x4D46;   // 天气徽章（挂在 header 容器上）

static IMP orig_NMFVC_viewWillAppear = NULL;
static IMP orig_NMFVC_viewDidAppear = NULL;
static IMP orig_NMFVC_traitCollectionDidChange = NULL;
static IMP orig_NMFVC_heightForHeader = NULL;
static IMP orig_NMFVC_viewForHeader = NULL;
static BOOL hcHookInstalled = NO;
static NSCache<NSString *, UIImage *> *hcImageCache = nil;
static NSString *hcLastGeoKey = nil;   // 配置指纹：变化才 reloadData 重建 header

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
            @"%d|%@|%.1f|%.1f|%@|%@|%.1f|%.1f|%.1f|%.1f|%.1f|%@|%@|%@|%@|%@|%d"
            @"|%d|%ld|%.1f|%.1f|%.1f|%@|%@"
            @"|%d|%ld|%.1f|%.1f|%.1f|%@|%@|%@|%@|%@|%@",
            cfg.hcEnabled, cfg.hcTitle ?: @"", cfg.hcTitleSize, cfg.hcTitleOffsetX,
            [HomeCardConfig lightImagePath] ?: @"", [HomeCardConfig darkImagePath] ?: @"",
            cfg.hcCardHeight, cfg.hcCardOffsetY, cfg.hcCardBottomFix, cfg.hcCardMargin,
            cfg.hcBorderWidth, cfg.hcBorderColor ?: @"", cfg.hcBorderColorDark ?: @"",
            cfg.hcCardBgColor ?: @"", cfg.hcCardBgColorDark ?: @"",
            HCStripOccupied() ? @"strip" : @"free", dark,
            cfg.hcWeatherEnabled, (long)cfg.hcWeatherPos, cfg.hcWeatherX, cfg.hcWeatherY,
            cfg.hcWeatherAlpha, cfg.hcWeatherBgColor ?: @"", cfg.hcWeatherBgColorDark ?: @"",
            cfg.hcCalEnabled, (long)cfg.hcCalPos, cfg.hcCalY, cfg.hcCalBgHeight, cfg.hcCalScale,
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

// ── 日历挂件（XOS FUN_00159db8 同构）：
//    总高 = CadisCalendarBgHeight + 128（FUN_00136804）；内区 (16,0,w-32,总高-8) 圆角14 底色
//    月标题 15 Bold (12,4,内宽-24,20)；星期行 y=30 h=14，列宽 (内宽-24)/7，11 Medium 居中，
//    周末列 = CadisCalendarAccentColor（节假日颜色）；日期网格 6 行 12 Medium，
//    今天 = CadisCalendarSelectedColor 圆底白字；内容缩放 = 钳制(50-200)/100（FUN_00147ed8） ──
static UIView *HCBuildCalendar(CGFloat width, BOOL dark, HomeCardConfig *cfg) {
    CGFloat calH = cfg.hcCalBgHeight + 128.0;
    CGFloat gridW = width - 32.0 - 24.0;   // 内区宽再收 12 边距
    CGFloat cw = gridW / 7.0;
    if (cw < 1.0) cw = 1.0;

    UIColor *bg = HCColorForMode(cfg.hcCalBgColor, cfg.hcCalBgColorDark, dark)
        ?: [UIColor secondarySystemGroupedBackgroundColor];
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

    NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate *now = [NSDate date];
    NSDateComponents *cur = [g components:NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay
                                 fromDate:now];
    NSInteger daysInMonth = [g rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth
                                  forDate:now].length;
    NSDateComponents *first = [NSDateComponents new];
    first.year = cur.year; first.month = cur.month; first.day = 1;
    // 月首是周几（NSCalendarUnitWeekday：1=周日 → 0 基）
    NSInteger firstWeekday = [g component:NSCalendarUnitWeekday
                                 fromDate:[g dateFromComponents:first]] - 1;

    // 月标题（XOS 19822-19839：15 Bold，frame (12,4,内宽-24,20)）
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(28, 4, gridW, 20)];
    title.text = [NSString stringWithFormat:@"%ld年%ld月", (long)cur.year, (long)cur.month];
    title.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightBold];
    title.textColor = [UIColor labelColor];
    [cal addSubview:title];

    // 星期行（XOS 19859-19880：y=30 h=14，11 Medium 居中，周末列 accent 色）
    NSArray<NSString *> *weekNames = @[@"日", @"一", @"二", @"三", @"四", @"五", @"六"];
    for (NSInteger i = 0; i < 7; i++) {
        UILabel *wd = [[UILabel alloc] initWithFrame:CGRectMake(28 + cw * i, 30, cw, 14)];
        wd.text = weekNames[i];
        wd.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightMedium];
        wd.textAlignment = NSTextAlignmentCenter;
        wd.textColor = (i == 0 || i == 6) ? accent : HCSecondaryLabel();
        [cal addSubview:wd];
    }

    // 日期网格（6 行，今天 = 选中色圆底白字，周末列 = 节假日色）
    CGFloat rowH = MAX((calH - 8.0 - 48.0) / 6.0, 1.0);
    for (NSInteger i = 0; i < 42; i++) {
        NSInteger day = i - firstWeekday + 1;
        if (day < 1 || day > daysInMonth) continue;
        NSInteger col = i % 7, row = i / 7;
        CGRect cell = CGRectMake(28 + cw * col, 48 + rowH * row, cw, rowH);
        BOOL isToday = (day == cur.day);
        if (isToday) {
            CGFloat d = MIN(cw, rowH) - 8.0;
            if (d < 1.0) d = 1.0;
            UIView *dot = [[UIView alloc] initWithFrame:
                           CGRectMake(cell.origin.x + (cw - d) / 2.0,
                                      cell.origin.y + (rowH - d) / 2.0, d, d)];
            dot.backgroundColor = selected;
            dot.layer.cornerRadius = d / 2.0;
            [cal addSubview:dot];
        }
        UILabel *dl = [[UILabel alloc] initWithFrame:cell];
        dl.text = [NSString stringWithFormat:@"%ld", (long)day];
        dl.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightMedium];
        dl.textAlignment = NSTextAlignmentCenter;
        dl.textColor = isToday ? UIColor.whiteColor
                               : ((col == 0 || col == 6) ? accent : [UIColor labelColor]);
        [cal addSubview:dl];
    }
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

// wttr.in 拉天气（XOS 默认 source=wttr，CadisWeatherQHost/QKey 为和风付费源不移植），
// 成功才写缓存并回调（主线程）
static void HCFetchWeather(void (^done)(NSString *text, NSString *sym)) {
    NSURL *url = [NSURL URLWithString:@"https://wttr.in/?format=%C|%t&lang=zh"];
    if (!url) return;
    [[[NSURLSession sharedSession] dataTaskWithURL:url
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            if (err) return;
            NSHTTPURLResponse *http = (NSHTTPURLResponse *)resp;
            if (![http isKindOfClass:[NSHTTPURLResponse class]] || http.statusCode != 200) return;
            NSString *body = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
            if (body.length == 0 || ![body containsString:@"|"]) return;
            NSArray<NSString *> *parts = [body componentsSeparatedByString:@"|"];
            NSString *desc = [parts[0] stringByTrimmingCharactersInSet:
                              [NSCharacterSet whitespaceAndNewlineCharacterSet]];
            NSString *temp = parts.count > 1 ? parts[1] : @"";
            temp = [temp stringByReplacingOccurrencesOfString:@"+" withString:@""];
            temp = [temp stringByReplacingOccurrencesOfString:@"°C" withString:@""];
            temp = [temp stringByReplacingOccurrencesOfString:@"°" withString:@""];
            temp = [temp stringByTrimmingCharactersInSet:
                    [NSCharacterSet whitespaceAndNewlineCharacterSet]];
            if (temp.length == 0) return;
            hcWeatherText = [NSString stringWithFormat:@"%@° %@", temp, desc];
            hcWeatherSym = HCWeatherSymbolForDesc(desc);
            hcWeatherAt = [NSDate date].timeIntervalSince1970;
            dispatch_async(dispatch_get_main_queue(), ^{ done(hcWeatherText, hcWeatherSym); });
        }] resume];
}

// 天气徽章：显示位置 1 且日历开 → 在日历区域按 Y% 定位（XOS 15395-15437 同语义），
// 否则（卡片内/联系人内但无联系人挂件）在卡片内定位
static void HCAddWeatherBadge(UIView *container, HomeCardConfig *cfg, BOOL dark,
                              CGFloat cardX, CGFloat cardW, CGFloat cardY, CGFloat cardH,
                              CGFloat calTop, BOOL calOn) {
    BOOL inCalendar = (cfg.hcWeatherPos == 1 && calOn);
    CGFloat xBase = cardX, xAvail = cardW;
    CGFloat yBase = inCalendar ? calTop : cardY;
    CGFloat yAvail = inCalendar ? (cfg.hcCalBgHeight + 128.0 - 8.0) : cardH;

    UIView *badge = [[UIView alloc] initWithFrame:CGRectZero];
    badge.tag = kHCWeatherTag;
    badge.userInteractionEnabled = NO;
    badge.backgroundColor = HCColorForMode(cfg.hcWeatherBgColor, cfg.hcWeatherBgColorDark, dark)
        ?: [UIColor systemBlueColor];
    // XOS FUN_0014b634：透明度存 0-100，应用 /100 并钳制 [0,1]（默认 90 → 0.9）
    badge.alpha = MIN(MAX(cfg.hcWeatherAlpha / 100.0, 0.0), 1.0);

    UIImageView *icon = [[UIImageView alloc] initWithFrame:CGRectZero];
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.tintColor = UIColor.whiteColor;
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightMedium];
    label.textColor = UIColor.whiteColor;

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

    // 背景色（XOS CadisCardBgColor 带默认色兜底；Mio 空 = 分组卡片底色，保证开关即可见）
    UIColor *bg = HCColorForMode(cfg.hcCardBgColor, cfg.hcCardBgColorDark, dark);
    card.backgroundColor = bg ?: [UIColor secondarySystemGroupedBackgroundColor];

    // 边框（XOS：宽度 > 0 才设置 border）
    if (cfg.hcBorderWidth > 0) {
        card.layer.borderWidth = cfg.hcBorderWidth;
        UIColor *bc = HCColorForMode(cfg.hcBorderColor, cfg.hcBorderColorDark, dark)
            ?: [UIColor separatorColor];
        card.layer.borderColor = bc.CGColor;
    }

    // 卡内背景图（XOS contentMode=2 AspectFit；浅/深色按当前外观）
    UIImage *img = HCImageForDark(dark);
    if (img) {
        UIImageView *iv = [[UIImageView alloc] initWithImage:img];
        iv.tag = kHCImageTag;
        iv.frame = card.bounds;
        iv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        iv.contentMode = UIViewContentModeScaleAspectFit;
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
        UIView *cal = HCBuildCalendar(width, dark, cfg);
        cal.tag = kHCCalTag;
        cal.frame = CGRectMake(0, calY, width, calH);
        // 内容缩放（XOS FUN_00147ed8：≤0 按 100，钳制 50-200，/100 应用）
        CGFloat s = MIN(MAX(cfg.hcCalScale <= 0 ? 100.0 : cfg.hcCalScale, 50.0), 200.0) / 100.0;
        if (s != 1.0) cal.transform = CGAffineTransformMakeScale(s, s);
        [container addSubview:cal];
    }

    // 天气徽章（z 序最上，XOS 15451 最后添加）
    if (cfg.hcWeatherEnabled) {
        HCAddWeatherBadge(container, cfg, dark, margin, width - margin * 2.0, cardY, cardH,
                          calOn ? calY : 0.0, calOn);
    }

    return container;
}

#pragma mark - Apply（标题叠加：XOS xzy_updateHomeTopTitle 同构 + 深浅换图；幂等）

static void HCApply(id vc) {
    if (!HCIsMainFrameVC(vc)) return;

    UITableView *table = HCMainTableView(vc);
    if (!table) return;

    UIView *header = [table headerViewForSection:0];
    if (!header) return;

    // 幂等：先清旧标题层
    [[header viewWithTag:kHCTitleTag] removeFromSuperview];

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
        card.backgroundColor = bg ?: [UIColor secondarySystemGroupedBackgroundColor];
        if (cfg.hcBorderWidth > 0) {
            UIColor *bc = HCColorForMode(cfg.hcBorderColor, cfg.hcBorderColorDark, dark)
                ?: [UIColor separatorColor];
            card.layer.borderColor = bc.CGColor;
        }
    }

    // ── 主页标题（XOS 布局同构） ──
    NSString *text = cfg.hcTitle;
    if (text.length > 0) {
        CGFloat size = cfg.hcTitleSize;
        if (size < 8.0) size = 20.0;  // XOS：NaN/inf/<8 → 默认 20

        UIFont *font = [UIFont systemFontOfSize:size weight:UIFontWeightSemibold];
        UILabel *lb = [[UILabel alloc] initWithFrame:CGRectZero];
        lb.tag = kHCTitleTag;
        lb.text = text;
        lb.font = font;
        lb.textColor = [UIColor labelColor];
        lb.numberOfLines = 1;

        CGFloat headerH = header.bounds.size.height;
        CGFloat headerW = header.bounds.size.width;
        CGSize ts = [text sizeWithAttributes:@{NSFontAttributeName: font}];

        CGFloat rowH = MAX(ceil(size + 8.0), 44.0);
        CGFloat x = 16.0 + cfg.hcTitleOffsetX;
        CGFloat w = headerW - x - 8.0;
        if (w <= 1.0) w = 1.0;
        if (floor(ts.width) + 16.0 <= w) w = floor(ts.width) + 16.0;
        if (w <= 44.0) w = 44.0;

        // 有卡片时标题在卡片竖向居中（XOS 容器=卡片区的同构语义）；无卡片时在整个 header 居中
        CGFloat centerY = headerH * 0.5;
        if (card) centerY = CGRectGetMidY(card.frame);
        lb.frame = CGRectMake(x, centerY - rowH * 0.5, w, rowH);
        [header addSubview:lb];
    }

    WPLog(@"HomeCard", @"[APPLY] header=%@ card=%@ title=%@",
          NSStringFromClass(header.class), card ? @"y" : @"n", text.length > 0 ? @"y" : @"n");
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
            [table reloadData];  // 让 viewForHeaderInSection 按新几何重建
        }
        HCApply(vc);
    });
}

#pragma mark - Hooks

static void hook_NMFVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewWillAppear)(self, _cmd, animated);
    // XOS：viewWillAppear/viewDidAppear 后重铺；表格布局完成后 headerViewForSection:0
    // 才就绪，两次延时兜底（幂等清理，重复铺无副作用）
    HCScheduleSync(self, 0.15);
    HCScheduleSync(self, 0.6);
}

static void hook_NMFVC_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewDidAppear)(self, _cmd, animated);
    HCScheduleSync(self, 0.05);
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
    if (strip) {
        // 追加式共存：原生/分组条 header 在上（原高），卡片接在其下
        UIView *origView = ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
        CGFloat origH = origView ? CGRectGetHeight(origView.frame) : 0.0;
        WPLog(@"HomeCard", @"[HEADER] wrap w=%.1f orig=%@ h=%.1f cardH=%.1f",
              width, origView ? NSStringFromClass(origView.class) : @"nil", origH, HCCardHeight(cfg));
        return HCBuildHeader(self, width, origH, origView);
    }

    // XOS 式整体替换（原生 header 弃用，XOS 同款）
    WPLog(@"HomeCard", @"[HEADER] replace w=%.1f cardH=%.1f margin=%.1f bottomFix=%.1f",
          width, HCCardHeight(cfg), HCCardMargin(cfg), cfg.hcCardBottomFix);
    return HCBuildHeader(self, width, 0.0, nil);
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
    WPLog(@"HomeCard", @"[Hook] ✓ NewMainFrameViewController（viewWillAppear/DidAppear/trait/heightForHeader/viewForHeader）");
}

@end
