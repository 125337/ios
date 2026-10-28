@interface TXCGlContext : NSObject <TXIGlContext>
{
    __CVOpenGLESTextureCache * _textureCache; // +0x8
    EAGLContext * _context; // +0x10
    TXCDispatchQueue * _queue; // +0x18
}
+ (BOOL)supportsFastTextureUpload:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)makeCurrent;
- (void)unmakeCurrent;
- (void)syncRunGlCommands:(id /* block */)arg1;
- (void)runGlCommands:(id /* block */)arg1;
- (void)runGlCommands:(id /* block */)arg1 handlerInBackground:(id /* block */)arg2;
- (void)runInGLQueue:(id /* block */)arg1;
- (void)assertContextIsCurrent;
- (BOOL)supportsSetUnpackRowLength;
- (unsigned int)createTextureFromPixelBuffer:(__CVBuffer *)arg1 plane:(long long)arg2 format:(int)arg3;
- (id)createContextFromContext:(id)arg1;
- (BOOL)createTextureCache;
- (__CVOpenGLESTextureCache *)textureCache;
- (id)context;
- (void)setContext:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
