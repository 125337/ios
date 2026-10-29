@interface WAJSContextPlugin_NativeRender : WAJSContextPluginBase <ResourceLoaderDelegate>
{
    BOOL _paused; // +0x8
    BOOL _destroyed; // +0x9
    BOOL _present; // +0xa
    id <NativeRenderDelegate> _webglDelegate; // +0x10
    id <NativeRenderDelegate> _canvasDelegate; // +0x18
    NSMutableDictionary * _mapCanvasContexts; // +0x20
    NSMutableDictionary * _rafObjs; // +0x28
    CADisplayLink * _displayLink; // +0x30
    WANonRetainingProxy * _proxy; // +0x38
    NSMutableArray * _keepCanvas; // +0x40
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)initEnv:(id)arg1;
- (void)initDisplayLink;
- (void)initRAF;
- (id)createWebGLContext:(unsigned int)arg1;
- (void)removeCanvas:(unsigned int)arg1;
- (void)run:(id)arg1;
- (void)runLoop;
- (id)getImageData:(id)arg1;
- (id)loadResource:(id)arg1 withRefererPolicy:(id)arg2;
- (void)loadResourceAsync:(id)arg1 withRefererPolicy:(id)arg2 andCallback:(id /* block */)arg3;
- (void)dispathResource:(id)arg1;
- (id)webglDelegate;
- (void)setWebglDelegate:(id)arg1;
- (id)canvasDelegate;
- (void)setCanvasDelegate:(id)arg1;
- (id)mapCanvasContexts;
- (void)setMapCanvasContexts:(id)arg1;
- (id)rafObjs;
- (void)setRafObjs:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)proxy;
- (void)setProxy:(id)arg1;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (BOOL)destroyed;
- (void)setDestroyed:(BOOL)arg1;
- (BOOL)present;
- (void)setPresent:(BOOL)arg1;
- (id)keepCanvas;
- (void)setKeepCanvas:(id)arg1;
- (void).cxx_destruct;
@end

