#import "ProfileCardBgHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static const NSInteger kProfileCardBgImageTag = 999902;

static double (*_orig_heightForHeader)(id, SEL, id, long long);

static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgBeautifyEnabled) return result;

    if (section != 1) return result;

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

@implementation ProfileCardBgHook

#pragma mark - 资料卡圆角

+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    if (!config.cardBgCornerEnabled) {
        cell.layer.cornerRadius = 0;
        cell.layer.masksToBounds = NO;
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
        return;
    }

    if (config.cardBgCornerUseGlobal) {
        // ── 使用全局配置 ──
        NSInteger radius = (NSInteger)config.listCellCornerRadius;
        if (radius <= 0) radius = 18;
        cell.layer.cornerRadius = radius;
        cell.layer.masksToBounds = YES;

        UIColor *bgColor = [config colorFromHex:isDark
            ? config.listCellDarkBgColor : config.listCellLightBgColor];
        if (bgColor) {
            cell.backgroundColor = bgColor;
        }

        CGFloat bw = config.listCellBorderWidth;
        if (bw > 0) {
            cell.layer.borderWidth = bw;
            UIColor *borderColor = [config colorFromHex:isDark
                ? config.listCellBorderDarkColor : config.listCellBorderLightColor];
            cell.layer.borderColor = borderColor.CGColor;
        } else {
            cell.layer.borderWidth = 0;
            cell.layer.borderColor = nil;
        }
    } else {
        // ── 使用单独配置 ──
        NSInteger radius = (NSInteger)config.cardBgCornerRadius;
        if (radius <= 0) radius = 18;
        cell.layer.cornerRadius = radius;
        cell.layer.masksToBounds = YES;

        UIColor *bgColor = [config colorFromHex:isDark
            ? config.cardBgCornerDarkBgColor : config.cardBgCornerBgColor];
        if (bgColor) {
            cell.backgroundColor = bgColor;
        }

        CGFloat bw = config.cardBgStrokeWidth;
        if (bw > 0) {
            cell.layer.borderWidth = bw;
            UIColor *strokeColor = [bgColor colorWithAlphaComponent:0.5];
            cell.layer.borderColor = strokeColor.CGColor;
        } else {
            cell.layer.borderWidth = 0;
            cell.layer.borderColor = nil;
        }
    }
}

#pragma mark - QR 码隐藏

+ (void)hideQRButtonInCell:(UIView *)cell {
    for (UIView *sub in cell.subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self hideQRButtonInSubviews:sub.subviews];
    }
}

+ (void)hideQRButtonInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self hideQRButtonInSubviews:sub.subviews];
    }
}

#pragma mark - 图片加载

