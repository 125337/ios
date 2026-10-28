@interface TingFlutterViewController : MMFlutterViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol, ITingApp, TingCommentInputDelegate>
{
    BOOL _allowRotation; // +0x70
    BOOL _bSyncProgress; // +0x71
    BOOL _bInShowAnimation; // +0x72
    id /* block */ _actionOnPopedOrDismissed; // +0x78
    TingFlutterCommentInputController * _commentInputController; // +0x80
    MMPageSheetAdapter * _brandAdpter; // +0x88
    TingInsertedContentCallBack * _callback; // +0x90
    NSNumber * _heightRatio; // +0x98
    UIView * _shadowView; // +0xa0
    MinimizeTaskData * _activeTaskData; // +0xa8
}
- (void)viewDidAppearWithStar;
- (void)viewDidDisappearWithStar;
- (void)setActiveWithListenId:(id)arg1 bizName:(id)arg2;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void)initProfileCallbackIfNeed:(id)arg1;
- (void)initShadowView;
- (void)updateShadowLayer:(BOOL)arg1;
- (void)setEnableProfileShadow:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)isInAnimation;
- (void)onBeginShowHalfScreenProfile;
- (void)onShowAnimationDone;
- (void)onEndShowHalfScreenProfile;
- (void)onChangeProfileShadow:(double)arg1;
- (void)onChangeProfileShadow:(double)arg1 animate:(BOOL)arg2;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (unsigned long long)listenHalfScreenOption;
- (id)getCurTargetRatioValue;
- (void)closeProfilePageSheetIfNeed;
- (void)checkNeedRecoverAppearanceBeforeDismiss;
- (BOOL)shouldInteractiveDismiss;
- (void)setInteractiveDismissEnable:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldDisableTingDismissGesture;
- (BOOL)isTingAppHomePage;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)activeCommentInput:(id)arg1 result:(id /* block */)arg2;
- (void)viewDidLoad;
- (BOOL)allowRotation;
- (void)setAllowRotation:(BOOL)arg1;
- (id /* block */)actionOnPopedOrDismissed;
- (void)setActionOnPopedOrDismissed:(id /* block */)arg1;
- (id)commentInputController;
- (void)setCommentInputController:(id)arg1;
- (id)brandAdpter;
- (void)setBrandAdpter:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)heightRatio;
- (void)setHeightRatio:(id)arg1;
- (BOOL)bSyncProgress;
- (void)setBSyncProgress:(BOOL)arg1;
- (BOOL)bInShowAnimation;
- (void)setBInShowAnimation:(BOOL)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)activeTaskData;
- (void)setActiveTaskData:(id)arg1;
- (void).cxx_destruct;
@end
