@interface MMLockCircle : UIView
{
    BOOL _selected; // +0x8
    BOOL _skiped; // +0x9
    BOOL _errored; // +0xa
}
- (id)initWithRadius:(double)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)highlightCell;
- (void)resetCell;
- (void)hightlightErrorCell;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)skiped;
- (void)setSkiped:(BOOL)arg1;
- (BOOL)errored;
- (void)setErrored:(BOOL)arg1;
@end
