@interface TingQQMembershipView : UIView
{
    UIButton * _actionButton; // +0x8
    MMUIButton * _wecoinButton; // +0x10
    id <TingQQMembershipViewDelegate> _delegate; // +0x18
    UIView * _contentView; // +0x20
    UIImageView * _imageView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subtitleLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)contentView;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)actionButton;
- (id)wecoinButton;
- (void)configLayout;
- (void)layoutSubviews;
- (void)updateDisplayWithTitle:(id)arg1 desc:(id)arg2 btnText:(id)arg3;
- (void)actionButtonClicked:(id)arg1;
- (void)wecoinButtonClicked:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setWecoinButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
