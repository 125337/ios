@interface TXCTransformFilter : TXCBaseFilter
{
    id <TXIGlContext> _context; // +0x8
    TXCGlFrameBuffer * _frameBuffer; // +0x10
    TXCGlProgram * _program; // +0x18
}
- (id)initWithContext:(id)arg1;
- (BOOL)createGlObjectsIfNeeded;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)context;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (void).cxx_destruct;
@end

