#import "ProfileCardBgHook.h"
#import "CardBgConfig.h"
#import "../ListCornerRadius/ListCornerRadiusConfig.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/HookEngine.h"
#import "../../Core/LogManager.h"
#import "../../Core/WPUtility.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static const NSInteger kProfileCardBgImageTag = 999902;

static double (*orig_heightForHeader)(id, SEL, id, long long);

static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = orig_heightForHeader(self, _cmd, tableView, section);

    CardBgConfig *config = [CardBgConfig shared];
    if (!config.cardBgMaterialEnabled) return result;

    if (section != 1) return result;

    // ★ 使用提取的 findMoreViewController:
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:(UIView *)tableView];
    if (!vc) return result;

    // ★ 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-FOR-HEADER] section=%lld, result=%.1f, spacing=%.1f",
          section, result, spacing);

    return result;
}

static IMP orig_MMUIButton_layoutSubviews = NULL;
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    if (orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))orig_MMUIButton_layoutSubviews)(self, _cmd);
    }
    [ProfileCardBgHook handleButtonLayout:(UIView *)self];
}

@implementation ProfileCardBgHook

#pragma mark - 资料卡圆角

+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark {
    CardBgConfig *config = [CardBgConfig shared];
    ListCornerRadiusConfig *listConfig = [ListCornerRadiusConfig shared];

    if (!config.cardBgCornerEnabled) {
        cell.layer.cornerRadius = 0;
        cell.layer.masksToBounds = NO;
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
        return;
    }

    if (config.cardBgCornerUseGlobal) {
        // ── 使用全局配置 ──
        NSInteger radius = (NSInteger)listConfig.listCellCornerRadius;
        if (radius <= 0) radius = 18;
        cell.layer.cornerRadius = radius;
        cell.layer.masksToBounds = YES;

        UIColor *bgColor = isDark
            ? [WPColorUtil colorFromHexString:listConfig.listCellDarkBgColor]
            : [WPColorUtil colorFromHexString:listConfig.listCellLightBgColor];
        if (bgColor) {
            cell.backgroundColor = bgColor;
        }

    } else {
        // ── 使用单独配置 ──
        NSInteger radius = (NSInteger)config.cardBgCornerRadius;
        if (radius <= 0) radius = 18;
        cell.layer.cornerRadius = radius;
        cell.layer.masksToBounds = YES;

        UIColor *bgColor = [WPColorUtil colorFromHexString:isDark
            ? config.cardBgCornerDarkBgColor : config.cardBgCornerBgColor];
        if (bgColor) {
            cell.backgroundColor = bgColor;
        }
    }

    // ★★★ 统一资料卡边框（依赖 cardBgCornerEnabled，此时已确认开启） ★★★
    CardBgConfig *cardBgConfig = [CardBgConfig shared];
    if (cardBgConfig.cardBgBorderEnabled) {
        CGFloat bw = cardBgConfig.cardBgBorderWidth;
        if (bw > 0) {
            cell.layer.borderWidth = bw;
            UIColor *borderColor = isDark
                ? [WPColorUtil colorFromHexString:cardBgConfig.cardBgBorderColorDarkHex]
                : [WPColorUtil colorFromHexString:cardBgConfig.cardBgBorderColor];
            cell.layer.borderColor = borderColor.CGColor;
        } else {
            cell.layer.borderWidth = 0;
            cell.layer.borderColor = nil;
        }
    } else {
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
    }
}

#pragma mark - 箭码/二维码识别

+ (BOOL)isArrowQRView:(UIView *)view {
    // 箭头：UIImageView + 帧（WCRefine FUN_00337128）
    if ([view isKindOfClass:[UIImageView class]]) {
        CGFloat w = view.frame.size.width;
        CGFloat h = view.frame.size.height;
        CGFloat x = view.frame.origin.x;
        CGFloat parentW = view.superview.bounds.size.width;
        if (w >= 10 && w <= 18 && h >= 8 && h <= 40 && x >= parentW - 40) {
            return YES;
        }
    }
    // 二维码：MMUIButton + 右侧位置（排除 TextState 状态按钮）
    if ([view isKindOfClass:NSClassFromString(@"MMUIButton")]) {
        CGFloat x = view.frame.origin.x;
        CGFloat parentW = view.superview.bounds.size.width;
        if (x >= parentW - 60) {
            return YES;
        }
    }
    return NO;
}

