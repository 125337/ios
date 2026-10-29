@interface TXCCustomConvertFilter : TXCVideoBindableObject
{
    id <TXIGlContext> _context; // +0x8
    id <TXICustomProcessConverter> _converter; // +0x10
    id <TXCCustomVideoProcessDelegate> _delegate; // +0x18
    unsigned long long _bufferType; // +0x20
    unsigned long long _format; // +0x28
    TXCGlFrameBuffer * _srcBuffer; // +0x30
    TXCGlFrameBuffer * _dstBuffer; // +0x38
}
- (id)initWithContext:(id)arg1 delegate:(id)arg2 format:(unsigned long long)arg3 bufferType:(unsigned long long)arg4;
- (BOOL)needsYuvInput;
- (void)dealloc;
- (BOOL)createGlObjectsIfNeeded;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)context;
- (id)converter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)bufferType;
- (void)setBufferType:(unsigned long long)arg1;
- (unsigned long long)format;
- (void)setFormat:(unsigned long long)arg1;
- (id)srcBuffer;
- (void)setSrcBuffer:(id)arg1;
- (id)dstBuffer;
- (void)setDstBuffer:(id)arg1;
- (void).cxx_destruct;
@end

