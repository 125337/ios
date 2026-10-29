@interface MagicSclViewContainer : UIView <IMagicSclViewDelegate>
{
    unsigned long long _bizId; // +0x8
    NSMutableDictionary * _canvasViews; // +0x10
    BOOL _hasNotifiedReady; // +0x18
    id /* block */ _onFrameSetViewBoundCallback; // +0x20
    NSString * _frameSetId; // +0x28
    NSString * _rootId; // +0x30
}
- (id)initWithBizId:(unsigned long long)arg1 frameSetId:(id)arg2 rootId:(id)arg3;
- (void)setOnFrameSetViewBoundCallback:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)resizeFrameSetView:(int)arg1 height:(int)arg2;
- (void)unbindFrameSetView;
- (void)onFrameSetBind:(id)arg1 rootId:(id)arg2;
- (void)onFrameSetResize:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onFrameSetUnbind:(id)arg1;
- (void)onCanvasCreate:(unsigned long long)arg1;
- (void)sclCreateCanvasView:(unsigned long long)arg1;
- (void)onCanvasLayout:(unsigned long long)arg1 left:(float)arg2 top:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)sclLayoutCanvasView:(unsigned long long)arg1 left:(float)arg2 top:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)onCanvasDestroy:(unsigned long long)arg1;
- (void)sclDestroyCanvasView:(unsigned long long)arg1;
- (id)frameSetId;
- (id)rootId;
- (void).cxx_destruct;
@end
