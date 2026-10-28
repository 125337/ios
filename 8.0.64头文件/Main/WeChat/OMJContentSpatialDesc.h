@interface OMJContentSpatialDesc : NSObject
{
    unsigned long long _scaleMode; // +0x8
    unsigned long long _rotationMode; // +0x10
    unsigned long long _flipMode; // +0x18
}
- (unsigned long long)scaleMode;
- (void)setScaleMode:(unsigned long long)arg1;
- (unsigned long long)rotationMode;
- (void)setRotationMode:(unsigned long long)arg1;
- (unsigned long long)flipMode;
- (void)setFlipMode:(unsigned long long)arg1;
@end
