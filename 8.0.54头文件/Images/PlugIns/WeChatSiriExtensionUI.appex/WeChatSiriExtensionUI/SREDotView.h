@interface SREDotView : UIView
{
    BOOL _shouldStopAnimation; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)shouldStopAnimation;
- (void)setShouldStopAnimation:(BOOL)arg1;
@end