+ (UIImage *)loadBackgroundImageSync {
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] Start");
    PluginConfig *config = [PluginConfig shared];
    NSString *imagePath = config.cardBgImagePath;
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] configPath=%@", imagePath ?: @"(nil)");

    if (!imagePath || imagePath.length == 0) {
        NSString *bgDir = [ProfileCardBgHook cardBackgroundDirectory];
        NSFileManager *fm = [NSFileManager defaultManager];

        NSString *gifPath = [bgDir stringByAppendingPathComponent:@"MioCardBg.gif"];
        NSString *pngPath = [bgDir stringByAppendingPathComponent:@"MioCardBg.png"];

        if ([fm fileExistsAtPath:gifPath]) {
            imagePath = gifPath;
        } else if ([fm fileExistsAtPath:pngPath]) {
            imagePath = pngPath;
        }
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] resolvedPath=%@", imagePath ?: @"(nil)");
    }

    if (!imagePath || imagePath.length == 0) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (no path)");
        return nil;
    }

    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:imagePath]) {
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (file not exists at %@)", imagePath);
        return nil;
    }
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] fileExists=YES, ext=%@", imagePath.pathExtension.lowercaseString);

    NSString *ext = imagePath.pathExtension.lowercaseString;

    if ([ext isEqualToString:@"gif"]) {
        NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
        if (!gifData) {
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (gifData nil for %@)", imagePath);
            return nil;
        }

        CGImageSourceRef source = CGImageSourceCreateWithData(
            (__bridge CFDataRef)gifData, NULL);
        if (!source) {
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (CGImageSourceCreateWithData failed)");
            return nil;
        }

        size_t count = CGImageSourceGetCount(source);
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] GIF frameCount=%zu", count);
        if (count < 2) {
            CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
            UIImage *result = cgImg ? [UIImage imageWithCGImage:cgImg] : nil;
            if (cgImg) CGImageRelease(cgImg);
            CFRelease(source);
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (single-frame GIF, size=%.0fx%.0f)",
                  result ? @"SUCCESS" : @"NIL", result.size.width, result.size.height);
            return result;
        }

        NSMutableArray<UIImage *> *frames = [NSMutableArray array];
        NSTimeInterval totalDuration = 0;
        for (size_t i = 0; i < count; i++) {
            CGImageRef frameImg = CGImageSourceCreateImageAtIndex(source, i, NULL);
            if (frameImg) {
                [frames addObject:[UIImage imageWithCGImage:frameImg]];
                CGImageRelease(frameImg);

                CFDictionaryRef props =
                    CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
                if (props) {
                    CFDictionaryRef gifDict = CFDictionaryGetValue(
                        props, kCGImagePropertyGIFDictionary);
                    if (gifDict) {
                        CFNumberRef delayRef = CFDictionaryGetValue(
                            gifDict, kCGImagePropertyGIFDelayTime);
                        if (!delayRef) {
                            delayRef = CFDictionaryGetValue(
                                gifDict, kCGImagePropertyGIFUnclampedDelayTime);
                        }
                        NSTimeInterval delay = 0.1;
                        if (delayRef) {
                            CFNumberGetValue(delayRef, kCFNumberFloatType, &delay);
                            if (delay < 0.02) delay = 0.1;
                        }
                        totalDuration += delay;
                    }
                    CFRelease(props);
                }
            }
        }
        CFRelease(source);

        if (frames.count > 0) {
            UIImage *result = [UIImage animatedImageWithImages:frames duration:totalDuration];
            WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (animated GIF, %lu frames, dur=%.2f, size=%.0fx%.0f)",
                  result ? @"SUCCESS" : @"NIL", (unsigned long)frames.count, totalDuration,
                  result.size.width, result.size.height);
            return result;
        }
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: NIL (GIF frames empty)");
        return nil;
    } else {
        UIImage *result = [UIImage imageWithContentsOfFile:imagePath];
        WPLog(@"CardBg-Diag", @"[IMG-LOAD] Result: %@ (static image, size=%.0fx%.0f)",
              result ? @"SUCCESS" : @"NIL", result.size.width, result.size.height);
        return result;
    }
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
        PluginConfig *config = [PluginConfig shared];
        NSString *imagePath = config.cardBgImagePath;

        if (!imagePath || imagePath.length == 0) {
            NSString *bgDir = [[ProfileCardBgHook cardBackgroundDirectory] copy];
            NSFileManager *fm = [NSFileManager defaultManager];

            NSString *gifPath = [bgDir stringByAppendingPathComponent:@"MioCardBg.gif"];
            NSString *pngPath = [bgDir stringByAppendingPathComponent:@"MioCardBg.png"];

            if ([fm fileExistsAtPath:gifPath]) {
                imagePath = gifPath;
            } else if ([fm fileExistsAtPath:pngPath]) {
                imagePath = pngPath;
            }
        }

        if (!imagePath || imagePath.length == 0) return;

        NSFileManager *fm = [NSFileManager defaultManager];
        if (![fm fileExistsAtPath:imagePath]) return;

        UIImage *resultImage = nil;
        NSString *ext = imagePath.pathExtension.lowercaseString;

        if ([ext isEqualToString:@"gif"]) {
            NSData *gifData = [NSData dataWithContentsOfFile:imagePath];
            if (gifData) {
                CGImageSourceRef source = CGImageSourceCreateWithData(
                    (__bridge CFDataRef)gifData, NULL);
                if (source) {
                    size_t count = CGImageSourceGetCount(source);
                    if (count < 2) {
                        CGImageRef cgImg = CGImageSourceCreateImageAtIndex(source, 0, NULL);
                        resultImage = [UIImage imageWithCGImage:cgImg];
                        CGImageRelease(cgImg);
                        CFRelease(source);
                    } else {
                        NSMutableArray<UIImage *> *frames = [NSMutableArray array];
                        NSTimeInterval totalDuration = 0;
                        for (size_t i = 0; i < count; i++) {
                            CGImageRef frameImg = CGImageSourceCreateImageAtIndex(source, i, NULL);
                            if (frameImg) {
                                [frames addObject:[UIImage imageWithCGImage:frameImg]];
                                CGImageRelease(frameImg);

                                CFDictionaryRef props =
                                    CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
                                if (props) {
                                    CFDictionaryRef gifDict = CFDictionaryGetValue(
                                        props, kCGImagePropertyGIFDictionary);
                                    if (gifDict) {
                                        CFNumberRef delayRef = CFDictionaryGetValue(
                                            gifDict, kCGImagePropertyGIFDelayTime);
                                        if (!delayRef) {
                                            delayRef = CFDictionaryGetValue(
                                                gifDict,
                                                kCGImagePropertyGIFUnclampedDelayTime);
                                        }
                                        NSTimeInterval delay = 0.1;
                                        if (delayRef) {
                                            CFNumberGetValue(delayRef,
                                                kCFNumberFloatType, &delay);
                                            if (delay < 0.02) delay = 0.1;
                                        }
                                        totalDuration += delay;
                                    }
                                    CFRelease(props);
                                }
                            }
                        }
                        CFRelease(source);
                        if (frames.count > 0) {
                            resultImage = [UIImage animatedImageWithImages:frames
                                                            duration:totalDuration];
                        }
                    }
                }
            }
        } else {
            resultImage = [UIImage imageWithContentsOfFile:imagePath];
        }

        if (resultImage && imageView) {
            dispatch_async(dispatch_get_main_queue(), ^{
                imageView.image = resultImage;
                imageView.alpha = 1.0;
                imageView.hidden = NO;
            });
        }
    });
}