+ (void)hideArrowQRInCell:(UIView *)cell shouldHide:(BOOL)shouldHide {
    if (!cell) return;
    for (UIView *sub in cell.subviews) {
        if ([self isArrowQRView:sub]) {
            sub.hidden = shouldHide;
            sub.alpha = 1.0;
            sub.layer.opacity = 1.0;
        }
    }
}

#pragma mark - 状态元素识别（隐藏箭码风格）

/// 识别「状态发布按钮」（微信：TextStatePublishEntryButton）
+ (BOOL)isStateEntryButton:(UIView *)view {
    if (!view) return NO;
    NSString *cn = NSStringFromClass([view class]);
    return [cn isEqualToString:@"TextStatePublishEntryButton"];
}

/// 识别「状态话题按钮」（微信：TextStateFriendTopicButton）
+ (BOOL)isStateTopicButton:(UIView *)view {
    if (!view) return NO;
    NSString *cn = NSStringFromClass([view class]);
    return [cn isEqualToString:@"TextStateFriendTopicButton"];
}

#pragma mark - 状态元素隐藏（箭码风格）

/// 隐藏/恢复资料卡按钮中的所有状态元素
/// 采用「隐藏箭码」风格：直接 setHidden: + 重置 alpha/opacity，无缓存
+ (void)hideStateElementsInCell:(UIView *)cell shouldHide:(BOOL)shouldHide {
    if (!cell) return;
    
    for (UIView *sub in cell.subviews) {
        if ([self isStateEntryButton:sub] ||
            [self isStateTopicButton:sub]) {
            
            sub.hidden = shouldHide;
            // ★ 顺手重置透明度，防止其他逻辑残留
            sub.alpha = 1.0;
            sub.layer.opacity = 1.0;
        }
    }
}

#pragma mark - 图片加载

+ (UIImage *)loadBackgroundImageSync {
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] Start");
    NSString *imagePath = [CardBgConfig backgroundImagePath];
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] imagePath=%@", imagePath ?: @"(nil)");

    if (!imagePath) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] No background image found on disk");
        return nil;
    }

    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:imagePath]) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (file not exists at %@)", imagePath);
        return nil;
    }
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] fileExists=YES, ext=%@", imagePath.pathExtension.lowercaseString);

    // 普通图片（PNG）
    UIImage *result = [UIImage imageWithContentsOfFile:imagePath];
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (static image, size=%.0fx%.0f)",
          result ? @"SUCCESS" : @"NIL", result.size.width, result.size.height);
    return result;
}

+ (NSString *)cardBackgroundDirectory {
    static NSString *dir = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
            NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        dir = [docsDir stringByAppendingPathComponent:@"MioCardBackground"];

        NSFileManager *fm = [NSFileManager defaultManager];
        BOOL isDir = NO;
        BOOL exists = [fm fileExistsAtPath:dir isDirectory:&isDir];
        if (!exists) {
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        } else if (!isDir) {
            [fm removeItemAtPath:dir error:nil];
            [fm createDirectoryAtPath:dir
           withIntermediateDirectories:YES
                            attributes:nil
                                 error:nil];
        }
    });
    return dir;
}

+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        NSString *imagePath = [CardBgConfig backgroundImagePath];

        if (!imagePath) return;

        NSFileManager *fm = [NSFileManager defaultManager];
        if (![fm fileExistsAtPath:imagePath]) return;

        UIImage *resultImage = [UIImage imageWithContentsOfFile:imagePath];

        if (resultImage && imageView) {
            dispatch_async(dispatch_get_main_queue(), ^{
                imageView.image = resultImage;
                imageView.alpha = 1.0;
                imageView.hidden = NO;
            });
        }
    });
}

