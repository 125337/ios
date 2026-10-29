@interface GPUImageOutput : NSObject
{
    GPUImageFramebuffer * outputFramebuffer; // +0x8
    NSMutableArray * targets; // +0x10
    NSMutableArray * targetTextureIndices; // +0x18
    CGSize inputTextureSize; // +0x20
    CGSize cachedMaximumOutputSize; // +0x30
    CGSize forcedMaximumSize; // +0x40
    BOOL overrideInputSize; // +0x50
    BOOL allTargetsWantMonochromeData; // +0x51
    BOOL usingNextFrameForImageCapture; // +0x52
    BOOL isUseRGB2YUV420; // +0x53
    BOOL enableConstantTexture; // +0x54
    GPUImageFramebuffer * yuv420Framebuffer; // +0x58
    GLProgram * rgb2LumaProgram; // +0x60
    GLProgram * rgb2ChromaNVProgram; // +0x68
    BOOL _shouldSmoothlyScaleOutput; // +0x70
    BOOL _shouldIgnoreUpdatesToThisTarget; // +0x71
    BOOL _enabled; // +0x72
    GPUImageMovieWriter * _audioEncodingTarget; // +0x78
    id <GPUImageInput> _targetToIgnoreForUpdates; // +0x80
    id /* block */ _frameProcessingCompletionBlock; // +0x88
    GPUTextureOptions _outputTextureOptions; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)setInputFramebufferForTarget:(id)arg1 atIndex:(long long)arg2;
- (id)yuv420FramebufferForOutput;
- (void)removeYuv420Framebuffer;
- (void)initRGBtoYUV420Filter;
- (void)setRGB2YUV420Process:(BOOL)arg1;
- (BOOL)isUseRGB2YUV420;
- (id)framebufferForOutput;
- (void)removeOutputFramebuffer;
- (void)notifyTargetsAboutNewOutputTexture;
- (id)targets;
- (void)addTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)removeTarget:(id)arg1;
- (void)removeAllTargets;
- (void)forceProcessingAtSize:(CGSize)arg1;
- (void)forceProcessingAtSizeRespectingAspectRatio:(CGSize)arg1;
- (void)useNextFrameForImageCapture;
- (CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (CGImage *)newCGImageByFilteringCGImage:(CGImage *)arg1;
- (BOOL)providesMonochromeOutput;
- (id)imageFromCurrentFramebuffer;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)arg1;
- (id)imageByFilteringImage:(id)arg1;
- (CGImage *)newCGImageByFilteringImage:(id)arg1;
- (void)setAudioEncodingTarget:(id)arg1;
- (void)setOutputTextureOptions:(GPUTextureOptions)arg1;
- (BOOL)shouldSmoothlyScaleOutput;
- (void)setShouldSmoothlyScaleOutput:(BOOL)arg1;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setShouldIgnoreUpdatesToThisTarget:(BOOL)arg1;
- (id)audioEncodingTarget;
- (id)targetToIgnoreForUpdates;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (id /* block */)frameProcessingCompletionBlock;
- (void)setFrameProcessingCompletionBlock:(id /* block */)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (GPUTextureOptions)outputTextureOptions;
- (void).cxx_destruct;
@end
