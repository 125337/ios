@interface WAJSContextPlugin_Canvas : WAJSContextPluginBase <WAOpenGLViewDelegate, WAOpenGLScreenCanvasDelegate, MagicBrushCoreJSStuffDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreScreenCanvasDelegate, MagicBrushCVPixelBufferRTDelegate>
{
    id <WALivePusherPixelBufferDelegate> _livePusherDelegate; // +0x8
    id <WAMagicARPixelBufferDelegate> _magicARDelegate; // +0x10
    unsigned long long _frameCaptureState; // +0x18
    WAOpenGLView * _glview; // +0x20
    NSMapTable * _canvasMap; // +0x28
    MagicBrushCore * _mbCore; // +0x30
    NSMapTable * _glLayerMap; // +0x38
    NSMutableDictionary * _rendertargets; // +0x40
    NSMutableDictionary * _captureInfos; // +0x48
}
+ (id)getBundle;
- (id)init;
- (void)dealloc;
- (void)setupGLView;
- (id)getGLView;
- (id)getMagicBrush;
- (void)releaseMagicBrush;
- (void)setupFrameCapture;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)notifyViewCreated:(id)arg1 forViewId:(int)arg2;
- (void)notifyViewDestroyForViewId:(int)arg1;
- (void)captureMBCanvas:(unsigned int)arg1 mark:(unsigned int)arg2 delegate:(id)arg3;
- (BOOL)isNano;
- (BOOL)isFileExist:(id)arg1;
- (id)getFileData:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
- (id)getCommandBufferScript;
- (__CVBuffer *)providePixelBufferByViewId:(unsigned int)arg1 withType:(id)arg2;
- (id)onCreateScreenCanvas:(unsigned int)arg1 viewId:(int)arg2;
- (void)onJsException:(id)arg1 stack:(id)arg2;
- (void)onLoadData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onScreenCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onFrameAvailable:(__CVBuffer *)arg1 inRT:(id)arg2;
- (id)livePusherDelegate;
- (void)setLivePusherDelegate:(id)arg1;
- (id)magicARDelegate;
- (void)setMagicARDelegate:(id)arg1;
- (unsigned long long)frameCaptureState;
- (void)setFrameCaptureState:(unsigned long long)arg1;
- (id)glview;
- (void)setGlview:(id)arg1;
- (id)canvasMap;
- (void)setCanvasMap:(id)arg1;
- (id)mbCore;
- (void)setMbCore:(id)arg1;
- (id)glLayerMap;
- (void)setGlLayerMap:(id)arg1;
- (id)rendertargets;
- (void)setRendertargets:(id)arg1;
- (id)captureInfos;
- (void)setCaptureInfos:(id)arg1;
- (void).cxx_destruct;
@end

