@interface WCPayOfflinePayMainLogic : WCPayControlLogic <WCPayTransferPhoneLogicDelegate, MMWebViewDelegate, WCPayAddPayCardDelegate, WCPayGPWalletLaunchControlLogicDelegate, WCPayOpenECardControlLogicExt, WCPayT2BCTransferControlLogicDelegate, WCPayDrawLotteryCgiDelegate, WCPayGetLotteryCgiDelegate, WCPayModifyExposureCgiDelegate, MMWebViewDelegate, WAAppTaskMgrExt, WCPayOfflineAckMsgCgiDelegate, WCPayOfflineCancelPayCgiDelegate, MMUseCaseCallback, WCPayOfflineSetPaymentCgiDelegate, WCPayOfflineEnableCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayOfflinePayViewControllerDelegate, WCPayOrderDetailHistoryViewControllerDelegate, WCBaseControlMgrExt, WCPayOfflinePayConfirmViewDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayOfflineGetMsgCgiDelegate>
{
    int m_uiLocationTag; // +0x38
    NSMutableArray * m_arrConfirmedOfflinePayID; // +0x40
    WCPayOfflinePayConfirmView * confirmView; // +0x48
    WCPayRealnameGuideInfo * m_realNameInfo; // +0x50
    BOOL _isPullingOfflineMsg; // +0x58
    BOOL _isOfflineGetMsgStarted; // +0x59
    BOOL _isModifyExposureInfo; // +0x5a
    BOOL _isLogicCancelByControlMgr; // +0x5b
    BOOL _isPayMoneyLogicInProgress; // +0x5c
    BOOL _handingNotifyResult; // +0x5d
    BOOL _bShouldShowSelectedCardView; // +0x5e
    BOOL _bFQFIsDefaultCard; // +0x5f
    BOOL _bShowCardSwitchGuideBar; // +0x60
    BOOL _bIsSilientSetPayment; // +0x61
    id <WCPayOfflineLogicDelegate> _logicDelegate; // +0x68
    WCPayPayMoneyLogic * _payMoneyLogic; // +0x70
    WCPayOfflineGetMsgCgi * _offlineGetMsgCgi; // +0x78
    WCPayOfflineAckMsgCgi * _offlineAckMsgCgi; // +0x80
    WCPayOfflineCancelPayCgi * _offlineCancelPayCgi; // +0x88
    GetLotteryResponse * _getLotteryReponse; // +0x90
    ExposureInfoModifyResponse * _exposureInfoModifyResponse; // +0x98
    WCPayGetLotteryCgi * _getLotteryCgi; // +0xa0
    WCPayModifyExposureCgi * _modifyExposureCgi; // +0xa8
    WCPayDrawLotteryCgi * _drawLotteryCgi; // +0xb0
    DrawLotteryResponse * _drawLotteryResponse; // +0xb8
    MMWebViewController * _getLotteryViewController; // +0xc0
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0xc8
    WCPayFollowCardBDMchCgi * _followMchCgi; // +0xd0
    WCPayOfflinePayGuideBar * _guideBarData; // +0xd8
    WCPayOfflinePayBlockLayer * _bloackLayerData; // +0xe0
    WCPayOfflinePayDisableBlockLayer * _disableBlockLayerData; // +0xe8
    NSString * _jsOpenBindSerail; // +0xf0
    WCPayOfflineSetPaymentCgi * _v2AuthCodeSetPaymentCgi; // +0xf8
    WCPayOfflineEnableCgi * _offlineEnableCgi; // +0x100
}
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)startLogic;
- (void)stopLogic;
- (void)playVibration;
- (void)clearVibration;
- (void)OnOfflinePayCancelPosNotification:(id)arg1;
- (void)OnOfflinePayCancelPayNotification:(id)arg1;
- (void)OnChangedLimitBtnDonw:(id)arg1;
- (void)OnAddCardBtnDonw:(id)arg1;
- (void)OnAddCardAlertCancel;
- (void)OnCancelReCreateOfflinePay;
- (void)tryExitCodeViewFullScreen;
- (void)refreshOfflinePayViewController;
- (void)OnWCPayOfflinePayViewControllerBack;
- (void)OnWCPayOfflinePayViewControllerCreateOfflinePay;
- (void)OnWCPayOfflinePayViewControllerChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerQuickChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerUnfreezeBtnDown;
- (void)OnWCPayOfflinePayViewControllerAddNewCardBtnPress;
- (void)OnWCpayOfflinePayViewControllerClickReceiveMoneyBtn;
- (void)ReceiveClickLogic;
- (void)stopOfflinePayLogicWithoutAnimation;
- (void)onWCPayOfflinePayViewControllerClickGroupPayBtn;
- (void)OnWCPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)OnWCPayOfflinePayNoCodeTipsViewEnableRefreshBtnAfterClick;
- (void)StartOfflineGetMsg;
- (void)StopOfflineGetMsg;
- (void)insideCallOfflineGetMsg;
- (void)insideCallReportCurrentOfflinePayMsgFromPull;
- (void)insideCallReportCurrentRecevieOfflineNewXmlMsg;
- (void)onWCpayOfflinePayViewControllerClickF2fHongBaoBtn;
- (void)OnWCPayOfflinePayViewControllerClickTransToMixBtn;
- (void)OnWCPayOfflinePayViewControllerClickTransToBankCardBtn;
- (void)OnContinueClickTransToBank;
- (void)onWCPayOfflinePayViewControllerClickQRCodeRewardBtn;
- (void)qrcodeRewardClickLogic;
- (BOOL)isPayMoneyLogicInProgress;
- (void)OnWCPayOfflinePayViewControllerNeedFreshCardListData:(BOOL)arg1 extraInfo:(id)arg2;
- (id)getOfflineGuideBarData;
- (void)removeOfflineGuideBarData;
- (id)getOfflineBloackLayerData;
- (void)removeOfflineBlockLayerData;
- (id)getOfflineDisableBlockLayerData;
- (void)removeOfflineDisableBloackLayerData;
- (id)getOfflinePreferCardChangeWording;
- (void)removeOfflinePreferCardChangeWording;
- (BOOL)isV2AuthCodeSettingPayment;
- (void)setV2AuthCodePayment:(id)arg1 loading:(BOOL)arg2;
- (void)onGetOfflineSetPaymentCgiResp:(id)arg1 request:(id)arg2;
- (id)getOfflineEnablePageData;
- (void)onEnableTipsViewClickVerifyBtn;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onGetOfflineEnableCgiResp:(id)arg1;
- (void)retryPwdInput;
- (void)OnHistoryOrderDetailBack:(BOOL)arg1;
- (void)OnHistoryOrderDetailRightActionBack:(BOOL)arg1;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)onOfflinePayConfirmViewPay:(id)arg1 passwd:(id)arg2 routeInfo:(unsigned char)arg3;
- (void)onOfflinePayConfirmViewCancel:(id)arg1 routeInfo:(unsigned char)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)handlePayResult:(BOOL)arg1;
- (void)onAddPayCardResult:(BOOL)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnOfflinePayCerticationOuttimeError:(id)arg1;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(BOOL)arg2 Error:(id)arg3;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onContinueGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (id)genRealNameGuideInfoFromDic:(id)arg1;
- (void)OnConfirmOfflinePayResponse:(id)arg1 transID:(id)arg2 Error:(id)arg3;
- (void)OnLimitInsufficientError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnAddCardError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnGetOfflinePayNewXmlMsgAndSendAckMsgWithAckKey:(id)arg1 reqKey:(id)arg2 payMsgType:(int)arg3 transId:(id)arg4;
- (void)onNotifyOfflinePayViewControllerNeedRefresh;
- (void)OnOfflinePayTokenUpdateFail;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)OnNotifyFreezeOfflinePay:(id)arg1 Error:(id)arg2;
- (void)onNotifyOfflinePayRealNameBlock:(id)arg1 Error:(id)arg2;
- (void)onNotifyOfflinePayRealNameGuide:(id)arg1;
- (void)OnNotifyResutltOfOfflinePay:(id)arg1 Error:(id)arg2 UpdateCode:(BOOL)arg3;
- (void)OnNotifyOfflinePaySuccess:(id)arg1 RealNameInfo:(id)arg2 ReqKey:(id)arg3 Error:(id)arg4;
- (void)OnNotifyOfflinePayConfirm:(id)arg1 ReqKey:(id)arg2;
- (void)OnNotifyOfflinePayConfirmWithReqkey:(id)arg1;
- (void)OnNotifyOfflinePayUserPaying:(id)arg1;
- (void)OnEnterForeground;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerClearGuideInfo;
- (id)OnWCPayPaidOrderDetailViewControllerRequestGuideInfo;
- (void)reportReceiveSuccessData:(id)arg1;
- (void)onWCPayPaidOrderDetailViewControllerlClickFavMchWithParam:(id)arg1 stateBefore:(unsigned int)arg2 stateAfter:(unsigned int)arg3;
- (void)webViewReturn:(id)arg1;
- (void)startPayMoneyLogic:(id)arg1;
- (void)call:(id)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)onGroupPayWalletLaunchFinish;
- (void)wcpayOfflineGetMsgCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)wcpayOfflineGetMsgCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnWCPayT2BCTransferControlLogicFinish;
- (void)OnWCPayPaidOrderDetailViewControllerStartDrawLottery:(unsigned int)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerReturnWithoutDrawLottery;
- (void)OnDrawLotteryRepsonseOK:(id)arg1;
- (void)OnDrawLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayPaidOrderDetailViewControllerClickLotteryBtn:(id)arg1;
- (void)OnGetLotteryRepsonseOK:(id)arg1;
- (void)OnGetLotteryRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)OnModifyExposureRepsonseOK:(id)arg1;
- (void)OnModifyExposureRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onGetWCPayOfflineAckMsgCgiResponse:(id)arg1;
- (void)onGetOfflineCancelPayMsgCgiResponse:(id)arg1;
- (void)updateOfflineCodeFromShareCardData:(id)arg1;
- (void)checkStopLogic;
- (void)onNotifyResultProcessFinished;
- (void)onWCPayTransferPhoneLogicFinish;
- (void)handleRequestOfflineUserBindqueryJSAPICallWithParam:(id)arg1;
- (void)refreshViewControllerAndCallBackJSWithRet:(BOOL)arg1;
- (void)handleFQFDataReportAfterBindquery;
- (void)handleFQFDataReportWhenPaying;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)offlineGetMsgCgi;
- (void)setOfflineGetMsgCgi:(id)arg1;
- (BOOL)isPullingOfflineMsg;
- (void)setIsPullingOfflineMsg:(BOOL)arg1;
- (BOOL)isOfflineGetMsgStarted;
- (void)setIsOfflineGetMsgStarted:(BOOL)arg1;
- (id)offlineAckMsgCgi;
- (void)setOfflineAckMsgCgi:(id)arg1;
- (id)offlineCancelPayCgi;
- (void)setOfflineCancelPayCgi:(id)arg1;
- (id)getLotteryReponse;
- (void)setGetLotteryReponse:(id)arg1;
- (id)exposureInfoModifyResponse;
- (void)setExposureInfoModifyResponse:(id)arg1;
- (id)getLotteryCgi;
- (void)setGetLotteryCgi:(id)arg1;
- (id)modifyExposureCgi;
- (void)setModifyExposureCgi:(id)arg1;
- (id)drawLotteryCgi;
- (void)setDrawLotteryCgi:(id)arg1;
- (id)drawLotteryResponse;
- (void)setDrawLotteryResponse:(id)arg1;
- (id)getLotteryViewController;
- (void)setGetLotteryViewController:(id)arg1;
- (BOOL)isModifyExposureInfo;
- (void)setIsModifyExposureInfo:(BOOL)arg1;
- (BOOL)isLogicCancelByControlMgr;
- (void)setIsLogicCancelByControlMgr:(BOOL)arg1;
- (void)setIsPayMoneyLogicInProgress:(BOOL)arg1;
- (BOOL)handingNotifyResult;
- (void)setHandingNotifyResult:(BOOL)arg1;
- (id)jumpRemindControlLogic;
- (void)setJumpRemindControlLogic:(id)arg1;
- (id)followMchCgi;
- (void)setFollowMchCgi:(id)arg1;
- (BOOL)bShouldShowSelectedCardView;
- (void)setBShouldShowSelectedCardView:(BOOL)arg1;
- (id)guideBarData;
- (void)setGuideBarData:(id)arg1;
- (id)bloackLayerData;
- (void)setBloackLayerData:(id)arg1;
- (id)disableBlockLayerData;
- (void)setDisableBlockLayerData:(id)arg1;
- (id)jsOpenBindSerail;
- (void)setJsOpenBindSerail:(id)arg1;
- (BOOL)bFQFIsDefaultCard;
- (void)setBFQFIsDefaultCard:(BOOL)arg1;
- (BOOL)bShowCardSwitchGuideBar;
- (void)setBShowCardSwitchGuideBar:(BOOL)arg1;
- (id)v2AuthCodeSetPaymentCgi;
- (void)setV2AuthCodeSetPaymentCgi:(id)arg1;
- (id)offlineEnableCgi;
- (void)setOfflineEnableCgi:(id)arg1;
- (BOOL)bIsSilientSetPayment;
- (void)setBIsSilientSetPayment:(BOOL)arg1;
- (void).cxx_destruct;
@end
