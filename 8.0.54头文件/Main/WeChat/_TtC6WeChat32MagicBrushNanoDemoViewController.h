@interface _TtC6WeChat32MagicBrushNanoDemoViewController : MMUIViewController <MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreResourceDelegate>
{
     rt; // +0x8
     canvasMap; // +0x10
     jvm; // +0x18
     ctx; // +0x20
     thread; // +0x28
}
- (void)didAppear;
- (void)setupMB;
- (void)willDisappear;
- (void)stopThread;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)onScreenCanvasBindWindow:(int)arg1 windowId:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onLoadData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)evaluateScript;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end

