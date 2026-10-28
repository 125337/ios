@interface WAWebViewPlugin_CustomCanvas : WAWebViewPlugin_embedView <IMMQuartz2DDelegate>
{
    long long _tagMax; // +0x8
    NSMutableDictionary * _cachedImage; // +0x10
    NSMutableArray * _completionHandlerList; // +0x18
    NSNumber * _oldScrollEnabled; // +0x20
}
- (id)init;
- (id)getImage:(id)arg1;
- (void)onTouchDown:(id)arg1;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (void)onCanvasDrawRectFinished:(id)arg1;
- (void)setInteractionEnable:(BOOL)arg1 mode:(int)arg2 canvasId:(unsigned int)arg3;
- (unsigned int)insertCanvas:(CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (void)drawCanvas:(unsigned int)arg1 actions:(id)arg2 reset:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (id)canvasToImage:(unsigned int)arg1;
- (id)canvasViewWithCanvasID:(unsigned int)arg1;
- (id)canvasToImageData:(unsigned int)arg1 targetRect:(CGRect)arg2;
- (CGSize)canvasSizeWithCanvasID:(unsigned int)arg1;
- (double)canvasScaleWithCanvasID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
