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

    UIResponder *responder = [tableView nextResponder];
    UIViewController *vc = nil;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return result;
    }

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

#pragma mark - 辅助方法

#pragma mark - ★ 核心：handleButtonLayout

+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ★ 极速拒绝链 ★
    if (!config.cardBgBeautifyEnabled) return;

    // 第2关：VC 类型
    UIViewController *vc = nil;
    UIResponder *responder = button.nextResponder;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = responder.nextResponder;
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) return;

    // 第3关：MMHeadImageView 存在
    BOOL foundHead = NO;
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            foundHead = YES; break;
        }
    }
    if (!foundHead) return;

    // 第4关：高度过滤
    CGFloat selfHeight = button.frame.size.height;
    if (selfHeight <= 50.0) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    BOOL needsNewCardBg = config.cardBgBeautifyEnabled;

    // ══════════════════════════════════════════
    // 场景判断
    // ══════════════════════════════════════════
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    BOOL isHidden = config.cardBgHidden;

    // ══════════════════════════════════════════
    // 卡片背景专属操作（只在 cardBgBeautifyEnabled 时执行）
    // ══════════════════════════════════════════
    if (needsNewCardBg) {

        // ══════════════════════════════════════════
        // ★ Button 层 bg 生命周期（有素材才执行）
        // ══════════════════════════════════════════
        if (hasMaterial) {

        // ── 查找 Button 层已有 bg ──
        UIImageView *bgImgView = nil;
        for (UIView *sub in button.subviews) {
            if (sub.tag == kProfileCardBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
                bgImgView = (UIImageView *)sub;
                break;
            }
        }

        CGFloat bgW = button.bounds.size.width;
        CGFloat bgH = button.bounds.size.height;
        CGFloat bgX = 0;
        CGFloat bgY = 0;
        CGFloat ox = config.cardBgOffsetX;
        CGFloat oy = config.cardBgOffsetY;

        // ── 分支 A：已存在 bg → 更新 frame ──
        if (bgImgView) {
            NSInteger fillMode = config.cardBgFillMode;
            switch (fillMode) {
                case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFit; break;
                case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
                default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
            }

            NSInteger alignment = config.cardBgAlignment;
            CGFloat alignOffset = 0;
            if ((fillMode == 0 || fillMode == 3) && bgImgView.image &&
                bgImgView.image.size.width > 0) {
                CGFloat iW = bgImgView.image.size.width;
                CGFloat iH = bgImgView.image.size.height;
                CGFloat scale = bgW / iW;
                CGFloat renderedH = iH * scale;
                CGFloat overflow = renderedH - bgH;
                if (overflow > 0) {
                    switch (alignment) {
                        case 0:  alignOffset = -overflow / 2.0; break;
                        case 2:  alignOffset =  overflow / 2.0; break;
                        default: alignOffset = 0; break;
                    }
                }
            }

            bgImgView.frame = CGRectMake(bgX + ox, bgY + oy + alignOffset, bgW, bgH);

            if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
        }
        // ── 分支 B：不存在 → 创建新 bg ──
        else {
            UIImageView *newBg = [[UIImageView alloc] init];
            newBg.tag = kProfileCardBgImageTag;
            newBg.clipsToBounds = NO;
            newBg.userInteractionEnabled = NO;

            NSInteger fillMode = config.cardBgFillMode;
            switch (fillMode) {
                case 1: newBg.contentMode = UIViewContentModeScaleAspectFit; break;
                case 2: newBg.contentMode = UIViewContentModeScaleToFill; break;
                default: newBg.contentMode = UIViewContentModeScaleAspectFill; break;
            }

            newBg.frame = CGRectMake(bgX + ox, bgY + oy, bgW, bgH);

            if (config.cardBgLayer == 1) {
                [button addSubview:newBg];
                [button bringSubviewToFront:newBg];
            } else {
                [button insertSubview:newBg atIndex:0];
            }

            // ── 异步加载图片 ──
            __weak UIImageView *weakBg = newBg;
            __weak UIView *weakButton = button;

            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                __strong UIImageView *strongBg = weakBg;
                if (!strongBg) return;

                UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync];

                dispatch_async(dispatch_get_main_queue(), ^{
                    __strong UIImageView *finalBg = weakBg;
                    __strong UIView *finalButton = weakButton;
                    if (!finalBg || !finalButton) return;

                    if (resultImage) {
                        finalBg.image = resultImage;
                        finalBg.alpha = 1.0;
                        finalBg.hidden = NO;

                        PluginConfig *cfg = [PluginConfig shared];
                        NSInteger fm = cfg.cardBgFillMode;
                        NSInteger alignment = cfg.cardBgAlignment;
                        CGFloat userOy = cfg.cardBgOffsetY;

                        if ((fm == 0 || fm == 3) && resultImage.size.width > 0) {
                            CGFloat iW = resultImage.size.width;
                            CGFloat iH = resultImage.size.height;
                            CGFloat scale = finalButton.bounds.size.width / iW;
                            CGFloat renderedH = iH * scale;
                            CGFloat overflow = renderedH - finalButton.bounds.size.height;

                            if (overflow > 0) {
                                CGFloat alignOff = 0;
                                switch (alignment) {
                                    case 0:  alignOff = -overflow / 2.0; break;
                                    case 2:  alignOff =  overflow / 2.0; break;
                                    default: alignOff = 0; break;
                                }
                                CGRect f = finalBg.frame;
                                f.origin.y = userOy + alignOff;
                                finalBg.frame = f;
                            }
                        }

                        WPLog(@"CardBg-Diag", @"[CELL-BG] image=SET (Button layer), frame=(%.0f,%.0f,%.0f,%.0f)",
                              finalBg.frame.origin.x, finalBg.frame.origin.y,
                              finalBg.frame.size.width, finalBg.frame.size.height);
                    } else {
                        PluginConfig *cfg = [PluginConfig shared];
                        UIColor *cardBg = [cfg colorFromHex:isDark
                            ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                        if (cardBg) finalButton.backgroundColor = cardBg;
                        WPLog(@"CardBg-Diag", @"[CELL-BG] FALLBACK: set button bg=%@", cardBg);
                    }
                });
            });
        }  // else (Branch B)

        // ── bg 存在时清 button 背景色让 bg 透出 ──
        button.backgroundColor = [UIColor clearColor];

        // ── 清微信原生 m_bgImageView ──
        Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar(button, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                [(UIImageView *)bgImgView setImage:nil];
                [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                [(UIImageView *)bgImgView setHidden:YES];
            }
            // ★ 保留 ivar：不清 nil，只清内容（防止"微信用户"bug）
            // object_setIvar(button, bgIvar, nil);
        }
        }  // if (hasMaterial)

        // ══════════════════════════════════════════
        // 隐藏信息卡片（独立方法）
        // ══════════════════════════════════════════
        if ([ProfileCardBgHook handleCardHiddenInButton:button
                                                isHidden:isHidden
                                             hasMaterial:hasMaterial]) {
            return;  // Scene B：完全隐藏，后面的不用执行了
        }

        // ══════════════════════════════════════════
        // 4. FIX-WHITE：隐藏白色视图
        //    ★ 仅在隐藏态执行（Scene A），非隐藏态跳过 ★
        // ══════════════════════════════════════════
        if (isHidden)
        {
            for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
                UIView *sub = button.subviews[i];
                // 场景 A 中背景图存在，需跳过；场景 B 已早返，不会走到此处
                if (sub.tag == kProfileCardBgImageTag) continue;
                if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) continue;
                if ([sub isKindOfClass:[UILabel class]]) continue;
                if ([NSStringFromClass([sub class]) isEqualToString:@"MMCPLabel"]) continue;
                if ([NSStringFromClass([sub class]) isEqualToString:@"MMUILabel"]) continue;
                if ([NSStringFromClass([sub class]) isEqualToString:@"TextStatePublishEntryButton"]) continue;
                if ([NSStringFromClass([sub class]) isEqualToString:@"TextStateFriendTopicButton"]) continue;
                if ([sub isKindOfClass:[UIImageView class]] && sub.tag != 0) continue;

                UIColor *subBg = sub.backgroundColor;
                BOOL shouldHide = NO;
                if (subBg) {
                    NSString *bgClassName = NSStringFromClass([subBg class]);
                    if ([bgClassName containsString:@"DynamicProvider"] ||
                        [bgClassName containsString:@"UIDynamic"]) {
                        shouldHide = YES;
                    } else if ([subBg isEqual:[UIColor whiteColor]]) {
                        shouldHide = YES;
                    } else {
                        CGFloat r=0,g=0,b=0,a=0;
                        if ([subBg getRed:&r green:&g blue:&b alpha:&a]) {
                            if (r>0.95 && g>0.95 && b>0.95 && a>0.95) shouldHide=YES;
                        }
                    }
                }
                if ([NSStringFromClass([sub class]) isEqualToString:@"UIView"] && subBg) {
                    shouldHide = YES;
                }
                if (shouldHide) {
                    sub.hidden = YES;
                    WPLog(@"CardBg-Diag", @"[FIX-WHITE] Hidden subview[%ld]: class=%@, bg=%@, frame=(%.0f,%.0f,%.0f,%.0f)",
                          (long)i, NSStringFromClass([sub class]), subBg,
                          sub.frame.origin.x, sub.frame.origin.y,
                          sub.frame.size.width, sub.frame.size.height);
                }
            }
        }

    } // end needsNewCardBg

    // ── 方案 H：高度扩展（独立方法） ──
    [ProfileCardBgHook handleHeightAdjustment:button];

    // ── 方案 M：左右边距（独立方法） ──
    [ProfileCardBgHook handleMarginAdjustment:button];

    // ── 圆角 + 边框 + QR码隐藏 ──
    {
        // ★ 仅在"开启资料圆角"时才处理资料卡圆角和边距 ★
        if (config.cardBgCornerEnabled) {
            [ProfileCardBgHook applyProfileCardCorner:button isDark:isDark];
        }

        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
    }
}

