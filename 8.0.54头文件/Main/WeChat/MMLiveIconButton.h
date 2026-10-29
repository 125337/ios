@interface MMLiveIconButton : MMUIButton
{
    double _iconPadding; // +0x8
}
- (void)setIconPadding:(double)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)iconPadding;
@end