#pragma mark - 通用辅助方法

+ (UIViewController *)findMoreViewController:(UIView *)view {
    UIResponder *responder = view.nextResponder;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            NSString *className = NSStringFromClass([(UIViewController *)responder class]);
            if ([className isEqualToString:@"MoreViewController"]) {
                return (UIViewController *)responder;
            }
        }
        responder = responder.nextResponder;
    }
    return nil;
}

+ (BOOL)hasHeadImageViewInView:(UIView *)view {
    for (UIView *sub in view.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            return YES;
        }
    }
    return NO;
}

+ (BOOL)isDarkModeForVc:(UIViewController *)vc {
    return [WPUtility isDarkModeForViewController:vc];
}

+ (void)cleanNativeBgImageView:(UIView *)button {
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (!bgIvar) return;
    id bgImgView = object_getIvar(button, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    // ★ 保留 ivar：不清 nil，只清内容（防止"微信用户"bug）
    // object_setIvar(button, bgIvar, nil);
}

+ (BOOL)isEssentialSubview:(UIView *)sub {
    NSString *cn = NSStringFromClass([sub class]);
    if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) return YES;
    if ([sub isKindOfClass:[UILabel class]]) return YES;
    if ([cn isEqualToString:@"MMCPLabel"]) return YES;
    if ([cn isEqualToString:@"MMUILabel"]) return YES;
    if ([cn isEqualToString:@"TextStatePublishEntryButton"]) return YES;
    if ([cn isEqualToString:@"TextStateFriendTopicButton"]) return YES;
    if ([sub isKindOfClass:[UIImageView class]] && sub.tag != 0) return YES;
    return NO;
}

+ (BOOL)isWhiteOrDynamicBackground:(UIView *)sub {
    UIColor *bg = sub.backgroundColor;
    if (!bg) return NO;
    NSString *cn = NSStringFromClass([bg class]);
    if ([cn containsString:@"DynamicProvider"] || [cn containsString:@"UIDynamic"]) return YES;
    if ([bg isEqual:[UIColor whiteColor]]) return YES;
    CGFloat r=0,g=0,b=0,a=0;
    if ([bg getRed:&r green:&g blue:&b alpha:&a]) {
        if (r>0.95 && g>0.95 && b>0.95 && a>0.95) return YES;
    }
    if ([NSStringFromClass([sub class]) isEqualToString:@"UIView"] && bg) return YES;
    return NO;
}

#pragma mark - 背景素材方法

+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button {
    for (UIView *sub in button.subviews) {
        if (sub.tag == kProfileCardBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
            return (UIImageView *)sub;
        }
    }
    return nil;
}

+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view {
    CardBgConfig *config = [CardBgConfig shared];
    NSInteger fillMode = config.cardBgFillMode;
    NSInteger alignment = config.cardBgAlignment;

    // 只在 aspectFill(fillMode=0) 时计算
    if (fillMode != 0) return 0;
    if (imageSize.width <= 0) return 0;

    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    CGFloat scale = viewW / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - viewH;

    if (overflow <= 0) return 0;

    switch (alignment) {
        case 0:  return -overflow / 2.0;  // center
        case 2:  return  overflow / 2.0;  // bottom
        default: return 0;                // top
    }
}

+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button {
    CardBgConfig *config = [CardBgConfig shared];

    UIImageView *newBg = [[UIImageView alloc] init];
    newBg.tag = kProfileCardBgImageTag;
    newBg.userInteractionEnabled = NO;
    newBg.frame = CGRectMake(config.cardBgOffsetX, config.cardBgOffsetY,
                             button.bounds.size.width,
                             button.bounds.size.height);
    [button insertSubview:newBg atIndex:0];
    return newBg;
}

