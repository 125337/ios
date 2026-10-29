@interface TXCRgbToYuvFilter : TXCBaseFilter
{
    unsigned long long _outputFormat; // +0x8
    id <TXIGlContext> _context; // +0x10
    TXCGlFrameBuffer * _frameBuffer; // +0x18
    TXCGlProgram * _program; // +0x20
    TXCPixelBufferPool * _bufferPool; // +0x28
    id <TXCPixelTransferSession> _pixelTransferSession; // +0x30
}
- (id)initWithContext:(id)arg1 outputFormat:(unsigned long long)arg2;
- (id)pixelTransferSession;
- (BOOL)createGlObjectsIfNeeded;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setupProgram;
- (void)drawTextureToFrameBuffer:(id)arg1;
- (unsigned long long)outputFormat;
- (id)context;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (id)bufferPool;
- (void)setBufferPool:(id)arg1;
- (void)setPixelTransferSession:(id)arg1;
- (void).cxx_destruct;
@end

