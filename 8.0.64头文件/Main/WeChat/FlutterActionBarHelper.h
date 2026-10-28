@interface FlutterActionBarHelper : NSObject
{
    BOOL _isShowingNavigationBar; // +0x8
    BOOL _noFlutter; // +0x9
    BOOL _navBarShouldHide; // +0xa
    BOOL _onlyFlutter; // +0xb
    UIViewController * _viewController; // +0x10
    UIView * _navBackgroundView; // +0x18
    double _navigationBarMargin; // +0x20
    double _statusBarHeight; // +0x28
    NSString * _engineId; // +0x30
    FlutterActionBarCallback * _actionBarCallback; // +0x38
    UIImage * _leftImage; // +0x40
    UIImage * _centerImage; // +0x48
    UIImage * _rightImage; // +0x50
    FlutterActionBarItem * _rightItem; // +0x58
    FlutterActionBarItem * _leftItem; // +0x60
    UIColor * _backgroundColor; // +0x68
}
+ (id)colorWithHex:(unsigned int)arg1;
+ (id)imageWithColor:(id)arg1 andBounds:(CGRect)arg2;
- (id)initWithViewController:(id)arg1 engineId:(id)arg2;
- (void)dealloc;
- (void)attachToEngine:(id)arg1;
- (void)setupDefault;
- (void)setStatusBarHeight:(double)arg1;
- (void)setNavigationBarMargin:(double)arg1;
- (void)setupNavBar;
- (void)showFlutterActionBar;
- (void)showPlatformNavigationBar;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)touchBegan;
- (void)touchEnded;
- (void)applicationBecameActive;
- (void)hideNav;
- (void)showNav;
- (void)updateNavBarLayout:(id)arg1;
- (void)traverseSubviews:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)navBackgroundView;
- (void)setNavBackgroundView:(id)arg1;
- (BOOL)isShowingNavigationBar;
- (void)setIsShowingNavigationBar:(BOOL)arg1;
- (double)navigationBarMargin;
- (double)statusBarHeight;
- (BOOL)noFlutter;
- (void)setNoFlutter:(BOOL)arg1;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (id)actionBarCallback;
- (void)setActionBarCallback:(id)arg1;
- (BOOL)navBarShouldHide;
- (void)setNavBarShouldHide:(BOOL)arg1;
- (id)leftImage;
- (void)setLeftImage:(id)arg1;
- (id)centerImage;
- (void)setCenterImage:(id)arg1;
- (id)rightImage;
- (void)setRightImage:(id)arg1;
- (id)rightItem;
- (void)setRightItem:(id)arg1;
- (id)leftItem;
- (void)setLeftItem:(id)arg1;
- (BOOL)onlyFlutter;
- (void)setOnlyFlutter:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
