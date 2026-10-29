@interface XImage : NSObject
{
    const AAPLTextureFormatInfo * _formatInfo; // +0x8
    __CVBuffer * _CVPixelBuffer; // +0x10
    __CVBuffer * _CVMTLTexture; // +0x18
    __CVBuffer * _CVGLTexture; // +0x20
    CGSize _size; // +0x28
    ObjectRef<xnet::rci::RciTexture> _internalRciTexture; // +0x38
    BOOL _isHDR10; // +0x40
    shared_ptr<wevision::HardwareBufferTexture> hardwareBufferTexture; // +0x48
    unsigned int _openGLTexture; // +0x58
    id <MTLTexture> _metalTexture; // +0x60
    long long _range; // +0x68
    long long _matrix; // +0x70
    long long _transferFunction; // +0x78
    long long _colorPrimaries; // +0x80
    id /* block */ _notifyUseCompletedBlock; // +0x88
    id <MTLEvent> _eventToWait; // +0x90
    CGRect _cropRect; // +0x98
}
+ (long long)getYuvColorPrimariesWithPixelBuffer:(__CVBuffer *)arg1;
+ (long long)getYuvRangeWithPixelBuffer:(__CVBuffer *)arg1;
+ (long long)getYuvMatrixWithPixelBuffer:(__CVBuffer *)arg1;
+ (long long)getYuvTransferFunctionWithPixelBuffer:(__CVBuffer *)arg1;
+ (id)createImageWithPixelBuffer:(__CVBuffer *)arg1 ofPlane:(unsigned long long)arg2;
+ (id)createImageWithRciTexture:(void *)arg1;
+ (id)createImageWithRfxTexture:(void *)arg1;
+ (id)createInteropImage:(CGSize)arg1;
- (id)init;
- (void)dealloc;
- (__CVBuffer *)pixelBuffer;
- (void *)rciTexture;
- (BOOL)createGLTexture;
- (BOOL)createMetalTexture;
- (id)debugQuickLookObject;
- (id)convertToCIImage;
- (unsigned int)openGLTexture;
- (id)metalTexture;
- (CGSize)size;
- (CGRect)cropRect;
- (void)setCropRect:(CGRect)arg1;
- (long long)range;
- (long long)matrix;
- (long long)transferFunction;
- (long long)colorPrimaries;
- (BOOL)isHDR10;
- (id /* block */)notifyUseCompletedBlock;
- (void)setNotifyUseCompletedBlock:(id /* block */)arg1;
- (id)eventToWait;
- (void)setEventToWait:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
