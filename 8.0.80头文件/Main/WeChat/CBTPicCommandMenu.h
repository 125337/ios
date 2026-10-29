@interface CBTPicCommandMenu : NSObject
{
    BOOL _hasConfiguredMargins; // +0x8
    NSArray * _configuredItems; // +0x10
    NSString * _configuredTitle; // +0x18
    long long _configuredEnterScene; // +0x20
    NSString * _configuredViewId; // +0x28
    id /* block */ _configuredOnMenuExpose; // +0x30
    id /* block */ _configuredOnMenuItemClick; // +0x38
    id /* block */ _configuredOnSubmenuBack; // +0x40
    id /* block */ _configuredOnCategoryItemClick; // +0x48
    id /* block */ _configuredReportExtraParamsProvider; // +0x50
    unsigned long long _lastExposedLevel; // +0x58
    NSString * _configuredImagePath; // +0x60
    NSString * _configuredImageMd5; // +0x68
    UIViewController * _configuredFromVC; // +0x70
    NSArray * _configuredShortcutsList; // +0x78
    NSDictionary * _configuredSrcInfoParams; // +0x80
    id /* block */ _configuredJumpXiaoweiHandler; // +0x88
    double _marginLeft; // +0x90
    double _marginRight; // +0x98
    double _marginSubLeft; // +0xa0
    double _marginSubRight; // +0xa8
    double _marginSubHeaderLeft; // +0xb0
    id /* block */ _configuredDismissHandler; // +0xb8
    UIView * _transparentAnchorView; // +0xc0
    MMAnchoredMenu * _presentedMenu; // +0xc8
}
+ (id)menu;
+ (id)defaultItems;
- (id)initPrivate;
- (id /* block */)items;
- (id /* block */)title;
- (id /* block */)enterScene;
- (id /* block */)viewId;
- (id /* block */)onMenuExpose;
- (id /* block */)onMenuItemClick;
- (id /* block */)onSubmenuBack;
- (id /* block */)onCategoryItemClick;
- (id /* block */)reportExtraParamsProvider;
- (id /* block */)halfScreen;
- (id /* block */)shortcutsList;
- (id /* block */)srcInfoParams;
- (id /* block */)jumpXiaoweiHandler;
- (id /* block */)menuMargins;
- (id /* block */)dismissHandler;
- (void)showFromButtonFrame:(CGRect)arg1 inView:(id)arg2;
- (void)showFromAnchorView:(id)arg1;
- (void)showAtBottomLeftPoint:(CGPoint)arg1 inWindow:(id)arg2;
- (void)hide;
- (id)resolvedItems;
- (id)cachedItemsForEnterScene:(long long)arg1;
- (id)menuItemForSugItem:(id)arg1 identifierPrefix:(id)arg2;
- (id)reportedViewIdForLevel:(unsigned long long)arg1;
- (id)evaluatedReportExtraParams;
- (void)handleMenuExposeWithLevel:(unsigned long long)arg1 items:(id)arg2 parentTitle:(id)arg3 source:(unsigned long long)arg4;
- (void)handleCategoryItemClickWithItem:(id)arg1 level:(unsigned long long)arg2 parentTitle:(id)arg3;
- (void)handleMenuItemClickWithItem:(id)arg1 level:(unsigned long long)arg2 parentTitle:(id)arg3;
- (BOOL)canOpenHalfScreen;
- (id)businessIdForEnterScene;
- (void)openXiaoWeiHalfScreenWithItem:(id)arg1 level:(unsigned long long)arg2 parentTitle:(id)arg3;
- (id)mergedSrcInfoParamsWithItem:(id)arg1 level:(unsigned long long)arg2 parentTitle:(id)arg3;
- (id)anchoredMenuItemsForItems:(id)arg1 depth:(unsigned long long)arg2 parentTitle:(id)arg3;
- (id)submenuForCategoryItem:(id)arg1 depth:(unsigned long long)arg2;
- (void)presentFromAnchorView:(id)arg1 removingAnchorOnDismiss:(BOOL)arg2;
- (void)cleanupTransparentAnchor;
- (id)configuredItems;
- (void)setConfiguredItems:(id)arg1;
- (id)configuredTitle;
- (void)setConfiguredTitle:(id)arg1;
- (long long)configuredEnterScene;
- (void)setConfiguredEnterScene:(long long)arg1;
- (id)configuredViewId;
- (void)setConfiguredViewId:(id)arg1;
- (id /* block */)configuredOnMenuExpose;
- (void)setConfiguredOnMenuExpose:(id /* block */)arg1;
- (id /* block */)configuredOnMenuItemClick;
- (void)setConfiguredOnMenuItemClick:(id /* block */)arg1;
- (id /* block */)configuredOnSubmenuBack;
- (void)setConfiguredOnSubmenuBack:(id /* block */)arg1;
- (id /* block */)configuredOnCategoryItemClick;
- (void)setConfiguredOnCategoryItemClick:(id /* block */)arg1;
- (id /* block */)configuredReportExtraParamsProvider;
- (void)setConfiguredReportExtraParamsProvider:(id /* block */)arg1;
- (unsigned long long)lastExposedLevel;
- (void)setLastExposedLevel:(unsigned long long)arg1;
- (id)configuredImagePath;
- (void)setConfiguredImagePath:(id)arg1;
- (id)configuredImageMd5;
- (void)setConfiguredImageMd5:(id)arg1;
- (id)configuredFromVC;
- (void)setConfiguredFromVC:(id)arg1;
- (id)configuredShortcutsList;
- (void)setConfiguredShortcutsList:(id)arg1;
- (id)configuredSrcInfoParams;
- (void)setConfiguredSrcInfoParams:(id)arg1;
- (id /* block */)configuredJumpXiaoweiHandler;
- (void)setConfiguredJumpXiaoweiHandler:(id /* block */)arg1;
- (BOOL)hasConfiguredMargins;
- (void)setHasConfiguredMargins:(BOOL)arg1;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg1;
- (double)marginRight;
- (void)setMarginRight:(double)arg1;
- (double)marginSubLeft;
- (void)setMarginSubLeft:(double)arg1;
- (double)marginSubRight;
- (void)setMarginSubRight:(double)arg1;
- (double)marginSubHeaderLeft;
- (void)setMarginSubHeaderLeft:(double)arg1;
- (id /* block */)configuredDismissHandler;
- (void)setConfiguredDismissHandler:(id /* block */)arg1;
- (id)transparentAnchorView;
- (void)setTransparentAnchorView:(id)arg1;
- (id)presentedMenu;
- (void)setPresentedMenu:(id)arg1;
- (void).cxx_destruct;
@end
