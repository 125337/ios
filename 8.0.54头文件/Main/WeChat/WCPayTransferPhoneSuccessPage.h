@interface WCPayTransferPhoneSuccessPage : WCPayBaseViewController
{
    id <WCPayTransferPhoneSuccessPageDelegate> _m_delegate; // +0x90
    KindaUIView * _noticeView; // +0x98
    UILabel * _noticeLabel; // +0xa0
    UIView * _containerView; // +0xa8
    UIView * _headerView; // +0xb0
    UIImageView * _iconView; // +0xb8
    UILabel * _titleLabel; // +0xc0
    UILabel * _subTitleView; // +0xc8
    UIView * _firstLineView; // +0xd0
    UIView * _bottomContainerView; // +0xd8
    UIButton * _backButton; // +0xe0
    WCPayCss * _css; // +0xe8
    TransferPhoneSuccPageResp * _succResp; // +0xf0
    NSMutableArray * _keyValueArray; // +0xf8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateNoticeView;
- (void)onTapNotice;
- (void)updateNoticeLabel;
- (void)updateHeaderView;
- (void)updateIconView;
- (void)updateTitleView;
- (void)updateSubTitleView;
- (void)updateFirstLineView;
- (void)updateKeyValue;
- (void)updateBottomContainerView;
- (void)updateBackButton;
- (void)onTapBack;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleView;
- (void)setSubTitleView:(id)arg1;
- (id)firstLineView;
- (void)setFirstLineView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)succResp;
- (void)setSuccResp:(id)arg1;
- (id)keyValueArray;
- (void)setKeyValueArray:(id)arg1;
- (void).cxx_destruct;
@end

