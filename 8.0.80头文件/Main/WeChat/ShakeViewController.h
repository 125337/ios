@interface ShakeViewController : MMUIViewController <WCAudioModuleDelegate, ShakeListDelegate, ShakeCheckerDelegate, ShakeLogicProxyDelegate, ShakeMainFrameDelegate, ShakeSettingViewControllerDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate, IRecordPermissionCheckExt>
{
    ShakeLogicProxy * m_logicProxy; // +0x70
    ShakeMainView * m_mainView; // +0x78
    MMTipsViewController * m_introView; // +0x80
    BOOL m_bShaking; // +0x88
    CShakeChecker * m_shakeChecker; // +0x90
    BOOL m_bBackgroundRunning; // +0x98
    BOOL m_bCanShake; // +0x99
}
- (id)getViewController;
- (id)getCurrentViewController;
- (void)setCanShake:(BOOL)arg1;
- (void)dismissViewController;
- (BOOL)shouldInteractivePop;
- (BOOL)canBecomeFirstResponder;
- (id)navigationBarBackgroundColor;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)initView;
- (void)initBackgroundView;
- (void)dealloc;
- (void)stopAllAnimation;
- (void)disableAllButton;
- (void)enableAllButton;
- (void)resetAllStatus;
- (void)showErrorAlert:(id)arg1;
- (void)onSplitAnimationEnd;
- (void)OnShake;
- (void)onShakeMusicReportEndWithMusicItem:(id)arg1;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)showViewControllerFromList:(id)arg1 completion:(id /* block */)arg2;
- (void)OnSetting;
- (id)getMsgForState:(unsigned int)arg1;
- (void)onShakeStop;
- (void)SetMuteStauts:(long long)arg1;
- (void)updateMuteStauts:(BOOL)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)systemAuthorizationCheck;
- (void)promptForShakeMusicUsage;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)registerYReportSdk;
- (void)handleInterruptionBy3rdApp;
- (BOOL)m_bCanShake;
- (void)setM_bCanShake:(BOOL)arg1;
- (void).cxx_destruct;
@end
