@interface MBJITRuntimeWindowDelegate : NSObject <MagicBrushCoreScreenCanvasDelegate>
{
    int _workerId; // +0x8
    MBJITRuntime * _runtime; // +0x10
    NSMutableDictionary * _canvasId2ExternalIdMap; // +0x18
    weak_ptr<magicbrush::MagicBrushCore> _mb; // +0x20
}
- (id)initWithRuntime:(id)arg1 mb:(const void *)arg2 workerId:(int)arg3;
- (void)onScreenCanvasCreated:(int)arg1 externalId:(int)arg2;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (int)workerId;
- (void)setWorkerId:(int)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (weak_ptr<magicbrush::MagicBrushCore>)mb;
- (void)setMb:(weak_ptr<magicbrush::MagicBrushCore>)arg1;
- (id)canvasId2ExternalIdMap;
- (void)setCanvasId2ExternalIdMap:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
