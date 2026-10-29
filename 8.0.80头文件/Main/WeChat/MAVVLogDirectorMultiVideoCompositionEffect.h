@interface MAVVLogDirectorMultiVideoCompositionEffect : MAVBaseMultiVideoCompositionEffect
{
    BOOL _outputSizeChanged; // +0x8
    float _outputWidth; // +0xc
    float _outputHeight; // +0x10
    MAVCopyRendererMetal * _copyRender; // +0x18
    __CVBuffer * _destTexRef; // +0x20
    CGRect _outputCrop; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)copyRender;
- (void)setAssetSize:(CGSize)arg1;
- (void)setOutputCrop:(CGRect)arg1;
- (int)checkCreateDestTextureFromPixelBuffer:(__CVBuffer *)arg1;
- (void)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3 toPixelBuffer:(__CVBuffer *)arg4;
- (void)addTrackInputTexture:(id)arg1;
- (CGRect)calcCenterCropCropRect:(CGRect)arg1 track:(id)arg2;
- (CGRect)outputCrop;
- (float)outputWidth;
- (void)setOutputWidth:(float)arg1;
- (float)outputHeight;
- (void)setOutputHeight:(float)arg1;
- (BOOL)outputSizeChanged;
- (void)setOutputSizeChanged:(BOOL)arg1;
- (void)setCopyRender:(id)arg1;
- (__CVBuffer *)destTexRef;
- (void)setDestTexRef:(__CVBuffer *)arg1;
- (void).cxx_destruct;
@end
