@interface WAEJBindingWebGLSync : WAEJBindingWebGLObject
{
    __GLsync * sync; // +0x30
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 sync:(__GLsync *)arg4;
+ (__GLsync *)syncFromJSValue:(OpaqueJSValue *)arg1;
- (id)initWithWebGLContext:(id)arg1 sync:(__GLsync *)arg2;
- (void)invalidate;
@end

