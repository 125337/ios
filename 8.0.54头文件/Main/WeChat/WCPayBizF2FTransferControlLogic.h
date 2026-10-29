@interface WCPayBizF2FTransferControlLogic : WCPayControlLogic <WCPayF2FMiddlePageSubLogicDelegate, WCPayBizF2FConfirmViewControllerDelegate, WCPaySubLogicDelegate, WCPayF2FMiddleViewControllerDelegate, WCPayBusiF2FZeroCallBackCgiDelegate, WCPayGetZeroPayTokenCgiDelegate, WCPayBizF2FZeroPayConfirmViewDelegate, WCPayBusiF2FSucPageCgiDelegate, WCPayBusiF2FUnlockFavorCgiDelegate, WCPayBizF2FTransferMoneyViewControllerDelegate, WCPayBizF2FPaidSuccViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayBizF2FPlaceOrderCgiDelegate, WCPayBizF2FPayCheckCgiDelegate, WCBaseControlLogicDeleagte, WCPayF2FDrawLotteryCgiDelegate, WCPayF2FModifyExposureCgiDelegate, WCPayF2FGetLotteryCgiDelegate, WAAppTaskMgrExt, MMWebViewDelegate, MMUseCaseCallback>
{
    BOOL _bHasPaySucc; // +0x38
    BOOL _isModifyExposureInfo; // +0x39
    BOOL _bIsShowingCrossPlatformSuccPage; // +0x3a
    unsigned int _lastTotalAmount; // +0x3c
    int _remindReportState; // +0x40
    unsigned int _reportAmount; // +0x44
    id <WCPayBizF2FTransferControlLogicDelegate> _bizF2FLogicDelagte; // +0x48
    WCPayBizF2FPlaceOrderCgi * _placeOrderCgi; // +0x50
    WCPayBizF2FPayCheckCgi * _payCheckCgi; // +0x58
    WCPayPayMoneyLogic * _payMoneyLogic; // +0x60
    WCPayBusiF2FUnlockFavorCgi * _unLockFavorCgi; // +0x68
    WCPayBusiF2FSucPageCgiWithRetry * _paySuccessCgi; // +0x70
    WCPayGetZeroPayTokenCgi * _getZeroPayTokenCgi; // +0x78
    WCPayBizF2FZeroCallBackAutoRetryCgi * _m_zeroPayCgi; // +0x80
    WCPayF2FGetLotteryCgi * _f2fGetLotteryCgi; // +0x88
    GetLotteryResponse * _getLotteryReponse; // +0x90
    WCPayF2FModifyExposureCgi * _f2fModifyExposureCgi; // +0x98
    ExposureInfoModifyResponse * _exposureInfoModifyResponse; // +0xa0
    WCPayF2FDrawLotteryCgi * _f2fDrawLotteryCgi; // +0xa8
    DrawLotteryResponse * _drawLotteryResponse; // +0xb0
    ExposureInfo * _prevExposureInfo; // +0xb8
    MMWebViewController * _getLotteryViewController; // +0xc0
    WCPayBizF2FZeroPayConfirmView * _m_zeroPayConfirmView; // +0xc8
    NSString * _m_fingerdata; // +0xd0
    WCPayF2FMiddlePageSubLogic * _m_middlePageSubLogic; // +0xd8
    BusiF2FPlaceOrderResp * _lastReqKeyStruct; // +0xe0
    NSString * _lastPayRequestKey; // +0xe8
    NSString * _lastRemarkWording; // +0xf0
    long long _lastUnpayReason; // +0xf8
    AmountRemindPage * _amountRemindPage; // +0x100
    MMTipsViewController * _checkNameController; // +0x108
    MMWebViewController * _hkCashierViewController; // +0x110
}
- (long long)getLastUnpayReason;
- (void)dealloc;
- (void)stopLogic;
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (BOOL)BizTransferMoneyCurrentLogicIsTop;
- (void)onBizTransferMoneyViewControllerBack;
- (void)onBizTransferMoneyTransferBtnClickWithArgs:(id)arg1;
- (void)resendPlaceOrderCgiAmount:(unsigned int)arg1 amountRemindSign:(id)arg2;
- (void)resendPlaceOrderCgiWithAmountRemindSign:(id)arg1 CheckRecvNameSign:(id)arg2 inputRecvName:(id)arg3;
- (void)onBizF2FPaidSuccViewControllerDoneBtnClick;
- (void)onBizF2FPaidSuccViewControllerClickActivityBtn;
- (void)onGetBizF2FPlaceOrderResp:(id)arg1;
- (BOOL)blockByCheckRecvNameWin:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (BOOL)blockByAmountRemindWin:(id)arg1;
- (BOOL)blockByAmountRemindPage:(id)arg1;
- (void)invokeActionOfJumpItem:(id)arg1 actionContinue:(id /* block */)arg2;
- (void)placeOrderErrorSceneClickIKnow;
- (BOOL)zeroPay:(id)arg1;
- (BOOL)canUseBioAuth;
- (id)zeroPayTitle;
- (id)zeroPayMoney;
- (double)zeroPayMoneyDouble;
- (void)continueTransfer:(id)arg1;
- (void)continueToTransfer:(BOOL)arg1;
- (BOOL)checkJumpThirdPartyCashier;
- (BOOL)handleJumpThirdPartyCashier:(id)arg1;
- (BOOL)handleJumpHKCashier:(id)arg1;
- (void)cancelTransferMoney:(id)arg1;
- (void)placeOrderAlertRightBtnClick;
- (BOOL)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)startPaySuccessCgi;
- (void)startUnlockFavorCgi;
- (void)onWCPayBusiF2FUnlockFavorCgiResp:(id)arg1;
- (void)onWCPayBusiF2FUnlockFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiResp:(id)arg1;
- (void)onWCPayBusiF2FSucPageCgiError:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerClickLotteryBtn:(id)arg1;
- (void)onBizF2FPaidSuccViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)onBizF2FPaidSuccViewControllerReturnWithoutDrawLottery;
- (void)OnGetF2FGetLotteryRepsonseOK:(id)arg1;
- (void)OnGetF2FGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FDrawLotteryRepsonseOK:(id)arg1;
- (void)OnF2FDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FModifyExposureRepsonseOK:(id)arg1;
- (void)OnF2FModifyExposureRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)webViewReturn:(id)arg1;
- (void)onRealnameVerifySuccessNotification:(id)arg1;
- (void)onRealnameVerifyCancelNotification:(id)arg1;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithPassword:(id)arg1;
- (void)onWCPayBizF2FZeroPayConfirmViewConfirmWithFingerData:(id)arg1;
- (void)onWCPayBizF2FZeroPayConfirmViewCancel;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayGetZeroPayTokenCgi:(id)arg1 didFailWithTenpayResponse:(id)arg2 error:(id)arg3;
- (void)onResetPwdRetry:(id)arg1;
- (void)onResetPwdConfirm:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiResp:(id)arg1;
- (void)onWCPayBusiF2FZeroCallBackCgiError:(id)arg1;
- (void)onWCPayF2FMiddleViewControllerBack;
- (void)onWCPayF2FMiddleViewControllerClickTransfer:(unsigned int)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)call:(id)arg1;
- (void)showBizTransferMoneyViewControllerFloatBtn;
- (void)activeBizTransferMoneyViewControllerTextField;
- (void)gotoRootVCAndstopBizF2FLogic;
- (void)onWCPayBizF2FConfirmViewControllerClickBackButton;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (id)onWCPayBizF2FConfirmViewControllerTitle;
- (id)onWCPayBizF2FConfirmViewControllerDesc;
- (id)onWCPayBizF2FConfirmViewControllerSign;
- (void)onWCPayF2FMiddlePageSubLogicToDynamicView:(id)arg1;
- (void)moneyRemindReportAction:(unsigned long long)arg1 f2fId:(id)arg2 qrCodeId:(id)arg3 totalAmount:(unsigned int)arg4;
- (void)moneyRemindReportAction:(unsigned long long)arg1;
- (void)moneyRemindReportAction:(unsigned long long)arg1 amount:(unsigned int)arg2;
- (void)moneyRemindReportShow;
- (void)moneyRemindReportClickRight;
- (void)moneyRemindReportClickLeft;
- (void)moneyRemindReportCancelThenInputOtherAmount:(unsigned int)arg1;
- (void)moneyRemindReportCancelThenInputTheSame;
- (void)reportWithAmount:(unsigned int)arg1;
- (void)reportConfirmPageWithAmount:(unsigned int)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)nameCheckReport:(unsigned long long)arg1 payAmount:(unsigned int)arg2 scanId:(id)arg3;
- (id)kvLog19821StringWithActionType:(unsigned int)arg1;
- (id)bizF2FLogicDelagte;
- (void)setBizF2FLogicDelagte:(id)arg1;
- (id)placeOrderCgi;
- (void)setPlaceOrderCgi:(id)arg1;
- (id)payCheckCgi;
- (void)setPayCheckCgi:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)unLockFavorCgi;
- (void)setUnLockFavorCgi:(id)arg1;
- (id)paySuccessCgi;
- (void)setPaySuccessCgi:(id)arg1;
- (id)getZeroPayTokenCgi;
- (void)setGetZeroPayTokenCgi:(id)arg1;
- (id)m_zeroPayCgi;
- (void)setM_zeroPayCgi:(id)arg1;
- (id)f2fGetLotteryCgi;
- (void)setF2fGetLotteryCgi:(id)arg1;
- (id)getLotteryReponse;
- (void)setGetLotteryReponse:(id)arg1;
- (id)f2fModifyExposureCgi;
- (void)setF2fModifyExposureCgi:(id)arg1;
- (id)exposureInfoModifyResponse;
- (void)setExposureInfoModifyResponse:(id)arg1;
- (id)f2fDrawLotteryCgi;
- (void)setF2fDrawLotteryCgi:(id)arg1;
- (id)drawLotteryResponse;
- (void)setDrawLotteryResponse:(id)arg1;
- (id)prevExposureInfo;
- (void)setPrevExposureInfo:(id)arg1;
- (id)getLotteryViewController;
- (void)setGetLotteryViewController:(id)arg1;
- (id)m_zeroPayConfirmView;
- (void)setM_zeroPayConfirmView:(id)arg1;
- (id)m_fingerdata;
- (void)setM_fingerdata:(id)arg1;
- (BOOL)bHasPaySucc;
- (void)setBHasPaySucc:(BOOL)arg1;
- (BOOL)isModifyExposureInfo;
- (void)setIsModifyExposureInfo:(BOOL)arg1;
- (id)m_middlePageSubLogic;
- (void)setM_middlePageSubLogic:(id)arg1;
- (id)lastReqKeyStruct;
- (void)setLastReqKeyStruct:(id)arg1;
- (id)lastPayRequestKey;
- (void)setLastPayRequestKey:(id)arg1;
- (unsigned int)lastTotalAmount;
- (void)setLastTotalAmount:(unsigned int)arg1;
- (id)lastRemarkWording;
- (void)setLastRemarkWording:(id)arg1;
- (long long)lastUnpayReason;
- (void)setLastUnpayReason:(long long)arg1;
- (id)amountRemindPage;
- (void)setAmountRemindPage:(id)arg1;
- (int)remindReportState;
- (void)setRemindReportState:(int)arg1;
- (unsigned int)reportAmount;
- (void)setReportAmount:(unsigned int)arg1;
- (BOOL)bIsShowingCrossPlatformSuccPage;
- (void)setBIsShowingCrossPlatformSuccPage:(BOOL)arg1;
- (id)checkNameController;
- (void)setCheckNameController:(id)arg1;
- (id)hkCashierViewController;
- (void)setHkCashierViewController:(id)arg1;
- (void).cxx_destruct;
@end

