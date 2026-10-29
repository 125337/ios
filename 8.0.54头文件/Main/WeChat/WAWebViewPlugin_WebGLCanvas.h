@interface WAWebViewPlugin_WebGLCanvas : WAWebViewPlugin_embedView <WAEAGLViewGestureDelegate>
{
    NSNumber * _oldScrollEnabled; // +0x8
    WAJSCoreService * _service; // +0x10
    WAOpenGLView * _glview; // +0x18
    NSMutableDictionary * _canvasMap; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertCanvas:(CGRect)arg1 canvasId:(int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4 useNano:(BOOL)arg5 block:(id /* block */)arg6;
- (void)resizeView:(unsigned int)arg1 region:(CGRect)arg2;
- (void)removeCanvas:(unsigned int)arg1;
- (void)setCaptureDelegate:(unsigned int)arg1 offScreenCanvasId:(unsigned int)arg2 mark:(unsigned int)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)onTouchesBegin:(id)arg1;
- (void)onTouchesEnd:(id)arg1;
- (void)onTouchesCancel:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)glview;
- (void)setGlview:(id)arg1;
- (id)canvasMap;
- (void)setCanvasMap:(id)arg1;
- (void).cxx_destruct;
@end

