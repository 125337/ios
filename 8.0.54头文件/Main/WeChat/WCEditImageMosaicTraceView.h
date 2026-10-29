@interface WCEditImageMosaicTraceView : EditImageUIView <WCEditImageTraceViewProtocol>
{
    BOOL _highLight; // +0x8
    CALayer * _contentLayer; // +0x10
    CAShapeLayer * _highLightLayer; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
}
+ (id)copyLayer:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 mosaicImage:(id)arg2 shapeLayer:(id)arg3;
- (void)updateWithPath:(CGPath *)arg1;
- (BOOL)isViewPathContainPoint:(CGPoint)arg1;
- (BOOL)highLightPenTraceAtPointIfNeeded:(CGPoint)arg1;
- (void)setPenTraceViewHighLight:(BOOL)arg1;
- (BOOL)isPenTraceViewHighLight;
- (void)setFrame:(CGRect)arg1;
- (id)contentLayer;
- (void)setContentLayer:(id)arg1;
- (id)highLightLayer;
- (void)setHighLightLayer:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (BOOL)isHighLight;
- (void)setHighLight:(BOOL)arg1;
- (void).cxx_destruct;
@end

