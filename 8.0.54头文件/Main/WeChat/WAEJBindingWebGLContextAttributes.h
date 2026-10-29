@interface WAEJBindingWebGLContextAttributes : WAEJBindingBase
{
    BOOL _mAlpha; // +0x20
    BOOL _mDepth; // +0x21
    BOOL _mStencil; // +0x22
    BOOL _mAntialias; // +0x23
    BOOL _mPremultipliedAlpha; // +0x24
    BOOL _mPreserveDrawingBuffer; // +0x25
}
+ (void *)_ptr_to_get_alpha;
+ (void *)_ptr_to_get_depth;
+ (void *)_ptr_to_get_stencil;
+ (void *)_ptr_to_get_antialias;
+ (void *)_ptr_to_get_premultipliedAlpha;
+ (void *)_ptr_to_get_preserveDrawingBuffer;
- (OpaqueJSValue *)_get_alpha:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_depth:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_stencil:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_antialias:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_premultipliedAlpha:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_preserveDrawingBuffer:(OpaqueJSContext *)arg1;
- (BOOL)_mAlpha;
- (void)set_mAlpha:(BOOL)arg1;
- (BOOL)_mDepth;
- (void)set_mDepth:(BOOL)arg1;
- (BOOL)_mStencil;
- (void)set_mStencil:(BOOL)arg1;
- (BOOL)_mAntialias;
- (void)set_mAntialias:(BOOL)arg1;
- (BOOL)_mPremultipliedAlpha;
- (void)set_mPremultipliedAlpha:(BOOL)arg1;
- (BOOL)_mPreserveDrawingBuffer;
- (void)set_mPreserveDrawingBuffer:(BOOL)arg1;
@end

