@interface TXCMetalBaseRenderer : NSObject <TXCMetalRenderer>
{
    TXCMetalPixelBufferUploader * _pixelBufferUploader; // +0x8
    TXCMetalContext * _context; // +0x10
}
- (id)initWithContext:(id)arg1;
- (id)pixelBufferUploader;
- (void)uploadPixelBuffer:(__CVBuffer *)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (unsigned long long)rendererType;
- (void)setDisplayConfig:(id)arg1;
- (id)context;
- (void).cxx_destruct;
@end

