@interface WCFinderCheckAntiAddictViewController : MMUIViewController <UITextFieldDelegate, MMLimitedModeVerifyPasswordUtilLogicDelegate, ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x70
    BOOL _controlExitState; // +0x78
    WCFinderLimitAgreementCommonHeadView * _commonHeadView; // +0x80
    UIButton * _exitButton; // +0x88
    MMUILabel * _checkTipsLabel; // +0x90
    WCFinderLimitCheckPanelView * _checkPanelView; // +0x98
    id /* block */ _didAppearBlock; // +0xa0
    id /* block */ _verifySucBlock; // +0xa8
    id /* block */ _exitBlock; // +0xb0
    long long _antiAddictStyle; // +0xb8
    long long _antiAddictScene; // +0xc0
    unsigned long long _enterTime; // +0xc8
    MMLimitedModeVerifyPasswordUtilLogic * _verifyPwdLogic; // +0xd0
    CMessageWrap * _authorizeRequestMessageWrap; // +0xd8
}
- (id)initWithStyle:(long long)arg1 scene:(long long)arg2;
- (id /* block */)didAppear;
- (id /* block */)verifySuc;
- (id /* block */)exit;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (int)feedViewControllerScene;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldAutorotate;
- (void)setUpUI;
- (void)setUpCommonHeadViewContent;
- (void)layoutSubViewsConstraint;
- (void)viewWillLayoutSubviews;
- (void)setUpCheckPanelView;
- (id)createCellWithTitle:(id)arg1 cellWidth:(double)arg2 cellHeight:(double)arg3;
- (id)commonHeadView;
- (id)checkPanelView;
- (id)checkTipsLabel;
- (id)exitButton;
- (void)onClickCheckPwdBtn;
- (void)onClickCheckGuardianBtn;
- (void)onClickExitFinderAction;
- (void)doExitAction;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)registerYReportSdk;
- (void)setCommonHeadView:(id)arg1;
- (void)setExitButton:(id)arg1;
- (void)setCheckTipsLabel:(id)arg1;
- (void)setCheckPanelView:(id)arg1;
- (id /* block */)didAppearBlock;
- (void)setDidAppearBlock:(id /* block */)arg1;
- (id /* block */)verifySucBlock;
- (void)setVerifySucBlock:(id /* block */)arg1;
- (id /* block */)exitBlock;
- (void)setExitBlock:(id /* block */)arg1;
- (long long)antiAddictStyle;
- (void)setAntiAddictStyle:(long long)arg1;
- (long long)antiAddictScene;
- (void)setAntiAddictScene:(long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)verifyPwdLogic;
- (void)setVerifyPwdLogic:(id)arg1;
- (id)authorizeRequestMessageWrap;
- (void)setAuthorizeRequestMessageWrap:(id)arg1;
- (BOOL)controlExitState;
- (void)setControlExitState:(BOOL)arg1;
- (void).cxx_destruct;
@end
