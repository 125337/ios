@interface WCPayNFCCardChargeViewController : WCPayBaseViewController <ILinkEventExt, WCPayNFCCardDepositViewDelegate>
{
    BOOL _isChecked; // +0x98
    id <WCPayNFCCardChargeViewControllerDelegate> _m_delegate; // +0xa0
    UIView * _contentView; // +0xa8
    WCPayWebImageView * _nfcCardImageView; // +0xb0
    WCPayCss * _css; // +0xb8
    UIView * _cardInfoView; // +0xc0
    UILabel * _titleLabel; // +0xc8
    UIView * _balanceView; // +0xd0
    UILabel * _balancePrefixLabel; // +0xd8
    UILabel * _balanceLabel; // +0xe0
    UIView * _tagsView; // +0xe8
    UIView * _seperatorView; // +0xf0
    EXTPKG_mmpayapplynfccardbo_CardTypeInfo * _m_viewData; // +0xf8
    UILabel * _preChargeLabel; // +0x100
    UIView * _preChargeAmountContentView; // +0x108
    UILabel * _depositTitleView; // +0x110
    UIView * _depositContentView; // +0x118
    UIView * _cardAboutContentView; // +0x120
    UIView * _bottomContentView; // +0x128
    UIView * _bottomViewUpperLine; // +0x130
    UIView * _bottomViewLowerLine; // +0x138
    UIView * _protocolView; // +0x140
    UIView * _chargeConfirmView; // +0x148
    UIImageView * _checkBoxImageView; // +0x150
    RichTextView * _protocolTextView; // +0x158
    UILabel * _cardAboutTitleView; // +0x160
    UIView * _cardAboutInfoContentView; // +0x168
    UILabel * _amountLabelPrefix; // +0x170
    UILabel * _amountLabel; // +0x178
    UILabel * _cardApplyAmountNameLabel; // +0x180
    UIView * _amountContentView; // +0x188
    UIButton * _confirmButton; // +0x190
    long long _selectedDepositAmount; // +0x198
    UIButton * _abontCardButton; // +0x1a0
}
- (void)viewDidLoad;
- (id)css;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onBack;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onClickChargeRecord:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateTailView;
- (void)updateNFCCardImageView;
- (void)updateCardInfoView;
- (void)updateTitleLabel;
- (void)updateBalanceView;
- (void)updateTags;
- (void)updateSeperator;
- (void)updateDepositView;
- (void)updateDepositContentView;
- (double)balanceAmount;
- (void)updateAboutCardButton;
- (void)onClickAboutCardButton:(id)arg1;
- (void)updateBottomContent;
- (double)totalAmount;
- (void)updateChargeConfirmView;
- (void)onClickConfirmButton:(id)arg1;
- (void)onWCPayNFCCardDepositViewTap:(long long)arg1;
- (void)onConfirmChage:(id)arg1;
- (void)updateDepositContentViewState;
- (void)updateCardAboutInfoView;
- (double)maxTitleLength;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)nfcCardImageView;
- (void)setNfcCardImageView:(id)arg1;
- (void)setCss:(id)arg1;
- (id)cardInfoView;
- (void)setCardInfoView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)balanceView;
- (void)setBalanceView:(id)arg1;
- (id)balancePrefixLabel;
- (void)setBalancePrefixLabel:(id)arg1;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg1;
- (id)m_viewData;
- (void)setM_viewData:(id)arg1;
- (id)preChargeLabel;
- (void)setPreChargeLabel:(id)arg1;
- (id)preChargeAmountContentView;
- (void)setPreChargeAmountContentView:(id)arg1;
- (id)depositTitleView;
- (void)setDepositTitleView:(id)arg1;
- (id)depositContentView;
- (void)setDepositContentView:(id)arg1;
- (id)cardAboutContentView;
- (void)setCardAboutContentView:(id)arg1;
- (id)bottomContentView;
- (void)setBottomContentView:(id)arg1;
- (id)bottomViewUpperLine;
- (void)setBottomViewUpperLine:(id)arg1;
- (id)bottomViewLowerLine;
- (void)setBottomViewLowerLine:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (id)chargeConfirmView;
- (void)setChargeConfirmView:(id)arg1;
- (id)checkBoxImageView;
- (void)setCheckBoxImageView:(id)arg1;
- (BOOL)isChecked;
- (void)setIsChecked:(BOOL)arg1;
- (id)protocolTextView;
- (void)setProtocolTextView:(id)arg1;
- (id)cardAboutTitleView;
- (void)setCardAboutTitleView:(id)arg1;
- (id)cardAboutInfoContentView;
- (void)setCardAboutInfoContentView:(id)arg1;
- (id)amountLabelPrefix;
- (void)setAmountLabelPrefix:(id)arg1;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)cardApplyAmountNameLabel;
- (void)setCardApplyAmountNameLabel:(id)arg1;
- (id)amountContentView;
- (void)setAmountContentView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (long long)selectedDepositAmount;
- (void)setSelectedDepositAmount:(long long)arg1;
- (id)abontCardButton;
- (void)setAbontCardButton:(id)arg1;
- (void).cxx_destruct;
@end
