@interface QMCTransitChipView : UIView
{
    NSLayoutConstraint * _contentLeading; // +0x8
    NSLayoutConstraint * _contentTrailing; // +0x10
    NSLayoutConstraint * _contentTop; // +0x18
    NSLayoutConstraint * _contentBottom; // +0x20
    UIStackView * _walkContentStack; // +0x28
    NSLayoutConstraint * _walkIconWidth; // +0x30
    NSLayoutConstraint * _walkIconHeight; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_clearSubviews;
- (void)configureWalkingWithDuration:(id)arg1 iconURL:(id)arg2 imageLoader:(id /* block */)arg3 scaleFactor:(double)arg4;
- (void)configureTransitWithLineName:(id)arg1 lineColor:(id)arg2 textColor:(id)arg3 scaleFactor:(double)arg4;
- (void)qmc_applyChipScale:(double)arg1;
- (id)contentLeading;
- (void)setContentLeading:(id)arg1;
- (id)contentTrailing;
- (void)setContentTrailing:(id)arg1;
- (id)contentTop;
- (void)setContentTop:(id)arg1;
- (id)contentBottom;
- (void)setContentBottom:(id)arg1;
- (id)walkContentStack;
- (void)setWalkContentStack:(id)arg1;
- (id)walkIconWidth;
- (void)setWalkIconWidth:(id)arg1;
- (id)walkIconHeight;
- (void)setWalkIconHeight:(id)arg1;
- (void).cxx_destruct;
@end
