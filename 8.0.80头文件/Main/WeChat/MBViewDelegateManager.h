@interface MBViewDelegateManager : NSObject
{
    NSMapTable * _map; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (id)init;
- (void)registerViewId:(id)arg1 delegate:(id)arg2;
- (void)unregisterViewId:(id)arg1;
- (id)delegateForViewId:(id)arg1;
- (void)onCanvasCreate:(id)arg1 canvasId:(unsigned long long)arg2;
- (void)onCanvasLayout:(id)arg1 canvasId:(unsigned long long)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6 zIndex:(int)arg7;
- (void)onCanvasDestroy:(id)arg1 canvasId:(unsigned long long)arg2;
- (void)onCanvasFirstFrameRendered:(id)arg1 canvasId:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
