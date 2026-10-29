@interface WCAdCardEmitterView : MMUIView <WCCanvasImageLoaderObserver>
{
    WCAdTouchParticleInfo * _particleInfo; // +0x8
    UIImage * _cellContent; // +0x10
    double _distanceGap; // +0x18
    double _chanceGap; // +0x20
    CGPoint _lastPoint; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 particleInfo:(id)arg2;
- (void)dealloc;
- (void)appendEmitterAtPoint:(CGPoint)arg1;
- (void)appendEmitterAtPoint:(CGPoint)arg1 more:(BOOL)arg2 longitudeType:(long long)arg3;
- (void)endEmitters;
- (double)getPointDistanceBetweenP1:(CGPoint)arg1 p2:(CGPoint)arg2;
- (void)genGapsWithParticleInfo:(id)arg1;
- (void)updateCellContent;
- (void)setCellContent:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)particleInfo;
- (void)setParticleInfo:(id)arg1;
- (CGPoint)lastPoint;
- (void)setLastPoint:(CGPoint)arg1;
- (id)cellContent;
- (double)distanceGap;
- (void)setDistanceGap:(double)arg1;
- (double)chanceGap;
- (void)setChanceGap:(double)arg1;
- (void).cxx_destruct;
@end

