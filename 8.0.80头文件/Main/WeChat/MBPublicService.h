@interface MBPublicService : MagicBrushBiz <IMBLifecycle, IMBPkgManagement, IMBPublicServiceDispatcher>
{
    BOOL _invalid; // +0x8
    BOOL _isPrepared; // +0x9
    NSString * _alias; // +0x10
    NSPointerArray * _pendingBizArray; // +0x18
    NSMutableDictionary * _canvasIdToBizName; // +0x20
    NSMutableDictionary * _canvasIdToPendingEvent; // +0x28
}
- (id)initWithInfo:(id)arg1 internalImpl:(BOOL)arg2;
- (void)destroy;
- (void)provideMainScript:(id /* block */)arg1;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)bindBiz:(id)arg1;
- (void)unbindBiz:(id)arg1;
- (void)postMessage:(id)arg1 toBiz:(id)arg2;
- (void)receiveMessage:(id)arg1 fromBiz:(id)arg2;
- (void)bindCanvas:(unsigned int)arg1 withBiz:(id)arg2;
- (void)notifyExternalCVPixelBuffer:(id)arg1 elementId:(int)arg2 buffer:(__CVBuffer *)arg3;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)getBizForCanvasId:(unsigned int)arg1;
- (void)onCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(CGRect)arg3;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)alias;
- (BOOL)invalid;
- (void)setInvalid:(BOOL)arg1;
- (id)pendingBizArray;
- (void)setPendingBizArray:(id)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (id)canvasIdToBizName;
- (void)setCanvasIdToBizName:(id)arg1;
- (id)canvasIdToPendingEvent;
- (void)setCanvasIdToPendingEvent:(id)arg1;
- (void).cxx_destruct;
@end
