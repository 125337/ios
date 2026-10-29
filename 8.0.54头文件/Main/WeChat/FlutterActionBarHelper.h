@interface FlutterActionBarHelper : NSObject
{
    BOOL _isShowingNavigationBar; // +0x8
    BOOL _noFlutter; // +0x9
    BOOL _navBarShouldHide; // +0xa
    BOOL _onlyFlutter; // +0xb
    UIViewController * _viewController; // +0x10
    double _navigationBarMargin; // +0x18
    double _statusBarHeight; // +0x20
    NSString * _engineId; // +0x28
    FlutterActionBarCallback * _actionBarCallback; // +0x30
    UIImage * _leftImage; // +0x38
    UIImage * _centerImage; // +0x40
    UIImage * _rightImage; // +0x48
}
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
- (id)viewController;
- (void)setViewController:(id)arg1;
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
- (BOOL)onlyFlutter;
- (void)setOnlyFlutter:(BOOL)arg1;
- (void).cxx_destruct;
@end

