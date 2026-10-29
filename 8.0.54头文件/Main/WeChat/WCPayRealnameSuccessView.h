@interface WCPayRealnameSuccessView : UIView <ILinkEventExt>
{
    BOOL _showRetry; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _buttonTitle; // +0x20
    WCPayRealnameRegResp * _viewData; // +0x28
    UIView * _headerView; // +0x30
    UIImageView * _iconImageView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _descLabel; // +0x48
    UIView * _footerView; // +0x50
    UIButton * _confirmButton; // +0x58
    UIButton * _retryButton; // +0x60
    double _minHeight; // +0x68
    RichTextView * _bottomTitle; // +0x70
    id <WCPayRealnameSuccessViewDelegate> _m_delegate; // +0x78
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
- (void)updateRetryButton;
- (void)updateBottomTitle;
- (void)onClickConfirmButton;
- (void)onClickRetryButton;
- (BOOL)isPassportPageStyle;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (BOOL)showRetry;
- (void)setShowRetry:(BOOL)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
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
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (id)bottomTitle;
- (void)setBottomTitle:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

