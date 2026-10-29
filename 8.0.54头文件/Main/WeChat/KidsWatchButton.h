@interface KidsWatchButton : UIButton
{
    unsigned long long _style; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)changeForWeakStyle;
- (void)changeForStrongStyle;
- (unsigned long long)style;
@end

