@interface MagicBrushRenderTarget : NSObject
{
    int _canvasId; // +0x8
    unsigned long long _lastSubmitTime; // +0x10
    shared_ptr<magicbrush::MagicBrushRenderTarget> _rt; // +0x18
}
- (void)destroy;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (unsigned long long)lastSubmitTime;
- (void)setLastSubmitTime:(unsigned long long)arg1;
- (shared_ptr<magicbrush::MagicBrushRenderTarget>)rt;
- (void)setRt:(shared_ptr<magicbrush::MagicBrushRenderTarget>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
