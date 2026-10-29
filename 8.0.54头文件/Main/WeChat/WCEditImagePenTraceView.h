@interface WCEditImagePenTraceView : UIView <WCEditImageTraceViewProtocol>
{
    CAShapeLayer * _normalPenTraceLayer; // +0x8
    CAShapeLayer * _highLightPenTraceLayer; // +0x10
    CAShapeLayer * _highLightPenTraceBoarderLayer; // +0x18
}
+ (id)copyLayer:(id)arg1;
- (void)setupWithShapeLayer:(id)arg1;
- (BOOL)isViewPathContainPoint:(CGPoint)arg1;
- (BOOL)highLightPenTraceAtPointIfNeeded:(CGPoint)arg1;
- (void)setPenTraceViewHighLight:(BOOL)arg1;
- (BOOL)isPenTraceViewHighLight;
- (BOOL)hiddenPenTraceAtPointIfNeeded:(CGPoint)arg1;
- (id)normalPenTraceLayer;
- (void)setNormalPenTraceLayer:(id)arg1;
- (id)highLightPenTraceLayer;
- (void)setHighLightPenTraceLayer:(id)arg1;
- (id)highLightPenTraceBoarderLayer;
- (void)setHighLightPenTraceBoarderLayer:(id)arg1;
- (void).cxx_destruct;
@end

