@interface TXCMetalTexture : NSObject
{
    id <MTLTexture> _texture; // +0x8
    __CVBuffer * _pixelBuffer; // +0x10
}
- (id)initWithTexture:(id)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)dealloc;
- (id)texture;
- (__CVBuffer *)pixelBuffer;
- (void).cxx_destruct;
@end

