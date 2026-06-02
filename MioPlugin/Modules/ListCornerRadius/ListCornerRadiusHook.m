#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;
static IMP _orig_WCSearchBar_layoutSubviews = NULL;
static IMP _orig_MMUIButton_layoutSubviews = NULL;

static UIViewController *findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

@interface ListCornerRadiusHook ()

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className;

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome;

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome;

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews;

+ (BOOL)wp_isProfileCard:(UIView *)cell;

+ (BOOL)wp_findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews;

+ (void)wp_applyProfileCardCorner:(UIView *)cell
                      cornerRadius:(NSInteger)radius
                           isDark:(BOOL)isDark;

+ (void)wp_hideQRButtonInCell:(UIView *)cell;

+ (void)wp_hideQRButtonInSubviews:(NSArray<UIView *> *)subviews;

+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;

+ (BOOL)wp_isCurrentDarkMode;

+ (void)wp_loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark;

+ (NSString *)wp_cardBackgroundDirectory;

@end

static UIColor *wp_cellDefaultBgColor(BOOL isDark) {
    if (@available(iOS 13.0, *)) {
        if (isDark) {
            return [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0];
        }
    }
    return [UIColor whiteColor];
}

static BOOL shouldSkipCorner(UIViewController *vc) {
    if (!vc) return YES;
    NSString *vcName = NSStringFromClass([vc class]);
    static NSSet *skipSet = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        skipSet = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            @"WCPluginsViewController",
            @"AccountDetailViewController",
            @"SpecificPageLockViewController",
            @"ThemeExchangeViewController",
            @"RepeatEnhanceViewController",
            @"NewHBALLSettingController",
            @"DisableWeChatController",
            @"TheMessageController",
            @"TheVoiceController",
            @"VoiceCenterSettingController",
            @"TheGroupController",
            @"TheTimeLineController",
            @"AutoChangeWallpaperController",
            @"TheAutoMationController",
            @"TheSpecialController",
            @"KeyBoardMainController",
            @"WCAvatarFrameMainController",
            @"ChatFunctionsinfoController",
            @"WCEhanceViewController",
            @"WCUIBeautifyController",
            @"WCCustomNameController",
            @"WCHideToolController",
            @"WCVersionFakeController",
            @"WCEnhanceToolController",
            @"WCAboutController",
            nil];
    });
    if ([skipSet containsObject:vcName]) return YES;

    static NSArray *prefixBlacklist = nil;
    static dispatch_once_t prefixOnce;
    dispatch_once(&prefixOnce, ^{
        prefixBlacklist = @[
            @"WCRefine",
            @"WCPulse",
            @"Themebox",
            @"BubbleBox",
        ];
    });
    for (NSString *prefix in prefixBlacklist) {
        if ([vcName hasPrefix:prefix]) return YES;
    }

    return NO;
}

