@interface MagicSclViewDelegateManager : NSObject
{
    NSMapTable * _map; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)registerViewDelegate:(id)arg1 delegate:(id)arg2;
- (void)unregisterViewDelegate:(id)arg1;
- (id)delegateForFrameSetId:(id)arg1;
- (void)onFrameSetBind:(id)arg1 rootId:(id)arg2;
- (void)onFrameSetResize:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onFrameSetUnbind:(id)arg1;
- (void)onCanvasCreate:(id)arg1 canvasId:(unsigned long long)arg2;
- (void)onCanvasLayout:(id)arg1 canvasId:(unsigned long long)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6 zIndex:(int)arg7;
- (void)onCanvasDestroy:(id)arg1 canvasId:(unsigned long long)arg2;
- (void)onCanvasFirstFrameRendered:(id)arg1 canvasId:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
