@interface WCPayAddPayCardLogic : WCPayControlLogic <FaceRecogPayHandlerDelegate, WCPayBankElementQueryCgiDelegate, MMUseCaseCallback, WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayTenpayImportCardInfoViewControllerDelegate>
{
    int m_uiLogicFinishedStatus; // +0x38
    long long m_uiWCPayAddPayCardLogicScene; // +0x40
    JSEvent * m_jsEvent; // +0x48
    NSString * m_nsAddPayCardToken; // +0x50
    WCRedEnvelopesControlData * m_redEnvelopesData; // +0x58
    BOOL m_isWebankLoanScene; // +0x60
    BOOL m_canPassPwd; // +0x61
    NSString * m_usertoken; // +0x68
    BOOL _rename; // +0x70
    BOOL _marketingSwitchClosed; // +0x71
    BOOL _shouldNotifyUseCaseIfExist; // +0x72
    BOOL _bIsFromJsAddPayCard; // +0x73
    BOOL _bFromKinda; // +0x74
    WCBaseControlLogic * _fromControlLogic; // +0x78
    id <WCPayAddPayCardDelegate> _payCardDelegate; // +0x80
    MMVoidCallback * _successCallback; // +0x88
    MMVoidCallback * _cancelCallback; // +0x90
    WCPayRealnameAuthenReq * _realnameAuthenReq; // +0x98
    WCPayRealnameAuthenResp * _realnameAuthenResp; // +0xa0
    WCPayRealnameRegResp * _realnameRegResp; // +0xa8
    NSString * _notifyType; // +0xb0
    NSString * _platformCallbackKey; // +0xb8
    WCPaySetUserExInfoCgi * _setUserExInfoCgi; // +0xc0
    WCPayBindCardSuccessResponse * _m_bindCardSuccessResponse; // +0xc8
    WCPayBankElementQueryCgi * _m_getBankElementCgi; // +0xd0
    FaceRecogPayHandler * _faceHandler; // +0xd8
    WCPayControlData * _fillCardData; // +0xe0
}
- (id)initWithData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)startFromJsApi;
- (void)stopLogic;
- (void)startTenpayImportCardLogic;
- (void)startAddCardLogic;
- (void)showGiveUpLogicAlert;
- (BOOL)startKindaAddPayCard:(BOOL)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (id)FillCardNumberRealnameReq;
- (id)FillCardNumberRealnameResp;
- (void)FillCardNumberCancel:(BOOL)arg1;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberBackToRefreshCardList;
- (unsigned int)FillCardNumberSource;
- (BOOL)NeedShowServiceAppInfo;
- (void)FillCardInfoCancel;
- (id)getWCPayBindInfo:(id)arg1;
- (void)FillCardInfoNext:(id)arg1 underDialog:(unsigned int)arg2;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoReadAgreement;
- (id)FillCardInfoRealnameReq;
- (void)WCPayTenpayImportCardInfoViewControllerCancel;
- (void)WCPayTenpayImportCardInfoViewControllerNext;
- (void)WCPayTenpayImportCardInfoViewControllerReadAgreement;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)stopLogicToRefreshPayCardList;
- (void)stopLogicToMyPayCardView;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnTenpayImportBindQuery:(id)arg1 AppInfo:(id)arg2 UsrVerifiedInfo:(id)arg3 Error:(id)arg4;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnWCPayGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnWCPayGetBankResource:(id)arg1 Error:(id)arg2;
- (void)OnBindCardVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnBindCardVerifySMS:(id)arg1 Error:(id)arg2 repsonse:(id)arg3;
- (void)startFaceReg;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)passwordInit;
- (void)OnSetWCPayPasswordInBind:(id)arg1 repsonse:(id)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)jumpSuccessViewController;
- (void)onWCPayBindCardSuccessViewControllerClickDone;
- (id)onWCPayBindCardSuccessViewControllerRequestResponse;
- (void)EndWCPayAddPayCardLogic;
- (void)EndWCPayAddPayCardLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic:(id)arg1 withDelay:(BOOL)arg2;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)call:(id)arg1;
- (BOOL)isRename;
- (unsigned int)regFlag;
- (unsigned int)onWCPayReadOnlyInfo_RegFlag;
- (long long)m_uiWCPayAddPayCardLogicScene;
- (void)setM_uiWCPayAddPayCardLogicScene:(long long)arg1;
- (id)fromControlLogic;
- (void)setFromControlLogic:(id)arg1;
- (id)payCardDelegate;
- (void)setPayCardDelegate:(id)arg1;
- (id)successCallback;
- (void)setSuccessCallback:(id)arg1;
- (id)cancelCallback;
- (void)setCancelCallback:(id)arg1;
- (id)realnameAuthenReq;
- (void)setRealnameAuthenReq:(id)arg1;
- (id)realnameAuthenResp;
- (void)setRealnameAuthenResp:(id)arg1;
- (id)realnameRegResp;
- (void)setRealnameRegResp:(id)arg1;
- (BOOL)rename;
- (void)setRename:(BOOL)arg1;
- (BOOL)marketingSwitchClosed;
- (void)setMarketingSwitchClosed:(BOOL)arg1;
- (BOOL)shouldNotifyUseCaseIfExist;
- (void)setShouldNotifyUseCaseIfExist:(BOOL)arg1;
- (id)notifyType;
- (void)setNotifyType:(id)arg1;
- (id)platformCallbackKey;
- (void)setPlatformCallbackKey:(id)arg1;
- (id)setUserExInfoCgi;
- (void)setSetUserExInfoCgi:(id)arg1;
- (id)m_bindCardSuccessResponse;
- (void)setM_bindCardSuccessResponse:(id)arg1;
- (id)m_getBankElementCgi;
- (void)setM_getBankElementCgi:(id)arg1;
- (BOOL)bIsFromJsAddPayCard;
- (void)setBIsFromJsAddPayCard:(BOOL)arg1;
- (id)faceHandler;
- (void)setFaceHandler:(id)arg1;
- (BOOL)bFromKinda;
- (void)setBFromKinda:(BOOL)arg1;
- (id)fillCardData;
- (void)setFillCardData:(id)arg1;
- (void).cxx_destruct;
@end

