@interface WCTabBarController : UIViewController <UIGestureRecognizerDelegate, WCTabBarNavigationTransitionDelegate, WCTabBarViewVisibilityDelegate, UITabBarDelegate>
{
    BOOL _tabBarHiddenState; // +0x8
    BOOL _usesAutomaticTabBarHeight; // +0x9
    id <UITabBarControllerDelegate> _delegate; // +0x10
    NSArray * _viewControllers; // +0x18
    unsigned long long _selectedIndex; // +0x20
    NSArray * _items; // +0x28
    WCTabBarView * _tabBarView; // +0x30
    UIView * _contentView; // +0x38
    double _configuredTabBarHeight; // +0x40
    WCTabBarNavigationTransition * _activeNavigationTransition; // +0x48
    UIViewController * _safeAreaAdjustedViewController; // +0x50
    double _appliedTabBarSafeAreaInset; // +0x58
    NSMutableArray * _itemInteractionGestureRecognizers; // +0x60
    WCTabBarControllerCompatibilityState * _compatibilityState; // +0x68
}
+ (void)load;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setupCompatibility;
- (void)installCompatibilityViewsIfNeeded;
- (void)layoutCompatibilityViews;
- (void)invalidateCompatibilityTabsForViewControllerUpdate;
- (id)tabBar;
- (id)moreNavigationController;
- (id)customizableViewControllers;
- (void)setCustomizableViewControllers:(id)arg1;
- (id)initWithTabs:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)sidebar;
- (id)customizationIdentifier;
- (void)setCustomizationIdentifier:(id)arg1;
- (id)compactTabIdentifiers;
- (void)setCompactTabIdentifiers:(id)arg1;
- (id)tabs;
- (void)setTabs:(id)arg1;
- (void)setTabs:(id)arg1 animated:(BOOL)arg2;
- (id)selectedTab;
- (void)setSelectedTab:(id)arg1;
- (id)tabForIdentifier:(id)arg1;
- (id)contentLayoutGuide;
- (id)bottomAccessory;
- (void)setBottomAccessory:(id)arg1;
- (void)setBottomAccessory:(id)arg1 animated:(BOOL)arg2;
- (long long)tabBarMinimizeBehavior;
- (void)setTabBarMinimizeBehavior:(long long)arg1;
- (BOOL)compatibilityShouldSelectViewController:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)compatibilityDidSelectViewController:(id)arg1 atIndex:(unsigned long long)arg2 previousIndex:(unsigned long long)arg3;
- (BOOL)getCompatibilitySupportedInterfaceOrientations:(unsigned long long *)arg1;
- (BOOL)getCompatibilityPreferredInterfaceOrientation:(long long *)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setupController;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)tabBarViewForCompatibility;
- (void)setItems:(id)arg1;
- (void)reloadTabBarItemsFromViewControllers;
- (void)reloadItemInteractionGestureRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleItemTapGesture:(id)arg1;
- (void)handleItemLongPressGesture:(id)arg1;
- (void)didSingleTapTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (void)didDoubleTapTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (void)didLongPressTabBarItemAtIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2;
- (double)longPressDurationForTabBarItemAtIndex:(unsigned long long)arg1;
- (id)tabBarItemForViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)applyViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)selectedViewController;
- (void)setSelectedViewController:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 commitVisualSelection:(BOOL)arg2;
- (void)handleUserSelectionAtIndex:(unsigned long long)arg1;
- (void)didCompleteUserSelectionOfViewController:(id)arg1;
- (BOOL)tabBarNavigationControllerIsSelected:(id)arg1;
- (void)tabBarNavigationController:(id)arg1 willPushViewController:(id)arg2 animated:(BOOL)arg3;
- (void)tabBarNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)tabBarNavigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)transitionForNavigationController:(id)arg1 destinationViewController:(id)arg2 animated:(BOOL)arg3;
- (void)prepareTabBarForTransition:(id)arg1;
- (void)beginTabBarTransition:(id)arg1;
- (void)syncTabBarVisibilityForNavigationController:(id)arg1;
- (id)addTabBarTransitionViewToView:(id)arg1;
- (void)finishTabBarTransition:(id)arg1 cancelled:(BOOL)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)attachSelectedViewControllerIfNeeded;
- (void)updateSelectedViewControllerSafeAreaInsets;
- (id)safeAreaContentViewControllerForSelectedViewController;
- (void)restoreAdjustedViewControllerSafeAreaInsets;
- (void)setTabBarHeight:(double)arg1;
- (double)tabBarHeight;
- (void)setTabBarHidden:(BOOL)arg1;
- (void)setTabBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isTabBarHidden;
- (void)tabBarView:(id)arg1 didChangeHidden:(BOOL)arg2;
- (void)tabBarView:(id)arg1 didChangeTranslucent:(BOOL)arg2;
- (void)onTabBarHiddenChanged:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewControllers;
- (unsigned long long)selectedIndex;
- (id)items;
- (id)tabBarView;
- (void)setTabBarView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)tabBarHiddenState;
- (void)setTabBarHiddenState:(BOOL)arg1;
- (BOOL)usesAutomaticTabBarHeight;
- (void)setUsesAutomaticTabBarHeight:(BOOL)arg1;
- (double)configuredTabBarHeight;
- (void)setConfiguredTabBarHeight:(double)arg1;
- (id)activeNavigationTransition;
- (void)setActiveNavigationTransition:(id)arg1;
- (id)safeAreaAdjustedViewController;
- (void)setSafeAreaAdjustedViewController:(id)arg1;
- (double)appliedTabBarSafeAreaInset;
- (void)setAppliedTabBarSafeAreaInset:(double)arg1;
- (id)itemInteractionGestureRecognizers;
- (void)setItemInteractionGestureRecognizers:(id)arg1;
- (id)compatibilityState;
- (void)setCompatibilityState:(id)arg1;
- (void).cxx_destruct;
@end
