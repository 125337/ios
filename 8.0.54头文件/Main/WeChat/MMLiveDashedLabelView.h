@interface MMLiveDashedLabelView : UIView
{
    MMUILabel * _label; // +0x8
    UIView * _leftDash; // +0x10
    UIView * _rightDash; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)leftDash;
- (void)setLeftDash:(id)arg1;
- (id)rightDash;
- (void)setRightDash:(id)arg1;
- (void).cxx_destruct;
@end

