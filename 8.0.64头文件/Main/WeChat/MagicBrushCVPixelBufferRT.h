@interface MagicBrushCVPixelBufferRT : MagicBrushRenderTarget <CVPixelBufferRenderTargetDelegate>
{
    id <MagicBrushCVPixelBufferRTDelegate> _delegate; // +0x20
}
- (id)initForCanvas:(int)arg1 delegate:(id)arg2 inRuntime:(id)arg3;
- (void)onFrameAvailable:(__CVBuffer *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
