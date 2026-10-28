@interface WAWebViewPlugin_WebGLCanvas : WAWebViewPlugin_embedView <WAEAGLViewGestureDelegate>
{
    NSNumber * _oldScrollEnabled; // +0x8
    WAJSCoreService * _service; // +0x10
    NSMutableDictionary * _canvasMap; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertCanvas:(CGRect)arg1 canvasId:(int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4 block:(id /* block */)arg5;
- (void)removeCanvas:(unsigned int)arg1;
- (void)onTouchesBegin:(id)arg1;
- (void)onTouchesEnd:(id)arg1;
- (void)onTouchesCancel:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)canvasMap;
- (void)setCanvasMap:(id)arg1;
- (void).cxx_destruct;
@end
