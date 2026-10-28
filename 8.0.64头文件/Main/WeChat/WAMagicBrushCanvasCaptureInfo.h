@interface WAMagicBrushCanvasCaptureInfo : NSObject
{
    MagicBrushCVPixelBufferRT * _rendertarget; // +0x8
    NSMapTable * _delegateMap; // +0x10
}
- (id)init;
- (id)rendertarget;
- (void)setRendertarget:(id)arg1;
- (id)delegateMap;
- (void)setDelegateMap:(id)arg1;
- (void).cxx_destruct;
@end
