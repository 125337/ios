@interface WCCustomNavigationBar : MMUINavigationBar
{
    BOOL _customNavigationBarActive; // +0x8
    BOOL _logicalHidden; // +0x9
    BOOL _rendererHidden; // +0xa
    BOOL _rendererBackgroundHidden; // +0xb
    BOOL _appliedRendererBackgroundHidden; // +0xc
    BOOL _rendererSeparatorHidden; // +0xd
    WCCustomNavigationBarCoordinator * _navigationCoordinator; // +0x10
    id /* block */ _defaultBackButtonProvider; // +0x18
    WCCustomNavigationBarContentView * _customContentView; // +0x20
    UINavigationController * _hostNavigationController; // +0x28
    double _logicalBarAlpha; // +0x30
    double _rendererBarAlpha; // +0x38
    UINavigationItem * _displayedNavigationItem; // +0x40
    UIViewController * _displayedViewController; // +0x48
    UINavigationItem * _observedNavigationItem; // +0x50
    NSArray * _observedBarButtonItems; // +0x58
    NSArray * _navigationItemObservationKeys; // +0x60
    NSArray * _barButtonItemObservationKeys; // +0x68
    unsigned long long _transitionGeneration; // +0x70
    id <UIViewControllerTransitionCoordinator> _appearanceTransitionCoordinator; // +0x78
    WCCustomNavigationBarTransitionSession * _activeTransitionSession; // +0x80
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (CGRect)frame;
- (CGRect)convertRect:(CGRect)arg1 toView:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2;
- (BOOL)drawViewHierarchyInRect:(CGRect)arg1 afterScreenUpdates:(BOOL)arg2;
- (BOOL)activateWithNavigationController:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)layoutCustomContentView;
- (void)setTintColor:(id)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)applyRendererBackgroundHidden:(BOOL)arg1;
- (void)updateRendererBackgroundForActiveTransition;
- (void)updateRendererVisibilityForActiveTransitionAnimated:(BOOL)arg1;
- (void)setRendererSeparatorHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (void)setLogicalHiddenWithoutNotification:(BOOL)arg1;
- (void)applyLogicalHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutNavigationItemContent;
- (void)refreshNavigationItemIfNeeded;
- (void)applyNavigationItem:(id)arg1;
- (void)bindNavigationItemObservers:(id)arg1;
- (void)unbindNavigationItemObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)canUpdateSafeAreaDuringPopTransition;
- (BOOL)deferAppearanceToCoordinator:(id)arg1;
- (void)restoreRendererHidden:(BOOL)arg1 barAlpha:(double)arg2;
- (void)applyRendererHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareTransitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)commitTransitionToViewController:(id)arg1;
- (void)finalizeTransitionGeneration:(unsigned long long)arg1 displayedViewController:(id)arg2;
- (id)navigationCoordinator;
- (void)setNavigationCoordinator:(id)arg1;
- (id /* block */)defaultBackButtonProvider;
- (void)setDefaultBackButtonProvider:(id /* block */)arg1;
- (BOOL)isCustomNavigationBarActive;
- (void)setCustomNavigationBarActive:(BOOL)arg1;
- (BOOL)logicalHidden;
- (void)setLogicalHidden:(BOOL)arg1;
- (id)customContentView;
- (void)setCustomContentView:(id)arg1;
- (id)hostNavigationController;
- (void)setHostNavigationController:(id)arg1;
- (double)logicalBarAlpha;
- (void)setLogicalBarAlpha:(double)arg1;
- (double)rendererBarAlpha;
- (void)setRendererBarAlpha:(double)arg1;
- (BOOL)rendererHidden;
- (void)setRendererHidden:(BOOL)arg1;
- (BOOL)rendererBackgroundHidden;
- (void)setRendererBackgroundHidden:(BOOL)arg1;
- (BOOL)appliedRendererBackgroundHidden;
- (void)setAppliedRendererBackgroundHidden:(BOOL)arg1;
- (BOOL)rendererSeparatorHidden;
- (id)displayedNavigationItem;
- (void)setDisplayedNavigationItem:(id)arg1;
- (id)displayedViewController;
- (void)setDisplayedViewController:(id)arg1;
- (id)observedNavigationItem;
- (void)setObservedNavigationItem:(id)arg1;
- (id)observedBarButtonItems;
- (void)setObservedBarButtonItems:(id)arg1;
- (id)navigationItemObservationKeys;
- (id)barButtonItemObservationKeys;
- (unsigned long long)transitionGeneration;
- (void)setTransitionGeneration:(unsigned long long)arg1;
- (id)appearanceTransitionCoordinator;
- (void)setAppearanceTransitionCoordinator:(id)arg1;
- (id)activeTransitionSession;
- (void)setActiveTransitionSession:(id)arg1;
- (void).cxx_destruct;
@end