static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    if (_orig_WCSearchBar_layoutSubviews) {
        ((void (*)(id, SEL))_orig_WCSearchBar_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

    NSInteger radius = config.listSearchBoxCornerRadius;
    if (radius <= 0) radius = 18;

    UIView *container = ((UIView *(*)(id, SEL))objc_msgSend)(self, @selector(searchBoxContainer));
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}

static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIViewController *vc = nil;
    UIResponder *responder = (UIResponder *)self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    NSString *vcName = NSStringFromClass([vc class]);
    if (![vcName isEqualToString:@"MoreViewController"]) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    BOOL foundHead = NO;
    for (UIView *subview in ((UIView *)self).subviews) {
        if ([subview isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
            foundHead = YES;
            break;
        }
    }

    // ★★★ MMUIButton Hook 诊断日志 ★★★
    WPLog(@"ListCornerRadius", @"[CardBg-MUIB] vc=%@, foundHead=%d, cardBgEnabled=%d, cardBgHidden=%d, subviews=%lu",
          vcName, foundHead, config.cardBgEnabled, config.cardBgHidden,
          (unsigned long)((UIView *)self).subviews.count);
    if (!foundHead) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    CGFloat selfHeight = ((UIView *)self).frame.size.height;
    if (selfHeight <= 50.0) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
        }
        return;
    }

    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }

    // ★ 资料卡背景功能：HideCard 模式下清除所有微信原始内容
    if (config.cardBgEnabled && config.cardBgHidden) {
        ((UIView *)self).backgroundColor = [UIColor clearColor];
        ((UIView *)self).layer.masksToBounds = NO;
        ((UIView *)self).layer.cornerRadius = 0;
        ((UIView *)self).layer.borderWidth = 0;

        // ★ 清除微信原始的 m_bgImageView
        Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar((id)self, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                [(UIImageView *)bgImgView setImage:nil];
                [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                [(UIImageView *)bgImgView setHidden:YES];
            }
            object_setIvar((id)self, bgIvar, nil);
        }

        // ★ 隐藏 MMUIButton 内部所有子视图
        for (UIView *sub in ((UIView *)self).subviews) {
            sub.hidden = YES;
        }

        if (config.listHideRightQRCode) {
            [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
        }
        return;
    }

    // ★ 资料卡背景功能：ContentMode==3 时不设置 masksToBounds（全宽模式）
    BOOL skipMasksToBounds = NO;
    if (config.cardBgEnabled && config.cardBgFillMode == 3) {
        skipMasksToBounds = YES;
    }

    CGFloat margin = config.listCellMargin;

    NSMutableArray *labelFrames = nil;
    if (margin > 0) {
        labelFrames = [NSMutableArray array];
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                [labelFrames addObject:[NSValue valueWithCGRect:sub.frame]];
            }
        }
    }

    if (margin > 0) {
        UIView *cell = ((UIView *)self).superview;
        if (cell) {
            CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                                : [UIScreen mainScreen].bounds.size.width;
            CGFloat targetW = containerW - 2.0 * margin;
            CGFloat currentH = ((UIView *)self).frame.size.height;
            ((UIView *)self).frame = CGRectMake(margin, 0, targetW, currentH);
        }
    }

    if (margin > 0 && labelFrames.count > 0) {
        NSInteger idx = 0;
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]] && idx < labelFrames.count) {
                CGRect originalFrame = [labelFrames[idx] CGRectValue];
                CGRect newFrame = originalFrame;
                newFrame.size.width = originalFrame.size.width - 2.0 * margin;
                if (newFrame.size.width > 0) {
                    sub.frame = newFrame;
                    [(UILabel *)sub sizeToFit];
                }
                idx++;
            }
        }
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    // ★ 资料卡背景功能：有背景图时清除 m_bgImageView + 透明背景
    if (config.cardBgEnabled) {
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;
        BOOL hasBgImage = (imagePath.length > 0);

        if (!hasBgImage) {
            NSString *bgDir = [ListCornerRadiusHook wp_cardBackgroundDirectory];
            NSFileManager *fm = [NSFileManager defaultManager];
            NSString *gifPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.gif" : @"MioCardBgLight.gif"];
            NSString *pngPath = [bgDir stringByAppendingPathComponent:
                isDark ? @"MioCardBgDark.png" : @"MioCardBgLight.png"];
            hasBgImage = [fm fileExistsAtPath:gifPath] || [fm fileExistsAtPath:pngPath];
        }

        if (hasBgImage) {
            ((UIView *)self).backgroundColor = [UIColor clearColor];

            // ★★★ 关键修复：清除微信内部的 m_bgImageView ★★★
            Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
            if (bgIvar) {
                id bgImgView = object_getIvar((id)self, bgIvar);
                if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                    [(UIImageView *)bgImgView setImage:nil];
                    [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                    [(UIImageView *)bgImgView setHidden:YES];
                }
                object_setIvar((id)self, bgIvar, nil);
            }
        } else {
            UIColor *cardBg = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            if (cardBg) {
                ((UIView *)self).backgroundColor = cardBg;
            }
        }
    }

    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }

    if (!skipMasksToBounds) {
        ((UIView *)self).layer.masksToBounds = YES;
    } else {
        ((UIView *)self).layer.masksToBounds = NO;
    }
}

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    if (!_orig_MMUIButton_layoutSubviews) {
        Class MMUIButtonClass = objc_getClass("MMUIButton");
        if (MMUIButtonClass) {
            MSHookMessageEx(
                MMUIButtonClass,
                @selector(layoutSubviews),
                (IMP)replaced_MMUIButton_layoutSubviews,
                &_orig_MMUIButton_layoutSubviews
            );
            WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (lazy registered)");
        }
    }

    PluginConfig *config = [PluginConfig shared];

    static const NSInteger kBgImageTagCard = 999901;

    UIViewController *vcCardEarly = findParentViewController((UIView *)self);
    NSString *classNameCardEarly = vcCardEarly ? NSStringFromClass([vcCardEarly class]) : @"(nil)";
    BOOL isMoreVCCard = [classNameCardEarly isEqualToString:@"MoreViewController"];
    UIView *cellViewCard = (UIView *)self;
    BOOL isProfile = [ListCornerRadiusHook wp_isProfileCard:cellViewCard];

    // ★★★ 逐条件诊断日志 ★★★
    WPLog(@"ListCornerRadius", @"[CardBg-Diag] vc=%@, isMoreVC=%d, isProfile=%d, cardBgEnabled=%d",
          classNameCardEarly, isMoreVCCard, isProfile, config.cardBgEnabled);

    if (isMoreVCCard && isProfile && config.cardBgEnabled) {
        WPLog(@"ListCornerRadius", @"[CardBg-Diag] ★ ALL CONDITIONS PASSED! Entering branch.");
        CGFloat customHeight = config.cardBgHeight;
        if (customHeight > 0) {
            CGFloat currentH = cellViewCard.frame.size.height;
            if (currentH < customHeight) {
                CGRect f = cellViewCard.frame;
                f.size.height = customHeight;
                cellViewCard.frame = f;
            }
        }

        if (config.cardBgListSpacing > 0) {
            CGFloat spacing = config.cardBgListSpacing;
            CGRect f = cellViewCard.frame;
            f.size.height += spacing;
            f.origin.y -= spacing / 2.0;
            cellViewCard.frame = f;
        }

        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }

        BOOL isDark = [ListCornerRadiusHook wp_isCurrentDarkMode];

        // ★ 无论是否 HideCard，都清理 Cell 自身样式
        // 让 Cell 完全透明，背景图和圆角由 MMUIButton 层控制
        cellViewCard.layer.borderWidth = 0;
        cellViewCard.layer.cornerRadius = 0;
        cellViewCard.layer.masksToBounds = NO;

        if (config.cardBgHidden) {
            // ★ Step 1: 清除微信原始的 m_bgImageView（防止微信恢复原始卡片）
            for (UIView *sub in cellViewCard.subviews) {
                Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                if (bgIvar) {
                    object_setIvar(sub, bgIvar, nil);
                }
            }

            // ★ Step 2: 隐藏所有非自定义背景图的内容
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:[UIImageView class]]) {
                    UIImageView *iv = (UIImageView *)sub;
                    if (iv.tag != kBgImageTagCard) {
                        iv.hidden = YES;
                    }
                } else {
                    sub.hidden = YES;
                }
            }

            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★ HideCard 时也设置 contentView 透明
            UIView *contentViewHC = [(UITableViewCell *)cellViewCard contentView];
            if (contentViewHC) {
                contentViewHC.backgroundColor = [UIColor clearColor];
            }

            // ★ Step 3: 处理 MMUIButton —— 清除样式，设置渐变遮罩
            UIColor *hideColor = [config colorFromHex:isDark
                ? config.listCardDarkBgColor : config.listCardLightBgColor];
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    sub.backgroundColor = [UIColor clearColor];
                    sub.layer.cornerRadius = 0;
                    sub.layer.borderWidth = 0;
                    sub.layer.masksToBounds = NO;

                    // ★ Step 4: 递归隐藏 MMUIButton 内部的所有 ImageView
                    void (^hideImageViews)(NSArray<UIView *> *) = ^(NSArray<UIView *> *views) {
                        for (UIView *v in views) {
                            if ([v isKindOfClass:[UIImageView class]]) {
                                v.hidden = YES;
                            }
                            hideImageViews(v.subviews);
                        }
                    };
                    hideImageViews(sub.subviews);

                    // ★ Step 5: 给 MMUIButton 的非 ImageView 子视图设置渐变遮罩色
                    if (hideColor) {
                        for (UIView *btnSub in sub.subviews) {
                            if (![btnSub isKindOfClass:[UIImageView class]]) {
                                btnSub.backgroundColor = hideColor;
                            }
                        }
                    }
                }
            }
        } else {
            // ★ 非 HideCard 时也设置透明背景
            cellViewCard.backgroundColor = [UIColor clearColor];

            // ★★★ 关键修复：contentView 背景透明（参照微信优化 setAlpha:0）★★★
            UIView *contentView = [(UITableViewCell *)cellViewCard contentView];
            if (contentView) {
                contentView.backgroundColor = [UIColor clearColor];
                contentView.layer.masksToBounds = NO;
            }

            // ★★★ 关键修复：所有 Cell 直接子视图背景透明（排除 bgImageView）★★★
            for (UIView *sub in cellViewCard.subviews) {
                if (sub.tag != kBgImageTagCard) {
                    sub.backgroundColor = [UIColor clearColor];
                }
            }

            // ★ 清除 MMUIButton 内部的 m_bgImageView（双重保险）
            for (UIView *sub in cellViewCard.subviews) {
                if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
                    Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
                    if (bgIvar) {
                        id bgImgView = object_getIvar(sub, bgIvar);
                        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                            [(UIImageView *)bgImgView setImage:nil];
                            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                            [(UIImageView *)bgImgView setHidden:YES];
                        }
                        object_setIvar(sub, bgIvar, nil);
                    }
                }
            }
        }

        for (UIView *sub in cellViewCard.subviews) {
            if ([sub isKindOfClass:[UIImageView class]]) {
                UIImageView *imgView = (UIImageView *)sub;
                if (imgView.tag == kBgImageTagCard) continue;  // ★ 排除自定义背景图

                if (imgView.image != nil &&
                    ![imgView isEqual:objc_getAssociatedObject(cellViewCard, "mio_bgImageView")]) {
                    imgView.hidden = YES;
                } else if (imgView.image == nil) {
                    imgView.hidden = YES;
                }
            }
        }

        UIImageView *bgImageView = (UIImageView *)[cellViewCard viewWithTag:kBgImageTagCard];

        if (!bgImageView) {
            bgImageView = [[UIImageView alloc] init];
            bgImageView.tag = kBgImageTagCard;
            bgImageView.clipsToBounds = YES;
            bgImageView.userInteractionEnabled = NO;

            NSInteger fillMode = config.cardBgFillMode;
            switch (fillMode) {
                case 1: bgImageView.contentMode = UIViewContentModeScaleAspectFit; break;
                case 2: bgImageView.contentMode = UIViewContentModeScaleAspectFill; break;
                default: bgImageView.contentMode = UIViewContentModeScaleToFill; break;
            }

            [cellViewCard addSubview:bgImageView];
            objc_setAssociatedObject(cellViewCard, "mio_bgImageView",
                                     bgImageView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }

        // ★★★ 诊断日志：确认分支执行 + 视图层级信息 ★★★
        WPLog(@"ListCornerRadius", @"[CardBg] branch entered! subviews.count=%lu, bounds=%@",
              (unsigned long)cellViewCard.subviews.count, NSStringFromCGRect(cellViewCard.bounds));

        CGRect bounds = cellViewCard.bounds;
        CGFloat margin = config.listCellMargin;
        if (margin <= 0) margin = 9;

        CGFloat imgW = bounds.size.width;
        CGFloat imgH = bounds.size.height;
        CGFloat imgX = 0;
        CGFloat imgY = 0;

        if (config.listCornerRadiusEnabled && config.cardBgFillMode != 3) {
            imgW -= margin * 2;
            imgX = margin;
        }

        CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
        CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
        imgY += offsetY;
        imgX += offsetX;

        bgImageView.frame = CGRectMake(imgX, imgY, imgW, imgH);

        // ★★★ 关键修复：处理 backgroundView（UITableViewCell 特有）★★★
        if ([cellViewCard respondsToSelector:@selector(backgroundView)]) {
            UIView *bgv = [(id)cellViewCard backgroundView];
            if (bgv) {
                bgv.backgroundColor = [UIColor clearColor];
                bgv.hidden = YES;  // 直接隐藏，最彻底
            }
        }
        if ([cellViewCard respondsToSelector:@selector(selectedBackgroundView)]) {
            UIView *sbgv = [(id)cellViewCard selectedBackgroundView];
            if (sbgv) {
                sbgv.backgroundColor = [UIColor clearColor];
            }
        }

        NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
        if (layerPos == 1) {
            [cellViewCard bringSubviewToFront:bgImageView];
        } else {
            // ★ 改用 bringSubviewToFront 确保可见（先验证图片能否显示）
            // 如果 bringToFront 能看到图，说明是图层顺序问题；看不到则是加载问题
            [cellViewCard bringSubviewToFront:bgImageView];

            // ★ 或者用 insertSubview 确保在 contentView 之上：
            // NSInteger insertIndex = MAX(0, (NSInteger)cellViewCard.subviews.count - 2);
            // [cellViewCard insertSubview:bgImageView atIndex:insertIndex];
        }

        // ★★★ 诊断：先用纯色测试 bgImageView 是否可见 ★★★
        bgImageView.backgroundColor = [UIColor redColor];  // 诊断色，确认可见后删除
        bgImageView.image = nil;
        bgImageView.alpha = 0.7;  // 提高透明度便于观察
        bgImageView.hidden = NO;

        [ListCornerRadiusHook wp_loadBackgroundImageForImageView:bgImageView
                                                         isDark:isDark];
        return;
    }

    if (!config.listCornerRadiusEnabled) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }
    NSString *className = NSStringFromClass([vc class]);

    if (shouldSkipCorner(vc)) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIView *cellView = (UIView *)self;

    BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];
    if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    CGFloat margin = config.listCellMargin;
    if (margin > 0 && config.listCornerRadiusEnabled) {
        CGFloat currentX = cellView.frame.origin.x;
        UIView *superview = cellView.superview;
        CGFloat superX = superview ? superview.frame.origin.x : 0;
        CGFloat targetX = (margin > superX) ? margin - superX : 0;
        CGFloat containerW = superview ? superview.bounds.size.width
                                       : [UIScreen mainScreen].bounds.size.width;
        CGFloat targetW = containerW - 2.0 * margin;
        CGFloat currentW = cellView.frame.size.width;
        if (currentX != targetX || fabs(currentW - targetW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = targetX;
            f.size.width = targetW;
            cellView.frame = f;
        }
    }

    static NSSet *bgColorSkipList = nil;
    static dispatch_once_t onceBgToken;
    dispatch_once(&onceBgToken, ^{
        bgColorSkipList = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"FTSHomeViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            nil];
    });

    if (![bgColorSkipList containsObject:className]) {
        BOOL isDark = NO;
        if (@available(iOS 13.0, *)) {
            isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
        }
        UIColor *customBg = [config colorFromHex:isDark
            ? config.listCellDarkBgColor : config.listCellLightBgColor];
        ((UIView *)self).backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);
    }

    NSInteger cornerRadius = (NSInteger)config.listCellCornerRadius;
    if (cornerRadius == 0) cornerRadius = 18;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];
    BOOL isFTSHome = [className isEqualToString:@"FTSHomeViewController"];

    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent;
            break;
        }
        parent = parent.superview;
    }
    if (!tableView) return;

    NSIndexPath *indexPath = [tableView indexPathForCell:(UITableViewCell *)self];
    if (!indexPath) return;

    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSInteger totalRows = [tableView numberOfRowsInSection:section];

    if (isContacts) {
        [ListCornerRadiusHook wp_applyCornerForContacts:cellView
                                             tableView:tableView
                                             indexPath:indexPath
                                               section:section
                                                   row:row
                                                 total:totalRows
                                          cornerRadius:cornerRadius
                                              isFTSHome:isFTSHome];
    } else {
        [ListCornerRadiusHook wp_applyStandardCorner:cellView
                                          tableView:tableView
                                          indexPath:indexPath
                                            section:section
                                                row:row
                                              total:totalRows
                                       cornerRadius:cornerRadius
                                          isFTSHome:isFTSHome
                                          className:className];
    }

    cellView.layer.masksToBounds = YES;

}

