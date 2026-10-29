@interface MMFinderLiveCouponCardStandardSlotView : MMFinderLiveCouponCardSlotView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _valueLabel; // +0x10
    MMArrayConverter * _subInfoLabels; // +0x18
    UIButton * _button; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
- (void)onActionButtonClicked;
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
