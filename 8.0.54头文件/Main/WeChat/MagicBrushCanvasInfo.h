@interface MagicBrushCanvasInfo : NSObject
{
    BOOL _onscreen; // +0x8
    int _canvasId; // +0xc
    int _contextId; // +0x10
    NSMutableSet * _renderTargets; // +0x18
    NSMutableSet * _touchIdSet; // +0x20
    NativeRenderCanvasHost * _nativeRenderCanvasHost; // +0x28
}
- (id)renderTargets;
- (void)setRenderTargets:(id)arg1;
- (id)touchIdSet;
- (void)setTouchIdSet:(id)arg1;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (int)contextId;
- (void)setContextId:(int)arg1;
- (BOOL)onscreen;
- (void)setOnscreen:(BOOL)arg1;
- (NativeRenderCanvasHost *)nativeRenderCanvasHost;
- (void)setNativeRenderCanvasHost:(NativeRenderCanvasHost *)arg1;
- (void).cxx_destruct;
@end

