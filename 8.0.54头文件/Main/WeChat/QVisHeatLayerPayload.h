@interface QVisHeatLayerPayload : QVisLayerPayload
{
    NSArray * _nodes; // +0x38
    double _minIntensity; // +0x40
    double _maxIntensity; // +0x48
    long long _decayRadius; // +0x50
    QHeatGradient * _gradient; // +0x58
    double _maxHeight; // +0x60
    QAnimation * _animation; // +0x68
}
- (id)nodes;
- (void)setNodes:(id)arg1;
- (double)minIntensity;
- (void)setMinIntensity:(double)arg1;
- (double)maxIntensity;
- (void)setMaxIntensity:(double)arg1;
- (long long)decayRadius;
- (void)setDecayRadius:(long long)arg1;
- (id)gradient;
- (void)setGradient:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void).cxx_destruct;
@end

