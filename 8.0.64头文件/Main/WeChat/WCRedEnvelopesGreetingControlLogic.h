@interface WCRedEnvelopesGreetingControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2019GreetingViewControllerDelegate, WCRedEnvelopes2022HKGreetingViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCRedEnvelopesReportCgiDelegate, MMUseCaseCallback, WCBaseControlMgrExt, IWCPayControlLogicExt, WCRedEnvelopesLogicMgrExt>
{
    WCPayControlData * m_oPayData; // +0x38
    WCPayPayMoneyLogic * m_oPayMoneyLogic; // +0x40
    unsigned long long m_scene; // +0x48
    WCRedEnvelopes2019GreetingViewController * m_sendView; // +0x50
    WCRedEnvelopes2022HKGreetingViewController * m_sendViewHK; // +0x58
    BOOL _isViewAnimationing; // +0x60
    WCRedEnvelopesReportCgi * _reportWxhbCgi; // +0x68
    long long _lastUnpayReason; // +0x70
    NSDictionary * _lastReqKeyStruct; // +0x78
    WCPayJumpRemindControlLogic * _jumpRemindLogic; // +0x80
    NSString * _unqiueId; // +0x88
    MMWebViewController * _h5RedEnvPrepayWebUI; // +0x90
    NSString * _reportSessionId; // +0x98
}
- (void)startLogic;
- (void)dealloc;
- (void)showSendingView:(BOOL)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)onRemoveSendView;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnGenGreetingDownloadResult:(id)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(BOOL)arg2 Error:(id)arg3;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)onGetH5PayNativeCashierResult:(BOOL)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)redEnvelopes2019GreetingViewControllerSendClick:(id)arg1;
- (void)genGreeetingReportSessonId;
- (id)getGreetingReportSessionId;
- (void)redEnvelopes2022HKGreetingViewControllerBack;
- (void)redEnvelopes2022HKGreetingViewControllerSendClick:(id)arg1;
- (BOOL)isGreetingKindaEnable;
- (void)startGreetingKindaPay;
- (void)call:(id)arg1;
- (void)callPaySuccWithTransId:(id)arg1;
- (void)handleGreetingRedEnvPaySuccessWithTransid:(id)arg1;
- (void)callPayFail;
- (void)sendReportHBRequestWithFailReason:(int)arg1;
- (unsigned long long)m_scene;
- (void)setM_scene:(unsigned long long)arg1;
- (id)reportWxhbCgi;
- (void)setReportWxhbCgi:(id)arg1;
- (long long)lastUnpayReason;
- (void)setLastUnpayReason:(long long)arg1;
- (id)lastReqKeyStruct;
- (void)setLastReqKeyStruct:(id)arg1;
- (id)jumpRemindLogic;
- (void)setJumpRemindLogic:(id)arg1;
- (id)unqiueId;
- (void)setUnqiueId:(id)arg1;
- (id)h5RedEnvPrepayWebUI;
- (void)setH5RedEnvPrepayWebUI:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (void).cxx_destruct;
@end
