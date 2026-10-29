@interface WCFinderMembershipPaymentSelectDetailView : UIView <ILinkEventExt>
{
    UIView * _protocolView; // +0x8
    UIButton * _selectBoxButton; // +0x10
    RichTextView * _protocolTextView; // +0x18
    UIView * _rowContainView; // +0x20
    unsigned long long _selectedTag; // +0x28
    RichTextView * _subTitle; // +0x30
    UIButton * _confirmButton; // +0x38
    KindaUILabel * _statementLabel; // +0x40
    WCCoinConsumeParameter * _parameter; // +0x48
    id <WCFinderMembershipPaymentSelectDetailViewDelegate> _delegate; // +0x50
    NSArray * _memberPriceArray; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 parameter:(id)arg2 memberPriceArray:(id)arg3;
- (void)layout;
- (void)layoutTitle;
- (void)layoutPayCoinView;
- (void)layoutSubTitle;
- (void)layoutAgreement;
- (void)layoutButton;
- (void)layoutStatement;
- (id)selectBoxButton;
- (id)protocolTextView;
- (void)shakeAgreementView;
- (void)consume;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)clickCoin:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (void)setSelectBoxButton:(id)arg1;
- (void)setProtocolTextView:(id)arg1;
- (id)rowContainView;
- (void)setRowContainView:(id)arg1;
- (unsigned long long)selectedTag;
- (void)setSelectedTag:(unsigned long long)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)statementLabel;
- (void)setStatementLabel:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)memberPriceArray;
- (void)setMemberPriceArray:(id)arg1;
- (void).cxx_destruct;
@end
