@interface WCPayBizF2FTransferMoneyViewController : WCPayBaseViewController <InternalLoadingFavorDelegate, InternalTransferTaskDelegate, WCPayBusiF2FGetFavorCgiDelegate, UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, MMUseCaseCallback, WCPayF2FTransferFavorItemViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayTransferMoneyAntiCheatButtonDelegate, WCPayBizF2FTransferMoneyFaovrPageSheetDelegate>
{
    BOOL _m_userHasSelectCompose; // +0x90
    id <WCPayBizF2FTransferMoneyViewControllerDelegate> _delegate; // +0x98
    NSString * _comment; // +0xa0
    UILabel * _m_favorTitleLabel; // +0xa8
    WCPayF2FTransferDiscountFavorItemView * _m_discountFavorItemView; // +0xb0
    WCPayF2FTransferFavorItemView * _m_extraBuyFavorItemView; // +0xb8
    UIView * _m_favorBottomLine; // +0xc0
    UIImageView * _m_favorArrowView; // +0xc8
    UILabel * _m_favorMoneyTitleLabel; // +0xd0
    UILabel * _m_favorMoneyLabel; // +0xd8
    WCUIAlertView * _m_alertView; // +0xe0
    BusiF2FFavorCommResp * _m_getFavorResp; // +0xe8
    FavorComposeInfo * _m_selectedComposeInfo; // +0xf0
    WCPayBizF2FExtraBuyDataHelper * _extraBuyHelper; // +0xf8
    WCPayBusiF2FGetFavorCgi * _getFavorCgi; // +0x100
    InternalTransferTask * _m_transferTask; // +0x108
    WCPayBaseNetworkingError * _m_getFavorErr; // +0x110
    InternalLoadingFavor * _m_internalLoadingFavor; // +0x118
    UIView * _m_headerView; // +0x120
    UIView * _m_bannerView; // +0x128
    UILabel * _m_mchNameLabel; // +0x130
    UILabel * _m_nickNameLabel; // +0x138
    UIView * _m_imageView; // +0x140
    UIView * _m_contentView; // +0x148
    UILabel * _m_amountTitle; // +0x150
    WCPayTransferMoneyAntiCheatUIView * _m_antiCheatView; // +0x158
    UILabel * _m_unitLabel; // +0x160
    WCPayTextField * _m_textField; // +0x168
    UIView * _m_textFieldLine; // +0x170
    UILabel * _m_amountLabel; // +0x178
    UIButton * _m_transferButton; // +0x180
    UIView * _m_commentView; // +0x188
    MMTextView * _payerDescTextView; // +0x190
    WCPayDecimalKeyboardView * _keyboardView; // +0x198
    UIView * _m_footerMask; // +0x1a0
    double _keyboardHeight; // +0x1a8
    WCPayBizF2FTransferMoneyFaovrPageSheet * _m_favorPageSheet; // +0x1b0
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (double)amountInputLabelFontSize;
- (double)amountInputLabelHeight;
- (BOOL)shouldGetFavor;
- (BOOL)shouldShowFavor;
- (BOOL)shouldShowDiscountFavorItem;
- (id)favorResp;
- (id)discountFavorSubTitleColor;
- (id)safeDiscountFavorSubTitle;
- (id)discountFavorSubTitle;
- (double)updateFavorViewWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorTitleLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateDiscountFavorWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateExtraBuyFavorWithYOffset:(double)arg1 baseView:(id)arg2;
- (BOOL)shouldEnableDiscountFavorItemView;
- (double)updateFavorBottomLineWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorMoneyTitleLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorMoneyLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (unsigned long long)favorMoneyInt;
- (id)favorMoneyText;
- (void)updateDiscountFavorItemSubTitle;
- (void)updateFavorMoney;
- (void)updateExrtaBuyFavorItemSubTitle;
- (void)updateFavorArea;
- (void)onFavorButtonClick;
- (void)viewWillPop:(BOOL)arg1;
- (void)leftBarButtonItemClick;
- (void)transferBtnClick;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textFieldDidChange;
- (void)getFavorWithOriginalAmount:(unsigned int)arg1 andDelegate:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)commentConfirm;
- (void)commentCancel;
- (void)refreshTransferButton;
- (void)clearFavorInfo;
- (void)updateConfirmButtonState;
- (void)onDiscountFavorViewClicked;
- (void)favorItemViewDidClickView:(id)arg1;
- (void)favorItemViewDidClickInfoButton:(id)arg1;
- (void)favorItemViewDidChangeCheckState:(id)arg1;
- (void)startExtraBuyKindaUseCase;
- (void)call:(id)arg1;
- (void)onWCPayBizF2FFavorSelectViewSelect:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onInternalLoadingFavor:(id)arg1;
- (void)onInternalLoadingFavorError:(id)arg1;
- (void)onInternalTransferTaskExecute;
- (unsigned int)getOriginalAmountInCent;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateBannerView;
- (void)updateMchNameLabel;
- (void)updateNickNameLabel;
- (void)adjustMchNameAndNickName;
- (void)updateImageView;
- (void)updateContentView;
- (void)updateAntiCheatView;
- (void)onWCPayAntiCheatButtonClickWithH5:(id)arg1;
- (void)onWCPayAntiCheatButtonClickWithMiniProgram:(id)arg1 path:(id)arg2;
- (void)onWCPayAntiCheatButtonClickWithNative:(id)arg1;
- (void)updateAmountTitle;
- (void)updateUnitTitle;
- (BOOL)shouldShowKeyboardFloatButton;
- (void)updateTextField;
- (double)getWCPayTextFieldOffsetX;
- (double)getWCPayTextFieldOffsetY;
- (void)updateAmountLabel;
- (id)placeHolder;
- (void)adjustUnitAndTextField;
- (void)updateTextFieldLine;
- (double)updateTransferButton:(double)arg1;
- (void)updateCommentView;
- (void)updateCommentTextView;
- (void)updateRequiredPayerDescView;
- (void)refreshViewWithData:(id)arg1;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)showFloatConfirmBtn;
- (void)clearTextField;
- (void)updateAmount:(unsigned int)arg1;
- (void)activeTextField;
- (id)kvLog19821StringWithActionType:(unsigned int)arg1;
- (id)delegate;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)m_favorTitleLabel;
- (void)setM_favorTitleLabel:(id)arg1;
- (id)m_discountFavorItemView;
- (void)setM_discountFavorItemView:(id)arg1;
- (id)m_extraBuyFavorItemView;
- (void)setM_extraBuyFavorItemView:(id)arg1;
- (id)m_favorBottomLine;
- (void)setM_favorBottomLine:(id)arg1;
- (id)m_favorArrowView;
- (void)setM_favorArrowView:(id)arg1;
- (id)m_favorMoneyTitleLabel;
- (void)setM_favorMoneyTitleLabel:(id)arg1;
- (id)m_favorMoneyLabel;
- (void)setM_favorMoneyLabel:(id)arg1;
- (id)m_alertView;
- (void)setM_alertView:(id)arg1;
- (id)m_getFavorResp;
- (void)setM_getFavorResp:(id)arg1;
- (id)m_selectedComposeInfo;
- (void)setM_selectedComposeInfo:(id)arg1;
- (BOOL)m_userHasSelectCompose;
- (void)setM_userHasSelectCompose:(BOOL)arg1;
- (id)extraBuyHelper;
- (void)setExtraBuyHelper:(id)arg1;
- (id)getFavorCgi;
- (void)setGetFavorCgi:(id)arg1;
- (id)m_transferTask;
- (void)setM_transferTask:(id)arg1;
- (id)m_getFavorErr;
- (void)setM_getFavorErr:(id)arg1;
- (id)m_internalLoadingFavor;
- (void)setM_internalLoadingFavor:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_bannerView;
- (void)setM_bannerView:(id)arg1;
- (id)m_mchNameLabel;
- (void)setM_mchNameLabel:(id)arg1;
- (id)m_nickNameLabel;
- (void)setM_nickNameLabel:(id)arg1;
- (id)m_imageView;
- (void)setM_imageView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_amountTitle;
- (void)setM_amountTitle:(id)arg1;
- (id)m_antiCheatView;
- (void)setM_antiCheatView:(id)arg1;
- (id)m_unitLabel;
- (void)setM_unitLabel:(id)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)m_textFieldLine;
- (void)setM_textFieldLine:(id)arg1;
- (id)m_amountLabel;
- (void)setM_amountLabel:(id)arg1;
- (id)m_transferButton;
- (void)setM_transferButton:(id)arg1;
- (id)m_commentView;
- (void)setM_commentView:(id)arg1;
- (id)payerDescTextView;
- (void)setPayerDescTextView:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)m_footerMask;
- (void)setM_footerMask:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)m_favorPageSheet;
- (void)setM_favorPageSheet:(id)arg1;
- (void).cxx_destruct;
@end

