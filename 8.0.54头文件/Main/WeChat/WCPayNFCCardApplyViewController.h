@interface WCPayNFCCardApplyViewController : WCPayBaseViewController <ILinkEventExt, WCPayNFCCardDepositViewDelegate>
{
    BOOL _isChecked; // +0x90
    id <WCPayNFCCardApplyViewControllerDelegate> _m_delegate; // +0x98
    UIView * _contentView; // +0xa0
    WCPayWebImageView * _nfcCardImageView; // +0xa8
    WCPayCss * _css; // +0xb0
    UIView * _cardInfoView; // +0xb8
    UILabel * _titleLabel; // +0xc0
    UIView * _tagsView; // +0xc8
    UIView * _seperatorView; // +0xd0
    EXTPKG_mmpayapplynfccardbo_CardTypeInfo * _m_viewData; // +0xd8
    UILabel * _preChargeLabel; // +0xe0
    UIView * _preChargeAmountContentView; // +0xe8
    UILabel * _depositTitleView; // +0xf0
    UIView * _depositContentView; // +0xf8
    UIView * _cardAboutContentView; // +0x100
    UIView * _bottomContentView; // +0x108
    UIView * _bottomViewUpperLine; // +0x110
    UIView * _bottomViewLowerLine; // +0x118
    UIView * _protocolView; // +0x120
    UIView * _chargeConfirmView; // +0x128
    MMUIButton * _checkBoxButton; // +0x130
    RichTextView * _protocolTextView; // +0x138
    UILabel * _cardAboutTitleView; // +0x140
    UIView * _cardApplyFeeView; // +0x148
    UILabel * _cardApplyFeeTitleView; // +0x150
    UILabel * _cardApplyFeeKeyLaxbel; // +0x158
    UILabel * _cardApplyFeeValueLabel; // +0x160
    UIView * _cardAboutInfoContentView; // +0x168
    UILabel * _amountLabelPrefix; // +0x170
    UILabel * _amountLabel; // +0x178
    UILabel * _cardApplyAmountNameLabel; // +0x180
    UIView * _amountContentView; // +0x188
    UIButton * _confirmButton; // +0x190
    long long _selectedDepositAmount; // +0x198
    UILabel * _cardChargeFeeTipsLabel; // +0x1a0
    UIImageView * _maskView; // +0x1a8
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

