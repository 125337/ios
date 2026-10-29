@interface TXCPixelBufferPool : NSObject
{
    BOOL _metalCompatible; // +0x8
    unsigned long long _format; // +0x10
    __CFString * _yCbCrMatrixKey; // +0x18
    __CVPixelBufferPool * _pool; // +0x20
    CGSize _size; // +0x28
}
- (id)initWithVideoFormat:(unsigned long long)arg1;
- (void)dealloc;
- (void)resetBufferPool;
- (void)setSize:(CGSize)arg1;
- (void)setMetalCompatible:(BOOL)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (__CVBuffer *)createPixelBuffer;
- (void)createBufferPool;
- (void)releaseBufferPool;
- (CGSize)size;
- (unsigned long long)format;
- (BOOL)metalCompatible;
- (__CFString *)yCbCrMatrixKey;
- (void)setYCbCrMatrixKey:(__CFString *)arg1;
- (__CVPixelBufferPool *)pool;
- (void)setPool:(__CVPixelBufferPool *)arg1;
@end

