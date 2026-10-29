@interface QVisHoneyCombLayerPayload : QVisLayerPayload
{
    int _type; // +0x38
    NSArray * _nodes; // +0x40
    double _minIntensity; // +0x48
    double _maxIntensity; // +0x50
    QAnimation * _animation; // +0x58
    QVectorHeatOverlayOption * _option; // +0x60
    NSArray * _colors; // +0x68
    NSArray * _startPoints; // +0x70
    double _minHeight; // +0x78
    double _maxHeight; // +0x80
    double _size; // +0x88
    double _gap; // +0x90
}
- (id)nodes;
- (void)setNodes:(id)arg1;
- (double)minIntensity;
- (void)setMinIntensity:(double)arg1;
- (double)maxIntensity;
- (void)setMaxIntensity:(double)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (id)colors;
- (void)setColors:(id)arg1;
- (id)startPoints;
- (void)setStartPoints:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)size;
- (void)setSize:(double)arg1;
- (double)gap;
- (void)setGap:(double)arg1;
- (void).cxx_destruct;
@end

