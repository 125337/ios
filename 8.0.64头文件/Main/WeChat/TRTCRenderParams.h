@interface TRTCRenderParams : NSObject
{
    long long _rotation; // +0x8
    long long _fillMode; // +0x10
    unsigned long long _mirrorType; // +0x18
}
- (RenderParams)convertToCppParams;
- (id)description;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
- (unsigned long long)mirrorType;
- (void)setMirrorType:(unsigned long long)arg1;
@end
