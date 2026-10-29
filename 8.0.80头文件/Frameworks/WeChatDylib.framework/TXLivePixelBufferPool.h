@interface TXLivePixelBufferPool : NSObject
{
    unsigned int _format; // +0x8
    __CVPixelBufferPool * _pool; // +0x10
    __CFString * _yCbCrMatrixKey; // +0x18
    __CFString * _colorPrimaries; // +0x20
    __CFString * _transferFunction; // +0x28
    CGSize _size; // +0x30
}
- (id)initWithPixelFormat:(unsigned int)arg1;
- (void)dealloc;
- (void)resetBufferPool;
- (void)setSize:(CGSize)arg1;
- (void)setFormat:(unsigned int)arg1;
- (__CVBuffer *)createPixelBuffer;
- (void)setColorInfo:(__CVBuffer *)arg1;
- (__CVBuffer *)createPixelBufferFromPool:(__CVPixelBufferPool *)arg1;
- (__CVBuffer *)createPixelBufferWithFormat:(unsigned int)arg1 bufferSize:(CGSize)arg2;
- (void)createBufferPool;
- (__CVPixelBufferPool *)createPixelBufferPoolWithFormat:(unsigned int)arg1 bufferSize:(CGSize)arg2 attribules:(id)arg3;
- (void)releaseBufferPool;
- (unsigned int)formatForPool;
- (CGSize)size;
- (unsigned int)format;
- (__CVPixelBufferPool *)pool;
- (void)setPool:(__CVPixelBufferPool *)arg1;
- (__CFString *)yCbCrMatrixKey;
- (void)setYCbCrMatrixKey:(__CFString *)arg1;
- (__CFString *)colorPrimaries;
- (void)setColorPrimaries:(__CFString *)arg1;
- (__CFString *)transferFunction;
- (void)setTransferFunction:(__CFString *)arg1;
@end
