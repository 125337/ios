@interface TBCalloutMaskedBackgroundView : TBCalloutBackgroundView
{
    UIView * _containerView; // +0x8
    UIView * _containerBorderView; // +0x10
    UIView * _arrowView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    UIImageView * _arrowHighlightedImageView; // +0x28
    UIImageView * _arrowBorderView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setArrowPoint:(CGPoint)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)image:(id)arg1 withColor:(id)arg2;
- (void)layoutSubviews;
- (id)contentMask;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)containerBorderView;
- (void)setContainerBorderView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)arrowHighlightedImageView;
- (void)setArrowHighlightedImageView:(id)arg1;
- (id)arrowBorderView;
- (void)setArrowBorderView:(id)arg1;
- (void).cxx_destruct;
@end
