//
//  HomeCardHook.m
//  MioPlugin
//
//  首页卡片 Hook —— 移植自 XOS（Cadis）主页卡片功能（XOS反编译 FUN__part3.c）：
//
//  XOS 原实现（NewMainFrameViewController = 微信主页 VC）：
//    · MSHookMessageEx(viewDidLoad/viewWillAppear/viewDidAppear/viewWillDisappear/
//      viewDidDisappear/traitCollectionDidChange:/dealloc) 重铺；
//    · class_addMethod(xzy_updateHomeTopTitle)：取主表 headerViewForSection:0，
//      往 header 上叠加 标题容器(tag 9282)+UILabel(tag 9281)+透明按钮(tag 9283)：
//        - 配置 xzyHomeCardTitle / xzyHomeCardTitleSize / xzyHomeCardTitleOffsetX
//        - 字体 [UIFont systemFontOfSize: size weight: Semibold]，size<8 → 20
//        - 布局：x = header.minX + 16 + offsetX；行高 = max(ceil(size+8), 44)；
//          y = (header高 - 行高)/2 垂直居中；宽 = clamp(文本宽+16, 44, header宽-x-8)
//        - label 颜色 = 动态 UIColor（浅/深色自动适配）
//        - 文本留空 → 清除叠加
//    · tableView:viewForHeaderInSection: / heightForHeaderInSection:：整体替换
//      section 0 header 为自制圆角卡片（圆角10、CadisCardBgColor 底色、边框），
//      卡片背景 UIImageView 载入 CadisSelectedCardLight / CadisSelectedCardDark
//      （按文件名从磁盘 imageWithContentsOfFile，带 path→image 缓存，contentMode AspectFit）
//    · traitCollectionDidChange → 重铺（浅/深色切换换图）
//
//  Mio 移植差异（只取用户要的功能，不整体替换 header，避免与微信原生结构冲突）：
//    · 不 hook viewDidLoad/dealloc（无通知观察者，无需清理），viewWillAppear/
//      viewDidAppear/traitCollectionDidChange 延时幂等重铺
//    · 卡片图片：叠在原生 header 最底层（insertSubview atIndex:0，AspectFill），
//      浅/深色两套独立磁盘文件（MioHomeCard 目录）
//    · 标题：同 XOS 叠加布局（不带透明按钮，Mio 无点击跳设置需求）
//    · 与电报分组条互斥：分组条接管 section 0 header 时不叠加
//

#import "HomeCardHook.h"
#import "HomeCardConfig.h"
#import "../SessionGroups/SessionGroupsConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

// 叠加视图 tag（'MC'/'MT'，避开微信原生 tag）
static const NSInteger kHCImageTag = 0x4D43;
static const NSInteger kHCTitleTag = 0x4D54;

static IMP orig_NMFVC_viewWillAppear = NULL;
static IMP orig_NMFVC_viewDidAppear = NULL;
static IMP orig_NMFVC_traitCollectionDidChange = NULL;
static BOOL hcHookInstalled = NO;
static NSCache<NSString *, UIImage *> *hcImageCache = nil;

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

#pragma mark - Apply（XOS xzy_updateHomeTopTitle 同构，幂等重铺）

static void HCApply(id vc) {
    if (!HCIsMainFrameVC(vc)) return;

    UITableView *table = HCMainTableView(vc);
    if (!table) return;

    UIView *header = [table headerViewForSection:0];
    if (!header) return;

    // 幂等：先清掉旧叠加
    [[header viewWithTag:kHCImageTag] removeFromSuperview];
    [[header viewWithTag:kHCTitleTag] removeFromSuperview];

    HomeCardConfig *cfg = [HomeCardConfig shared];
    if (!cfg.hcEnabled) return;

    // 与电报分组条互斥：分组条接管 section 0 header 时不叠加
    if ([SessionGroupsConfig shared].sgEnabled) return;

    // ── 卡片图片（浅/深色随外观，衬在原生 header 最底层） ──
    BOOL dark = NO;
    if (@available(iOS 12.0, *)) {
        dark = [vc traitCollection].userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    UIImage *img = HCImageForDark(dark);
    if (img) {
        UIImageView *iv = [[UIImageView alloc] initWithImage:img];
        iv.tag = kHCImageTag;
        iv.frame = header.bounds;
        iv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        iv.contentMode = UIViewContentModeScaleAspectFill;
        iv.clipsToBounds = YES;
        iv.userInteractionEnabled = NO;
        [header insertSubview:iv atIndex:0];
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

    WPLog(@"HomeCard", @"[APPLY] header=%@ img=%@ title=%@ dark=%d",
          NSStringFromClass(header.class), img ? @"y" : @"n",
          text.length > 0 ? @"y" : @"n", dark);
}

#pragma mark - Hooks

static void hook_NMFVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewWillAppear)(self, _cmd, animated);
    // XOS：viewWillAppear/viewDidAppear 后重铺；表格布局完成后 headerViewForSection:0
    // 才就绪，两次延时兜底（幂等清理，重复铺无副作用）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ HCApply(self); });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ HCApply(self); });
}

static void hook_NMFVC_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_NMFVC_viewDidAppear)(self, _cmd, animated);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.05 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ HCApply(self); });
}

static void hook_NMFVC_traitCollectionDidChange(id self, SEL _cmd, UITraitCollection *previous) {
    ((void (*)(id, SEL, id))orig_NMFVC_traitCollectionDidChange)(self, _cmd, previous);
    // XOS：外观切换重铺 → 浅/深色卡片图片自动换
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ HCApply(self); });
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
    WPLog(@"HomeCard", @"[Hook] ✓ NewMainFrameViewController（viewWillAppear/DidAppear/trait）");
}

@end
