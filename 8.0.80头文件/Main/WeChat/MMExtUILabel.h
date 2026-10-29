@interface MMExtUILabel : MMUILabel
{
    double __cornerRadius; // +0x8
    UIEdgeInsets __edgeInsets; // +0x10
}
- (id)init;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (void)setCornerRadius:(double)arg1;
- (CGSize)intrinsicContentSize;
- (void)drawTextInRect:(CGRect)arg1;
- (void)layoutSubviews;
- (UIEdgeInsets)_edgeInsets;
- (void)set_edgeInsets:(UIEdgeInsets)arg1;
- (double)_cornerRadius;
- (void)set_cornerRadius:(double)arg1;
@end
