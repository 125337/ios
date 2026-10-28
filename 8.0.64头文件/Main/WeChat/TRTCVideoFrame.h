@interface TRTCVideoFrame : NSObject
{
    unsigned int _textureId; // +0x8
    unsigned int _width; // +0xc
    unsigned int _height; // +0x10
    long long _pixelFormat; // +0x18
    long long _bufferType; // +0x20
    __CVBuffer * _pixelBuffer; // +0x28
    NSData * _data; // +0x30
    unsigned long long _timestamp; // +0x38
    long long _rotation; // +0x40
}
+ (long long)convertPixelFormat:(int)arg1;
+ (int)convertToInnerFormat:(long long)arg1;
- (void)copyFromNativePixelFrame:(const NativePixelFrame *)arg1;
- (shared_ptr<liteav::video::NativePixelFrame>)toNativePixelFrame:(const void *)arg1;
- (unique_ptr<liteav::video::NativePixelFrame, std::default_delete<liteav::video::NativePixelFrame>>)convertToInnerFrame;
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (long long)pixelFormat;
- (void)setPixelFormat:(long long)arg1;
- (long long)bufferType;
- (void)setBufferType:(long long)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)textureId;
- (void)setTextureId:(unsigned int)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (void).cxx_destruct;
@end
