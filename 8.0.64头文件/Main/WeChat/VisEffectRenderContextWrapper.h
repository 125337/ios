@interface VisEffectRenderContextWrapper : NSObject
{
    long long _renderType; // +0x8
    MMOpenGLContext * _openGLContext; // +0x10
    XImageContext * _rciContext; // +0x18
}
- (id)initWithOpenGLContext:(id)arg1;
- (id)initWithRciContext:(id)arg1;
- (void)runSync:(id /* block */)arg1;
- (void)runAsync:(id /* block */)arg1;
- (long long)renderType;
- (void)setRenderType:(long long)arg1;
- (id)openGLContext;
- (void)setOpenGLContext:(id)arg1;
- (id)rciContext;
- (void)setRciContext:(id)arg1;
- (void).cxx_destruct;
@end
