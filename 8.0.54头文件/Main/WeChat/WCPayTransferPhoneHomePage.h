@interface WCPayTransferPhoneHomePage : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayTransferPhoneHomePageDelegate> _m_delegate; // +0x90
    UIView * _containerView; // +0x98
    KindaUIView * _noticeView; // +0xa0
    UILabel * _noticeLabel; // +0xa8
    UILabel * _titleLabel; // +0xb0
    UILabel * _subTitleView; // +0xb8
    UIView * _firstLineView; // +0xc0
    UIView * _inputContainerView; // +0xc8
    UILabel * _inputTipsLabel; // +0xd0
    UITextField * _textField; // +0xd8
    UIButton * _iconButton; // +0xe0
    UIView * _secondLineView; // +0xe8
    UIView * _bottomContainerView; // +0xf0
    UIButton * _startButton; // +0xf8
    UIView * _headerView; // +0x100
    TransferPhoneHomePageResp * _homePageResp; // +0x108
    WCPayCss * _css; // +0x110
    double _keyboardHeight; // +0x118
    NSString * _m_enterMobileNumber; // +0x120
    WCPayNoticeItemView * _m_noticeBanner; // +0x128
}
- (id)init;
- (void)setEnterMobileNumber:(id)arg1;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateNoticeView;
- (void)onTapNotice;
- (void)updateHeaderView;
- (void)updateTitleView;
- (void)updateSubTitleView;
- (void)updateFirstLineView;
- (void)updateInputContainerView;
- (void)updateInputTipsView;
- (void)updateTextField;
- (void)updateIconButton;
- (void)updateSecondLineView;
- (void)updateBottomContainerView;
- (void)updateStartButton;
- (void)onTapIcon;
- (void)onTapStart;
- (void)textFieldDidChange;
- (void)onOperate:(id)arg1;
- (void)onTapEmpty;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleView;
- (void)setSubTitleView:(id)arg1;
- (id)firstLineView;
- (void)setFirstLineView:(id)arg1;
- (id)inputContainerView;
- (void)setInputContainerView:(id)arg1;
- (id)inputTipsLabel;
- (void)setInputTipsLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)secondLineView;
- (void)setSecondLineView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)homePageResp;
- (void)setHomePageResp:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)m_enterMobileNumber;
- (void)setM_enterMobileNumber:(id)arg1;
- (id)m_noticeBanner;
- (void)setM_noticeBanner:(id)arg1;
- (void).cxx_destruct;
@end