#pragma mark - 方案 H：高度扩展

+ (void)handleHeightAdjustment:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];
    CGFloat targetH = config.cardBgHeight;
    if (targetH <= 0) return;

    // ★ 当前高度已达标则跳过（防递归守卫）
    if (button.frame.size.height >= targetH) return;

    // ── 父视图链检查 ──
    UIView *tableView = button.superview;
    if (!tableView || ![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) {
        WPLog(@"CardBg-Diag", @"[HEIGHT-SKIP] superview is %@, not TextStateProfileTableView",
              tableView ? NSStringFromClass([tableView class]) : @"nil");
        return;
    }
    UIView *container = tableView.superview;
    if (!container || ![container isKindOfClass:NSClassFromString(@"MMUIButton")]) {
        WPLog(@"CardBg-Diag", @"[HEIGHT-SKIP] tableView.superview is %@, not MMUIButton",
              container ? NSStringFromClass([container class]) : @"nil");
        return;
    }

    // ── 只改 height ──
    CGRect bf = button.frame;
    CGFloat oldH = bf.size.height;
    bf.size.height = targetH;
    button.frame = bf;

    WPLog(@"CardBg-Diag", @"[HEIGHT-SET] %.0f→%.0f, container=(%.0f,%.0f,%.0f,%.0f)",
          oldH, targetH,
          container.frame.origin.x, container.frame.origin.y,
          container.frame.size.width, container.frame.size.height);
}

