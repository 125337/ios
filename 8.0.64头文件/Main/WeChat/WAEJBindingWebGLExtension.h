@interface WAEJBindingWebGLExtension : WAEJBindingBase
{
    WAEJBindingCanvasContextWebGLBase * webglContext; // +0x20
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
- (id)initWithWebGLContext:(id)arg1;
- (void)dealloc;
- (void)onEnable;
@end
