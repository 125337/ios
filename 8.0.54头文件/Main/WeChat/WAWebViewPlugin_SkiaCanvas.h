@interface WAWebViewPlugin_SkiaCanvas : WAWebViewPlugin_embedView <WASkiaViewDelegate, WASkiaCanvasTextureDelegate, NativeRenderDelegate>
{
    NSNumber * _oldScrollEnabled; // +0x8
    WAJSContextPlugin_NativeRender * _nativeRender; // +0x10
    NSMutableArray * _canvasViews; // +0x18
}
- (unsigned int)insertCanvas:(CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4;
- (BOOL)removeChildView:(unsigned int)arg1;
- (void)render;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setUserData:(id)arg1 canvasId:(unsigned int)arg2;
- (void)setInteractionEnable:(BOOL)arg1 mode:(long long)arg2 canvasId:(unsigned int)arg3;
- (__CVBuffer *)copyPixelBufferByViewId:(unsigned int)arg1;
- (void)onTouchDown:(id)arg1;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onLongPress:(id)arg1 canvas:(id)arg2;
- (id)canvasViews;
- (void)setCanvasViews:(id)arg1;
- (void).cxx_destruct;
@end

