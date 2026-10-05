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
//   · 仅当「启用卡片且有视觉配置（图片/背景色/边框）」才替换 section 0 header；
//     纯标题（无视觉件）维持旧叠加逻辑，不动 header 结构
//   · 与电报分组/侧边分组互斥（它们接管 section 0 header）
//   · 配置变更后经 viewWillAppear 指纹比对触发主表 reloadData 重建 header
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

// 叠加视图 tag（'MC'/'MT'/'MI'，避开微信原生 tag）
static const NSInteger kHCCardTag = 0x4D43;   // 卡片视图（挂在 header 容器上）
static const NSInteger kHCTitleTag = 0x4D54;  // 标题 label（挂在 header 容器上）
static const NSInteger kHCImageTag = 0x4D49;  // 卡内背景图（挂在卡片上）

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
    // 电报分组条 / 侧边分组条接管 section 0 header 时首页卡片让位
    return [SessionGroupsConfig shared].sgEnabled || [SideGroupsConfig shared].sdEnabled;
}

// 是否有视觉件（决定是否替换 header 结构）
static BOOL HCHasCardVisual(HomeCardConfig *cfg) {
    return [HomeCardConfig hasLightImage] || [HomeCardConfig hasDarkImage] ||
           cfg.hcCardBgColor.length > 0 || cfg.hcBorderWidth > 0;
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

// 配置指纹（几何/颜色/图片路径变化 → reloadData 重建 header）
static NSString *HCGeoKey(void) {
    HomeCardConfig *cfg = [HomeCardConfig shared];
    return [NSString stringWithFormat:@"%d|%@|%.1f|%.1f|%@|%@|%.1f|%.1f|%.1f|%.1f|%.1f|%@|%@|%@",
            cfg.hcEnabled, cfg.hcTitle ?: @"", cfg.hcTitleSize, cfg.hcTitleOffsetX,
            [HomeCardConfig lightImagePath] ?: @"", [HomeCardConfig darkImagePath] ?: @"",
            cfg.hcCardHeight, cfg.hcCardOffsetY, cfg.hcCardBottomFix, cfg.hcCardMargin,
            cfg.hcBorderWidth, cfg.hcBorderColor ?: @"", cfg.hcCardBgColor ?: @"",
            HCStripOccupied() ? @"strip" : @"free"];
}

#pragma mark - Header 构建（XOS FUN_00151594 section-0 同构，无挂件分支）

static UIView *HCBuildHeader(id vc, CGFloat width) {
    HomeCardConfig *cfg = [HomeCardConfig shared];
    CGFloat cardH = HCCardHeight(cfg);
    CGFloat margin = HCCardMargin(cfg);
    CGFloat containerH = cardH + 12.0 + cfg.hcCardBottomFix;

    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, 0, width, containerH)];

    UIView *card = [[UIView alloc] initWithFrame:CGRectMake(margin, 4.0 + cfg.hcCardOffsetY,
                                                            width - margin * 2.0, cardH)];
    card.tag = kHCCardTag;
    card.layer.cornerRadius = 10.0;
    card.layer.masksToBounds = YES;
    card.clipsToBounds = YES;

    // 背景色（XOS CadisCardBgColor；Mio 空 = 透明）
    UIColor *bg = HCColor(cfg.hcCardBgColor);
    card.backgroundColor = bg ?: [UIColor clearColor];

    // 边框（XOS：宽度 > 0 才设置 border）
    if (cfg.hcBorderWidth > 0) {
        card.layer.borderWidth = cfg.hcBorderWidth;
        UIColor *bc = HCColor(cfg.hcBorderColor) ?: [UIColor separatorColor];
        card.layer.borderColor = bc.CGColor;
    }

    // 卡内背景图（XOS contentMode=2 AspectFit；浅/深色按当前外观）
    BOOL dark = NO;
    if (@available(iOS 12.0, *)) {
        dark = [vc traitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
    }
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

    // ── 卡内背景图换图（浅/深色切换；卡片由 viewForHeaderInSection 重建） ──
    UIView *card = [header viewWithTag:kHCCardTag];
    if (card) {
        UIImageView *iv = [card viewWithTag:kHCImageTag];
        if (iv) {
            BOOL dark = NO;
            if (@available(iOS 12.0, *)) {
                dark = [vc traitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
            }
            UIImage *img = HCImageForDark(dark);
            if (img) iv.image = img;
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

        lb.frame = CGRectMake(x, (headerH - rowH) * 0.5, w, rowH);
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

// XOS FUN_00152ce0→FUN_00159b64：仅 section 0 返回 卡片高+12+底部占位修正
static CGFloat hook_NMFVC_heightForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    CGFloat orig = ((CGFloat (*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_heightForHeader)
        (self, _cmd, tableView, section);
    if (section != 0) return orig;

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled || HCStripOccupied() || !HCHasCardVisual(cfg)) return orig;

    return HCCardHeight(cfg) + 12.0 + cfg.hcCardBottomFix;
}

// XOS FUN_00151594：仅 section 0 整体替换为自制卡片 header
static UIView *hook_NMFVC_viewForHeader(id self, SEL _cmd, UITableView *tableView, NSInteger section) {
    if (section != 0) {
        return ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
    }

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled || HCStripOccupied() || !HCHasCardVisual(cfg)) {
        return ((UIView *(*)(id, SEL, UITableView *, NSInteger))orig_NMFVC_viewForHeader)
            (self, _cmd, tableView, section);
    }

    CGFloat width = CGRectGetWidth(tableView.frame);
    if (width <= 0.0) width = [UIScreen mainScreen].bounds.size.width;

    WPLog(@"HomeCard", @"[HEADER] build w=%.1f cardH=%.1f margin=%.1f bottomFix=%.1f",
          width, HCCardHeight(cfg), HCCardMargin(cfg), cfg.hcCardBottomFix);
    return HCBuildHeader(self, width);
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
