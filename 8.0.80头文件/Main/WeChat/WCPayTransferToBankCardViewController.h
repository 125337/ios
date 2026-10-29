@interface WCPayTransferToBankCardViewController : WCPayBaseViewController <WCPayCurrencyInputViewDelegate, ILinkEventExt, WCPayDecimalKeyboardViewDelegate, WCPayTransferMoneyAntiCheatButtonDelegate, WCPayRemarkPageSheetDelegate>
{
    UIScrollView * _m_backgroundView; // +0x98
    id <WCPayTransferToBankCardViewControllerDelegate> _m_delegate; // +0xa0
    UIView * _m_headerView; // +0xa8
    UIView * _m_footerView; // +0xb0
    UIView * _m_panelView; // +0xb8
    UIView * _m_lineView; // +0xc0
    UIView * _m_bottomDetailView; // +0xc8
    UIView * _m_chargeFeeLabelView; // +0xd0
    UIView * _m_totalAmountLabelView; // +0xd8
    UIView * _m_commentTextLabelView; // +0xe0
    UIButton * _m_confirmButton; // +0xe8
    WCPayWebImageView * _m_bankIconView; // +0xf0
    UILabel * _m_bankInfoLabel; // +0xf8
    UILabel * _m_receiverNameLabel; // +0x100
    UILabel * _m_inputTitleLabel; // +0x108
    UILabel * _m_chargeFeeLabel; // +0x110
    UILabel * _m_totalAmountLabel; // +0x118
    WCPayTextField * _m_currencyInputView; // +0x120
    RichTextView * _m_commentTextView; // +0x128
    UILabel * _unitLabel; // +0x130
    UIView * _inputContainer; // +0x138
    WCPayDecimalKeyboardView * _keyboard; // +0x140
    double _bottomDetailViewLeftMaxWidth; // +0x148
    WCPayTransferMoneyAntiCheatUIView * _noticeBanner; // +0x150
    WCPayRemarkPageSheet * _remarkPageSheet; // +0x158
    NSString * _remarkContent; // +0x160
}
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)onBack;
- (void)onRightBarButtonClick;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateViewData;
- (void)updateBackgroundView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateNavigationbarItem;
- (void)updateHeaderView;
- (void)updateBankIconView;
- (void)updateDescriptionView;
- (void)updateFooterView;
- (void)updatePanelView;
- (void)updateNoticeItemView;
- (void)updateRoundCorner;
- (void)updateBottomDetailView;
- (void)updateBottomDetailViewRightView;
- (void)updateFeeChargeLabel;
- (void)updateTotalAmountLabel;
- (void)updateComentTextLabel;
- (void)updateCommentTextView;
- (void)updateConfirmButton;
- (double)getRealtimeChargeFee:(double)arg1;
- (void)updateInputTitleLabel;
- (void)updateInputContainer;
- (void)updateUnitLabel;
- (void)textFieldDidChange;
- (void)showKeyboard;
- (void)updateCurrencyInputView;
- (void)updateLineView;
- (void)onInputTextChangeToString:(id)arg1;
- (void)updateConfirmButtonStatus;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showRemarkPageSheet;
- (void)pageSheetCancel;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)updateViewAfterPageSheetDismiss;
- (void)onButtonConfirm;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)closeAllKeyboards;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)delayShowKeyboard;
- (void)onWCPayAntiCheatButtonClickWithH5:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_panelView;
- (void)setM_panelView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_bottomDetailView;
- (void)setM_bottomDetailView:(id)arg1;
- (id)m_chargeFeeLabelView;
- (void)setM_chargeFeeLabelView:(id)arg1;
- (id)m_totalAmountLabelView;
- (void)setM_totalAmountLabelView:(id)arg1;
- (id)m_commentTextLabelView;
- (void)setM_commentTextLabelView:(id)arg1;
- (id)m_confirmButton;
- (void)setM_confirmButton:(id)arg1;
- (id)m_bankIconView;
- (void)setM_bankIconView:(id)arg1;
- (id)m_bankInfoLabel;
- (void)setM_bankInfoLabel:(id)arg1;
- (id)m_receiverNameLabel;
- (void)setM_receiverNameLabel:(id)arg1;
- (id)m_inputTitleLabel;
- (void)setM_inputTitleLabel:(id)arg1;
- (id)m_chargeFeeLabel;
- (void)setM_chargeFeeLabel:(id)arg1;
- (id)m_totalAmountLabel;
- (void)setM_totalAmountLabel:(id)arg1;
- (id)m_currencyInputView;
- (void)setM_currencyInputView:(id)arg1;
- (id)m_commentTextView;
- (void)setM_commentTextView:(id)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (id)inputContainer;
- (void)setInputContainer:(id)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (double)bottomDetailViewLeftMaxWidth;
- (void)setBottomDetailViewLeftMaxWidth:(double)arg1;
- (id)noticeBanner;
- (void)setNoticeBanner:(id)arg1;
- (id)remarkPageSheet;
- (void)setRemarkPageSheet:(id)arg1;
- (id)remarkContent;
- (void)setRemarkContent:(id)arg1;
- (void).cxx_destruct;
@end
