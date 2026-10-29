@interface WCFinderLimitModeGuideViewController : MMUIViewController <MMLimitedModeVerifyPasswordUtilLogicDelegate>
{
    MMLimitedModeVerifyPasswordUtilLogic * m_limitedModeVerifyPasswordUtilLogic; // +0x68
    int _commenScene; // +0x70
    UIView * _detailView; // +0x78
    UINavigationController * _navVC; // +0x80
    UIViewController * _targetVC; // +0x88
    long long _themeStyle; // +0x90
}
+ (long long)displayType:(int)arg1;
+ (BOOL)shouldShowLimitModeGuidForType:(long long)arg1;
+ (void)displayToRootView:(id)arg1 commentScene:(int)arg2 type:(long long)arg3;
+ (void)displayToRootView:(id)arg1 commentScene:(int)arg2 type:(long long)arg3 ignoreShareFeedListVC:(BOOL)arg4;
+ (void)presendGuideVC:(id)arg1 toTargetVC:(id)arg2;
+ (BOOL)checkShouldShowGuideView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDetailFrame;
- (void)setupBackgroundView;
- (void)addTapClaseActionToView:(id)arg1;
- (void)showDetailWithAnimation;
- (pair<double, double>)animationPosition;
- (id)createDetailLabel:(double)arg1 contentAttrs:(id)arg2;
- (id)wrapDetailView:(id)arg1;
- (id)createSettingBtn:(BOOL)arg1;
- (id)createIKnowButton:(double)arg1 verticalPadding:(double)arg2;
- (id)createBottomIKnowButton:(double)arg1;
- (id)createIcon:(BOOL)arg1;
- (id)cornerView:(id)arg1 insets:(UIEdgeInsets)arg2 cornerRadius:(double)arg3 needShadow:(BOOL)arg4;
- (id)buildMiddleGuildView;
- (id)buildBottomGuideView;
- (void)addCloseIconToView:(id)arg1;
- (void)onTapBlankArea:(id)arg1;
- (void)onClickIKnow;
- (void)onClickSetting;
- (void)close:(BOOL)arg1;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (int)commenScene;
- (void)setCommenScene:(int)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)targetVC;
- (void)setTargetVC:(id)arg1;
- (long long)themeStyle;
- (void)setThemeStyle:(long long)arg1;
- (void).cxx_destruct;
@end

