@interface WCPayMerchantPayViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate, UITextFieldDelegate, ILinkEventExt>
{
    BOOL _isShouldShowPlaceHolder; // +0x98
    double _keyboardHeight; // +0xa0
    WCPayTextField * _m_textField; // +0xa8
    WCPayDecimalKeyboardView * _keyboardView; // +0xb0
    id <WCPayMerchantPayViewControllerDelegate> _delegate; // +0xb8
    NSString * _comment; // +0xc0
    UIView * _m_headerView; // +0xc8
    UIView * _m_bannerView; // +0xd0
    UIView * _m_mchNameLabelView; // +0xd8
    UILabel * _m_mchNamePrefixLabel; // +0xe0
    UILabel * _m_mchNameLabel; // +0xe8
    UILabel * _m_nickNameLabel; // +0xf0
    UIView * _m_mchAddressInfoView; // +0xf8
    UIImageView * _m_mchAddressIconImageView; // +0x100
    UILabel * _m_mchAddressInfoLabel; // +0x108
    WCPayWebImageView * _m_mchIconImageView; // +0x110
    UIView * _m_contentView; // +0x118
    UILabel * _m_amountTitle; // +0x120
    UILabel * _m_unitLabel; // +0x128
    UIView * _m_textFieldLine; // +0x130
    RichTextView * _m_commentView; // +0x138
    UIButton * _m_fixAmountPayBtn; // +0x140
    UIView * _m_footerMask; // +0x148
    WCUIAlertView * _m_alertView; // +0x150
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)activeTextField;
- (void)initNavigationBar;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateBannerView;
- (void)viewDidLayoutSubviews;
- (void)updateMchNameLabel;
- (void)updateAddressLabel;
- (void)updateMchLogoImageView;
- (void)adjustBannerView;
- (void)updateContentView;
- (void)updateCommentView;
- (void)updateFixAmountPayBtn;
- (void)fixAmountPayBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)commentCancel;
- (void)commentConfirm;
- (void)updateAmountTitle;
- (void)updateUnitTitle;
- (void)setupWithData:(id)arg1;
- (void)updateTextField;
- (id)placeHolder;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (double)getWCPayTextFieldOffsetY;
- (double)getWCPayTextFieldOffsetX;
- (void)adjustUnitAndTextField;
- (double)amountInputLabelFontSize;
- (double)amountInputLabelHeight;
- (void)updateTextFieldLine;
- (void)onTapEmpty;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)leftBarButtonItemClick;
- (void)transferBtnClick;
- (unsigned int)getOriginalAmountInCent;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)showFloatConfirmBtn;
- (void)clearTextField;
- (void)textFieldDidChange;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)refreshTransferButton;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)m_textField;
- (void)setM_textField:(id)arg1;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg1;
- (id)delegate;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)m_headerView;
- (void)setM_headerView:(id)arg1;
- (id)m_bannerView;
- (void)setM_bannerView:(id)arg1;
- (id)m_mchNameLabelView;
- (void)setM_mchNameLabelView:(id)arg1;
- (id)m_mchNamePrefixLabel;
- (void)setM_mchNamePrefixLabel:(id)arg1;
- (id)m_mchNameLabel;
- (void)setM_mchNameLabel:(id)arg1;
- (id)m_nickNameLabel;
- (void)setM_nickNameLabel:(id)arg1;
- (id)m_mchAddressInfoView;
- (void)setM_mchAddressInfoView:(id)arg1;
- (id)m_mchAddressIconImageView;
- (void)setM_mchAddressIconImageView:(id)arg1;
- (id)m_mchAddressInfoLabel;
- (void)setM_mchAddressInfoLabel:(id)arg1;
- (id)m_mchIconImageView;
- (void)setM_mchIconImageView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_amountTitle;
- (void)setM_amountTitle:(id)arg1;
- (id)m_unitLabel;
- (void)setM_unitLabel:(id)arg1;
- (id)m_textFieldLine;
- (void)setM_textFieldLine:(id)arg1;
- (id)m_commentView;
- (void)setM_commentView:(id)arg1;
- (id)m_fixAmountPayBtn;
- (void)setM_fixAmountPayBtn:(id)arg1;
- (id)m_footerMask;
- (void)setM_footerMask:(id)arg1;
- (BOOL)isShouldShowPlaceHolder;
- (void)setIsShouldShowPlaceHolder:(BOOL)arg1;
- (id)m_alertView;
- (void)setM_alertView:(id)arg1;
- (void).cxx_destruct;
@end
