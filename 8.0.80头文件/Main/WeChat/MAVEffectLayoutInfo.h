@interface MAVEffectLayoutInfo : NSObject
{
    int _centerX; // +0x8
    int _centerY; // +0xc
    float _scale; // +0x10
    float _rotate; // +0x14
}
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3 rotate:(float)arg4;
- (int)centerX;
- (void)setCenterX:(int)arg1;
- (int)centerY;
- (void)setCenterY:(int)arg1;
- (float)scale;
- (void)setScale:(float)arg1;
- (float)rotate;
- (void)setRotate:(float)arg1;
@end
