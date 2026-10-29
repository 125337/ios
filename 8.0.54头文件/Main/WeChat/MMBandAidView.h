@interface MMBandAidView : UIView
{
    id _child; // +0x8
    UIView * _leftPart; // +0x10
    UIView * _rightPart; // +0x18
    double _cornerToChild; // +0x20
    NSLayoutConstraint * _leftPartRightToChildLeft; // +0x28
    NSLayoutConstraint * _rightPartLeftToChildRight; // +0x30
}
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithChild:(id)arg1;
- (void)setCornerToChild:(double)arg1;
- (id)child;
- (void)setChild:(id)arg1;
- (id)leftPart;
- (void)setLeftPart:(id)arg1;
- (id)rightPart;
- (void)setRightPart:(id)arg1;
- (double)cornerToChild;
- (id)leftPartRightToChildLeft;
- (void)setLeftPartRightToChildLeft:(id)arg1;
- (id)rightPartLeftToChildRight;
- (void)setRightPartLeftToChildRight:(id)arg1;
- (void).cxx_destruct;
@end

