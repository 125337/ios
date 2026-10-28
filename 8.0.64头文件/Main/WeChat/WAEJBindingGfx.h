@interface WAEJBindingGfx : WAEJBindingBase
{
    WAEJCanvasContextWebGL * renderingContext; // +0x20
    GfxHandler _handler; // +0x28
    _sg_state_t * _sg; // +0x68
    map<unsigned long long, OpaqueJSValue *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, OpaqueJSValue *>>> _textureIndexToGfxHandler; // +0x70
}
+ (void *)_ptr_to_func_createNativeBuffer;
+ (void *)_ptr_to_func_makePass;
+ (void *)_ptr_to_func_makeBuffer;
+ (void *)_ptr_to_func_updateBuffer;
+ (void *)_ptr_to_func_makeShader;
+ (void *)_ptr_to_func_makeImage;
+ (void *)_ptr_to_func_updateImage;
+ (void *)_ptr_to_func_makePipeline;
+ (void *)_ptr_to_func_beginDefaultPass;
+ (void *)_ptr_to_func_beginPass;
+ (void *)_ptr_to_func_applyPipeline;
+ (void *)_ptr_to_func_applyBindings;
+ (void *)_ptr_to_func_applyUniforms;
+ (void *)_ptr_to_func_applyViewport;
+ (void *)_ptr_to_func_applyScissorRect;
+ (void *)_ptr_to_func_draw;
+ (void *)_ptr_to_func_endPass;
+ (void *)_ptr_to_func_commit;
+ (void *)_ptr_to_func_queryFeatures;
+ (void *)_ptr_to_func_queryGlyphBitmapInfo;
+ (void *)_ptr_to_func_queryPassState;
+ (void *)_ptr_to_func_queryBufferState;
+ (void *)_ptr_to_func_queryImageState;
+ (void *)_ptr_to_func_queryShaderState;
+ (void *)_ptr_to_func_queryPipelineState;
+ (void *)_ptr_to_func_decodeImage;
- (_sg_state_t *)get_sg_state;
- (void *)get_sg_state_cpp;
- (id)initWithRenderingContext:(id)arg1 options:(id)arg2;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (OpaqueJSValue *)_func_createNativeBuffer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_makePass:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_makeBuffer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_updateBuffer:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_makeShader:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_makeImage:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_updateImage:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_makePipeline:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_beginDefaultPass:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_beginPass:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_applyPipeline:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_applyBindings:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_applyUniforms:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_applyViewport:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_applyScissorRect:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_draw:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_endPass:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_commit:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryFeatures:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryGlyphBitmapInfo:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryPassState:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryBufferState:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryImageState:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryShaderState:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_queryPipelineState:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (OpaqueJSValue *)_func_decodeImage:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3 exception:(const OpaqueJSValue * *)arg4;
- (void)loadPixelsFromCGImage:(CGImage *)arg1 dst:(void *)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
