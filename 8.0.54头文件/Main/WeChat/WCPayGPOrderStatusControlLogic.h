@interface WCPayGPOrderStatusControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderStatusViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlMgrExt, WCBaseControlLogicDeleagte, MMTipsViewControllerDelegate, MMUseCaseCallback, WCPayGPLaunchControlLogicDelegate, WCPayGPMoneyInputViewControllerDelegate>
{
    BOOL _bIsLaunchSucc; // +0x38
    unsigned int _msgLocalID; // +0x3c
    unsigned int _ver; // +0x40
    id <WCPayGPOrderStatusControlLogicDelegate> _orderStatusDelegate; // +0x48
    WCPayPayMoneyLogic * _payMoneyLogic; // +0x50
    unsigned long long _currentLogicScene; // +0x58
    NSString * _curAlertRightBtnUrl; // +0x60
    NSString * _sign; // +0x68
    CContact * _launchContact; // +0x70
    unsigned long long _customizeAAPayAmount; // +0x78
}
- (void)dealloc;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 selectedMessageWrap:(id)arg5;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 withMsgLocalID:(unsigned int)arg5;
- (id)initWithJSParam:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)cancelCloseOrderFromSysMsg;
- (void)confirmCloseOrderFromSysMsg;
- (void)cancelCloseUnPayNotifyFromSysMsg;
- (void)confirmCloseUnPayNotifyFromSysMsg;
- (void)onOrderStatusViewControllerCancel;
- (void)onPayerClickPayMoneyButton:(id)arg1;
- (void)onLauncherClickSendPayNotifyMsgBtn;
- (void)onLauncherClickCloseOrderBtn;
- (void)onPayerClickCloseUnPayNotify;
- (void)startPayMoneyLogic;
- (void)startPayMoneyLogic:(BOOL)arg1;
- (void)onClickViewBalanceLink;
- (void)onClickLaunchNewGroupPayBtn;
- (void)handleCustomizeAAClickPayMoneyButton;
- (void)onWCPayGPMoneyInputViewControllerBack;
- (void)onWCPayGPMoneyInputViewControllerConfirmWithMoney:(unsigned long long)arg1 payReason:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)handleQryPaySuccFinish;
- (void)dismissAndStopLogic;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)ContinueDismissAndStopLogic;
- (void)delayStopLogic;
- (void)addAAPaySuccessSysMsg;
- (BOOL)updateC2CNewXmlMsgContentWithRespXml:(id)arg1;
- (void)activtyMoneyTextFieldIfNecessary;
- (BOOL)gotoViewController:(id)arg1;
- (void)getAAOrderDetailFromSvr;
- (void)queryAAPaySuccFromSvrWithTransId:(id)arg1;
- (void)onGetAAPaySuccResponse:(id)arg1;
- (void)onGetAAOrderDetailResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderPrePayResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCloseAAOrderResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetSendPayNotifyMsgResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAACloseUnpayNotifyResonse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)prepayAlertViewConfirmClick;
- (void)openH5WithUrl:(id)arg1;
- (void)call:(id)arg1;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)onLaunchControlLogicStop;
- (id)orderStatusDelegate;
- (void)setOrderStatusDelegate:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (unsigned long long)currentLogicScene;
- (void)setCurrentLogicScene:(unsigned long long)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (id)curAlertRightBtnUrl;
- (void)setCurAlertRightBtnUrl:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (unsigned int)ver;
- (void)setVer:(unsigned int)arg1;
- (BOOL)bIsLaunchSucc;
- (void)setBIsLaunchSucc:(BOOL)arg1;
- (id)launchContact;
- (void)setLaunchContact:(id)arg1;
- (unsigned long long)customizeAAPayAmount;
- (void)setCustomizeAAPayAmount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

