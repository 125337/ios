@interface WCCanvasRadarChartComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    UIImageView * _bgImageView; // +0x8
    UIImageView * _maskImageView; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)drawRect:(CGRect)arg1;
- (double)calcRadiusInsideRect:(CGRect)arg1;
- (void)drawItemsAtCenterPoint:(CGPoint)arg1 radius:(double)arg2;
- (void)drawBackgroundAtCenterPoint:(CGPoint)arg1 radius:(double)arg2;
- (void)drawAtCenter:(CGPoint)arg1 vertexes:(id)arg2 values:(id)arg3 fillColor:(id)arg4 withCenterLine:(BOOL)arg5 isTargetPoints:(BOOL)arg6;
- (id)vertexesForCenterPoint:(CGPoint)arg1 radius:(double)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)resizeBorderImageView;
- (id)coverColor;
- (long long)dimensions;
- (id)bgImageView;
- (id)maskImageView;
- (void)setBgImageView:(id)arg1;
- (void)setMaskImageView:(id)arg1;
- (void).cxx_destruct;
@end
