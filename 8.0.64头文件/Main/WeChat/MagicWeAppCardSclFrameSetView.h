@interface MagicWeAppCardSclFrameSetView : MagicSclFrameSetView <WANativeViewTextureInterface>
{
    BOOL _nativeViewUseTexture; // +0x8
    WANativeViewTexture * _nativeViewTexture; // +0x10
    MBExternalViewStub * _mbView; // +0x18
}
- (id)init:(id)arg1 bizName:(id)arg2;
- (void)onPixelBufferCallBack:(id)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)setMBExternalViewStub:(id)arg1;
- (BOOL)nativeViewUseTexture;
- (void)setNativeViewUseTexture:(BOOL)arg1;
- (id)nativeViewTexture;
- (void)setNativeViewTexture:(id)arg1;
- (id)mbView;
- (void)setMbView:(id)arg1;
- (void).cxx_destruct;
@end
