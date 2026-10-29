@interface MMFinderLiveCouponCardDrawSlotView : MMFinderLiveCouponCardSlotView
{
    MMWebImageView * _avatarImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _valueLabel; // +0x18
    MMArrayConverter * _subInfoLabels; // +0x20
    UIButton * _button; // +0x28
    MMUIActivityIndicatorView * _buttonSpinner; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutButtonContent;
- (void)updateWithViewModel:(id)arg1;
- (void)refreshActionButton;
- (void)onActionButtonClicked;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)subInfoLabels;
- (void)setSubInfoLabels:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)buttonSpinner;
- (void)setButtonSpinner:(id)arg1;
- (void).cxx_destruct;
@end
