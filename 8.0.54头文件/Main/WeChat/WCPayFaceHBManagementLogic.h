@interface WCPayFaceHBManagementLogic : WCRedEnvelopesControlLogic <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCPayFaceHBCgiDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, MMTipsViewControllerDelegate, HBBusinessCallbackCgiDelegate, MMUseCaseCallback>
{
    id <WCPayFaceHBManagementLogicDelegate> m_delegate; // +0x38
    WCPayFaceHBCgi * m_faceHBCgi; // +0x40
    WCPayPayMoneyLogic * m_payMoneyLogic; // +0x48
    WCPayControlData * oPayData; // +0x50
    unsigned long long m_totalAmount; // +0x58
    unsigned int m_totalNum; // +0x60
    int m_scene; // +0x64
    FFHBRequestResp * _m_prepayResp; // +0x68
    HBBusinessCallbackCgi * _hbBusinessCallbackCgi; // +0x70
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x78
}
- (void)setDelegate:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)setM_scene:(int)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(BOOL)arg2 Error:(id)arg3;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnClickNotReceivedButton;
- (void)onFailMsg:(id)arg1;
- (void)OnClickViewHBHistory;
- (void)queryHBQrCodeInfo;
- (void)onHBBusinessCallbackCgiResp:(id)arg1;
- (void)onHBBusinessCallbackCgiError:(id)arg1;
- (void)call:(id)arg1;
- (id)interceptWinLogic;
- (int)m_scene;
- (id)m_prepayResp;
- (void)setM_prepayResp:(id)arg1;
- (id)hbBusinessCallbackCgi;
- (void)setHbBusinessCallbackCgi:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (void).cxx_destruct;
@end