#pragma mark - 方案 M：左右边距

+ (void)handleMarginAdjustment:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    CGFloat margin = config.cardBgCornerUseGlobal
        ? config.listCellMargin
        : (config.cardBgCornerMargin > 0 ? config.cardBgCornerMargin : 9.0);

    WPLog(@"CardBg-Diag", @"[MARGIN] useGlobal=%d, margin=%.1f, cardBgCornerMargin=%.1f, listCellMargin=%.1f",
          config.cardBgCornerUseGlobal, margin,
          config.cardBgCornerMargin, config.listCellMargin);

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

#pragma mark - 隐藏信息卡片

+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial {
    
    // ══════════════════════════════════════════
    // 非隐藏态：确保可见
    // ══════════════════════════════════════════
    if (!isHidden) {
        button.hidden = NO;

        // ★★★ 只有开启自定义素材才清理原生 m_bgImageView ★★★
        // 否则不动微信原生视图，避免破坏昵称显示导致"微信用户"
        if (hasMaterial) {
            Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
            if (bgIvar) {
                id bgImgView = object_getIvar(button, bgIvar);
                if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                    [(UIImageView *)bgImgView setImage:nil];
                    [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                    [(UIImageView *)bgImgView setHidden:YES];
                }
            }
        }

        return NO;  // 让调用者继续处理背景和布局
    }

    // ══════════════════════════════════════════
    // 隐藏态共有清除：button 背景色 + 原生 bg
    // ══════════════════════════════════════════
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar(button, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];
            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
            [(UIImageView *)bgImgView setHidden:YES];
        }
        // ★ 保留 ivar：不清 nil，只清内容（防止"微信用户"bug）
        // object_setIvar(button, bgIvar, nil);
    }

    PluginConfig *config = [PluginConfig shared];

    // ══════════════════════════════════════════
    // Scene B：隐藏 + 无素材 → 完全隐藏
    // ══════════════════════════════════════════
    if (!hasMaterial) {
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }

        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
        return YES;  // Scene B → 调用者应 return
    }

    // ══════════════════════════════════════════
    // Scene A：隐藏 + 有素材 → 隐藏内容，保留背景
    // ══════════════════════════════════════════
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;  // 豁免背景图
        }
        sub.hidden = YES;
    }

    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
    return NO;  // Scene A → 调用者继续执行
}

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
