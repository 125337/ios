@interface JITRuntimeWorkerWindowDelegate : NSObject <MagicBrushCoreScreenCanvasDelegate>
{
    JITRuntimeWorker * _worker; // +0x8
    JITRuntime * _runtime; // +0x10
    NSMutableDictionary * _canvasIdToExternalIdMap; // +0x18
}
- (id)init;
- (void)onScreenCanvasCreated:(int)arg1 externalId:(int)arg2;
- (void)onScreenCanvasGotContext:(int)arg1 contextType:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasRemove:(int)arg1;
- (id)worker;
- (void)setWorker:(id)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id)canvasIdToExternalIdMap;
- (void)setCanvasIdToExternalIdMap:(id)arg1;
- (void).cxx_destruct;
@end
