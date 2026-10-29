@interface QHeatOverlay : QGLOverlay
{
    struct _boundingRect; // +0x8
    BOOL _enable3D; // +0x28
    BOOL _useUserIntensity; // +0x29
    NSArray * _nodes; // +0x30
    long long _decayRadius; // +0x38
    QHeatGradient * _gradient; // +0x40
    double _maxHeight; // +0x48
    QAnimation * _animation; // +0x50
    QHeatGradient * _internalGradient; // +0x58
    double _maxIntensity; // +0x60
    double _minIntensity; // +0x68
}
- (void)calculateBoundingRect;
- (struct)boundingMapRect;
- (void)setNodes:(id)arg1;
- (void)setDecayRadius:(long long)arg1;
- (void)setGradient:(id)arg1;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
- (void)setAnimation:(id)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setDisplayLevel:(long long)arg1;
- (void)setNeedsDisplay;
- (id)getType;
- (Gradient *)generateGradient;
- (void *)createImpl;
- (void)destoryImpl;
- (HeatmapData *)createInfoData;
- (void)destoryInfoData:(HeatmapData *)arg1;
- (HeatmapCell * *)getHeatMapCells;
- (id)initWithHeatNodes:(id)arg1;
- (void)recordGLoverlayCount:(id)arg1;
- (id)nodes;
- (long long)decayRadius;
- (id)gradient;
- (double)maxHeight;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (id)animation;
- (id)internalGradient;
- (void)setInternalGradient:(id)arg1;
- (double)maxIntensity;
- (void)setMaxIntensity:(double)arg1;
- (double)minIntensity;
- (void)setMinIntensity:(double)arg1;
- (BOOL)useUserIntensity;
- (void)setUseUserIntensity:(BOOL)arg1;
- (void).cxx_destruct;
@end

