@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt>
{
    MMUIButton * menuButton; // +0x170
    BOOL m_bFullscreen; // +0x178
    long long m_orientation; // +0x180
    BOOL m_bPaying; // +0x188
    BOOL m_bResetPayingPwd; // +0x189
    CGSize m_ButtonSize; // +0x190
    double m_ButtonInset; // +0x1a0
    BOOL m_bShouldUseCustomH5GameMenu; // +0x1a8
    BOOL m_bViewWillDisappear; // +0x1a9
    BOOL m_hasSetFullScreen; // +0x1aa
    id <H5GameViewControllerDelegate> _delegate; // +0x1b0
    NSString * _gameAppId; // +0x1b8
    unsigned long long _lockedOrientation; // +0x1c0
}
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 GameAppId:(id)arg3;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(BOOL)arg4 IsFloatLayer:(BOOL)arg5;
- (id)initWithURL:(id)arg1 fullScreen:(BOOL)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(BOOL)arg4 IsFloatLayer:(BOOL)arg5 GameAppId:(id)arg6;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)scrollActionSheet:(id)arg1 MenuItem:(id)arg2;
- (void)gameDidSelecteItem:(id)arg1;
- (void)restoreViewStatus;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onBeginMultiTalk;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (void)onDeviceInfoOpen;
- (void)onDeviceInfoClose;
- (void)onPerformShortCut:(id)arg1;
- (void)onWCPayJSApiBegin:(BOOL)arg1;
- (void)onWCPayJSApiEnd:(BOOL)arg1;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)enterBackground;
- (void)enterForeground;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)isFullScreen;
- (BOOL)shouldUseH5GameCustomMenu;
- (BOOL)isOrientationLocked;
- (void)delaySetFullScreen:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)lockOrientation:(long long)arg1;
- (void)unlockOrientation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (unsigned long long)lockedOrientation;
- (void)setLockedOrientation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
