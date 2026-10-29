@interface MagicWeAppCardSclFrameSetView : MagicSclFrameSetView <WANativeViewTextureInterface>
{
    BOOL _nativeViewUseTexture; // +0x8
    WANativeViewTexture * _nativeViewTexture; // +0x10
    id /* block */ _pixelBufferUpdateBlock; // +0x18
    MBExternalViewStub * _mbView; // +0x20
    double _lastLogTime; // +0x28
}
- (id)init:(id)arg1 bizName:(id)arg2;
- (void)onPixelBufferCallBack:(id)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)setMBExternalViewStub:(id)arg1;
- (BOOL)nativeViewUseTexture;
- (void)setNativeViewUseTexture:(BOOL)arg1;
- (id)nativeViewTexture;
- (void)setNativeViewTexture:(id)arg1;
- (id /* block */)pixelBufferUpdateBlock;
- (void)setPixelBufferUpdateBlock:(id /* block */)arg1;
- (id)mbView;
- (void)setMbView:(id)arg1;
- (double)lastLogTime;
- (void)setLastLogTime:(double)arg1;
- (void).cxx_destruct;
@end
