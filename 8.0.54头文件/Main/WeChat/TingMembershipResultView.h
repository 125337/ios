@interface TingMembershipResultView : UIView
{
    id /* block */ _confirmHandler; // +0x8
    UIView * _contentView; // +0x10
    UIImageView * _imageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subtitleLabel; // +0x28
    UIButton * _actionButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)contentView;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)actionButton;
- (void)configLayout;
- (void)layoutSubviews;
- (void)updateDisplayWithIconName:(id)arg1 title:(id)arg2 desc:(id)arg3 btnText:(id)arg4;
- (void)actionButtonClicked:(id)arg1;
- (id /* block */)confirmHandler;
- (void)setConfirmHandler:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

