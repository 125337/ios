@interface AppFileNodeProgressView : UIView
{
    double _fProgress; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)setProgressValue:(double)arg1;
- (double)fProgress;
- (void)setFProgress:(double)arg1;
@end