#pragma mark - 通用辅助方法（Step 1）

/// 从任意 view 向上查找 MoreViewController
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

/// 检查 button 中是否存在 MMHeadImageView（确定这是资料卡按钮）
+ (BOOL)hasHeadImageViewInView:(UIView *)view {
    for (UIView *sub in view.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            return YES;
        }
    }
    return NO;
}

/// 判断当前是否为暗色模式
+ (BOOL)isDarkModeForVc:(UIViewController *)vc {
    if (@available(iOS 13.0, *)) {
        return vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

/// 清理微信原生的 m_bgImageView，防止灰色装饰残留
+ (void)cleanNativeBgImageView:(UIView *)button {
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (!bgIvar) return;
    id bgImgView = object_getIvar(button, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    object_setIvar(button, bgIvar, nil);
}

/// 判断子视图是否为关键 UI（FIX-WHITE 时应豁免隐藏）
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

/// 判断子视图是否有白色/动态背景（应被 FIX-WHITE 隐藏）
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

#pragma mark - 背景素材方法（Step 2）

/// 查找 button 中已有的背景 ImageView（通过 tag 识别）
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button {
    for (UIView *sub in button.subviews) {
        if (sub.tag == kProfileCardBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
            return (UIImageView *)sub;
        }
    }
    return nil;
}

/// 计算背景图在 button 中的垂直对齐偏移
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                     buttonWidth:(CGFloat)buttonWidth
                                    buttonHeight:(CGFloat)buttonHeight
                                        fillMode:(NSInteger)fillMode
                                       alignment:(NSInteger)alignment {
    if (fillMode != 0 && fillMode != 3) return 0;
    if (imageSize.width <= 0) return 0;

    CGFloat scale = buttonWidth / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - buttonHeight;
    if (overflow <= 0) return 0;

    switch (alignment) {
        case 0:  return -overflow / 2.0;  // 居中
        case 2:  return  overflow / 2.0;  // 底部
        default: return 0;                 // 顶部
    }
}

/// 在 button 中创建新的背景 ImageView
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button
                                             frame:(CGRect)frame
                                          fillMode:(NSInteger)fillMode {
    UIImageView *newBg = [[UIImageView alloc] init];
    newBg.tag = kProfileCardBgImageTag;
    newBg.clipsToBounds = NO;
    newBg.userInteractionEnabled = NO;

    switch (fillMode) {
        case 1: newBg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: newBg.contentMode = UIViewContentModeScaleToFill; break;
        default: newBg.contentMode = UIViewContentModeScaleAspectFill; break;
    }
    newBg.frame = frame;

    PluginConfig *config = [PluginConfig shared];
    if (config.cardBgLayer == 1) {
        [button addSubview:newBg];
        [button bringSubviewToFront:newBg];
    } else {
        [button insertSubview:newBg atIndex:0];
    }
    return newBg;
}

/// 异步加载背景图并设置到 ImageView 上
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark {
    if (!imageView) return;
    __weak UIImageView *weakImgView = imageView;
    __weak UIView *weakButton = button;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        __strong UIImageView *strongImgView = weakImgView;
        if (!strongImgView) return;

        UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync];

        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *finalImgView = weakImgView;
            __strong UIView *finalButton = weakButton;
            if (!finalImgView || !finalButton) return;

            if (resultImage) {
                finalImgView.image = resultImage;
                finalImgView.alpha = 1.0;
                finalImgView.hidden = NO;

                // 重新计算对齐偏移
                PluginConfig *cfg = [PluginConfig shared];
                CGFloat alignOff = [ProfileCardBgHook
                    calcImageAlignmentOffsetWithImageSize:resultImage.size
                                              buttonWidth:finalButton.bounds.size.width
                                             buttonHeight:finalButton.bounds.size.height
                                                 fillMode:cfg.cardBgFillMode
                                                alignment:cfg.cardBgAlignment];
                if (alignOff != 0) {
                    CGRect f = finalImgView.frame;
                    f.origin.y = cfg.cardBgOffsetY + alignOff;
                    finalImgView.frame = f;
                }
            } else {
                // 回退到纯色背景
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:isDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) finalButton.backgroundColor = cardBg;
            }
        });
    });
}

