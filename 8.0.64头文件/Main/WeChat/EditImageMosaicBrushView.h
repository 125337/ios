@interface EditImageMosaicBrushView : EditImageUIView <WCEditImageTraceViewProtocol>
{
    UIImage * _img; // +0x8
    UIImageView * _imageView; // +0x10
    double _lineWidth; // +0x18
    BOOL _initial; // +0x20
    double _minDis; // +0x28
    NSMutableArray * _pointArray; // +0x30
    UIImage * _cacheImg; // +0x38
    BOOL _highLight; // +0x40
    CGPath * _path; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 withToolType:(int)arg2 lineWidth:(double)arg3;
- (void)setFrame:(CGRect)arg1;
- (void)drawMosaicAtPoint:(CGPoint)arg1 withColor:(id)arg2 withRotation:(double)arg3;
- (void)updateDrawPathWithPoint:(CGPoint)arg1;
- (void)draw;
- (void)updateCachedImage;
- (BOOL)isViewPathContainPoint:(CGPoint)arg1;
- (BOOL)highLightPenTraceAtPointIfNeeded:(CGPoint)arg1;
- (void)setPenTraceViewHighLight:(BOOL)arg1;
- (BOOL)isPenTraceViewHighLight;
- (CGPath *)path;
- (void)setPath:(CGPath *)arg1;
- (BOOL)isHighLight;
- (void)setHighLight:(BOOL)arg1;
- (void).cxx_destruct;
@end
