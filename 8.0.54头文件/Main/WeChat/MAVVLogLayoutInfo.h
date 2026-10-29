@interface MAVVLogLayoutInfo : NSObject
{
    int _centerX; // +0x8
    int _centerY; // +0xc
    float _scale; // +0x10
    float _rotate; // +0x14
    int _scaleBase; // +0x18
}
- (id)init;
- (int)centerX;
- (void)setCenterX:(int)arg1;
- (int)centerY;
- (void)setCenterY:(int)arg1;
- (float)scale;
- (void)setScale:(float)arg1;
- (float)rotate;
- (void)setRotate:(float)arg1;
- (int)scaleBase;
- (void)setScaleBase:(int)arg1;
@end

