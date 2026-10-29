@interface WCPayJSApiGetWebPayCheckoutCounterControlLogic : WCPayControlLogic <MMUseCaseCallback, WCPayVerifyPayCardViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayAvaliablePayCardListViewDelegate, IWCPayControlLogicExt>
{
    JSEvent * m_jsEvent; // +0x38
    long long m_enWCPayCheckAuthorityScene; // +0x40
    NSString * m_nsAppToken; // +0x48
    NSString * m_nsResultToken; // +0x50
    NSString * m_nsRelationKey; // +0x58
    int m_getOrderScene; // +0x60
    NSString * m_nsErrDesc; // +0x68
    id <WCPayCheckoutCounterLogicDelegate> _logicDelegate; // +0x70
    UIView * _m_deskView; // +0x78
    NSString * _kindaPayBindSerial; // +0x80
}
- (id)initWithJSEvent:(id)arg1;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)removeDesk;
- (void)startLogic;
- (void)dealloc;
- (void)stopLogic;
- (void)checkStopLogic;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(BOOL)arg2;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewCancel;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetWebPayOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)call:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)m_deskView;
- (void)setM_deskView:(id)arg1;
- (id)kindaPayBindSerial;
- (void)setKindaPayBindSerial:(id)arg1;
- (void).cxx_destruct;
@end

