@interface WCCoinConsumePanelDetailView : UIView <ILinkEventExt>
{
    WCCoinConsumePanel * _parent; // +0x8
    UIView * _protocolView; // +0x10
    UIButton * _selectBoxButton; // +0x18
    RichTextView * _protocolTextView; // +0x20
    KindaUILabel * _titleLabel; // +0x28
    KindaUILabel * _amountLabel; // +0x30
    UIButton * _consumeButton; // +0x38
}
- (id)initWithParent:(id)arg1;
- (void)layout;
- (void)layoutTitle;
- (void)layoutAmountView;
- (void)layoutAgreement;
- (void)layoutButton;
- (void)refreshBalanceDisplay;
- (id)titleText;
- (id)amountText;
- (id)consumeButtonTitleText;
- (CGSize)consumeButtonFittingSize:(id)arg1;
- (void)layoutLink;
- (void)shakeAgreementView;
- (void)consume;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)selectBoxButton;
- (id)protocolTextView;
- (id)parameter;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (void)setSelectBoxButton:(id)arg1;
- (void)setProtocolTextView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)consumeButton;
- (void)setConsumeButton:(id)arg1;
- (void).cxx_destruct;
@end
