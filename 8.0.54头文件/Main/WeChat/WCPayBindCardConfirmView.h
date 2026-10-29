@interface WCPayBindCardConfirmView : UIView
{
    NSString * _desc; // +0x8
    UIView * _headerView; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    UIView * _footerView; // +0x30
    UIButton * _confirmButton; // +0x38
    UIButton * _refuseButton; // +0x40
    double _minHeight; // +0x48
    id <WCPayBindCardConfirmViewDelegate> _m_delegate; // +0x50
}
- (void)updateDelegate:(id)arg1;
- (void)updateMinHeight:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIconView;
- (void)updateTitleView;
- (void)updateDescView;
- (void)updateFooterView;
- (void)updateConfirmView;
- (void)updateRefuseView;
- (void)onClickConfirmButton;
- (void)onClickRefuseButton;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)refuseButton;
- (void)setRefuseButton:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

