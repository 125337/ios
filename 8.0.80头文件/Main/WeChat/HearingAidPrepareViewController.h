@interface HearingAidPrepareViewController : MMUIViewController <MMTipsViewControllerDelegate, WCAudioModuleDelegate>
{
    BOOL _isNotFromElderMode; // +0x70
    BOOL _isCheckMicroPermission; // +0x71
    UIViewController * _entryViewController; // +0x78
    UIView * _headerView; // +0x80
    UIView * _footerView; // +0x88
    WCProgressCircleView * _progressView; // +0x90
    unsigned long long _currentMode; // +0x98
    HearingAidInitLogic * _logic; // +0xa0
    CustomAnimator * _progressAnimator; // +0xa8
    UIView * _descLayout; // +0xb0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)initLogic;
- (id)init;
- (void)setUpUI;
- (void)setUpHeaderView;
- (id)genTitle;
- (id)genDescOpened;
- (void)genDesc;
- (id)appendModeOffDescription:(id)arg1;
- (void)setUpFooterView;
- (void)updateLayout;
- (void)onStartBtnClick;
- (void)prepareJumpFinishUI:(unsigned long long)arg1;
- (void)jumpFinishUI:(unsigned long long)arg1;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)arg1;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)arg1 cancelTitle:(id)arg2;
- (void)goToSettingAuthorization;
- (void)onCancelBtnClick;
- (void)onRetryBtnClick;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)onBackClick;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (id)entryViewController;
- (void)setEntryViewController:(id)arg1;
- (BOOL)isNotFromElderMode;
- (void)setIsNotFromElderMode:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (BOOL)isCheckMicroPermission;
- (void)setIsCheckMicroPermission:(BOOL)arg1;
- (unsigned long long)currentMode;
- (void)setCurrentMode:(unsigned long long)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)progressAnimator;
- (void)setProgressAnimator:(id)arg1;
- (id)descLayout;
- (void)setDescLayout:(id)arg1;
- (void).cxx_destruct;
@end