/// 完整处理背景素材生命周期（查找/创建/更新）
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    // 1. 查找已有 bg
    UIImageView *bgImgView = [ProfileCardBgHook findBackgroundImageViewInButton:button];

    CGFloat bgW = button.bounds.size.width;
    CGFloat bgH = button.bounds.size.height;
    CGFloat bgX = 0, bgY = 0;
    CGFloat ox = config.cardBgOffsetX;
    CGFloat oy = config.cardBgOffsetY;

    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFit; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        CGFloat alignOff = 0;
        if ((fillMode == 0 || fillMode == 3) && bgImgView.image &&
            bgImgView.image.size.width > 0) {
            alignOff = [ProfileCardBgHook
                calcImageAlignmentOffsetWithImageSize:bgImgView.image.size
                                          buttonWidth:bgW buttonHeight:bgH
                                             fillMode:fillMode
                                            alignment:config.cardBgAlignment];
        }
        bgImgView.frame = CGRectMake(bgX + ox, bgY + oy + alignOff, bgW, bgH);
        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    } else {
        // ── 分支 B：不存在 → 创建 ──
        CGRect frame = CGRectMake(bgX + ox, bgY + oy, bgW, bgH);
        UIImageView *newBg = [ProfileCardBgHook
            createBackgroundImageViewInButton:button frame:frame
                                    fillMode:config.cardBgFillMode];
        [ProfileCardBgHook loadImageAsyncForImageView:newBg button:button isDark:isDark];
    }

    // 2. 清 button 背景色让 bg 透出
    button.backgroundColor = [UIColor clearColor];

    // 3. 清理原生 m_bgImageView
    [ProfileCardBgHook cleanNativeBgImageView:button];
}

#pragma mark - 高度调整方法（Step 3）

/// 调整资料卡高度（使用全局/独立边距配置）
+ (void)handleHeightAdjustment:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];
    CGFloat targetH = config.cardBgHeight;
    if (targetH <= 0 || button.frame.size.height >= targetH) return;

    // 查找 TextStateProfileTableView
    UIView *tableView = button.superview;
    if (!tableView || ![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) return;

    // 查找 MMUIButton 容器
    UIView *container = tableView.superview;
    if (!container || ![container isKindOfClass:NSClassFromString(@"MMUIButton")]) return;

    // 改 button 高度 + 左右边距
    CGRect bf = button.frame;
    CGFloat oldH = bf.size.height;
    bf.size.height = targetH;

    CGFloat margin = config.cardBgCornerUseGlobal
        ? config.listCellMargin
        : (config.cardBgCornerMargin > 0 ? config.cardBgCornerMargin : 9.0);
    if (margin > 0) {
        bf.origin.x += margin;
        bf.size.width -= margin * 2;
    }
    button.frame = bf;

    // Label sizeToFit
    if (margin > 0) {
        for (UIView *sub in button.subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)sub;
                if (label.text && label.text.length > 0) {
                    [label sizeToFit];
                }
            }
        }
    }
}

#pragma mark - 圆角 + QR 码隐藏方法（Step 4）

/// 独立处理资料卡圆角 + QR 码隐藏
+ (void)handleCornerAndQR:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    if (config.cardBgCornerEnabled) {
        [ProfileCardBgHook applyProfileCardCorner:button isDark:isDark];
    }
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}

