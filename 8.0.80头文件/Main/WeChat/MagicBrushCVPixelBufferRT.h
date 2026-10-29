@interface MagicBrushCVPixelBufferRT : MagicBrushRenderTarget
{
    id <MagicBrushCVPixelBufferRTDelegate> _delegate; // +0x28
}
- (id)initForCanvas:(int)arg1 delegate:(id)arg2 inRuntime:(void *)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
