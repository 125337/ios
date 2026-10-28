@interface MMFinderLivePaidConnectMicAudiencePayConfirmSheetView : MMFinderLiveGenericPayConfirmSheetView <ILinkEventExt>
{
    BOOL _wecoinEnough; // +0x8
    id /* block */ _clickCommonQuestionAction; // +0x10
    id /* block */ _clickAgreementAction; // +0x18
    MMUIButton * _exchangeNeedToKnowButton; // +0x20
    MMUIButton * _commonQuestionButton; // +0x28
    RichTextView * _agreementTextView; // +0x30
    MMUIButton * _agreementCheckbox; // +0x38
}
- (id)helpButtonWithTitle:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutUI;
- (void)updateWithPrice:(unsigned long long)arg1;
- (void)onClickNeedToKnown;
- (void)onClickCommonQuestion;
- (void)onClickActionButton;
- (void)customInitActionButton:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitMoneyLabel:(id)arg1;
- (void)customInit;
- (void)onWecoinBalanceUpdated:(long long)arg1;
- (void)onCheckBoxClicked;
- (void)setAgreementSelected:(BOOL)arg1;
- (void)showAgreementToast;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)needToShowAgreement;
- (id /* block */)clickCommonQuestionAction;
- (void)setClickCommonQuestionAction:(id /* block */)arg1;
- (id /* block */)clickAgreementAction;
- (void)setClickAgreementAction:(id /* block */)arg1;
- (id)exchangeNeedToKnowButton;
- (void)setExchangeNeedToKnowButton:(id)arg1;
- (id)commonQuestionButton;
- (void)setCommonQuestionButton:(id)arg1;
- (BOOL)wecoinEnough;
- (void)setWecoinEnough:(BOOL)arg1;
- (id)agreementTextView;
- (void)setAgreementTextView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (void).cxx_destruct;
@end
