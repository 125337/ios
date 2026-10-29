@interface WCPayOpenECardControlLogic : WCPayECardBaseControlLogic <WCPayEcardModelViewDelegate, MMTipsViewControllerDelegate, WCPayOpenECardAuthCgiDelegate, WCPayQryBankList4BindCgiDelegate, WCPayOpenECardCgiDelegate, WCPayBindECardCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayECardBankCardListViewControllerDelegate, WCPayECardSelectCardTypeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, MMWebViewDelegate, WCPayECardSuccessViewControllerDelegate, WCPayLQTOpenLqbAccountCgiDelegate, WCPayLQTDetailControlLogicDelegate, WCPayAddPayCardDelegate>
{
    BOOL _bIsOpenECardSucc; // +0x38
    BOOL _bIsReuseExistingEcard; // +0x39
    BOOL _bIsQryBankListAfterBindCard; // +0x3a
    id <WCPayOpenECardControlLogicDelegate> _delegate; // +0x40
    WCPayOpenECardAuthCgi * _openECardAuthCgi; // +0x48
    WCPayQryBankList4BindCgi * _bankListCgi; // +0x50
    WCPayOpenECardCgi * _openECardCgi; // +0x58
    WCPayBindECardCgi * _bindECardCgi; // +0x60
    WCPayLQTOpenLqbAccountCgi * _lqbOpenAccoutCgi; // +0x68
    NSString * _jsapiToken; // +0x70
    NSString * _jsapiExtraData; // +0x78
    WCPayLQTDetailControlLogic * _lqtDetailControlLogic; // +0x80
    NSString * _bindCardSerial; // +0x88
    MMTipsViewController * _verifyTips; // +0x90
    NSString * _currentInputMobile; // +0x98
    OpenECardReq * _openEcardReq; // +0xa0
    WCPayEcardModelView * _openEcardModelView; // +0xa8
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startOpenECardWithBankType:(id)arg1 PhoneNumber:(id)arg2 bindSerial:(id)arg3 bankCardNo:(id)arg4 isisRepeatSend:(BOOL)arg5 fromScene:(int)arg6;
- (void)startOpenECardWithBankType:(id)arg1 PhoneNumber:(id)arg2 bindSerial:(id)arg3 bankCardNo:(id)arg4 isisRepeatSend:(BOOL)arg5 fromScene:(int)arg6 bankCardInfo:(id)arg7;
- (void)startQueryBankCardList;
- (void)showPasswordVC;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)eCardBankListVC:(id)arg1 didSelectedCard:(id)arg2;
- (void)eCardBankListVCDidChoseNewCard:(id)arg1;
- (void)eCardBankListVCBack;
- (void)vc:(id)arg1 didSelectCardType:(id)arg2;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)successVCFinished:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)sendOpenEcardAuthRequestWithPwd:(id)arg1;
- (void)openECardAuthCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openECardAuthCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)openECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryBankList4BindCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryBankList4BindCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)bindECardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)bindECardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)sendLqbOpenAccountRequest;
- (void)onGetLqbOpenAccountCgiResp:(id)arg1;
- (void)clickLqbOpenAccountError;
- (void)gotoLQTDetailControLogic:(id)arg1;
- (void)onLQTDetailControlLogicStop;
- (void)startAddPayCardLogic;
- (void)onAddPayCardResult:(BOOL)arg1 newCardBindSerial:(id)arg2;
- (void)queryBankListForBindFailOrCancel;
- (void)openECardAfterBindNewCard;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onWCPayEcardModelViewShowKeyboard:(id)arg1;
- (void)onWCPayEcardModelViewHideKeyboard;
- (void)onWCPayEcardModelViewClickNewCardLink;
- (void)onWCPayEcardModelViewTextChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)openECardAuthCgi;
- (void)setOpenECardAuthCgi:(id)arg1;
- (id)bankListCgi;
- (void)setBankListCgi:(id)arg1;
- (id)openECardCgi;
- (void)setOpenECardCgi:(id)arg1;
- (id)bindECardCgi;
- (void)setBindECardCgi:(id)arg1;
- (id)lqbOpenAccoutCgi;
- (void)setLqbOpenAccoutCgi:(id)arg1;
- (id)jsapiToken;
- (void)setJsapiToken:(id)arg1;
- (id)jsapiExtraData;
- (void)setJsapiExtraData:(id)arg1;
- (id)lqtDetailControlLogic;
- (void)setLqtDetailControlLogic:(id)arg1;
- (BOOL)bIsOpenECardSucc;
- (void)setBIsOpenECardSucc:(BOOL)arg1;
- (BOOL)bIsReuseExistingEcard;
- (void)setBIsReuseExistingEcard:(BOOL)arg1;
- (id)bindCardSerial;
- (void)setBindCardSerial:(id)arg1;
- (BOOL)bIsQryBankListAfterBindCard;
- (void)setBIsQryBankListAfterBindCard:(BOOL)arg1;
- (id)verifyTips;
- (void)setVerifyTips:(id)arg1;
- (id)currentInputMobile;
- (void)setCurrentInputMobile:(id)arg1;
- (id)openEcardReq;
- (void)setOpenEcardReq:(id)arg1;
- (id)openEcardModelView;
- (void)setOpenEcardModelView:(id)arg1;
- (void).cxx_destruct;
@end

