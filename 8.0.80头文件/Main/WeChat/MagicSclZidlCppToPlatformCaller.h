@interface MagicSclZidlCppToPlatformCaller : NSObject <WeMagicAdCppToPlatformBase>
{
    WeMagicAdCppToPlatformCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)notifyFlutterCanvasInfoAsync:(unsigned long long)arg1 bizNam:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onCanvasCreateAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onCanvasLayoutAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3 left:(float)arg4 top:(float)arg5 width:(float)arg6 height:(float)arg7 zIndex:(int)arg8;
- (void)onCanvasDestroyAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onCanvasFirstFrameRenderedAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onFrameSetBindAsync:(unsigned long long)arg1 frameSetId:(id)arg2 rootId:(id)arg3;
- (void)onFrameSetUnBindAsync:(unsigned long long)arg1 frameSetId:(id)arg2;
- (void)onFrameSetResizeAsync:(unsigned long long)arg1 frameSetId:(id)arg2 width:(int)arg3 height:(int)arg4;
- (void)getFrameSetSizeAsync:(unsigned long long)arg1 frameSetIdm:(id)arg2;
- (void).cxx_destruct;
@end
