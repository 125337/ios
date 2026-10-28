@interface WCFinderTeenagerProtectViewController : MMUIViewController <MMLimitedModeVerifyPasswordUtilLogicDelegate>
{
    MMUIViewController * _fromVC; // +0x70
    WCFinderLimitProtectCommonHeadView * _commonHeadView; // +0x78
    MMUIButton * _modeChangeBtn; // +0x80
    MMLimitedModeVerifyPasswordUtilLogic * _verifyPwdLogic; // +0x88
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)feedBackToFindPage;
- (id)verifyPwdLogic;
- (void)setUpUI;
- (id)modeChangeBtn;
- (id)commonHeadView;
- (void)viewWillLayoutSubviews;
- (void)setUpCommonHeadViewContent;
- (void)layoutSubViewsConstraint;
- (void)onClickModeChangeBtn;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (int)commentScene;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (void)setCommonHeadView:(id)arg1;
- (void)setModeChangeBtn:(id)arg1;
- (void)setVerifyPwdLogic:(id)arg1;
- (void).cxx_destruct;
@end
