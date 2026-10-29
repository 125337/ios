@interface MagicWeAppCardSclFrameSetView : MagicSclFrameSetView <WANativeViewTextureInterface>
{
    BOOL _haveNewNativeViewTexture; // +0x8
    __CVBuffer * _pixelBuffer; // +0x10
    MBExternalViewStub * _mbView; // +0x18
}
- (long long)getNativeViewContentMode;
- (__CVBuffer *)getNativeViewTexture;
- (unsigned long long)getNativeViewTextureRotation;
- (void)initNativeViewTexture;
- (void)onPixelBufferCallBack:(id)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)setMBExternalViewStub:(id)arg1;
- (BOOL)haveNewNativeViewTexture;
- (void)setHaveNewNativeViewTexture:(BOOL)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (id)mbView;
- (void)setMbView:(id)arg1;
- (void).cxx_destruct;
@end

