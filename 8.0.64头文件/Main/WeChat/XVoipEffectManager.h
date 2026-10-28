@interface XVoipEffectManager : WeVisVoipEffectMgr
{
    CGSize _renderTargetSizeWithoutRotation; // +0x30
    CGSize _renderTargetSize; // +0x40
    CGSize _yuvTextureSize; // +0x50
    CGSize _yuvTexturePoolSize; // +0x60
    CGSize _renderingInputSize; // +0x70
    XImage * _renderingInputTexture; // +0x80
    XImage * _algorithmInputTexture; // +0x88
    XImage * _renderingOutputTexture; // +0x90
    XImage * _renderOutputTextureY; // +0x98
    XImage * _renderOutputTextureUV; // +0xa0
    __CVPixelBufferPool * _renderOuputYUVPool; // +0xa8
    unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _yuvToRGBFilter; // +0xb0
    unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _rgbImageCropFilter; // +0xb8
    unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> _rgb2Y; // +0xc0
    unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> _rgb2UV; // +0xc8
    unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> _denosingFilter; // +0xd0
    unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> _clarityFilter; // +0xd8
    SpatiotemporalDenosingPreProcess * denosingPreProcess; // +0xe0
    vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData; // +0xe8
    ObjectRef<rfx::RfxTexture> _exportedRenderingOutput; // +0x100
    unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> _liveDenoising; // +0x108
    unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _algorithmGraph; // +0x110
    XMMGPUClarityPreProcess * _clarityPreProcess; // +0x118
}
- (id)initWithSceneType:(long long)arg1 modelKeyArray:(id)arg2 runDeviceType:(unsigned long long)arg3 isAllowFp16:(BOOL)arg4;
- (void)dealloc;
- (void)setRGBATextureSize:(CGSize)arg1 yuvSize:(CGSize)arg2;
- (BOOL)updateExtraOutputTextureSize;
- (CGSize)getAlgorithmInputSize;
- (BOOL)updateTexturesWithClipSize:(CGSize)arg1;
- (BOOL)callFaceTrack:(shared_ptr<wevision::HardwareBuffer>)arg1;
- (void)enableClarityFilter:(BOOL)arg1 withMode:(int)arg2;
- (void)enableSTDenoiseFilter:(BOOL)arg1 useSpatioFilter:(BOOL)arg2 useMultiTemporalFilter:(BOOL)arg3;
- (void)encodeClarifyConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 pixelMapping:(const void *)arg5;
- (void)encodeConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4;
- (void)encodeScale:(RGTexture * *)arg1 uv:(RGTexture * *)arg2 toTexture:(RGTexture * *)arg3 graph:(void *)arg4 flipX:(BOOL)arg5;
- (void)encodeTrackFace:(RGTexture * *)arg1 graph:(void *)arg2;
- (void)executeAlgorithm:(__CVBuffer *)arg1;
- (void)encodeOriginalDenosingYTexture:(RGTexture * *)arg1 uvTexture:(RGTexture * *)arg2 toTexture:(RGTexture * *)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (void)encodeRciEffect:(RGTexture * *)arg1 toTexture:(RGTexture * *)arg2 graph:(void *)arg3;
- (void)encodeRGB:(void *)arg1 toY:(void *)arg2 toUV:(void *)arg3 graph:(void *)arg4;
- (void *)registerPixelBuffer:(__CVBuffer *)arg1 forPlane:(unsigned int)arg2 toGraph:(void *)arg3 name:(id)arg4;
- (BOOL)encodeDenosing:(__CVBuffer *)arg1 cameraOutputY:(void *)arg2 cameraOutputUV:(void *)arg3 renderTarget:(void *)arg4 toGraph:(void *)arg5;
- (void)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 toRGBAImage:(id *)arg2 yuvPixelBuffer:(__CVBuffer * *)arg3 cropSizeWithoutRotation:(CGSize)arg4 flipX:(BOOL)arg5 shouldIgnoreBackground:(BOOL)arg6;
- (void)clean;
- (id)clarityPreProcess;
- (void)setClarityPreProcess:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
