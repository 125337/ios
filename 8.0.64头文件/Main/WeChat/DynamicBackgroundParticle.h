@interface DynamicBackgroundParticle : WADynamicBackgroundGLObject
{
    float _radius; // +0x8
    int _sideCount; // +0xc
    float _opacity; // +0x10
    unsigned int _framePerSecond; // +0x14
    float _angle; // +0x18
    float _vx; // +0x1c
    float _vy; // +0x20
    float _dx; // +0x24
    float _dy; // +0x28
    unsigned int _colorIndex; // +0x2c
    WADynamicBackgroundGLGeometry * _geometry; // +0x30
    NSMutableArray * _colorConfigs; // +0x38
    double _colorRatio; // +0x40
    _GLKVector3 _position; // +0x48
    _GLKVector3 _velocity; // +0x54
    _GLKVector4 _currentColor; // +0x60
    _GLKMatrix4 _colorMatrix; // +0x70
}
- (id)initWithGLContext:(id)arg1;
- (id)geometry;
- (void)update:(double)arg1;
- (void)draw:(id)arg1;
- (void)rangeDetect;
- (void)resetPositionBeyondScreen:(BOOL)arg1;
- (float)randFloat:(float)arg1 end:(float)arg2;
- (float)radius;
- (void)setRadius:(float)arg1;
- (int)sideCount;
- (void)setSideCount:(int)arg1;
- (_GLKVector3)position;
- (void)setPosition:(_GLKVector3)arg1;
- (_GLKVector3)velocity;
- (void)setVelocity:(_GLKVector3)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (_GLKMatrix4)colorMatrix;
- (void)setColorMatrix:(_GLKMatrix4)arg1;
- (void)setGeometry:(id)arg1;
- (unsigned int)framePerSecond;
- (void)setFramePerSecond:(unsigned int)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (float)vx;
- (void)setVx:(float)arg1;
- (float)vy;
- (void)setVy:(float)arg1;
- (float)dx;
- (void)setDx:(float)arg1;
- (float)dy;
- (void)setDy:(float)arg1;
- (id)colorConfigs;
- (void)setColorConfigs:(id)arg1;
- (_GLKVector4)currentColor;
- (void)setCurrentColor:(_GLKVector4)arg1;
- (double)colorRatio;
- (void)setColorRatio:(double)arg1;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
