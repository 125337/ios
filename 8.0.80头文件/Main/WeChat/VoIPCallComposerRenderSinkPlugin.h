@interface VoIPCallComposerRenderSinkPlugin : NSObject <VoIPCanvasPlugin>
{
    BOOL _lastIsSucceed; // +0x8
    NSObject<OS_dispatch_semaphore> * _sem; // +0x10
}
- (void)canvasWillRender:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(BOOL)arg2;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (id)sem;
- (void)setSem:(id)arg1;
- (BOOL)lastIsSucceed;
- (void)setLastIsSucceed:(BOOL)arg1;
- (void).cxx_destruct;
@end
