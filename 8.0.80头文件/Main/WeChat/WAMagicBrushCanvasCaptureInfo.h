@interface WAMagicBrushCanvasCaptureInfo : NSObject
{
    NSMapTable * _delegateMap; // +0x8
    shared_ptr<magicbrush::MagicBrushRenderTarget> _rendertarget; // +0x10
}
- (id)init;
- (shared_ptr<magicbrush::MagicBrushRenderTarget>)rendertarget;
- (void)setRendertarget:(shared_ptr<magicbrush::MagicBrushRenderTarget>)arg1;
- (id)delegateMap;
- (void)setDelegateMap:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
