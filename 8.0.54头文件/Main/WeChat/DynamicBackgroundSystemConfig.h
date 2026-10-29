@interface DynamicBackgroundSystemConfig : NSObject
{
    unsigned int _maxParticles; // +0x8
    unsigned int _sideCount; // +0xc
    unsigned int _framePerSecond; // +0x10
    double _minRadius; // +0x18
    double _maxRadius; // +0x20
    double _speed; // +0x28
    double _minAngle; // +0x30
    double _maxAngle; // +0x38
    double _minPositionX; // +0x40
    double _maxPositionX; // +0x48
    double _minPositionY; // +0x50
    double _maxPositionY; // +0x58
    double _opacity; // +0x60
    double _backgroundDuration; // +0x68
    NSMutableArray * _colorConfigs; // +0x70
}
- (BOOL)isCurrentTimeInDarkStyle;
- (unsigned int)maxParticles;
- (void)setMaxParticles:(unsigned int)arg1;
- (double)minRadius;
- (void)setMinRadius:(double)arg1;
- (double)maxRadius;
- (void)setMaxRadius:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)minAngle;
- (void)setMinAngle:(double)arg1;
- (double)maxAngle;
- (void)setMaxAngle:(double)arg1;
- (double)minPositionX;
- (void)setMinPositionX:(double)arg1;
- (double)maxPositionX;
- (void)setMaxPositionX:(double)arg1;
- (double)minPositionY;
- (void)setMinPositionY:(double)arg1;
- (double)maxPositionY;
- (void)setMaxPositionY:(double)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (unsigned int)sideCount;
- (void)setSideCount:(unsigned int)arg1;
- (unsigned int)framePerSecond;
- (void)setFramePerSecond:(unsigned int)arg1;
- (double)backgroundDuration;
- (void)setBackgroundDuration:(double)arg1;
- (id)colorConfigs;
- (void)setColorConfigs:(id)arg1;
- (void).cxx_destruct;
@end

