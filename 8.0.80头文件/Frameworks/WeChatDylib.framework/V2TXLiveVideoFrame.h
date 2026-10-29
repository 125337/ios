@interface V2TXLiveVideoFrame : NSObject
{
    unsigned int _textureId; // +0x8
    long long _pixelFormat; // +0x10
    long long _bufferType; // +0x18
    NSData * _data; // +0x20
    __CVBuffer * _pixelBuffer; // +0x28
    unsigned long long _width; // +0x30
    unsigned long long _height; // +0x38
    long long _rotation; // +0x40
}
- (id)description;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (void)dealloc;
- (long long)pixelFormat;
- (void)setPixelFormat:(long long)arg1;
- (long long)bufferType;
- (void)setBufferType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (__CVBuffer *)pixelBuffer;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (unsigned int)textureId;
- (void)setTextureId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