#pragma mark - 隐藏态完整路径（Step 5）

/// 隐藏态完整路径（cardBgHidden = YES）
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    // ── 共通：清理原生状态 ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];

    if (hasMaterial) {
        // ── Scene A：隐藏 + 有素材 ──
        // 加载背景图（会设置 clearColor + 清理 m_bgImageView）
        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];

        // 隐藏非背景子视图
        for (UIView *sub in button.subviews) {
            if ([sub isKindOfClass:[UIImageView class]] &&
                sub.tag == kProfileCardBgImageTag) {
                continue;  // 豁免背景图
            }
            sub.hidden = YES;
        }

        // FIX-WHITE：隐藏白色/动态背景视图（只在 Scene A 执行）
        for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
            UIView *sub = button.subviews[i];
            if (sub.tag == kProfileCardBgImageTag) continue;
            if ([ProfileCardBgHook isEssentialSubview:sub]) continue;
            if ([ProfileCardBgHook isWhiteOrDynamicBackground:sub]) {
                sub.hidden = YES;
            }
        }
    } else {
        // ── Scene B：隐藏 + 无素材 → 完全隐藏 ──
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }
    }

    // QR 码隐藏
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}

#pragma mark - 可见态美化路径（Step 6）

/// 可见态美化路径（cardBgHidden = NO）
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    if (hasMaterial) {
        // ── 有素材：加载背景图 + 清理原生 ──
        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
        // setupBackgroundMaterialInButton 内部已经做了：
        //   - button.backgroundColor = clearColor
        //   - cleanNativeBgImageView
    }
    // ★★ 无素材时：不碰 button 背景色，不碰 m_bgImageView，不隐藏子视图 ★★
}

#pragma mark - ★ 核心：handleButtonLayout（Step 7）

+ (void)handleButtonLayout:(UIView *)button {
    // ══════════════════════════════════════════
    // ★ 入口守卫：OR 聚合（等效于 WCRefine 的 OR 聚合）
    // 所有子功能平级，无层级关系
    // ══════════════════════════════════════════
    PluginConfig *config = [PluginConfig shared];
    BOOL anyFeatureEnabled = config.cardBgBeautifyEnabled
                          || config.cardBgHidden
                          || config.cardBgCornerEnabled;
    if (!anyFeatureEnabled) return;

    // ══════════════════════════════════════════
    // 通用守卫（提取为辅助方法）
    // ══════════════════════════════════════════
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:button];
    if (!vc) return;

    if (![ProfileCardBgHook hasHeadImageViewInView:button]) return;

    if (button.frame.size.height <= 50.0) return;

    BOOL isDark = [ProfileCardBgHook isDarkModeForVc:vc];

    // ══════════════════════════════════════════
    // ★ 场景路由：隐藏 vs 可见（两个独立路径）
    // ══════════════════════════════════════════
    if (config.cardBgHidden) {
        [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
    } else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
        [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
    }

    // ══════════════════════════════════════════
    // 独立功能（不依赖上方路径的执行结果）
    // ══════════════════════════════════════════
    [ProfileCardBgHook handleHeightAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];
}

#pragma mark - 隐藏信息卡片（精简保留，Step 8）

/// 隐藏信息卡片（保留兼容，以防其他调用者）
/// 注意：handleButtonLayout 已不再使用此方法
+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial {
    if (!isHidden) {
        button.hidden = NO;
        [ProfileCardBgHook cleanNativeBgImageView:button];
        return NO;
    }

    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];

    PluginConfig *config = [PluginConfig shared];

    if (!hasMaterial) {
        // Scene B
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }
        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
        return YES;
    }

    // Scene A
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;
        }
        sub.hidden = YES;
    }
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
    return NO;
}

#pragma mark - Hook 注册

+ (void)initCellHeightHook {
    Class tableMgrClass = objc_getClass("WCTableViewManager");
    if (tableMgrClass) {
        MSHookMessageEx(tableMgrClass,
                        @selector(tableView:heightForHeaderInSection:),
                        (IMP)_hooked_heightForHeader,
                        (IMP *)&_orig_heightForHeader);
        WPLog(@"CardBg", @"[OK] WCTableViewManager::heightForHeaderInSection:");
    } else {
        WPLog(@"CardBg", @"[WARN] WCTableViewManager class not found!");
    }
}

@end