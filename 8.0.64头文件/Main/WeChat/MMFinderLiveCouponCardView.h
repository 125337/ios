@interface MMFinderLiveCouponCardView : UIView
{
    id <MMFinderLiveCouponCardViewDelegate> _delegate; // +0x8
    FinderLiveSyncEcCouponInfoResp_PopupInfo * _info; // +0x10
    UIImageView * _imageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _valueLabel; // +0x28
    MMArrayConverter * _subInfoLabels; // +0x30
    UIButton * _button; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)onActionButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)subInfoLabels;
- (void)setSubInfoLabels:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
