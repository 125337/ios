@interface WCPayTransferPhoneLogic : WCPayControlLogic <MMUseCaseCallback, WCPayTransferPhoneWelcomePageDelegate, WCPayT2BCTransferControlLogicDelegate, WCPayPwdViewControllerDelegate, WCPayTransferPhoneEntryPageDelegate, WCPayTransferPhoneHistoryPageDelegate, WCPayPayMoneyLogicDelegate, WCPayTransferPhoneMainPageDelegate, WCPayTransferPhoneHomePageDelegate, WCPayTransferPhoneHomePageCgiDelegate, WCPayTransferPhoneGetHisRcvrsCgiDelegate, WCPayTransferPhoneDelHisRcvrCgiDelegate, WCPayTransferPhoneGetRcvrCgiDelegate, WCPayTransferPhoneCheckNameCgiDelegate, WCPayTransferPhonePlaceOrderCgiDelegate, WCPayTransferPhonePayCheckCgiDelegate, WCPayTransferPhoneSuccPageCgiDelegate, WCPayNumberTipsModalDelegate, WCPayTransferPhoneProtocalHalfPageDelegate>
{
    BOOL _bIsCheckNameFromPlaceOrder; // +0x38
    int _forceCheckNameStatus; // +0x3c
    int _scene; // +0x40
    id <WCPayTransferPhoneLogicDelegate> _m_delegate; // +0x48
    WCPayTransferPhoneHomePageCgi * _homePageCgi; // +0x50
    WCPayTransferPhoneGetHisRcvrsCgi * _getHisRcvrsCgi; // +0x58
    WCPayTransferPhoneDelHisRcvrCgi * _delHisRcvrsCgi; // +0x60
    WCPayTransferPhoneGetRcvrCgi * _getRcvrCgi; // +0x68
    WCPayTransferPhoneCheckNameCgi * _checkNameCgi; // +0x70
    WCPayTransferPhonePlaceOrderCgi * _placeOrderCgi; // +0x78
    WCPayTransferPhonePayCheckCgi * _payCheckCgi; // +0x80
    WCPayTransferPhoneSuccPageCgi * _succPageCgi; // +0x88
    TransferPhoneGetRcvrReq * _getRcvrReq; // +0x90
    TransferPhoneCheckNameReq * _checkNameReq; // +0x98
    TransferPhonePlaceOrderReq * _placeOrderReq; // +0xa0
    TransferPhoneDelHisRcvrReq * _delHisRcvrReq; // +0xa8
    TransferPhoneHomePageResp * _homePageResp; // +0xb0
    TransferPhoneGetRcvrResp * _getRcvrResp; // +0xb8
    TransferPhoneGetHisRcvrsResp * _hisRcvrsResp; // +0xc0
    TransferPhoneCheckNameResp * _checkNameResp; // +0xc8
    TransferPhonePlaceOrderResp * _placeOrderResp; // +0xd0
    TransferPhoneSuccPageResp * _succPageResp; // +0xd8
    WCPayPayMoneyLogic * _payMoneyLogic; // +0xe0
    MMTipsViewController * _checkNameController; // +0xe8
    NSString * _replaceOrderToken; // +0xf0
    NSString * _realnameToken; // +0xf8
    NSString * _m_enterMobileNumber; // +0x100
    NSString * _pastedBankCardOrMobileNumer; // +0x108
}
- (void)updateDelegate:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (BOOL)isBankCardNumber:(id)arg1;
- (BOOL)isMobileNumber:(id)arg1;
- (id)processBankCardNumber:(id)arg1;
- (void)onWCPayTransferPhoneHomePageCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneHomePageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneDelHisRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneDelHisRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetRcvrCgiRcvidInvaild:(id)arg1;
- (void)onWCPayTransferPhoneGetRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneCheckNameCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneCheckNameCgiResp:(id)arg1;
- (void)placeOrderAfterCheckNameFinish;
- (id)genDoubleCheckCustomViewWithCheckWinData:(id)arg1;
- (BOOL)hasMoneyUnit:(id)arg1;
- (void)onWCPayTransferPhonePlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)popToEntryView;
- (void)onWCPayTransferPhonePlaceOrderCgiResp:(id)arg1;
- (void)startPaymoneyLogic;
- (void)cutString:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (void)onWCPayTransferPhonePayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhonePayCheckCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneSuccPageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneSuccPageCgiResp:(id)arg1;
- (id)onWCPayTransferPhoneHomePage;
- (void)onWCPayTransferPhoneHomePageToHistory;
- (void)onWCPayTransferPhoneHomePageToNext:(id)arg1;
- (void)onWCPayTransferPhoneHomePageBack;
- (void)onWCPayTransferPhoneHomePageClickJumpItem:(id)arg1;
- (void)cleanMainPageData;
- (void)onWCPayTransferPhoneMainPageActiveTextField;
- (void)onWCPayTransferPhoneMainPageBack;
- (void)onWCPayTransferPhoneMainPageToNext:(unsigned int)arg1 comment:(id)arg2 mode:(unsigned int)arg3;
- (void)onWCPayTransferPhoneMainPageToCheckName:(id)arg1;
- (id)onWCPayTransferPhoneMainPageGetRcvrResp;
- (id)onWCPayTransferPhoneMainPageShowName;
- (BOOL)onWCPayTransferPhoneMainPageShowCheckName;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2 spamInfo:(id)arg3;
- (id)onPayMoneyConfirmViewDesc;
- (void)onPayMoneyLogicSuccess;
- (void)onPayMoneyLogicDidStop;
- (void)startPayCheckCgi;
- (void)startSuccessPageCgi;
- (void)activeTextField;
- (BOOL)gotoViewController:(id)arg1;
- (void)onWCPayTransferPhoneSuccessPageBack;
- (id)onWCPayTransferPhoneSuccessPageResp;
- (id)onWCPayTransferPhoneSuccessPageAmount;
- (id)onWCPayTransferPhoneSuccessPageName;
- (void)onWCPayTransferPhoneSuccessPageClickJumpItem:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageBack;
- (id)onWCPayTransferPhoneHistoryPageGetHisRcvrsResp;
- (void)onWCPayTransferPhoneHistoryPageLoadMore;
- (void)onWCPayTransferPhoneHistoryPageSelect:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageDel:(id)arg1;
- (void)onWCPayTransferPhoneEntryPageBack;
- (void)onWCPayTransferPhoneEntryPageToBank;
- (void)onWCPayTransferPhoneLogicToBank;
- (void)OnContinueClickTransToBank;
- (void)OnContinueWCPayTransferPhoneEntryPageToPhone;
- (void)onWCPayTransferPhoneEntryPageToPhone;
- (void)onWCPayTransferPhoneEntryPageToSetUp;
- (void)OnWCPayPwdViewControllerBack;
- (void)OnWCPayT2BCTransferControlLogicFinish;
- (void)onClickJumpItem:(id)arg1 action:(id /* block */)arg2;
- (void)onWCPayTransferPhoneWelcomePageBack;
- (void)onWCPayTransferPhoneWelcomePageNext;
- (void)WCPayTransferPhoneProtocalHalfPageAgree;
- (void)WCPayTransferPhoneProtocalHalfPageDisagree;
- (void)call:(id)arg1;
- (void)popAndPush:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)homePageCgi;
- (void)setHomePageCgi:(id)arg1;
- (id)getHisRcvrsCgi;
- (void)setGetHisRcvrsCgi:(id)arg1;
- (id)delHisRcvrsCgi;
- (void)setDelHisRcvrsCgi:(id)arg1;
- (id)getRcvrCgi;
- (void)setGetRcvrCgi:(id)arg1;
- (id)checkNameCgi;
- (void)setCheckNameCgi:(id)arg1;
- (id)placeOrderCgi;
- (void)setPlaceOrderCgi:(id)arg1;
- (id)payCheckCgi;
- (void)setPayCheckCgi:(id)arg1;
- (id)succPageCgi;
- (void)setSuccPageCgi:(id)arg1;
- (id)getRcvrReq;
- (void)setGetRcvrReq:(id)arg1;
- (id)checkNameReq;
- (void)setCheckNameReq:(id)arg1;
- (id)placeOrderReq;
- (void)setPlaceOrderReq:(id)arg1;
- (id)delHisRcvrReq;
- (void)setDelHisRcvrReq:(id)arg1;
- (id)homePageResp;
- (void)setHomePageResp:(id)arg1;
- (id)getRcvrResp;
- (void)setGetRcvrResp:(id)arg1;
- (id)hisRcvrsResp;
- (void)setHisRcvrsResp:(id)arg1;
- (id)checkNameResp;
- (void)setCheckNameResp:(id)arg1;
- (id)placeOrderResp;
- (void)setPlaceOrderResp:(id)arg1;
- (id)succPageResp;
- (void)setSuccPageResp:(id)arg1;
- (id)payMoneyLogic;
- (void)setPayMoneyLogic:(id)arg1;
- (id)checkNameController;
- (void)setCheckNameController:(id)arg1;
- (id)replaceOrderToken;
- (void)setReplaceOrderToken:(id)arg1;
- (id)realnameToken;
- (void)setRealnameToken:(id)arg1;
- (BOOL)bIsCheckNameFromPlaceOrder;
- (void)setBIsCheckNameFromPlaceOrder:(BOOL)arg1;
- (int)forceCheckNameStatus;
- (void)setForceCheckNameStatus:(int)arg1;
- (id)m_enterMobileNumber;
- (void)setM_enterMobileNumber:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)pastedBankCardOrMobileNumer;
- (void)setPastedBankCardOrMobileNumer:(id)arg1;
- (void).cxx_destruct;
@end

