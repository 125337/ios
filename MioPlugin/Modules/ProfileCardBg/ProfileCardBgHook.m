#import "ProfileCardBgHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static double (*_orig_heightForHeader)(id, SEL, id, long long);
static void (*_orig_headerSetFrame)(id, SEL, CGRect);

static void _hooked_headerSetFrame(id self, SEL _cmd, CGRect newFrame) {
    _orig_headerSetFrame(self, _cmd, newFrame);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return;
    if (config.cardBgHeight <= 0) return;

    // 判断是否在 MoreViewController 中
    UIViewController *vc = nil;
    UIResponder *responder = [self nextResponder];
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) return;

    // 遍历子视图找到 MMUIButton（含 MMHeadImageView）
    UIView *targetButton = nil;
    for (UIView *sub in ((UIView *)self).subviews) {
        for (UIView *sub2 in sub.subviews) {
            if ([sub2 isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                for (UIView *sub3 in sub2.subviews) {
                    if ([sub3 isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
                        targetButton = (UIView *)sub2;
                        break;
                    }
                }
            }
            if (targetButton) break;
        }
        if (targetButton) break;
    }

    if (!targetButton) return;

    CGFloat targetH = config.cardBgHeight;
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) targetH += spacing;  // header 高度已包含 spacing，button 也需要匹配

    if (targetButton.frame.size.height < targetH && targetH > 0) {
        CGRect f = targetButton.frame;
        f.size.height = targetH;
        targetButton.frame = f;

        WPLog(@"CardBg-Diag", @"[SETFRAME-HOOK] headerFrame=(%.0f,%.0f,%.0f,%.0f), "
              @"button→height=%.0f, targetH=%.1f",
              newFrame.origin.x, newFrame.origin.y,
              newFrame.size.width, newFrame.size.height,
              targetButton.frame.size.height, targetH);
    }
}

static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;

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

    // ★ ① 保证空间 ≥ 自定义高度（防止 button 被截断或覆盖其他 cell）
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    // ★ ② 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-FOR-HEADER] section=%lld, result=%.1f, height=%.1f, spacing=%.1f",
          section, result, customHeight, spacing);

    return result;
}

@implementation ProfileCardBgHook

#pragma mark - 资料卡识别

+ (BOOL)isProfileCard:(UIView *)cell {
    return [self findMMHeadImageViewInSubviews:cell.subviews];
}

+ (BOOL)findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn isEqualToString:@"MMHeadImageView"]) {
            return YES;
        }
        if ([self findMMHeadImageViewInSubviews:sub.subviews]) {
            return YES;
        }
    }
    return NO;
}

#pragma mark - 资料卡圆角

