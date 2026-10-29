@interface WCCustomNavigationBarContentView : UIView
{
    MMUINavigationBar * _navigationBar; // +0x8
    id /* block */ _defaultBackButtonProvider; // +0x10
    UIView * _contentTransitionHost; // +0x18
    unsigned long long _activeTransitionGeneration; // +0x20
    unsigned long long _transitionDirection; // +0x28
    UIView * _backgroundView; // +0x30
    UIView * _barTintOverlay; // +0x38
    UIView * _separatorView; // +0x40
    WCCustomNavigationBarItemContentView * _currentContentView; // +0x48
    WCCustomNavigationBarItemContentView * _transitionToContentView; // +0x50
    double _barAlpha; // +0x58
    double _visibilityProgress; // +0x60
    double _visibilityTranslationProgress; // +0x68
    double _topExtension; // +0x70
    NSDictionary * _customTitleTextAttributes; // +0x78
    UIEdgeInsets _horizontalSafeAreaInsets; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)setTopExtension:(double)arg1;
- (void)setHorizontalSafeAreaInsets:(UIEdgeInsets)arg1;
- (void)setBarAlpha:(double)arg1;
- (void)setVisibilityProgress:(double)arg1;
- (void)setVisibilityTranslationProgress:(double)arg1;
- (void)updateEffectiveAppearance;
- (void)setBackgroundHidden:(BOOL)arg1;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (id)contentViewForItem:(id)arg1;
- (BOOL)needsRefreshForNavigationItem:(id)arg1;
- (void)applyNavigationItem:(id)arg1;
- (void)clearTransitionLayers;
- (void)prepareTransitionFromItem:(id)arg1 toItem:(id)arg2 generation:(unsigned long long)arg3 coordinator:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)finishTransitionGeneration:(unsigned long long)arg1 cancelled:(BOOL)arg2 finalItem:(id)arg3;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;
- (id /* block */)defaultBackButtonProvider;
- (void)setDefaultBackButtonProvider:(id /* block */)arg1;
- (id)contentTransitionHost;
- (void)setContentTransitionHost:(id)arg1;
- (unsigned long long)activeTransitionGeneration;
- (void)setActiveTransitionGeneration:(unsigned long long)arg1;
- (unsigned long long)transitionDirection;
- (void)setTransitionDirection:(unsigned long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)barTintOverlay;
- (void)setBarTintOverlay:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)currentContentView;
- (void)setCurrentContentView:(id)arg1;
- (id)transitionToContentView;
- (void)setTransitionToContentView:(id)arg1;
- (double)barAlpha;
- (double)visibilityProgress;
- (double)visibilityTranslationProgress;
- (double)topExtension;
- (UIEdgeInsets)horizontalSafeAreaInsets;
- (id)customTitleTextAttributes;
- (void)setCustomTitleTextAttributes:(id)arg1;
- (void).cxx_destruct;
@end
