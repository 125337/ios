@interface WCPayPayMoneyFromOverseaH5WalletLogic : WCPayControlLogic <MMUseCaseCallback, WCBaseControlMgrExt, WCPayPaidOrderDetailViewControllerDelegate, WCPayDrawLotteryCgiDelegate, WCPayGetLotteryCgiDelegate, MMWebViewDelegate>
{
    NSString * m_nsPayGateUrl; // +0x38
    CallbackRetryConf * m_oCallbackRetryConf; // +0x40
    unsigned int m_currentRetryCount; // +0x48
    BOOL m_bNeedDialog; // +0x4c
    NSString * m_nsDialogText; // +0x50
    BOOL m_bIsPending; // +0x58
    int m_enPayScene; // +0x5c
    WCPayDrawLotteryCgi * m_oDrawLotteryCgi; // +0x60
    WCPayGetLotteryCgi * m_oGetLotteryCgi; // +0x68
    NSMutableDictionary * m_oGetPaidOrderDetailInfo; // +0x70
    BOOL _cancelByOpenApi; // +0x78
    id <WCPayPayMoneyFromOverseaH5WalletLogicDelegate> _logicDelegate; // +0x80
    MMVoidITransmitKvDataCallback * _m_successCallback; // +0x88
    MMVoidCallback * _m_cancelCallback; // +0x90
    MMVoidCallback * _m_failCallback; // +0x98
    WCPayFollowCardBDMchCgi * _followMchCgi; // +0xa0
}
- (id)initWithInfo:(id)arg1 Data:(id)arg2;
- (void)startLogic;
- (void)showWebViewControllerWithURL;
- (void)webViewReturn:(id)arg1;
- (BOOL)onKindaGetPaidOrderDetailJsApiInvoke:(id)arg1;
- (void)onGetPaidOrderDetailJsApiInvoke:(id)arg1;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)retryGetPaidOrderDetailAgain;
- (void)OnGetPaidOrderDetailNetError:(id)arg1;
- (void)mergePaidOrderDetailData:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)arg1;
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(id)arg1 stateBefore:(unsigned int)arg2 stateAfter:(unsigned int)arg3;
- (void)OnDrawLotteryRepsonseOK:(id)arg1;
- (void)OnDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetLotteryRepsonseOK:(id)arg1;
- (void)OnGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onGetPaidOrderDetailFail;
- (void)onGetPaidOrderDetailCancel;
- (void)onGetPaidOrderDetailSuccess:(id)arg1;
- (void)stopLogic;
- (void)markCancelByOpenApi;
- (void)call:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)m_successCallback;
- (void)setM_successCallback:(id)arg1;
- (id)m_cancelCallback;
- (void)setM_cancelCallback:(id)arg1;
- (id)m_failCallback;
- (void)setM_failCallback:(id)arg1;
- (id)followMchCgi;
- (void)setFollowMchCgi:(id)arg1;
- (BOOL)cancelByOpenApi;
- (void)setCancelByOpenApi:(BOOL)arg1;
- (void).cxx_destruct;
@end

