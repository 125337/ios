@interface WCPayResetPayPwdLogic : WCPayControlLogic <WCPayFillCredInfoViewControllerDelegate, WCPayResetSelectVerifyWayViewControllerDelegate, WCPayVerifyUserRealNameInfoCgiDelegate, WCPayResetPwdByFaceCgiDelegate, WCPayGenDigitalCertCgiDelegate, FaceRecogPayHandlerDelegate, WCPayResetPwdCardInfoViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayResetPwdBindedCardListViewControllerDelegate, WCPayResetPwdBindCardViewControllerDelegate>
{
    BOOL _bIsResetingPwdByFaceRecog; // +0x38
    id <WCPayResetPayPwdLogicDelegate> _delegate; // +0x40
    MMVoidCallback * _successCallback; // +0x48
    MMVoidCallback * _cancelCallback; // +0x50
    WCPayVerifyUserRealNameInfoCgi * _verifyRealnameInfoCgi; // +0x58
    WCPayResetPwdByFaceCgi * _resetPwdByFaceCgi; // +0x60
    WCPayGenDigitalCertCgi * _genDigitalCertCgi; // +0x68
    FaceRecogPayHandler * _faceHandler; // +0x70
    NSString * _faceAuthToken; // +0x78
    NSString * _userName; // +0x80
    NSString * _userIDType; // +0x88
    NSString * _userIDNum; // +0x90
}
- (void)startLogic;
- (void)BackToRootView;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)resetPasswordSuccess;
- (void)resetPasswordCancel;
- (void)ResetPwdCardInfoCardInfoCancel;
- (void)ResetPwdCardInfoNext:(id)arg1;
- (void)ResetPwdCardInfoReadAgreement;
- (void)stopLogic;
- (void)ResetPwdCardInfoPoped;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)OnAlertGiveUpResetPwd;
- (void)showGiveUpResetAlert;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)openNewCardErrorPathWebView;
- (BOOL)OnSelectBindCardAvailble:(id)arg1;
- (void)OnResetPwdBindedCardListNewCardClicked;
- (void)OnResetPwdBindedCardListBack;
- (void)OnResetPwdBindedCardListNext;
- (void)OnWCPayResetPwdBindCardNext;
- (void)OnWCPayResetPwdBindCardBack;
- (void)OnResetWCPayPasswordVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnResetWCPayPasswordVerifySMS:(id)arg1;
- (void)showResetPwdViewController;
- (void)OnSetWCPayPasswordInReset:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnGetBindingCardBin:(id)arg1 Error:(id)arg2;
- (void)OnGetAvailableBank:(id)arg1 Error:(id)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)onFillCredInfoViewControllerBack;
- (void)onFillCredInfoViewControllerConfirmWithName:(id)arg1 credType:(id)arg2 credNum:(id)arg3;
- (void)onSelectVerifyWayViewControllerBack;
- (void)onSelectVerifyWayViewControllerSelectVerifyCard;
- (void)onSelectVerifyWayViewControllerSelectVerifyFace;
- (void)onGetVerifyUserRealNameInfoCgiResp:(id)arg1;
- (void)sendGenDigitalCertRequest;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)continueLogicAfterHandleDigitalCertSucc;
- (void)sendResetPwdByFaceRequest:(id)arg1;
- (void)onGetResetPwdByFaceCgiResp:(id)arg1;
- (void)clickResetPwdErrorAlert;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)successCallback;
- (void)setSuccessCallback:(id)arg1;
- (id)cancelCallback;
- (void)setCancelCallback:(id)arg1;
- (id)verifyRealnameInfoCgi;
- (void)setVerifyRealnameInfoCgi:(id)arg1;
- (id)resetPwdByFaceCgi;
- (void)setResetPwdByFaceCgi:(id)arg1;
- (id)genDigitalCertCgi;
- (void)setGenDigitalCertCgi:(id)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (id)faceAuthToken;
- (void)setFaceAuthToken:(id)arg1;
- (BOOL)bIsResetingPwdByFaceRecog;
- (void)setBIsResetingPwdByFaceRecog:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)userIDType;
- (void)setUserIDType:(id)arg1;
- (id)userIDNum;
- (void)setUserIDNum:(id)arg1;
- (void).cxx_destruct;
@end
