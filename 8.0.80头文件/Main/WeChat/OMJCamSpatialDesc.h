@interface OMJCamSpatialDesc : NSObject
{
    float _scale; // +0x8
    unsigned long long _scaleMode; // +0x10
    unsigned long long _rotationMode; // +0x18
    unsigned long long _flipMode; // +0x20
    CGSize _viewPointSize; // +0x28
    CGPoint _position; // +0x38
}
- (id)initWithSpatialDesc:(id)arg1;
- (id)initWithBackingDesc:(const void *)arg1;
- (id)description;
- (CGSize)viewPointSize;
- (unsigned long long)scaleMode;
- (void)setScaleMode:(unsigned long long)arg1;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg1;
- (unsigned long long)flipMode;
- (void)setFlipMode:(unsigned long long)arg1;
- (float)scale;
- (void)setScale:(float)arg1;
- (CGPoint)position;
- (void)setPosition:(CGPoint)arg1;
@end