@implementation ListCornerRadiusHook

+ (void)initListCornerRadiusHook {
    WPLog(@"ListCornerRadius", @"[INIT] Initializing ListCornerRadius hook...");
    Class MMTableViewCellClass = objc_getClass("MMTableViewCell");
    if (MMTableViewCellClass) {
        MSHookMessageEx(
            MMTableViewCellClass,
            @selector(layoutSubviews),
            (IMP)replaced_MMTableViewCell_layoutSubviews,
            &_orig_MMTableViewCell_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] MMTableViewCell::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] MMTableViewCell class not found!");
    }

    Class WCSearchBarClass = objc_getClass("WCSearchBar");
    if (WCSearchBarClass) {
        MSHookMessageEx(
            WCSearchBarClass,
            @selector(layoutSubviews),
            (IMP)replaced_WCSearchBar_layoutSubviews,
            &_orig_WCSearchBar_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] WCSearchBar::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] WCSearchBar class not found!");
    }

    WPLog(@"ListCornerRadius", @"[DEBUG] About to register MMUIButton hook...");
    Class MMUIButtonClass = objc_getClass("MMUIButton");
    WPLog(@"ListCornerRadius", @"[DEBUG] MMUIButton class = %@", MMUIButtonClass);
    if (MMUIButtonClass) {
        MSHookMessageEx(
            MMUIButtonClass,
            @selector(layoutSubviews),
            (IMP)replaced_MMUIButton_layoutSubviews,
            &_orig_MMUIButton_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (ProfileCard)");
    } else {
        MMUIButtonClass = objc_lookUpClass("MMUIButton");
        WPLog(@"ListCornerRadius", @"[DEBUG] objc_lookUpClass result = %@", MMUIButtonClass);
        if (MMUIButtonClass) {
            MSHookMessageEx(
                MMUIButtonClass,
                @selector(layoutSubviews),
                (IMP)replaced_MMUIButton_layoutSubviews,
                &_orig_MMUIButton_layoutSubviews
            );
            WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (ProfileCard, via lookUp)");
        } else {
            WPLog(@"ListCornerRadius", @"[WARN] MMUIButton class not found! Will retry on first MMTableViewCell layoutSubviews");
        }
    }
}

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className {

    BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
    NSInteger indexSection = indexPath.section;

    if (totalRows == 1) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                 | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:0 isFTSHome:isFTSHome];
        return;
    }

    if (row == 0) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:1 isFTSHome:isFTSHome];
        return;
    }

    if (row != totalRows - 1) {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
        return;
    }

    if (isNewMainFrame && indexSection == 1) {
        UIView *foldView = [self wp_findFoldViewInSubviews:tableView.subviews];
        if (foldView) {
            if ([foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                    return;
                }
            }
        }
    }

    cell.layer.cornerRadius = configuredRadius;
    cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    [self wp_applyBorderAndBg:cell radius:configuredRadius position:3 isFTSHome:isFTSHome];
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    if (section > 3) {
        [self wp_applyStandardCornerPerSection:cell
                                            row:row
                                          total:rowInThisSection
                                   cornerRadius:radius
                                      isFTSHome:isFTSHome];
        return;
    }

    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    NSInteger sectionCount = [tableView numberOfSections];
    NSInteger maxSections = MIN(sectionCount, 4);
    for (NSInteger i = 0; i < maxSections; i++) {
        NSInteger rows = [tableView numberOfRowsInSection:i];
        [sectionRowCounts addObject:@(rows)];
    }

    NSInteger firstNonEmptySection = -1;
    for (NSInteger i = 0; i < (NSInteger)sectionRowCounts.count; i++) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            firstNonEmptySection = i;
            break;
        }
    }

    NSInteger lastNonEmptySection = -1;
    for (NSInteger i = (NSInteger)sectionRowCounts.count - 1; i >= 0; i--) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            lastNonEmptySection = i;
            break;
        }
    }

    NSInteger sectionCount_effective = (NSInteger)sectionRowCounts.count;
    NSInteger firstSectionFirstRowCount = (firstNonEmptySection >= 0)
        ? [sectionRowCounts[firstNonEmptySection] integerValue] : 0;

    if (sectionCount_effective == 1 && firstSectionFirstRowCount == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (section == firstNonEmptySection && row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (section == lastNonEmptySection
               && row == [sectionRowCounts[lastNonEmptySection] integerValue] - 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:3 isFTSHome:isFTSHome];
    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyStandardCornerPerSection:(UIView *)cell
                                     row:(NSInteger)row
                                   total:(NSInteger)totalRows
                            cornerRadius:(NSInteger)radius
                               isFTSHome:(BOOL)isFTSHome {
    if (totalRows == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (row == totalRows - 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:3 isFTSHome:isFTSHome];
    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome {

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCellBorder || isFTSHome) {
        return;
    }

    static void *const kBorderCacheKey = &kBorderCacheKey;
    BOOL isDark = config.isDarkMode;
    NSString *cacheKey = [NSString stringWithFormat:@"%ld_%.0f_%.0f_%ld_%.1f_%d",
        (long)position, cell.bounds.size.width, cell.bounds.size.height,
        (long)radius, config.listCellBorderWidth,
        (int)isDark];
    NSString *lastCache = objc_getAssociatedObject(cell, kBorderCacheKey);
    if ([lastCache isEqualToString:cacheKey]) {
        return;
    }

    cell.layer.borderWidth = 0;
    cell.layer.borderColor = nil;

    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth == 0) borderWidth = 2.0;

    UIColor *borderColor = [config colorFromHex:isDark ? config.listCellBorderDarkColor : config.listCellBorderLightColor];
    if (!borderColor) {
        borderColor = isDark
            ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
            : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
    }

    NSArray *sublayers = [cell.layer.sublayers copy];
    for (CALayer *layer in sublayers) {
        if ([layer.name isEqualToString:@"com.mio.cornerBorder"]) {
            [layer removeFromSuperlayer];
        }
    }

    switch (position) {
        case 0: {
            cell.layer.borderColor = borderColor.CGColor;
            cell.layer.borderWidth = borderWidth;
            break;
        }
        case 1: {
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"top"];
            [cell.layer addSublayer:shape];
            break;
        }
        case 2: {
            CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                      borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:0
                                                            type:@"left"];
            CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:0
                                                             type:@"right"];
            [cell.layer addSublayer:left];
            [cell.layer addSublayer:right];
            break;
        }
        case 3: {
            CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                       borderWidth:borderWidth
                                                      borderColor:borderColor
                                                           radius:radius
                                                             type:@"bottom"];
            [cell.layer addSublayer:shape];
            break;
        }
    }

    objc_setAssociatedObject(cell, kBorderCacheKey, cacheKey,
        OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

+ (void)applyBorderToView:(UIView *)view radius:(NSInteger)radius position:(NSInteger)position isFTSHome:(BOOL)isFTSHome {
    [self wp_applyBorderAndBg:view radius:radius position:position isFTSHome:isFTSHome];
}

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *subview in subviews) {
        if ([NSStringFromClass([subview class]) containsString:@"MainFrameSectionFoldView"]) {
            return subview;
        }
        UIView *found = [self wp_findFoldViewInSubviews:subview.subviews];
        if (found) return found;
    }
    return nil;
}

