@interface ChatBotFlutterVoIPViewController : ChatBotTransitionBaseViewController <MMFlutterViewControllerDelegate>
{
    BOOL _skipKeepAliveOnDisappear; // +0x70
    NSString * _pendingRecallSessionId; // +0x78
    MMFlutterInstance * _flutterInstance; // +0x80
    MMFlutterViewController * _flutterVC; // +0x88
    UIImageView * _backgroundView; // +0x90
    id /* block */ _usageRootExitConfirmation; // +0x98
}
- (void)setupWithFlutterInstance:(id)arg1;
- (void)setVoipSession:(id)arg1;
- (void)viewDidLoad;
- (void)prefetchRecallPushContentIfNeeded;
- (void)setAgentRuntimeVisible:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)captureUsageRootExit;
- (void)confirmUsageRootExit;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)prepareForImmediateDestroy;
- (void)closeVCByCallEnd;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (CGRect)contentFrame;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onChatBotPushBegin;
- (void)onChatBotTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (CGRect)flutterFullExposeRect;
- (void)sendPanelExposeRect:(CGRect)arg1;
- (id)getBackgroundView;
- (void)layoutBackground;
- (void)setupFakeSnapshot;
- (void)flutterViewController:(id)arg1 SetNavigationBackEnable:(BOOL)arg2;
- (void)dealloc;
- (id)pendingRecallSessionId;
- (void)setPendingRecallSessionId:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)skipKeepAliveOnDisappear;
- (void)setSkipKeepAliveOnDisappear:(BOOL)arg1;
- (id /* block */)usageRootExitConfirmation;
- (void)setUsageRootExitConfirmation:(id /* block */)arg1;
- (void).cxx_destruct;
@end
