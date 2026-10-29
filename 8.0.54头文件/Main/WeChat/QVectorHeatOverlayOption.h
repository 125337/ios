@interface QVectorHeatOverlayOption : NSObject
{
    BOOL _enable3D; // +0x8
    int _type; // +0xc
    double _size; // +0x10
    double _gap; // +0x18
    double _opacity; // +0x20
    double _minZoom; // +0x28
    double _maxZoom; // +0x30
    double _minHeight; // +0x38
    double _maxHeight; // +0x40
    QAnimation * _animation; // +0x48
    NSArray * _colors; // +0x50
    NSArray * _startPoints; // +0x58
    double _minIntensity; // +0x60
    double _maxIntensity; // +0x68
}
- (id)init;
- (void)setColors:(id)arg1 startPoints:(id)arg2;
- (id)colors;
- (id)startPoints;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
- (int)type;
- (void)setType:(int)arg1;
- (double)size;
- (void)setSize:(double)arg1;
- (double)gap;
- (void)setGap:(double)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (double)minZoom;
- (void)setMinZoom:(double)arg1;
- (double)maxZoom;
- (void)setMaxZoom:(double)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setStartPoints:(id)arg1;
- (double)minIntensity;
- (void)setMinIntensity:(double)arg1;
- (double)maxIntensity;
- (void)setMaxIntensity:(double)arg1;
- (void).cxx_destruct;
@end

