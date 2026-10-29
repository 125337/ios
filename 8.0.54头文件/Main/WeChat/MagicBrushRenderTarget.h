@interface MagicBrushRenderTarget : NSObject
{
    int _canvasId; // +0x8
    MagicBrushCore * _magicbrush; // +0x10
    RenderTarget * _target; // +0x18
}
- (void)destroy;
- (void)resetTarget;
- (void)dealloc;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (id)magicbrush;
- (void)setMagicbrush:(id)arg1;
- (RenderTarget *)target;
- (void)setTarget:(RenderTarget *)arg1;
- (void).cxx_destruct;
@end