+ (BOOL)wp_isProfileCard:(UIView *)cell {
    return [self wp_findMMHeadImageViewInSubviews:cell.subviews];
}

+ (BOOL)wp_findMMHeadImageViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn isEqualToString:@"MMHeadImageView"]) {
            return YES;
        }
        if ([self wp_findMMHeadImageViewInSubviews:sub.subviews]) {
            return YES;
        }
    }
    return NO;
}

+ (void)wp_applyProfileCardCorner:(UIView *)cell
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

+ (void)wp_hideQRButtonInCell:(UIView *)cell {
    for (UIView *sub in cell.subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}

+ (void)wp_hideQRButtonInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}

+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.name = @"com.mio.cornerBorder";
    shape.strokeColor = borderColor.CGColor;
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;

    CGFloat hw = borderWidth / 2.0;
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;
    CGFloat r = (radius > 0) ? radius : 0;

    UIBezierPath *path = [UIBezierPath bezierPath];

    if ([type isEqualToString:@"top"]) {
        [path moveToPoint:CGPointMake(hw, h)];
        [path addLineToPoint:CGPointMake(hw, hw + r)];
        if (r > 0) {
            [path addArcWithCenter:CGPointMake(hw + r, hw + r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 1.5
                         clockwise:YES];
            [path addArcWithCenter:CGPointMake(w - hw - r, hw + r)
                            radius:r
                        startAngle:M_PI * 1.5
                          endAngle:0
                         clockwise:YES];
        }
        [path addLineToPoint:CGPointMake(w - hw, h)];
    } else if ([type isEqualToString:@"bottom"]) {
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h - hw - r)];
        if (r > 0) {
            [path addArcWithCenter:CGPointMake(hw + r, h - hw - r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 0.5
                         clockwise:NO];
            [path addArcWithCenter:CGPointMake(w - hw - r, h - hw - r)
                            radius:r
                        startAngle:M_PI * 0.5
                          endAngle:0
                         clockwise:NO];
        }
        [path addLineToPoint:CGPointMake(w - hw, 0)];
    } else if ([type isEqualToString:@"left"]) {
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h)];
    } else if ([type isEqualToString:@"right"]) {
        [path moveToPoint:CGPointMake(w - hw, 0)];
        [path addLineToPoint:CGPointMake(w - hw, h)];
    }

    shape.path = path.CGPath;
    shape.frame = rect;

    return shape;
}

+ (BOOL)wp_isCurrentDarkMode {
    if (@available(iOS 13.0, *)) {
        UIApplication *app = [UIApplication sharedApplication];
        for (UIScene *scene in app.connectedScenes) {
            if ([scene isKindOfClass:[UIWindowScene class]]) {
                UIWindowScene *ws = (UIWindowScene *)scene;
                for (UIWindow *window in ws.windows) {
                    if (window.isKeyWindow) {
                        return window.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
                    }
                }
            }
        }
    }
    return NO;
}

+ (NSString *)wp_cardBackgroundDirectory {
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

+ (void)wp_loadBackgroundImageForImageView:(UIImageView *)imageView isDark:(BOOL)isDark {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        PluginConfig *config = [PluginConfig shared];
        NSString *imagePath = isDark ? config.cardBgDarkImagePath
                                     : config.cardBgLightImagePath;

        if (!imagePath || imagePath.length == 0) {
            NSString *bgDir = [[ListCornerRadiusHook wp_cardBackgroundDirectory] copy];
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

@end