/// 统一配置 imageView：clipsToBounds、contentMode、frame（含对齐偏移）、层级
/// 无论新建还是复用都走这里，保证行为一致
/// imageView 必须已添加到 button 上
+ (void)configureBackgroundImageView:(UIImageView *)imageView
                            inButton:(UIView *)button {
    CardBgConfig *config = [CardBgConfig shared];

    // ── 裁剪：让 aspectFill 渲染超界部分透出，对齐偏移才能生效 ──
    imageView.clipsToBounds = NO;

    // ── 填充模式 ──
    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: imageView.contentMode = UIViewContentModeScaleAspectFill; break;
        case 2: imageView.contentMode = UIViewContentModeScaleToFill; break;
        default: imageView.contentMode = UIViewContentModeScaleAspectFill; break;
    }

    // ── 计算对齐偏移（无图片时偏移为 0）──
    CGFloat alignOffset = 0;
    if (imageView.image && imageView.image.size.width > 0) {
        alignOffset = [self calcImageAlignmentOffsetWithImageSize:imageView.image.size
                                                          inView:button];
    }

    // ── frame（含偏移）──
    CGFloat ox = config.cardBgOffsetX;
    CGFloat oy = config.cardBgOffsetY;
    imageView.frame = CGRectMake(ox, oy + alignOffset,
                                 button.bounds.size.width,
                                 button.bounds.size.height);

    // ── 层级 ──
    if (config.cardBgLayer == 1) {
        [button bringSubviewToFront:imageView];
    }
}

+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark {
    __weak UIImageView *weakBg = imageView;
    __weak UIView *weakButton = button;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync];

        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *strongBg = weakBg;
            __strong UIView *strongButton = weakButton;
            if (!strongBg || !strongButton) return;

            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // ★ 统一配置：此时 image 已存在，偏移能正确计算
                [ProfileCardBgHook configureBackgroundImageView:strongBg
                                                      inButton:strongButton];
            } else {
                // fallback：无图片时设置背景色（复用卡片圆角背景色）
                CardBgConfig *cfg = [CardBgConfig shared];
                UIColor *cardBg = [WPColorUtil colorFromHexString:cfg.cardBgCornerBgColor];
                if (cardBg) strongButton.backgroundColor = cardBg;
            }
        });
    });
}

+ (void)setupBackgroundMaterialInButton:(UIView *)button
                                 isDark:(BOOL)isDark {
    CardBgConfig *config = [CardBgConfig shared];

    // ── 查找已有 bg ──
    UIImageView *bgImgView = [ProfileCardBgHook findBackgroundImageViewInButton:button];

    if (bgImgView) {
        // ── 分支 A：已存在 → 统一配置 ──
        [ProfileCardBgHook configureBackgroundImageView:bgImgView inButton:button];
    } else {
        // ── 分支 B：不存在 → 创建新 bg ──
        bgImgView = [ProfileCardBgHook createBackgroundImageViewInButton:button];
        [ProfileCardBgHook loadImageAsyncForImageView:bgImgView
                                               button:button
                                               isDark:isDark];
    }

    // ★ 适应模式下，按图片比例向下延伸 button 高度
    // （和 WCRefine 的做法一致：改 frame → setTableHeaderView → 完成）
    NSInteger fillMode = config.cardBgFillMode;
    if (fillMode == 1) {
        UIImage *img = [ProfileCardBgHook loadBackgroundImageSync];
        if (img && img.size.width > 0 && img.size.height > 0) {
            CGFloat btnW = button.bounds.size.width;
            CGFloat imgRatio = img.size.height / img.size.width;
            CGFloat targetH = btnW * imgRatio;

            if (targetH > button.bounds.size.height) {
                // ── 1. 向下延伸（origin.y 不变，和 WCRefine 一致）──
                CGRect bf = button.frame;
                bf.size.height = targetH;
                button.frame = bf;

                // ── 2. 同步更新 bgImageView 的 frame ──
                if (bgImgView) {
                    CGRect bgf = bgImgView.frame;
                    bgf.size.height = targetH;
                    bgImgView.frame = bgf;
                }

                // ── 3. ★ 关键：通知 table view header 变了（和 WCRefine 一致）──
                UIView *tableView = button.superview;
                if (tableView && [tableView isKindOfClass:[UIScrollView class]]) {
                    if (((UITableView *)tableView).tableHeaderView == button) {
                        [((UITableView *)tableView) setTableHeaderView:button];
                    }
                }
            }
        }
    }

    // ── bg 存在时清 button 背景色让 bg 透出 ──
    button.backgroundColor = [UIColor clearColor];

    // ── 清微信原生 m_bgImageView ──
    [ProfileCardBgHook cleanNativeBgImageView:button];

    // ★ 裁剪：防止 clipsToBounds=NO 的图片溢出 button
    button.layer.masksToBounds = YES;
}

