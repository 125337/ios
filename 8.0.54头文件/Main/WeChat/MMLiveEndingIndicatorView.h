@interface MMLiveEndingIndicatorView : UIView
{
    UIView * _leftLine; // +0x8
    UIView * _dotView; // +0x10
    UIView * _rightLine; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setFilledColor:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)dotView;
- (void)setDotView:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (void).cxx_destruct;
@end

