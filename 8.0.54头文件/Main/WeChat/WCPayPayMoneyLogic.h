@interface WCPayPayMoneyLogic : WCPayControlLogic <WCPayCustomModalViewDelegate, WCPayGenDigitalCertCgiDelegate, WCPayCancelPayCgiDelegate, WCPayPaidSuccessStatusViewControllerDelegate, WCPayVerifyCardNumberViewControllerDelegate, WCPayCancelPayCgiDelegate, WCPayF2FPaySucPageCgiDelegate, WCPayF2FGetLotteryCgiDelegate, MMWebViewDelegate, WCPayF2FModifyExposureCgiDelegate, WCPayGetLotteryCgiDelegate, WCPayModifyExposureCgiDelegate, WCPayF2FDrawLotteryCgiDelegate, WCPayDrawLotteryCgiDelegate, WAAppTaskMgrExt, WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayOrderDetailViewControllerDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayResetPhoneViewViewControllerDelegate, WCPayResetBindedCardInfoViewControllerDelegate, WCPayBindedCardListViewControllerDelegate, WCPayResetBalanceTelephoneViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayOverseasCarTipDelegate, WCPayBalanceSaveMoneyViewControllerDelegate, WCPayAvaliablePayCardListViewDelegate, WCPayTranferMoneyPaidSuccessViewControllerDelegate, WCPayCouponsListViewDelegate, WCPaySpecifySelectePayCardListViewDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCPayAutoDeductSettingViewControllerDelegate, LocationRetrieveDelegate>
{
    id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate; // +0x38
    WCPayOverseasCardTipView * m_overseasCardTipView; // +0x40
    WCPayAddPayCardLogic * m_oWCPayAddPayCardLogic; // +0x48
    LocationRetriever * locationReceiver; // +0x50
    BOOL m_bUsingTouchIDAuth; // +0x58
    BOOL m_bResetBalanceTeling; // +0x59
    ABTestItem * _payABTestItem; // +0x60
    BOOL m_bRetryPWD; // +0x68
    UIView * oSubView; // +0x70
    NSCache * internalCache; // +0x78
    BOOL m_bIsUploadIdBack; // +0x80
    WCPayAvaliablePayCardListView * m_avaliablePayCardView; // +0x88
    BOOL m_shouldShowConfirmViewAfterGetOrderDetail; // +0x90
    BOOL m_bResetBalanceTelingBySelectNewNumber; // +0x91
    BOOL m_hasGoneToPaidDetailView; // +0x92
    BOOL m_isOrderPaySuccessOrUncertain; // +0x93
    unsigned int m_paymoneyLogicFailReason; // +0x94
    BOOL m_bNeedPreShowOrderDetailToGetPayCardList; // +0x98
    BOOL m_bNeedForceDissmissSuccessViewNotAnimation; // +0x99
    BOOL m_bPresentSuccessViewController; // +0x9a
    BOOL m_bNotShowSuccessViewController; // +0x9b
    BOOL _paySuccess; // +0x9c
    BOOL _hasClickedBankFavGuide; // +0x9d
    BOOL _bIsCancelFromOrderConfirmView; // +0x9e
    BOOL _isModifyExposureInfo; // +0x9f
    Class m_oStartedClass; // +0xa0
    WCPayGenDigitalCertCgi * _m_genDigitalCertCgi; // +0xa8
    WCPayCancelPayCgi * _m_cancelPayCgi; // +0xb0
    MMLoadingView * _m_webViewReturnLoadingView; // +0xb8
    NSString * _m_touchFingerData; // +0xc0
    WCPaySetUserExInfoCgi * _setUserExInfoCgi; // +0xc8
    WCPayPayResponseRetryInfo * _retry_pay_info; // +0xd0
    long long _currentRetryCount; // +0xd8
    WCPayF2FPaySucPageCgi * _f2fPaySucPageCgi; // +0xe0
    CgiF2FPaySucPageResp * _f2fPaySucPageResp; // +0xe8
    WCPayF2FGetLotteryCgi * _f2fGetLotteryCgi; // +0xf0
    GetLotteryResponse * _getLotteryReponse; // +0xf8
    WCPayF2FModifyExposureCgi * _f2fModifyExposureCgi; // +0x100
    ExposureInfoModifyResponse * _exposureInfoModifyResponse; // +0x108
    WCPayGetLotteryCgi * _getLotteryCgi; // +0x110
    WCPayModifyExposureCgi * _modifyExposureCgi; // +0x118
    WCPayF2FDrawLotteryCgi * _f2fDrawLotteryCgi; // +0x120
    WCPayDrawLotteryCgi * _drawLotteryCgi; // +0x128
    DrawLotteryResponse * _drawLotteryResponse; // +0x130
    MMWebViewController * _getLotteryViewController; // +0x138
    unsigned long long _lotteryType; // +0x140
    ExposureInfo * _prevExposureInfo; // +0x148
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0x150
    WCPayFollowCardBDMchCgi * _followMchCgi; // +0x158
    WCPayCustomModalView * _m_modalView; // +0x160
}
- (id)init;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (BOOL)isLogicJumpedToSafari;
- (void)updateRetryInfo:(id)arg1;
- (BOOL)needRetryPay:(id)arg1 Error:(id)arg2;
- (void)retryAuthenAgain;
- (void)internalRetryAuthenAgain;
- (void)retryVerifyAgain;
- (void)internalRetryVerifyAgain;
- (void)retryVerifyRegAgain;
- (void)internalRetryVerifyRegAgain;
- (void)removeDesk;
- (BOOL)selectCardFromSimpleCashInfoOrBlock;
- (void)startLogic;
- (void)GetBindQueryAgain;
- (void)stopLogic;
- (void)checkStopLogic;
- (void)_checkCancelPay:(BOOL)arg1;
- (void)_cancelPay;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)webviewReturnStartLoadingBlocked;
- (void)webviewReturnStopLoading;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (void)mergeBalanceMoneyContorlOrderDetail:(id)arg1;
- (void)mergePaymentOrderDetail:(id)arg1;
- (void)mergeOrderDetail:(id)arg1;
- (void)OnAlertGiveUpBind;
- (void)showGiveUpBindAlert;
- (int)getABTestType;
- (id)getTransactionId;
- (void)OnRetryPayMoneyFromPwdError;
- (void)OnHandleSafariJumpedLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startBindCardToSafariPay:(id)arg1;
- (void)startBindCardToVerifiedUser:(id)arg1;
- (void)startBindCardToPay:(id)arg1;
- (void)showResetBindedCardInfoWithCVV:(BOOL)arg1 ValidDate:(BOOL)arg2;
- (void)preShowOrderPaySuccess;
- (void)showOrderPaySuccess;
- (id)getWCPayAuthenticationPay:(id)arg1;
- (id)getWCPayAuthenticationPayVerifySMSStruct:(id)arg1;
- (id)GetWCPaySetWCPayPasswordStruct:(id)arg1;
- (id)getVerifyBindStruct;
- (id)getWCPayAuthenticationResetBalanceTelPay:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPayVerifySMSStruct:(id)arg1;
- (BOOL)checkBankAvailable:(id)arg1;
- (BOOL)checkHandlePrepayErrorPath;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewPushWebView:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewWebViewReturn:(id)arg1;
- (void)OnWCPaySpecifySelectePayCardListViewBack;
- (void)OnWCPaySpecifySelectePayCardListViewNext:(id)arg1;
- (void)OnWCPaySpecifySelectePayCardListViewBackAddCard;
- (void)OnWCPayCouponsListViewBack;
- (void)OnWCPayCouponsListViewNext:(id)arg1;
- (BOOL)useChangeCardViewV2;
- (BOOL)needShowOverseasCardProtocalView;
- (void)onAgree:(BOOL)arg1;
- (void)onDisagree;
- (void)onPushWebView:(id)arg1;
- (void)OrderDetailAdd:(id)arg1;
- (void)OrderDetailPay:(id)arg1;
- (void)OrderDetailBack;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailAddOrderCard:(id)arg1;
- (void)orderDetailPay:(id)arg1 checkTouchID:(BOOL)arg2;
- (BOOL)onOrderPayConfirmViewShowBankFav;
- (void)onOrderPayConfirmViewSelectBankFavGuide:(id)arg1;
- (void)onOrderPayConfirmViewShowModal:(id)arg1 confirmView:(id)arg2;
- (id)onOrderPayConfirmViewDesc;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(BOOL)arg2;
- (void)onOrderPayChangeCard;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)RepeatInputPayPwd:(id)arg1;
- (void)OnBindedCardListBack;
- (void)OnBindedCardListNewCardClicked;
- (void)ONBindedCardListResetBalanceTel:(id)arg1;
- (void)ONBindedCardListResetBankTel:(id)arg1;
- (void)ONBindedCardListVCVerifyByCardNumber:(id)arg1;
- (void)verifyCardNumberVC:(id)arg1 didGetNumber:(id)arg2;
- (void)WCPayResetBalanceTelephoneViewControllerBack;
- (void)WCPayResetBalanceTelephoneViewControllerNext:(id)arg1;
- (unsigned int)FillCardNumberSource;
- (void)FillCardNumberCancel:(BOOL)arg1;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberShowedAllFavorInfo;
- (BOOL)NeedShowServiceAppInfo;
- (void)FillCardInfoCancel;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoReadAgreement;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardModifyPhone:(id)arg1;
- (void)OnResetPhoneCancel;
- (void)OnResetPhoneNext:(id)arg1;
- (void)OnResetBindedCardInfoCancel;
- (void)OnResetBindedCardInfoNext:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerShowOpenTouchIDConfirmViewIfNeed;
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(id)arg1 stateBefore:(unsigned int)arg2 stateAfter:(unsigned int)arg3;
- (void)showOpenTouchIDConfirmIfNeed;
- (void)onOpenTouchIDAuth;
- (void)onCancelOpenTouchIDAuth;
- (void)WCPayBalanceSaveMoneyViewControllerBack;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerBack:(BOOL)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerViewDidAppear;
- (void)WCPayTranferMoneyPaidSuccessViewControllerReturnWithoutDrawLottery;
- (void)WCPayTranferMoneyPaidSuccessViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnF2FDrawLotteryRepsonseOK:(id)arg1;
- (void)OnF2FDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnDrawLotteryRepsonseOK:(id)arg1;
- (void)OnDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)WCPayTranferMoneyPaidSuccessViewControllerViewClickLotteryBtn:(id)arg1;
- (void)OnF2FModifyExposureRepsonseOK:(id)arg1;
- (void)OnF2FModifyExposureRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnModifyExposureRepsonseOK:(id)arg1;
- (void)OnModifyExposureRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetF2FGetLotteryRepsonseOK:(id)arg1;
- (void)OnGetF2FGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetLotteryRepsonseOK:(id)arg1;
- (void)OnGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnPayMoneyPayRetry;
- (void)onTouhcAuthConfirmAlertCancel:(id)arg1;
- (void)onTouhcAuthConfirmAlertOK:(id)arg1;
- (void)showTouchIDAuthView:(id)arg1;
- (void)performTouchID;
- (void)disabelTouchIDAuthForCurrentOrder;
- (void)showSafariWithData:(id)arg1;
- (void)showConfirmTouchIDOrConfirmViewWithData:(id)arg1;
- (void)internalShowConfirmTouchIDOrConfirmViewWithData:(id)arg1;
- (void)onActionSheetUsingPwdAuth;
- (void)onActionSheetChangingOtherCards;
- (void)onActionSheetCancelTouchId;
- (void)onActionSheetEndPay;
- (id)favDesc:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnGetOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)onContinueGetOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnContinueGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnPayNeedToSwitchToPasswordPay;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3 forgetPwdUrl:(id)arg4;
- (void)handlePasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnSetWCPayPasswordInPay:(id)arg1 Error:(id)arg2;
- (void)OnGetOrderDetailInfoAfterPaidError:(id)arg1 Error:(id)arg2;
- (id)getRetryQueryOrderCacheKey:(id)arg1;
- (id)getPayQueryOrderParams;
- (id)qrcodeUseQueryOrderInfoDefaultErrorWithErrorCode:(unsigned int)arg1;
- (unsigned int)qrcodeUseQueryOrderInfoDelayTime;
- (unsigned int)qrcodeUseQueryOrderInfoMaxCount;
- (void)OnQueryOrderNoRetryWhenPaidErrorWithErrorCode:(unsigned int)arg1;
- (void)OnAuthenCgiNetError:(id)arg1;
- (void)OnVerifyCgiNetError:(id)arg1;
- (void)OnVerifyRegCgiNetError:(id)arg1;
- (void)OnPayCgiErrorWithErrorCode:(unsigned int)arg1;
- (void)OnPayCgiErrorWithError:(id)arg1;
- (void)NoRetryGetOrderDetailInfoAfterPaidError:(id)arg1;
- (void)RetryGetOrderDetailInfoAfterPaidError:(id)arg1;
- (void)StartPayOrderQuery;
- (void)OnAuthenticationPayVerifyBind:(id)arg1;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)onAlertResetCVV;
- (void)onAlertResetValidDate;
- (void)OnAlertResetPhoneNumber;
- (void)onAlertResetCVVAndValidDate;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnValidError:(id)arg1;
- (void)OnNewCardToPay;
- (void)OnSelectOtherCardToPay;
- (BOOL)isSupportChangeCardPay;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAuthenticationResetBalanceTelPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)gotoRootViewControllerIfNotInDetailView:(BOOL)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnFooterButtonClick:(id)arg1;
- (void)OnAutoDeductSettingCancel;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnUploadIdSuccess:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)OnResetPasswordCancel:(id)arg1;
- (BOOL)checkRealNameBlockWithData:(id)arg1;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)onGetWCPayCancelPayCgiResp:(id)arg1;
- (void)stopPaymoneyLogicAfterAuthenError;
- (void)reportOfflinePayTimeUsingEvent:(int)arg1;
- (BOOL)beforePayBlockShowAlertWith:(id)arg1;
- (void)onBeforePayBlockConfirm:(id)arg1;
- (void)onBeforePayRemindCancelPay:(id)arg1;
- (void)onBeforePayRemindContinuePay:(id)arg1;
- (id)getSelectedBindCardInfo;
- (void)OnGetF2FPaySucPageResonseOK:(id)arg1;
- (void)OnGetF2FPaySucPageResonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)onWCPayCustomModalViewDidCancel:(id)arg1;
- (id)m_payMoneyLogicDelegate;
- (void)setM_payMoneyLogicDelegate:(id)arg1;
- (BOOL)m_bNeedPreShowOrderDetailToGetPayCardList;
- (void)setM_bNeedPreShowOrderDetailToGetPayCardList:(BOOL)arg1;
- (BOOL)m_bNeedForceDissmissSuccessViewNotAnimation;
- (void)setM_bNeedForceDissmissSuccessViewNotAnimation:(BOOL)arg1;
- (BOOL)m_bPresentSuccessViewController;
- (void)setM_bPresentSuccessViewController:(BOOL)arg1;
- (BOOL)m_bNotShowSuccessViewController;
- (void)setM_bNotShowSuccessViewController:(BOOL)arg1;
- (Class)m_oStartedClass;
- (void)setM_oStartedClass:(Class)arg1;
- (BOOL)paySuccess;
- (void)setPaySuccess:(BOOL)arg1;
- (BOOL)hasClickedBankFavGuide;
- (void)setHasClickedBankFavGuide:(BOOL)arg1;
- (id)m_genDigitalCertCgi;
- (void)setM_genDigitalCertCgi:(id)arg1;
- (BOOL)bIsCancelFromOrderConfirmView;
- (void)setBIsCancelFromOrderConfirmView:(BOOL)arg1;
- (id)m_cancelPayCgi;
- (void)setM_cancelPayCgi:(id)arg1;
- (id)m_webViewReturnLoadingView;
- (void)setM_webViewReturnLoadingView:(id)arg1;
- (id)m_touchFingerData;
- (void)setM_touchFingerData:(id)arg1;
- (id)setUserExInfoCgi;
- (void)setSetUserExInfoCgi:(id)arg1;
- (id)retry_pay_info;
- (void)setRetry_pay_info:(id)arg1;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:(long long)arg1;
- (id)f2fPaySucPageCgi;
- (void)setF2fPaySucPageCgi:(id)arg1;
- (id)f2fPaySucPageResp;
- (void)setF2fPaySucPageResp:(id)arg1;
- (id)f2fGetLotteryCgi;
- (void)setF2fGetLotteryCgi:(id)arg1;
- (id)getLotteryReponse;
- (void)setGetLotteryReponse:(id)arg1;
- (id)f2fModifyExposureCgi;
- (void)setF2fModifyExposureCgi:(id)arg1;
- (id)exposureInfoModifyResponse;
- (void)setExposureInfoModifyResponse:(id)arg1;
- (id)getLotteryCgi;
- (void)setGetLotteryCgi:(id)arg1;
- (id)modifyExposureCgi;
- (void)setModifyExposureCgi:(id)arg1;
- (id)f2fDrawLotteryCgi;
- (void)setF2fDrawLotteryCgi:(id)arg1;
- (id)drawLotteryCgi;
- (void)setDrawLotteryCgi:(id)arg1;
- (id)drawLotteryResponse;
- (void)setDrawLotteryResponse:(id)arg1;
- (id)getLotteryViewController;
- (void)setGetLotteryViewController:(id)arg1;
- (BOOL)isModifyExposureInfo;
- (void)setIsModifyExposureInfo:(BOOL)arg1;
- (unsigned long long)lotteryType;
- (void)setLotteryType:(unsigned long long)arg1;
- (id)prevExposureInfo;
- (void)setPrevExposureInfo:(id)arg1;
- (id)jumpRemindControlLogic;
- (void)setJumpRemindControlLogic:(id)arg1;
- (id)followMchCgi;
- (void)setFollowMchCgi:(id)arg1;
- (id)m_modalView;
- (void)setM_modalView:(id)arg1;
- (void).cxx_destruct;
@end

