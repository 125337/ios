@interface BrandAudioFlutterController : MMFlutterViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol, TingCommentInputDelegate>
{
    BOOL _bSyncProgress; // +0x70
    BOOL _bInShowAnimation; // +0x71
    TingFlutterCommentInputController * _commentInputController; // +0x78
    MMPageSheetAdapter * _brandAdpter; // +0x80
    TingInsertedContentCallBack * _callback; // +0x88
    NSNumber * _heightRatio; // +0x90
    UIView * _shadowView; // +0x98
}
- (void)initProfileCallbackIfNeed:(id)arg1;
- (void)initShadowView;
- (void)updateShadowLayer:(BOOL)arg1;
- (void)setEnableProfileShadow:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)isInAnimation;
- (id)modalProfileViewControllerInHierarchy;
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
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractiveDismiss;
- (void)setInteractiveDismissEnable:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)activeCommentInput:(id)arg1 result:(id /* block */)arg2;
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
- (void).cxx_destruct;
@end
