@interface MMWebViewPresetUI : MMObject
{
    BOOL _hideCloseButton; // +0x8
    BOOL _shouldShowDomain; // +0x9
    BOOL _shouldHideTopbar; // +0xa
    BOOL _isWebviewBgTransparrent; // +0xb
    BOOL _isWebViewLayoutUnderNav; // +0xc
    BOOL _ornamentStyleEnable; // +0xd
    BOOL _isMenuHeaderHidden; // +0xe
    long long _mmUserInterfaceStyle; // +0x10
    unsigned long long _statusBarColor; // +0x18
    UIColor * _navigationBarColor; // +0x20
    UIColor * _navigationBarTitleColor; // +0x28
    double _navigationBarTitleAlpha; // +0x30
    UIColor * _navigationLeftItemFontColor; // +0x38
    UIColor * _navigationRightItemColor; // +0x40
    NSString * _navigationLeftIconName; // +0x48
    NSString * _navigationBarTitle; // +0x50
    unsigned long long _webScrollStyle; // +0x58
    UIColor * _backcontainerColor; // +0x60
    unsigned long long _backcontainerEffect; // +0x68
    UIColor * _addressLabelColor; // +0x70
    long long _webShowType; // +0x78
    UIColor * _webViewBackgroundColor; // +0x80
    UIView * _customNavigationLoadingView; // +0x88
    unsigned long long _customNavigationLoadingMode; // +0x90
    MMWebViewPresetUIChildViewConfig * _childModeConfig; // +0x98
    NSMutableSet * _setDisableMenueItems; // +0xa0
    NSMutableArray * _arrMenuItemFliters; // +0xa8
}
+ (id)menuItemIdentifier:(unsigned long long)arg1;
- (void)setDisableBaseMenuItem:(unsigned long long)arg1;
- (void)registerMenuItemFliter:(id)arg1;
- (BOOL)isMenuItemPresetedHidden:(id)arg1;
- (id)init;
- (long long)mmUserInterfaceStyle;
- (void)setMmUserInterfaceStyle:(long long)arg1;
- (unsigned long long)statusBarColor;
- (void)setStatusBarColor:(unsigned long long)arg1;
- (id)navigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (id)navigationBarTitleColor;
- (void)setNavigationBarTitleColor:(id)arg1;
- (double)navigationBarTitleAlpha;
- (void)setNavigationBarTitleAlpha:(double)arg1;
- (BOOL)hideCloseButton;
- (void)setHideCloseButton:(BOOL)arg1;
- (id)navigationLeftItemFontColor;
- (void)setNavigationLeftItemFontColor:(id)arg1;
- (id)navigationRightItemColor;
- (void)setNavigationRightItemColor:(id)arg1;
- (id)navigationLeftIconName;
- (void)setNavigationLeftIconName:(id)arg1;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (unsigned long long)webScrollStyle;
- (void)setWebScrollStyle:(unsigned long long)arg1;
- (id)backcontainerColor;
- (void)setBackcontainerColor:(id)arg1;
- (unsigned long long)backcontainerEffect;
- (void)setBackcontainerEffect:(unsigned long long)arg1;
- (id)addressLabelColor;
- (void)setAddressLabelColor:(id)arg1;
- (BOOL)shouldShowDomain;
- (void)setShouldShowDomain:(BOOL)arg1;
- (long long)webShowType;
- (void)setWebShowType:(long long)arg1;
- (BOOL)shouldHideTopbar;
- (void)setShouldHideTopbar:(BOOL)arg1;
- (id)webViewBackgroundColor;
- (void)setWebViewBackgroundColor:(id)arg1;
- (BOOL)isWebviewBgTransparrent;
- (void)setIsWebviewBgTransparrent:(BOOL)arg1;
- (BOOL)isWebViewLayoutUnderNav;
- (void)setIsWebViewLayoutUnderNav:(BOOL)arg1;
- (id)customNavigationLoadingView;
- (void)setCustomNavigationLoadingView:(id)arg1;
- (unsigned long long)customNavigationLoadingMode;
- (void)setCustomNavigationLoadingMode:(unsigned long long)arg1;
- (id)childModeConfig;
- (void)setChildModeConfig:(id)arg1;
- (BOOL)ornamentStyleEnable;
- (void)setOrnamentStyleEnable:(BOOL)arg1;
- (id)setDisableMenueItems;
- (void)setSetDisableMenueItems:(id)arg1;
- (id)arrMenuItemFliters;
- (void)setArrMenuItemFliters:(id)arg1;
- (BOOL)isMenuHeaderHidden;
- (void)setIsMenuHeaderHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

