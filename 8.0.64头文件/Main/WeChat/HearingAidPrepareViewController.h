@interface HearingAidPrepareViewController : MMUIViewController <MMTipsViewControllerDelegate, WCAudioModuleDelegate>
{
    BOOL _isCheckMicroPermission; // +0x70
    UIView * _headerView; // +0x78
    UIView * _footerView; // +0x80
    WCProgressCircleView * _progressView; // +0x88
    unsigned long long _currentMode; // +0x90
    HearingAidInitLogic * _logic; // +0x98
    CustomAnimator * _progressAnimator; // +0xa0
    UIView * _descLayout; // +0xa8
}
- (void)viewDidLoad;
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