#pragma mark - ★ 核心：handleButtonLayout

+ (void)handleButtonLayout:(UIView *)button {
    CardBgConfig *config = [CardBgConfig shared];

    // ☆ 独立功能：状态隐藏
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];

    // ☆ 独立功能：箭码隐藏
    [ProfileCardBgHook hideArrowQRInCell:button
                              shouldHide:[CardBgConfig shared].cardBgHideArrow];

    // 通用守卫（提取为辅助方法）
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:button];
    if (!vc) return;
    if (![ProfileCardBgHook hasHeadImageViewInView:button]) return;
    if (button.frame.size.height <= 50.0) return;
    BOOL isDark = [ProfileCardBgHook isDarkModeForVc:vc];

    // ★ 场景路由：隐藏 vs 可见
    if (config.cardBgHidden) {
        [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
    } else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
        [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
    }

    // 独立功能
    [ProfileCardBgHook handleMarginAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];
}

#pragma mark - 方案 M：左右边距

+ (void)handleMarginAdjustment:(UIView *)button {
    CardBgConfig *config = [CardBgConfig shared];

    // ★ 内部守卫：圆角未开启时不做边距调整
    if (!config.cardBgCornerEnabled) return;

    CGFloat margin = 0;
    ListCornerRadiusConfig *listConfig = [ListCornerRadiusConfig shared];
    if (config.cardBgCornerUseGlobal) {
        margin = listConfig.listCellMargin;
    } else if (config.cardBgCornerMargin > 0) {
        margin = config.cardBgCornerMargin;
    }
    // margin=0 时，后续 margin <= 0 守卫直接跳过，不产生任何效果

    WPLog(@"CardBg-Diag", @"[MARGIN] useGlobal=%d, margin=%.1f, cardBgCornerMargin=%.1f, listCellMargin=%.1f",
          config.cardBgCornerUseGlobal, margin,
          config.cardBgCornerMargin, listConfig.listCellMargin);

    if (margin <= 0) {
        WPLog(@"CardBg-Diag", @"[MARGIN] SKIP: margin=0 or disabled");
        return;
    }

    CGFloat currentX = button.frame.origin.x;
    CGFloat currentW = button.frame.size.width;
    UIView *superview = button.superview;
    CGFloat containerW = superview ? superview.bounds.size.width
                                   : [UIScreen mainScreen].bounds.size.width;
    CGFloat targetX = margin;
    CGFloat targetW = containerW - margin * 2;

    WPLog(@"CardBg-Diag", @"[MARGIN] check: current=(%.1f,%.1f) target=(%.1f,%.1f) containerW=%.1f deviation=(%.1f,%.1f)",
          currentX, currentW, targetX, targetW, containerW,
          fabs(currentX - targetX), fabs(currentW - targetW));

    // ★ 浮点比较防递归（只在这一个地方守卫）
    if (fabs(currentX - targetX) > 0.5 || fabs(currentW - targetW) > 0.5) {
        CGRect bf = button.frame;
        bf.origin.x = targetX;
        bf.size.width = targetW;
        button.frame = bf;

        WPLog(@"CardBg-Diag", @"[MARGIN] APPLIED: frame=(%.1f,%.1f,%.1f,%.1f)",
              bf.origin.x, bf.origin.y, bf.size.width, bf.size.height);

        // ── Label sizeToFit ──
        for (UIView *sub in button.subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)sub;
                if (label.text.length > 0) {
                    [label sizeToFit];
                }
            }
        }
    } else {
        WPLog(@"CardBg-Diag", @"[MARGIN] SKIP: already matches target");
    }
}

