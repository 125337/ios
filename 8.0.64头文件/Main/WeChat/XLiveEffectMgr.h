@interface XLiveEffectMgr : WeVisLiveEffectMgr
{
    CGSize _renderTargetSizeWithoutRotation; // +0x30
    CGSize _renderTargetSize; // +0x40
    CGSize _yuvTextureSize; // +0x50
    CGSize _yuvTexturePoolSize; // +0x60
    CGSize _renderingInputSize; // +0x70
    XImage * _renderingInputTexture; // +0x80
    XImage * _algorithmInputTexture; // +0x88
    XImage * _renderOutputTextureY; // +0x90
    XImage * _renderOutputTextureUV; // +0x98
    __CVPixelBufferPool * _renderOuputYUVPool; // +0xa0
    unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _yuvToRGBFilter; // +0xa8
    unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _bgra8ImageCropFilter; // +0xb0
    unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _rgbImageCropFilter; // +0xb8
    unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> _rgb2Y; // +0xc0
    unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> _rgb2UV; // +0xc8
    unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> _denosingFilter; // +0xd0
    unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> _clarityFilter; // +0xd8
    SpatiotemporalDenosingPreProcess * denosingPreProcess; // +0xe0
    vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData; // +0xe8
    unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> _liveDenoising; // +0x100
    unique_ptr<rfx::XLiveCompose, std::default_delete<rfx::XLiveCompose>> _liveComposing; // +0x108
    float _rotationInDegree; // +0x110
    unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _algorithmGraph; // +0x118
    XLiveRenderTargetPool * _pool; // +0x120
    BOOL _allowCompressedForRenderingYUV; // +0x128
    XMMGPUClarityPreProcess * _clarityPreProcess; // +0x130
}
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(BOOL)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8;
- (void)enableSTDenoiseFilter:(BOOL)arg1 useSpatioFilter:(BOOL)arg2;
- (void)enableClarityFilter:(BOOL)arg1 withMode:(int)arg2;
- (void)dealloc;
- (void)setOutputRGBAtTextureSize:(CGSize)arg1 yuvSize:(CGSize)arg2;
- (unsigned int)getSuitablePixelFormatType;
- (BOOL)updateExtraOutputTextureSize;
- (void)clean;
- (BOOL)updateTexturesWithClipSize:(CGSize)arg1;
- (CGSize)getAlgorithmInputSize;
- (void)encodeClarifyConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 pixelMapping:(const void *)arg5 flipX:(BOOL)arg6;
- (void)encodeConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 flipX:(BOOL)arg5 range:(int)arg6 standard:(int)arg7;
- (void)encodeConvertYPanel:(id)arg1 uPanel:(id)arg2 vPanel:(id)arg3 toRGB:(void *)arg4 graph:(void *)arg5 flipX:(BOOL)arg6;
- (void)encodeConvertYPanel:(id)arg1 uvPanel:(id)arg2 toRGB:(void *)arg3 graph:(void *)arg4 flipX:(BOOL)arg5;
- (void)encodeScale:(RGTexture * *)arg1 uv:(RGTexture * *)arg2 toTexture:(RGTexture * *)arg3 graph:(void *)arg4 flipX:(BOOL)arg5;
- (void)composeElements:(id)arg1 toTexture:(RGTexture * *)arg2 graph:(void *)arg3 targetSize:(CGSize)arg4;
- (BOOL)callFaceTrack:(shared_ptr<wevision::HardwareBuffer>)arg1;
- (void *)encodeTrackFace:(RGTexture * *)arg1 graph:(void *)arg2;
- (void)encodeDenosingYTexture:(RGTexture * *)arg1 uvTexture:(RGTexture * *)arg2 toTexture:(RGTexture * *)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (void)encodeRciEffect:(RGTexture * *)arg1 toTexture:(RGTexture * *)arg2 graph:(void *)arg3;
- (void)encodeRGB:(void *)arg1 toY:(void *)arg2 toUV:(void *)arg3 graph:(void *)arg4;
- (void *)registerPixelBuffer:(__CVBuffer *)arg1 forPlane:(unsigned int)arg2 toGraph:(void *)arg3 name:(id)arg4;
- (void)setRotation:(int)arg1;
- (id)processRenderFrames:(id)arg1;
- (void)executeAlgorithmWithComposingElements:(id)arg1;
- (id)processPixelBuffer:(__CVBuffer *)arg1 flipX:(BOOL)arg2 algorithmTexSize:(CGSize *)arg3;
- (CGSize)executeAlgorithm:(__CVBuffer *)arg1;
- (id)processSampleBuffer:(opaqueCMSampleBuffer *)arg1 yuvPixelBuffer:(__CVBuffer * *)arg2 flipX:(BOOL)arg3;
- (int)getMaxTextureImageUnit;
- (BOOL)allowCompressedForRenderingYUV;
- (void)setAllowCompressedForRenderingYUV:(BOOL)arg1;
- (id)clarityPreProcess;
- (void)setClarityPreProcess:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
