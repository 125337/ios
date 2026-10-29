@interface VoIPCallRecordingRemotePlugin : NSObject <VoIPCanvasPlugin>
{
    CGSize _canvasSize; // +0x8
    __CVBuffer * _pixelBuffer; // +0x18
    __CVBuffer * _YMetalTexture; // +0x20
    __CVBuffer * _UVMetalTexture; // +0x28
    unsigned long long _bufferWidth; // +0x30
    unsigned long long _bufferHeight; // +0x38
    VoIPCallRecordingUIState * _uiState; // +0x40
    __CVBuffer * _placeholderPixelBuffer; // +0x48
    __CVBuffer * _placeholderTexture; // +0x50
    unsigned long long _placeholderWidth; // +0x58
    unsigned long long _placeholderHeight; // +0x60
    VoIPCallStreamComposer * _composer; // +0x68
}
- (id)initWithCanvasSize:(CGSize)arg1;
- (void)dealloc;
- (void)setRemotePixelBuffer:(__CVBuffer *)arg1;
- (void)setUIState:(id)arg1;
- (void)setRemotePlaceholderPixelBuffer:(__CVBuffer *)arg1;
- (void)p_clearTextures;
- (void)p_clearPlaceholderTexture;
- (void)canvasWillRender:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(BOOL)arg2;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)p_customizePlaceholderRenderCommandEncoder:(id)arg1;
- (CGRect)p_splitHalfRectForAxis:(unsigned long long)arg1 slot:(unsigned long long)arg2;
- (CGRect)p_computeNormalizedRectForUIState:(id)arg1;
- (id)composer;
- (void)setComposer:(id)arg1;
- (void).cxx_destruct;
@end