#pragma mark - 圆角 + QR 码隐藏

+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark {
    CardBgConfig *config = [CardBgConfig shared];
    if (config.cardBgCornerEnabled) {
        [ProfileCardBgHook applyProfileCardCorner:button isDark:isDark];
    }
    // ★ QR/箭码隐藏已由 handleButtonLayout 统一处理
}

#pragma mark - 隐藏路径

+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    CardBgConfig *config = [CardBgConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    // ── 共有清除：button 背景色 + 原生 bg ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    [ProfileCardBgHook cleanNativeBgImageView:button];

    // ══════════════════════════════════════════
    // Scene B：隐藏 + 无素材 → 完全隐藏，直接 return
    // ══════════════════════════════════════════
    if (!hasMaterial) {
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }

        return;  // ← 直接 return，不进入背景段
    }

    // ══════════════════════════════════════════
    // Scene A：隐藏 + 有素材 → 加载背景，隐藏内容保留背景
    // ══════════════════════════════════════════

    // 1. 设置背景素材
    [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];

    // 隐藏所有子视图，只保留自定义背景图（tag=999902）
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;  // ← 保留背景图
        }
        sub.hidden = YES;  // ← 全部隐藏，不再豁免任何事情
    }

    // ★ 不再需要 FIX-WHITE：所有子视图都隐藏了，白色背景也被隐藏
}

#pragma mark - 可见态美化路径

+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    CardBgConfig *config = [CardBgConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    BOOL hasImagePath = hasMaterial && [CardBgConfig hasBackgroundImage];
    BOOL needCorner = config.cardBgCornerEnabled;

    // 确保可见
    button.hidden = NO;

    // ══════════════════════════════════════════════════════
    // 阶段 1：Cleanup — 清理原生白色背景
    // 条件：有实际素材（图片路径）或有圆角
    // ══════════════════════════════════════════════════════
    if (hasImagePath || needCorner) {
        button.backgroundColor = [UIColor clearColor];
        button.layer.backgroundColor = [UIColor clearColor].CGColor;

        [ProfileCardBgHook cleanNativeBgImageView:button];

        // FIX-WHITE：隐藏 button 下的白色原生子视图
        // （有素材路径跳过 kProfileCardBgImageTag，无素材路径无此 tag 跳过自然不生效）
        for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
            UIView *sub = button.subviews[i];
            if (sub.tag == kProfileCardBgImageTag) continue;
            if ([ProfileCardBgHook isEssentialSubview:sub]) continue;
            if ([ProfileCardBgHook isWhiteOrDynamicBackground:sub]) {
                sub.hidden = YES;
            }
        }
    }

    // ══════════════════════════════════════════════════════
    // 阶段 2：Material — 创建背景素材（重置 layer 为素材做准备）
    // 条件：有素材（不论是否有图片路径）
    // ══════════════════════════════════════════════════════
    if (hasMaterial) {
        button.layer.masksToBounds = NO;
        button.layer.cornerRadius = 0;
        button.layer.borderWidth = 0;

        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
    }

    // ★ 阶段 3：Color — 背景色 + 圆角 + 边框
    // 统一由 handleCornerAndQR → applyProfileCardCorner 处理
    // 不在 handleVisiblePath 中设色，避免职责分散
}

+ (void)initCellHeightHook {
    // 已合并到 install 方法
}

+ (void)initProfileCardHook {
    // 已合并到 install 方法
}

+ (void)install {
    HookTableItem items[] = {
        {@"WCTableViewManager", @"tableView:heightForHeaderInSection:",
            (IMP)_hooked_heightForHeader, (IMP *)&orig_heightForHeader},
        {@"MMUIButton", @"layoutSubviews",
            (IMP)replaced_MMUIButton_layoutSubviews, (IMP *)&orig_MMUIButton_layoutSubviews},
    };

    [HookEngine installHookTable:@"CardBg" items:items
                           count:sizeof(items) / sizeof(items[0])];
}

@end
