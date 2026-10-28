@interface MMLiveIconButton : MMUIButton
{
    double _iconPadding; // +0x8
    unsigned long long _iconLocation; // +0x10
}
- (void)setIconPadding:(double)arg1;
- (void)setIconLocation:(unsigned long long)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)iconPadding;
- (unsigned long long)iconLocation;
@end
