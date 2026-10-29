@interface WCPayRealnameVerifyLogic : WCPayControlLogic <WCPayRealnameSendSMSCgiDelegate, WCPayRealnameVerifySMSCgiDelegate, WCPayVerifyPhoneViewControllerDelegate, WCPayBindCardConfirmViewControllerDelegate, WCPayRealnameSuccessViewControllerDelegate, WCPayRealnameSelectGuardianViewControllerDelegate, FaceRecogPayHandlerDelegate, WCPayGetUserExInfoCgiDelegate, IWCPayRealNameVerifyPhoneExt, IWCPayControlLogicExt, WCPayRealnameInfoViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    BOOL _rename; // +0x38
    BOOL _directVerifySMS; // +0x39
    BOOL _directBindcardConfirm; // +0x3a
    BOOL _directFillCardInfoUI; // +0x3b
    BOOL _directRealnameInfo; // +0x3c
    BOOL _isMinorRealname; // +0x3d
    BOOL _marketingSwitchClosed; // +0x3e
    BOOL _shouldShowSuccessView; // +0x3f
    GetRealnameWordingRsp * _wording; // +0x40
    NSString * _sessionId; // +0x48
    id <WCPayRealnameVerifyLogicDelegate> _delegate; // +0x50
    WCPayGetUserExInfoCgi * _getUserExInfoCgi; // +0x58
    WCPaySetUserExInfoCgi * _setUserExInfoCgi; // +0x60
    WCPayRealnameSendSMSCgi * _sendSMSCgi; // +0x68
    WCPayRealnameVerifySMSCgi * _verifySMSCgi; // +0x70
    RealNameSendSmsResp * _sendSMSResp; // +0x78
    RealNameVerifySmsResp * _verifySMSResp; // +0x80
    WCPayRealnameAuthenResp * _authenResp; // +0x88
    WCPayRealnameAuthenReq * _authenReq; // +0x90
    WCPayRealnameRegResp * _realNameReg; // +0x98
    FaceRecogPayHandler * _faceHandler; // +0xa0
    WCPayRealnameHalfPageSheetView * _underAgeMidHalfPage; // +0xa8
    NSString * _mobileVerifyReqkey; // +0xb0
}
- (void)stopLogic;
- (void)startLogic;
- (id)realnameToken;
- (void)getUserExInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getUserExInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)onWCPayBindCardConfirmViewControllerDesc;
- (void)onWCPayBindCardConfirmViewControllerConfirm:(BOOL)arg1;
- (void)onWCPayBindCardConfirmViewControllerBack;
- (void)startFaceReg;
- (void)startPhoneVerify;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (id)FillRealnameInfoWording;
- (void)FillRealnameInfoLayoutV2ClickConfirm:(id)arg1;
- (void)FillRealnameInfoCancel;
- (void)FillRealnameInfoNext:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnRealnameAuthen:(id)arg1 Error:(id)arg2;
- (void)onAuthenNext;
- (void)passwordInit;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (id)onWCPayRealnameSuccessViewControllerTitle;
- (id)onWCPayRealnameSuccessViewControllerDesc;
- (id)onWCPayRealnameSuccessViewControllerButtonTitle;
- (BOOL)onWCPayRealnameSuccessViewControllerShowRetry;
- (id)onWCPayRealnameSuccessViewControllerGetData;
- (void)onWCPayRealnameSuccessViewControllerDone;
- (void)onWCPayRealnameSuccessViewControllerBack;
- (void)onWCPayRealnameSuccessViewControllerRetry;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)reportRealnameAuthenKV:(unsigned long long)arg1;
- (void)reportRealnameVerifyKVResult:(BOOL)arg1 needBindCard:(BOOL)arg2 needFaceReg:(BOOL)arg3;
- (void)onWCPayVerifyPhoneViewControllerBack;
- (void)onWCPayVerifyPhoneViewControllerNext:(id)arg1 Phone:(id)arg2 verifyCode:(id)arg3;
- (void)onWCPayVerifyPhoneViewControllerGetVerifyCode:(id)arg1 Phone:(id)arg2 retry:(BOOL)arg3;
- (id)onWCPayVerifyPhoneViewControllerBannedArea;
- (void)onWCPayRealnameSendSMSCgiResp:(id)arg1;
- (void)onWCPayRealnameSendSMSCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifySMSCgiResp:(id)arg1;
- (void)onWCPayRealnameVerifySMSCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)selectGuardianViewControllerDidCancel;
- (void)selectGuardianViewControllerDidFinishWithTinyAppUri:(id)arg1;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(id)arg1;
- (void)realnameNeedStartVerifyPhone:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)rename;
- (void)setRename:(BOOL)arg1;
- (BOOL)directVerifySMS;
- (void)setDirectVerifySMS:(BOOL)arg1;
- (BOOL)directBindcardConfirm;
- (void)setDirectBindcardConfirm:(BOOL)arg1;
- (BOOL)directFillCardInfoUI;
- (void)setDirectFillCardInfoUI:(BOOL)arg1;
- (BOOL)directRealnameInfo;
- (void)setDirectRealnameInfo:(BOOL)arg1;
- (BOOL)isMinorRealname;
- (void)setIsMinorRealname:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)marketingSwitchClosed;
- (void)setMarketingSwitchClosed:(BOOL)arg1;
- (id)getUserExInfoCgi;
- (void)setGetUserExInfoCgi:(id)arg1;
- (id)setUserExInfoCgi;
- (void)setSetUserExInfoCgi:(id)arg1;
- (id)sendSMSCgi;
- (void)setSendSMSCgi:(id)arg1;
- (id)verifySMSCgi;
- (void)setVerifySMSCgi:(id)arg1;
- (id)sendSMSResp;
- (void)setSendSMSResp:(id)arg1;
- (id)verifySMSResp;
- (void)setVerifySMSResp:(id)arg1;
- (id)authenResp;
- (void)setAuthenResp:(id)arg1;
- (id)authenReq;
- (void)setAuthenReq:(id)arg1;
- (id)realNameReg;
- (void)setRealNameReg:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (BOOL)shouldShowSuccessView;
- (void)setShouldShowSuccessView:(BOOL)arg1;
- (id)underAgeMidHalfPage;
- (void)setUnderAgeMidHalfPage:(id)arg1;
- (id)mobileVerifyReqkey;
- (void)setMobileVerifyReqkey:(id)arg1;
- (void).cxx_destruct;
@end
