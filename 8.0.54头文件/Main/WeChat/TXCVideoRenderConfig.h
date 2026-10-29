@interface TXCVideoRenderConfig : NSObject
{
    BOOL _usesMetal; // +0x8
    int _homeOrientation; // +0xc
    unsigned long long _mirrorMode; // +0x10
    unsigned long long _rotation; // +0x18
    unsigned long long _fillMode; // +0x20
    unsigned long long _gSensorMode; // +0x28
    unsigned long long _customRenderFormat; // +0x30
    unsigned long long _customRenderBufferType; // +0x38
}
- (id)init;
- (unsigned long long)mirrorMode;
- (void)setMirrorMode:(unsigned long long)arg1;
- (unsigned long long)rotation;
- (void)setRotation:(unsigned long long)arg1;
- (unsigned long long)fillMode;
- (void)setFillMode:(unsigned long long)arg1;
- (unsigned long long)gSensorMode;
- (void)setGSensorMode:(unsigned long long)arg1;
- (int)homeOrientation;
- (void)setHomeOrientation:(int)arg1;
- (unsigned long long)customRenderFormat;
- (void)setCustomRenderFormat:(unsigned long long)arg1;
- (unsigned long long)customRenderBufferType;
- (void)setCustomRenderBufferType:(unsigned long long)arg1;
- (BOOL)usesMetal;
- (void)setUsesMetal:(BOOL)arg1;
@end

