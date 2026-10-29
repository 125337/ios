@interface MagicCanvasViewContainer : UIView <IMagicSimpleViewDelegate>
{
     canvasViews; // +0x8
     layerDelegate; // +0x10
     bound; // +0x18
     currentEnvId; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)bindWithEnvId:(unsigned long long)arg1;
- (BOOL)hasBound;
- (void)onCanvasCreateWithCanvasId:(unsigned long long)arg1;
- (void)onCanvasLayoutWithCanvasId:(unsigned long long)arg1 left:(int)arg2 top:(int)arg3 width:(int)arg4 height:(int)arg5 zIndex:(int)arg6;
- (void)onCanvasDestroyWithCanvasId:(unsigned long long)arg1;
- (void)onCanvasFirstFrameRenderedWithCanvasId:(unsigned long long)arg1;
- (void)destroyAll;
- (void).cxx_destruct;
@end
