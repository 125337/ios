@interface WxpayPagTargetPlayer : NSObject <WxpayPagRenderTarget>
{
    shared_ptr<(anonymous namespace)::Pool> _pool; // +0x8
    EAGLContext * _context; // +0x18
    id <WxpayPagTargetPlayer> _provider; // +0x20
    long long _width; // +0x28
    long long _height; // +0x30
    unsigned long long _next; // +0x38
}
+ (id)create:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (long long)width;
- (long long)height;
- (unsigned long long)bufferCount;
- (id)glContext;
- (__CVBuffer *)pixelBufferAtIndex:(unsigned long long)arg1;
- (BOOL)prime:(double)arg1;
- (PagEngineResult)renderFrame:(double)arg1;
- (void)close;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
