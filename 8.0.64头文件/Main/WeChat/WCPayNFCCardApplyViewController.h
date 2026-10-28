@interface WCPayNFCCardApplyViewController : WCPayBaseViewController <ILinkEventExt, WCPayNFCCardDepositViewDelegate>
{
    BOOL _isChecked; // +0x98
    id <WCPayNFCCardApplyViewControllerDelegate> _m_delegate; // +0xa0
    UIView * _contentView; // +0xa8
    WCPayWebImageView * _nfcCardImageView; // +0xb0
    WCPayCss * _css; // +0xb8
    UIView * _cardInfoView; // +0xc0
    UILabel * _titleLabel; // +0xc8
    UIView * _tagsView; // +0xd0
    UIView * _seperatorView; // +0xd8
    EXTPKG_mmpayapplynfccardbo_CardTypeInfo * _m_viewData; // +0xe0
    UILabel * _preChargeLabel; // +0xe8
    UIView * _preChargeAmountContentView; // +0xf0
    UILabel * _depositTitleView; // +0xf8
    UIView * _depositContentView; // +0x100
    UIView * _cardAboutContentView; // +0x108
    UIView * _bottomContentView; // +0x110
    UIView * _bottomViewUpperLine; // +0x118
    UIView * _bottomViewLowerLine; // +0x120
    UIView * _protocolView; // +0x128
    UIView * _chargeConfirmView; // +0x130
    MMUIButton * _checkBoxButton; // +0x138
    RichTextView * _protocolTextView; // +0x140
    UILabel * _cardAboutTitleView; // +0x148
    UIView * _cardApplyFeeView; // +0x150
    UILabel * _cardApplyFeeTitleView; // +0x158
    UILabel * _cardApplyFeeKeyLaxbel; // +0x160
    UILabel * _cardApplyFeeValueLabel; // +0x168
    UIView * _cardAboutInfoContentView; // +0x170
    UILabel * _amountLabelPrefix; // +0x178
    UILabel * _amountLabel; // +0x180
    UILabel * _cardApplyAmountNameLabel; // +0x188
    UIView * _amountContentView; // +0x190
    UIButton * _confirmButton; // +0x198
    long long _selectedDepositAmount; // +0x1a0
    UILabel * _cardChargeFeeTipsLabel; // +0x1a8
    UIImageView * _maskView; // +0x1b0
}
- (void)onWCPayNFCCardDepositViewTap:(long long)arg1;
- (void)updateDepositContentViewState;
- (void)viewDidLoad;
- (id)css;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onBack;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateTailView;
- (void)updateNFCCardImageView;
- (void)updateCardInfoView;
- (void)updateApplyCardFeeView;
- (void)updateBottomContent;
- (void)updateMaskView;
- (id)navigationBarBackgroundColor;
- (void)updateChargeConfirmView;
- (void)onClickConfirmButton:(id)arg1;
- (double)totalAmount;
- (void)onTapCheckBox;
- (void)updateProtocolView;
- (void)updateTitleLabel;
- (void)updateTags;
- (void)updateSeperator;
- (void)updateDepositView;
- (void)updateDepositTipsView;
- (void)updateDepositContentView;
- (void)updateCardAbountInfoView;
- (double)maxTitleLength;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
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
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg1;
- (BOOL)isChecked;
- (void)setIsChecked:(BOOL)arg1;
- (id)protocolTextView;
- (void)setProtocolTextView:(id)arg1;
- (id)cardAboutTitleView;
- (void)setCardAboutTitleView:(id)arg1;
- (id)cardApplyFeeView;
- (void)setCardApplyFeeView:(id)arg1;
- (id)cardApplyFeeTitleView;
- (void)setCardApplyFeeTitleView:(id)arg1;
- (id)cardApplyFeeKeyLaxbel;
- (void)setCardApplyFeeKeyLaxbel:(id)arg1;
- (id)cardApplyFeeValueLabel;
- (void)setCardApplyFeeValueLabel:(id)arg1;
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
- (id)cardChargeFeeTipsLabel;
- (void)setCardChargeFeeTipsLabel:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end
