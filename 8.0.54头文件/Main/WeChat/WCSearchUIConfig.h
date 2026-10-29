@interface WCSearchUIConfig : NSObject
{
    BOOL _useHeroDismissAnimation; // +0x8
    BOOL _forbidDismissAnimation; // +0x9
    BOOL _forceUseDarkMode; // +0xa
    BOOL _useNoSnapshotTransition; // +0xb
    BOOL _useHeroNavPopAnimation; // +0xc
    BOOL _prefersStatusBarHidden; // +0xd
    BOOL _hideHalfPageNav; // +0xe
    UIColor * _mainViewBackgroundColor; // +0x10
    UIColor * _contentViewBackgroundColor; // +0x18
    UIColor * _navBarBackgroundColor; // +0x20
    UIColor * _searchBoxBackgroundColor; // +0x28
    UIColor * _searchBarBackgroundColor; // +0x30
    UIImage * _leftIconImage; // +0x38
    double _searchBarHeight; // +0x40
    double _searchBarTextFontSize; // +0x48
    double _searchBarTransitionOffset; // +0x50
    double _halfPageHeightRatio; // +0x58
    UIEdgeInsets _searchBarLayoutMargin; // +0x60
}
+ (id)defaultConfig;
+ (id)commonConfigFor:(id)arg1;
+ (id)verticalSearchConfigFor:(id)arg1;
+ (id)transparentConfigFor:(id)arg1;
- (id)init;
- (id)mainViewBackgroundColor;
- (void)setMainViewBackgroundColor:(id)arg1;
- (id)contentViewBackgroundColor;
- (void)setContentViewBackgroundColor:(id)arg1;
- (id)navBarBackgroundColor;
- (void)setNavBarBackgroundColor:(id)arg1;
- (id)searchBoxBackgroundColor;
- (void)setSearchBoxBackgroundColor:(id)arg1;
- (id)searchBarBackgroundColor;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (id)leftIconImage;
- (void)setLeftIconImage:(id)arg1;
- (double)searchBarHeight;
- (void)setSearchBarHeight:(double)arg1;
- (UIEdgeInsets)searchBarLayoutMargin;
- (void)setSearchBarLayoutMargin:(UIEdgeInsets)arg1;
- (double)searchBarTextFontSize;
- (void)setSearchBarTextFontSize:(double)arg1;
- (BOOL)useHeroDismissAnimation;
- (void)setUseHeroDismissAnimation:(BOOL)arg1;
- (BOOL)forbidDismissAnimation;
- (void)setForbidDismissAnimation:(BOOL)arg1;
- (BOOL)forceUseDarkMode;
- (void)setForceUseDarkMode:(BOOL)arg1;
- (BOOL)useNoSnapshotTransition;
- (void)setUseNoSnapshotTransition:(BOOL)arg1;
- (BOOL)useHeroNavPopAnimation;
- (void)setUseHeroNavPopAnimation:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)setPrefersStatusBarHidden:(BOOL)arg1;
- (double)searchBarTransitionOffset;
- (void)setSearchBarTransitionOffset:(double)arg1;
- (BOOL)hideHalfPageNav;
- (void)setHideHalfPageNav:(BOOL)arg1;
- (double)halfPageHeightRatio;
- (void)setHalfPageHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end

