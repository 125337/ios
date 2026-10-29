@interface WAEJBindingWebGLObject : WAEJBindingBase
{
    unsigned int index; // +0x20
    WAEJBindingCanvasContextWebGLBase * webglContext; // +0x28
}
+ (int)indexFromJSValue:(OpaqueJSValue *)arg1;
+ (id)webGLObjectFromJSValue:(OpaqueJSValue *)arg1;
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 index:(unsigned int)arg4;
+ (void *)_ptr_to_func___id;
- (id)initWithWebGLContext:(id)arg1 index:(unsigned int)arg2;
- (void)invalidate;
- (unsigned int)getIndex;
- (void)dealloc;
- (OpaqueJSValue *)_func___id:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
@end