+ (void)applyProfileCardCorner:(UIView *)cell
                    cornerRadius:(NSInteger)radius
                         isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    cell.layer.cornerRadius = radius;
    cell.layer.masksToBounds = YES;

    // ★ cardBgEnabled 时不设置不透明背景色，避免遮挡 Cell 层的背景图
    if (!config.cardBgEnabled) {
        UIColor *cardBg = [config colorFromHex:isDark
            ? config.listCardDarkBgColor : config.listCardLightBgColor];
        if (cardBg) {
            cell.backgroundColor = cardBg;
        }
    }

    if (config.listProfileCardBorderEnabled) {
        CGFloat bw = config.listProfileCardBorderWidth;
        if (bw <= 0) bw = 2.0;

        UIColor *borderColor = [config colorFromHex:isDark
            ? config.listProfileCardBorderDarkColor
            : config.listProfileCardBorderLightColor];
        if (!borderColor) {
            borderColor = isDark
                ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
                : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
        }

        cell.layer.borderWidth = bw;
        cell.layer.borderColor = borderColor.CGColor;
    } else {
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
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

+ (UIImage *)loadBackgroundImageSync:(BOOL)isDark {
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] Start: isDark=%d", isDark);
    PluginConfig *config = [PluginConfig shared];
    NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                 : config.cardBgLightImagePath;
    WPLog(@"CardBg-Diag", @"[IMG-LOAD] configPath=%@", imagePath ?: @"(nil)");

    if (!imagePath || imagePath.length == 0) {
        NSString *bgDir = [ProfileCardBgHook cardBackgroundDirectory];
        NSFileManager *fm = [NSFileManager defaultManager];

        NSString *gifPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
        NSString *pngPath = [bgDir stringByAppendingPathComponent:
            isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];

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

+ (void)loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        PluginConfig *config = [PluginConfig shared];
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;

        if (!imagePath || imagePath.length == 0) {
            NSString *bgDir = [[ProfileCardBgHook cardBackgroundDirectory] copy];
            NSFileManager *fm = [NSFileManager defaultManager];

            NSString *gifPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
            NSString *pngPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];

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

#pragma mark - ★ 核心：handleButtonLayout

+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ★ 极速拒绝链 ★
    if (!config.cardBgEnabled && !config.listCornerRadiusEnabled) return;

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

    BOOL needsFullCardBg = config.cardBgEnabled;

    // ══════════════════════════════════════════
    // 卡片背景专属操作（只在 cardBgEnabled 时执行）
    // ══════════════════════════════════════════
    if (needsFullCardBg) {

        // ── HideCard 分支 ──
        if (config.cardBgHidden) {
            button.backgroundColor = [UIColor clearColor];
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
                object_setIvar(button, bgIvar, nil);
            }
            for (UIView *sub in button.subviews) { sub.hidden = YES; }

            if (config.listHideRightQRCode) {
                [ProfileCardBgHook hideQRButtonInCell:button];
            }
            return;
        }

        // ── 背景图分支 ──
        button.backgroundColor = [UIColor clearColor];

        // 清除微信原生 m_bgImageView
        Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar(button, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                [(UIImageView *)bgImgView setImage:nil];
                [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                [(UIImageView *)bgImgView setHidden:YES];
            }
            object_setIvar(button, bgIvar, nil);
        }

        // FIX-WHITE: 隐藏白色视图
        {
            static const NSInteger kMioBgImageTag_local = 999902;
            for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
                UIView *sub = button.subviews[i];
                if (sub.tag == kMioBgImageTag_local) continue;
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

        // bgImageView 创建/去重/加载
        static const NSInteger kMioBgImageTag = 999902;
        static const void *kMioBgLoadedKey = &kMioBgLoadedKey;

        UIImageView *existingBgImg = nil;
        BOOL alreadyLoaded = [objc_getAssociatedObject(button, kMioBgLoadedKey) boolValue];
        for (UIView *sub in button.subviews) {
            if (sub.tag == kMioBgImageTag && [sub isKindOfClass:[UIImageView class]]) {
                existingBgImg = (UIImageView *)sub; break;
            }
        }

        // 分支A：已存在且已加载 → 更新 contentMode + frame
        if (existingBgImg != nil && alreadyLoaded) {
            NSInteger fillMode = config.cardBgFillMode;
            switch (fillMode) {
                case 1: existingBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
                case 2: existingBgImg.contentMode = UIViewContentModeScaleToFill; break;
                default: existingBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
            }

            CGFloat imgW = button.bounds.size.width;
            CGFloat imgH = button.bounds.size.height;
            CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
            CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

            // ★ 背景图内缩（视觉边距，不影响子视图布局）
            CGFloat bgMargin = config.listCellMargin;
            if (bgMargin > 0) {
                offsetX += bgMargin;
                imgW -= bgMargin * 2;
            }

            NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;

            CGFloat alignmentOffset = 0;
            if ((fillMode == 0 || fillMode == 3) && existingBgImg.image &&
                existingBgImg.image.size.width > 0) {
                CGFloat iW = existingBgImg.image.size.width;
                CGFloat iH = existingBgImg.image.size.height;
                CGFloat vW = button.bounds.size.width;
                CGFloat vH = button.bounds.size.height;

                CGFloat scale = vW / iW;
                CGFloat renderedH = iH * scale;
                CGFloat overflow = renderedH - vH;

                if (overflow > 0) {
                    switch (alignment) {
                        case 0:  alignmentOffset = -overflow / 2.0; break;
                        case 2:  alignmentOffset = overflow / 2.0; break;
                        default: alignmentOffset = 0; break;
                    }
                }
            }

            existingBgImg.frame = CGRectMake(offsetX, offsetY + alignmentOffset, imgW, imgH);

            NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
            if (layerPos == 1) [button bringSubviewToFront:existingBgImg];

            goto APPLY_CORNER;
        }

        // 分支B：不存在或未加载 → 创建
        if (existingBgImg != nil) [existingBgImg removeFromSuperview];

        UIImageView *btnBgImg = [[UIImageView alloc] init];
        btnBgImg.tag = kMioBgImageTag;
        btnBgImg.clipsToBounds = NO;
        btnBgImg.userInteractionEnabled = NO;

        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: btnBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
            case 2: btnBgImg.contentMode = UIViewContentModeScaleToFill; break;
            default: btnBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
        }
        [button insertSubview:btnBgImg atIndex:0];

        CGFloat imgW = button.bounds.size.width;
        CGFloat imgH = button.bounds.size.height;
        CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
        CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

        // ★ 背景图内缩（视觉边距，不影响子视图布局）
        CGFloat bgMargin = config.listCellMargin;
        if (bgMargin > 0) {
            offsetX += bgMargin;
            imgW -= bgMargin * 2;
        }
        btnBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);

        WPLog(@"CardBg-Diag", @"[BGIMG-CREATE] tag=%ld, frame=(%.0f,%.0f,%.0f,%.0f), buttonBounds=(%.0f,%.0f,%.0f,%.0f), superview=%@, subviewIndex=%ld",
              (long)btnBgImg.tag,
              btnBgImg.frame.origin.x, btnBgImg.frame.origin.y,
              btnBgImg.frame.size.width, btnBgImg.frame.size.height,
              button.bounds.origin.x, button.bounds.origin.y,
              button.bounds.size.width, button.bounds.size.height,
              NSStringFromClass([btnBgImg.superview class]),
              (long)[button.subviews indexOfObject:btnBgImg]);

        NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
        if (layerPos == 1) [button bringSubviewToFront:btnBgImg];

        objc_setAssociatedObject(button, kMioBgLoadedKey, @NO,
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        __weak UIImageView *weakBgImg = btnBgImg;
        __weak UIView *weakSelf = button;
        BOOL capturedIsDark = isDark;

        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            __strong UIImageView *strongBgImg = weakBgImg;
            __strong UIView *strongSelf = weakSelf;
            if (!strongBgImg || !strongSelf) return;

            UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync:capturedIsDark];

            dispatch_async(dispatch_get_main_queue(), ^{
                __strong UIImageView *finalImg = weakBgImg;
                __strong UIView *finalSelf = weakSelf;
                if (!finalImg || !finalSelf) return;

                if (resultImage) {
                    finalImg.image = resultImage;
                    finalImg.alpha = 1.0;
                    finalImg.hidden = NO;

                    // ★ 计算 alignment 偏移（AspectFill 模式下）
                    PluginConfig *cfg = [PluginConfig shared];
                    NSInteger fillMode = cfg.cardBgFillMode;
                    NSInteger alignment = capturedIsDark ? cfg.cardBgDarkAlignment : cfg.cardBgLightAlignment;
                    CGFloat userOffsetY = capturedIsDark ? cfg.cardBgDarkOffsetY : cfg.cardBgLightOffsetY;

                    if ((fillMode == 0 || fillMode == 3) && resultImage.size.width > 0) {
                        CGFloat imgW = resultImage.size.width;
                        CGFloat imgH = resultImage.size.height;
                        CGFloat viewW = finalSelf.bounds.size.width;
                        CGFloat viewH = finalSelf.bounds.size.height;

                        CGFloat scale = viewW / imgW;
                        CGFloat renderedH = imgH * scale;
                        CGFloat overflow = renderedH - viewH;

                        if (overflow > 0) {
                            CGFloat alignmentOffset = 0;
                            switch (alignment) {
                                case 0:  // 底部对齐
                                    alignmentOffset = -overflow / 2.0;
                                    break;
                                case 2:  // 顶部对齐
                                    alignmentOffset = overflow / 2.0;
                                    break;
                                case 1:  // 居中对齐（默认）
                                default:
                                    alignmentOffset = 0;
                                    break;
                            }
                            CGRect f = finalImg.frame;
                            f.origin.y = userOffsetY + alignmentOffset;
                            finalImg.frame = f;
                        }
                    }

                    objc_setAssociatedObject(finalSelf, kMioBgLoadedKey, @YES,
                                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                    WPLog(@"CardBg-Diag", @"[BGIMG-SET] image=SET, size=%.0fx%.0f, frame=(%.0f,%.0f,%.0f,%.0f), hidden=%d, alpha=%.2f, tag=%ld",
                          resultImage.size.width, resultImage.size.height,
                          finalImg.frame.origin.x, finalImg.frame.origin.y,
                          finalImg.frame.size.width, finalImg.frame.size.height,
                          finalImg.isHidden, finalImg.alpha, (long)finalImg.tag);
                } else {
                    WPLog(@"CardBg-Diag", @"[BGIMG-SET] image=NIL, tag=%ld, finalImg=%@", (long)finalImg.tag, finalImg ? @"exists" : @"nil");
                    BOOL dark = NO;
                    if (@available(iOS 13.0, *)) {
                        UIViewController *vCtrl = nil;
                        UIResponder *resp = finalSelf.nextResponder;
                        while (resp) {
                            if ([resp isKindOfClass:[UIViewController class]]) {
                                vCtrl = (UIViewController *)resp; break;
                            }
                            resp = resp.nextResponder;
                        }
                        if (vCtrl) dark = (vCtrl.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
                    }
                    PluginConfig *cfg = [PluginConfig shared];
                    UIColor *cardBg = [cfg colorFromHex:dark
                        ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                    if (cardBg) finalSelf.backgroundColor = cardBg;
                    WPLog(@"CardBg-Diag", @"[IMG-CB] FALLBACK: set bg=%@, dark=%d", cardBg ?: @"(nil)", dark);
                    objc_setAssociatedObject(finalSelf, kMioBgLoadedKey, @YES,
                                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
            });
        });

    } // end needsFullCardBg

APPLY_CORNER:
    // ── 方案 H：通过视图层级链修改 button 高度 ──
    {
        CGFloat targetH = config.cardBgHeight;
        if (targetH <= 0 || button.frame.size.height >= targetH) {
            WPLog(@"CardBg-Diag", @"[HEIGHT-SKIP] targetH=%.1f, currentH=%.1f", targetH, button.frame.size.height);
            goto DO_CORNER;
        }

        // 向上找 TextStateProfileTableView（index [1]）
        UIView *tableView = button.superview;
        if (!tableView || ![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) {
            WPLog(@"CardBg-Diag", @"[HEIGHT-SKIP] superview is %@, not TextStateProfileTableView",
                  tableView ? NSStringFromClass([tableView class]) : @"nil");
            goto DO_CORNER;
        }

        // 继续向上找 MMUIButton 容器（index [2]，h=1704）
        UIView *container = tableView.superview;
        if (!container || ![container isKindOfClass:NSClassFromString(@"MMUIButton")]) {
            WPLog(@"CardBg-Diag", @"[HEIGHT-SKIP] tableView.superview is %@, not MMUIButton",
                  container ? NSStringFromClass([container class]) : @"nil");
            goto DO_CORNER;
        }

        // ★ 改 button 自身高度
        CGRect bf = button.frame;
        CGFloat oldH = bf.size.height;
        bf.size.height = targetH;
        button.frame = bf;

        WPLog(@"CardBg-Diag", @"[HEIGHT-SET] %.0f→%.0f, container=(%.0f,%.0f,%.0f,%.0f)",
              oldH, targetH,
              container.frame.origin.x, container.frame.origin.y,
              container.frame.size.width, container.frame.size.height);
    }

DO_CORNER:

    // ── 圆角 + 边框 + QR码隐藏 ──
    {
        NSInteger radius = (NSInteger)config.listCellCornerRadius;
        if (radius == 0) radius = 18;

        BOOL skipMasksToBounds = (config.cardBgEnabled && config.cardBgFillMode == 3);
        if (!skipMasksToBounds) {
            [ProfileCardBgHook applyProfileCardCorner:button
                                         cornerRadius:radius
                                              isDark:isDark];
        } else {
            button.layer.cornerRadius = 0;
            button.layer.masksToBounds = NO;
        }

        if (config.listHideRightQRCode) {
            [ProfileCardBgHook hideQRButtonInCell:button];
        }
    }
}

#pragma mark - ★ 核心：handleCellLayout

+ (void)handleCellLayout:(UITableViewCell *)cell {
    PluginConfig *config = [PluginConfig shared];

    if (!config.cardBgEnabled) return;

    NSString *className = nil;
    UIViewController *vc = nil;
    UIResponder *responder = cell.nextResponder;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            className = NSStringFromClass([vc class]);
            break;
        }
        responder = responder.nextResponder;
    }
    if (!vc) return;

    BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];
    if (!isMoreVC) return;

    BOOL isProfileCard = [ProfileCardBgHook isProfileCard:(UIView *)cell];
    if (!isProfileCard) return;

    // ★ 到这里的一定是 MoreVC + cardBgEnabled + 资料卡 Cell ★
    UIView *cellView = (UIView *)cell;

    WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] Before: cellBg=%@, cellMasks=%d, cellBorder=%.1f",
          cellView.backgroundColor, cellView.layer.masksToBounds, cellView.layer.borderWidth);

    cellView.backgroundColor = [UIColor clearColor];
    cellView.layer.borderWidth = 0;
    cellView.layer.masksToBounds = NO;

    UIView *cv = cell.contentView;
    if (cv) {
        cv.backgroundColor = [UIColor clearColor];
        cv.layer.masksToBounds = NO;
    }

    if ([cell respondsToSelector:@selector(backgroundView)]) {
        UIView *bgv = [(UITableViewCell *)cell backgroundView];
        if (bgv) {
            bgv.backgroundColor = [UIColor clearColor];
            bgv.hidden = YES;
        }
    }
    if ([cell respondsToSelector:@selector(selectedBackgroundView)]) {
        UIView *sbgv = [(UITableViewCell *)cell selectedBackgroundView];
        if (sbgv) sbgv.backgroundColor = [UIColor clearColor];
    }

    WPLog(@"CardBg-Diag", @"[CELL-TRANSPARENCY] After: cellBg=%@, cellMasks=%d",
          cellView.backgroundColor, cellView.layer.masksToBounds);

    // 注意：不设 masksToBounds=YES，由 MMUIButton 层负责裁剪
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

    // ★ 最终方案：Hook header view 的 setFrame: 同步 button 高度
    Class headerViewClass = objc_getClass("MMTableSectionHeaderView");
    if (!headerViewClass) {
        headerViewClass = objc_getClass("MMUITableViewCell");
    }
    if (headerViewClass) {
        MSHookMessageEx(headerViewClass,
                        @selector(setFrame:),
                        (IMP)_hooked_headerSetFrame,
                        (IMP *)&_orig_headerSetFrame);
        WPLog(@"CardBg", @"[OK] %@::setFrame: (height sync)", NSStringFromClass(headerViewClass));
    } else {
        WPLog(@"CardBg", @"[WARN] MMTableSectionHeaderView/MMUITableViewCell class not found!");
    }
}

@end
