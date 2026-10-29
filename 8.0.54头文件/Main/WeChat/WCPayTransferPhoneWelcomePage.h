@interface WCPayTransferPhoneWelcomePage : WCPayBaseViewController
{
    ComplianceItem * _complianceItem; // +0x90
    UIView * _containerView; // +0x98
    UIImageView * _iconImageView; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UILabel * _subTitleView; // +0xb0
    UILabel * _subTitleView2; // +0xb8
    UIView * _bottomContainerView; // +0xc0
    UIButton * _confirmButton; // +0xc8
    UIView * _headerView; // +0xd0
    WCPayCss * _css; // +0xd8
    UIView * _subTitleContainerView; // +0xe0
    UIView * _subTitleContainerView2; // +0xe8
    UIImageView * _dotImageView; // +0xf0
    UIImageView * _dotImageView2; // +0xf8
    WCPayTransferPhoneProtocalHalfPage * _halfPage; // +0x100
    id <WCPayTransferPhoneWelcomePageDelegate><WCPayTransferPhoneProtocalHalfPageDelegate> _m_delegate; // +0x108
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIcon;
- (void)updateTitleView;
- (void)updateSubTitleContainverView;
- (void)updateSubTitleContainverView2;
- (void)updateBottomContainerView;
- (void)updateStartButton;
- (void)updateHalfPage;
- (void)onTapStart;
- (void)closeHalfPage;
- (id)complianceItem;
- (void)setComplianceItem:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleView;
- (void)setSubTitleView:(id)arg1;
- (id)subTitleView2;
- (void)setSubTitleView2:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)subTitleContainerView;
- (void)setSubTitleContainerView:(id)arg1;
- (id)subTitleContainerView2;
- (void)setSubTitleContainerView2:(id)arg1;
- (id)dotImageView;
- (void)setDotImageView:(id)arg1;
- (id)dotImageView2;
- (void)setDotImageView2:(id)arg1;
- (id)halfPage;
- (void)setHalfPage:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

