@interface WCFinderLimitModeRestViewController : MMUIViewController
{
    int _commentScene; // +0x70
    UIView * _detailView; // +0x78
    UINavigationController * _navVC; // +0x80
    UIViewController * _targetVC; // +0x88
    long long _themeStyle; // +0x90
    NSString * _feedID; // +0x98
}
+ (void)displayToRootView:(id)arg1 feedID:(id)arg2 commentScene:(int)arg3;
+ (void)presendRestVC:(id)arg1 toTargetVC:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDetailFrame;
- (void)setupBackgroundView;
- (void)addTapClaseActionToView:(id)arg1;
- (void)showDetailWithAnimation;
- (void)reportWithActionType:(long long)arg1 targetView:(id)arg2;
- (pair<double, double>)animationPosition;
- (id)createDetailLabel:(double)arg1 contentAttrs:(id)arg2;
- (id)wrapDetailView:(id)arg1;
- (id)createIKnowButton:(double)arg1 verticalPadding:(double)arg2;
- (id)createBottomIKnowButton:(double)arg1;
- (id)createIcon:(BOOL)arg1;
- (id)cornerView:(id)arg1 insets:(UIEdgeInsets)arg2 cornerRadius:(double)arg3 needShadow:(BOOL)arg4;
- (id)buildMiddleGuildView;
- (id)buildBottomGuideView;
- (void)addCloseIconToView:(id)arg1;
- (void)onTapBlankArea:(id)arg1;
- (void)onClickIKnow:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)close;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)targetVC;
- (void)setTargetVC:(id)arg1;
- (long long)themeStyle;
- (void)setThemeStyle:(long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
