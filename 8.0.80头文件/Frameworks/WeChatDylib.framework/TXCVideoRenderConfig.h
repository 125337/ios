@interface TXCVideoRenderConfig : NSObject
{
    int _homeOrientation; // +0x8
    unsigned long long _mirrorMode; // +0x10
    unsigned long long _rotation; // +0x18
    unsigned long long _fillMode; // +0x20
    NSNumber * _backgroundColor; // +0x28
    unsigned long long _gSensorMode; // +0x30
    unsigned long long _customRenderFormat; // +0x38
    unsigned long long _customRenderBufferType; // +0x40
    NSValue * _outputSize; // +0x48
    vector<liteav::video::PointF, std::allocator<liteav::video::PointF>> _perspectiveSrcPoints; // +0x50
    vector<liteav::video::PointF, std::allocator<liteav::video::PointF>> _perspectiveDstPoints; // +0x68
}
- (id)init;
- (unsigned long long)mirrorMode;
- (void)setMirrorMode:(unsigned long long)arg1;
- (unsigned long long)rotation;
- (void)setRotation:(unsigned long long)arg1;
- (unsigned long long)fillMode;
- (void)setFillMode:(unsigned long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (unsigned long long)gSensorMode;
- (void)setGSensorMode:(unsigned long long)arg1;
- (int)homeOrientation;
- (void)setHomeOrientation:(int)arg1;
- (unsigned long long)customRenderFormat;
- (void)setCustomRenderFormat:(unsigned long long)arg1;
- (unsigned long long)customRenderBufferType;
- (void)setCustomRenderBufferType:(unsigned long long)arg1;
- (id)outputSize;
- (void)setOutputSize:(id)arg1;
- (vector<liteav::video::PointF, std::allocator<liteav::video::PointF>>)perspectiveSrcPoints;
- (void)setPerspectiveSrcPoints:(vector<liteav::video::PointF, std::allocator<liteav::video::PointF>>)arg1;
- (vector<liteav::video::PointF, std::allocator<liteav::video::PointF>>)perspectiveDstPoints;
- (void)setPerspectiveDstPoints:(vector<liteav::video::PointF, std::allocator<liteav::video::PointF>>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
