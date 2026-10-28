@interface MMLockOverlayView : UIView
{
    BOOL _errored; // +0x8
    NSMutableArray * _pointsToDraw; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)resetView;
- (void)hightlightError;
- (id)pointsToDraw;
- (void)setPointsToDraw:(id)arg1;
- (BOOL)errored;
- (void)setErrored:(BOOL)arg1;
- (void).cxx_destruct;
@end
