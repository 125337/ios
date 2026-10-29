@interface MagicSclViewDelegate : NSObject <IMagicSclViewDelegate>
{
    unsigned long long _bizId; // +0x8
    id /* block */ _onFrameSetViewGot; // +0x10
    id /* block */ _onFrameSetViewBound; // +0x18
    MagicSclViewContainer * _container; // +0x20
}
- (id)initWithBizId:(unsigned long long)arg1 onFrameSetViewGot:(id /* block */)arg2 onFrameSetViewBound:(id /* block */)arg3;
- (id)container;
- (void)onFrameSetBind:(id)arg1 rootId:(id)arg2;
- (void)onFrameSetResize:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onFrameSetUnbind:(id)arg1;
- (void)onCanvasCreate:(unsigned long long)arg1;
- (void)onCanvasLayout:(unsigned long long)arg1 left:(float)arg2 top:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (void)onCanvasDestroy:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
