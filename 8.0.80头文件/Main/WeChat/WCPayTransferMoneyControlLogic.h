@interface WCPayTransferMoneyControlLogic : WCPayControlLogic <WCPaySubLogicDelegate, WCPayF2FMiddleViewControllerDelegate, WCPayF2FPayCheckCgiDelegate, WCPayBizF2FTransferControlLogicDelegate, WCPayTransferPayCheckCgiDelegate, WCPayUnionTransferPlaceOrderCgiDelegate, WCPayUnionTransferPayCheckCgiDelegate, UITextFieldDelegate, MMUseCaseCallback, WCPaySelectChatroomMemberViewControllerDelegate, WCPayBizF2FConfirmViewControllerDelegate, WCPayTipsPageSheetDelegate, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayTransferMoneyViewControllerDelegate, WCBaseControlMgrExt, IStrangerContactMgrExt, MMTipsViewControllerDelegate>
{
    WCPayPayMoneyLogic * m_payLogic; // +0x38
    int m_enWCPayTransferMoneyControlLogicScene; // +0x40
    NSString * m_nsA8KeyResponseUrl; // +0x48
    JSEvent * m_jsEvent; // +0x50
    BOOL m_isNeedKindaCashierLoading; // +0x58
    BOOL _disableEditMoney; // +0x59
    BOOL _stopFromBizF2FLogic; // +0x5a
    BOOL _isNeedCheckName; // +0x5b
    BOOL _isNeedReturnToSession; // +0x5c
    BOOL _hasPaySuccess; // +0x5d
    BOOL _bIsOpenIM; // +0x5e
    BOOL _needReportScreenShotPage; // +0x5f
    BOOL _needSkipCancelPay; // +0x60
    BOOL _hasTryHkpay; // +0x61
    unsigned int _doubleCheckAmount; // +0x64
    unsigned int _m_dynamicCodeSource; // +0x68
    NSString * _curAlertRightUrl; // +0x70
    WCPayF2FPayCheckCgi * _f2fPayCheckCgi; // +0x78
    WCPayBizF2FTransferControlLogic * _bizF2FTransferLogic; // +0x80
    WCPayTransferPayCheckCgi * _transferPayCheckCgi; // +0x88
    NSString * _doubleCheckWording; // +0x90
    NSString * _interruptDesc; // +0x98
    WCPayF2FMiddlePageSubLogic * _m_middlePageSubLogic; // +0xa0
    MMTipsViewController * _checkNameTipsView; // +0xa8
    MMTipsViewController * _checkNameErrorTipsView; // +0xb0
    NSString * _checkUserNameStr; // +0xb8
    WCPayTransferPrepayResponseStruct * _lastReqKeyStruct; // +0xc0
    NSString * _lastPayRequestRemark; // +0xc8
    NSString * _lastPayRequestKey; // +0xd0
    unsigned long long _lastPayRequestAmountInCent; // +0xd8
    NSString * _lastPayRequestAddress; // +0xe0
    NSString * _lastPayRequestAddressName; // +0xe8
    NSString * _lastPayRequestPhone; // +0xf0
    long long _lastUnpayReason; // +0xf8
    NSString * _lastPlaceorderAttach; // +0x100
    WCPayTransferAmountReInputPageStruct * _lastAmountReinputPage; // +0x108
    NSString * _zaituMsgWording; // +0x110
    NSString * _zaituMsgBtnTitle; // +0x118
    NSString * _zaituMsgOpenUrl; // +0x120
    NSString * _zaituTipsLeftButtonTitle; // +0x128
    NSString * _zaituTipsRightButtonTitle; // +0x130
    WCPayTipsPageSheet * _zaituPageSheet; // +0x138
    WCPayUnionTransferPlaceOrderCgi * _unionPlaceOrderCgi; // +0x140
    WCPayUnionTransferPayCheckCgi * _unionPayCheckCgi; // +0x148
    CgiUnionTransferPlaceOrderResp * _unionLastOrderResp; // +0x150
    WCPayInterceptWinLogic * _interceptWinLogic; // +0x158
    long long _transferPrepayRequestErrorCode; // +0x160
    WCPayTransferMoneyWebViewDelegateObject * _martialWebviewDelegateObject; // +0x168
    GetUrlInfoReqSession * _scanCodeSessionInfo; // +0x170
    WCPayPlaceOrderPopupTip * _currentPlaceOrderPopupTip; // +0x178
    NSString * _currentPlaceOrderPopupTransferId; // +0x180
}
- (long long)getLastUnpayReason;
- (id)initWithData:(id)arg1 a8KeyResponseUrl:(id)arg2;
- (id)initWithData:(id)arg1 a8KeyResponseUrl:(id)arg2 scanCodeSessionInfo:(id)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 disableEditMoney:(BOOL)arg2;
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)updateOpenIM;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)dealloc;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)OnContinueTransfer;
- (id)getTransferDisplayNameWithTrueName;
- (void)launchCashierLogic;
- (void)OnOpenOrderList;
- (BOOL)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)WCPayTransferMoneyViewControllerCancel:(BOOL)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(BOOL)arg1;
- (void)GetTransferPrepayRequest:(id)arg1 isSencondRequest:(BOOL)arg2;
- (void)GetTransferPrepayRequest:(id)arg1 isSencondRequest:(BOOL)arg2 placeOrderAttatch:(id)arg3;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)WCPayTransferMoneyViewControllerDoScreenShot;
- (BOOL)WCPayTransferMoneyCurrentLogicIsTop;
- (id)getTransferChatContact;
- (id)getTransferMoneyViewControllerContactDisplayName;
- (id)getTransferMoneyViewControllerContactWeixinAlias;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)delayStopLoading;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)showZaituTipsPageSheetWithUnArriveMoney:(unsigned int)arg1;
- (void)onTipsPageSheetClickCancel;
- (void)onTipsPageSheetClickBottomButton:(id)arg1;
- (void)interuptCancel:(id)arg1;
- (void)interruptContinue:(id)arg1;
- (void)continueTransferWithPlaceOrderPopupCheck;
- (void)kindaContinueUnionTransfer;
- (void)kindaContinueTransfer;
- (BOOL)tryOpenPlaceOrderPopupLiteApp:(id)arg1 transferId:(id)arg2;
- (void)showCheckRealNameTipsView;
- (void)cutString:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)handleGotoViewControllerAfterGetTransferContactSucc;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)showTransferChargeTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)prepayAlertViewConfirmClick;
- (void)onGetF2FPayCheckCgiResp:(id)arg1;
- (void)onPayMoneyLogicSuccess;
- (void)onPayMoneyLogicDidStop;
- (void)onBizF2FTransferControlLogicStop;
- (void)onGetTransferPayCheckResp:(id)arg1;
- (void)onWCPayUnionTransferPlaceOrderCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferPlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferPayCheckCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferPayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)showTransferDoubleCheckTipsView:(id)arg1 transferAmount:(unsigned int)arg2;
- (void)clickContinueInUnarriveMoneyAlert;
- (void)resignFeeTextFieldFirstResponderWithCompletion:(id /* block */)arg1;
- (void)onWCPayF2FMiddleViewControllerBack;
- (void)onWCPayF2FMiddleViewControllerClickTransfer:(unsigned int)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)call:(id)arg1;
- (void)showTransferMoenyViewControllerFloatBtn;
- (void)ActiveTransferMoenyViewControllerTextField;
- (id)interceptWinLogic;
- (id)getViewControllerTitle;
- (void)onSelectMemberViewControllerBack;
- (id)getChatroomContact;
- (id)getSameNicknameTips;
- (void)willSelectContact:(id)arg1;
- (void)onSelectedContact:(id)arg1;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (id)curAlertRightUrl;
- (void)setCurAlertRightUrl:(id)arg1;
- (id)f2fPayCheckCgi;
- (void)setF2fPayCheckCgi:(id)arg1;
- (id)bizF2FTransferLogic;
- (void)setBizF2FTransferLogic:(id)arg1;
- (BOOL)stopFromBizF2FLogic;
- (void)setStopFromBizF2FLogic:(BOOL)arg1;
- (id)transferPayCheckCgi;
- (void)setTransferPayCheckCgi:(id)arg1;
- (BOOL)isNeedCheckName;
- (void)setIsNeedCheckName:(BOOL)arg1;
- (id)doubleCheckWording;
- (void)setDoubleCheckWording:(id)arg1;
- (unsigned int)doubleCheckAmount;
- (void)setDoubleCheckAmount:(unsigned int)arg1;
- (id)interruptDesc;
- (void)setInterruptDesc:(id)arg1;
- (id)m_middlePageSubLogic;
- (void)setM_middlePageSubLogic:(id)arg1;
- (unsigned int)m_dynamicCodeSource;
- (void)setM_dynamicCodeSource:(unsigned int)arg1;
- (id)checkNameTipsView;
- (void)setCheckNameTipsView:(id)arg1;
- (id)checkNameErrorTipsView;
- (void)setCheckNameErrorTipsView:(id)arg1;
- (id)checkUserNameStr;
- (void)setCheckUserNameStr:(id)arg1;
- (id)lastReqKeyStruct;
- (void)setLastReqKeyStruct:(id)arg1;
- (id)lastPayRequestRemark;
- (void)setLastPayRequestRemark:(id)arg1;
- (id)lastPayRequestKey;
- (void)setLastPayRequestKey:(id)arg1;
- (unsigned long long)lastPayRequestAmountInCent;
- (void)setLastPayRequestAmountInCent:(unsigned long long)arg1;
- (id)lastPayRequestAddress;
- (void)setLastPayRequestAddress:(id)arg1;
- (id)lastPayRequestAddressName;
- (void)setLastPayRequestAddressName:(id)arg1;
- (id)lastPayRequestPhone;
- (void)setLastPayRequestPhone:(id)arg1;
- (long long)lastUnpayReason;
- (void)setLastUnpayReason:(long long)arg1;
- (id)lastPlaceorderAttach;
- (void)setLastPlaceorderAttach:(id)arg1;
- (id)lastAmountReinputPage;
- (void)setLastAmountReinputPage:(id)arg1;
- (BOOL)isNeedReturnToSession;
- (void)setIsNeedReturnToSession:(BOOL)arg1;
- (id)zaituMsgWording;
- (void)setZaituMsgWording:(id)arg1;
- (id)zaituMsgBtnTitle;
- (void)setZaituMsgBtnTitle:(id)arg1;
- (id)zaituMsgOpenUrl;
- (void)setZaituMsgOpenUrl:(id)arg1;
- (BOOL)hasPaySuccess;
- (void)setHasPaySuccess:(BOOL)arg1;
- (id)zaituTipsLeftButtonTitle;
- (void)setZaituTipsLeftButtonTitle:(id)arg1;
- (id)zaituTipsRightButtonTitle;
- (void)setZaituTipsRightButtonTitle:(id)arg1;
- (id)zaituPageSheet;
- (void)setZaituPageSheet:(id)arg1;
- (BOOL)bIsOpenIM;
- (void)setBIsOpenIM:(BOOL)arg1;
- (id)unionPlaceOrderCgi;
- (void)setUnionPlaceOrderCgi:(id)arg1;
- (id)unionPayCheckCgi;
- (void)setUnionPayCheckCgi:(id)arg1;
- (id)unionLastOrderResp;
- (void)setUnionLastOrderResp:(id)arg1;
- (void)setInterceptWinLogic:(id)arg1;
- (BOOL)needReportScreenShotPage;
- (void)setNeedReportScreenShotPage:(BOOL)arg1;
- (long long)transferPrepayRequestErrorCode;
- (void)setTransferPrepayRequestErrorCode:(long long)arg1;
- (id)martialWebviewDelegateObject;
- (void)setMartialWebviewDelegateObject:(id)arg1;
- (id)scanCodeSessionInfo;
- (void)setScanCodeSessionInfo:(id)arg1;
- (BOOL)needSkipCancelPay;
- (void)setNeedSkipCancelPay:(BOOL)arg1;
- (BOOL)hasTryHkpay;
- (void)setHasTryHkpay:(BOOL)arg1;
- (id)currentPlaceOrderPopupTip;
- (void)setCurrentPlaceOrderPopupTip:(id)arg1;
- (id)currentPlaceOrderPopupTransferId;
- (void)setCurrentPlaceOrderPopupTransferId:(id)arg1;
- (void).cxx_destruct;
@end
