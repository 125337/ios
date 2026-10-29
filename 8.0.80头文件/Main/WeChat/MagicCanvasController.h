@interface MagicCanvasController : NSObject
{
    UIView * _containerView; // +0x8
    NSMutableDictionary * _canvasViews; // +0x10
    shared_ptr<wemagic::MagicRendererPlugin> _rendererPlugin; // +0x18
}
- (id)initWithContainerView:(id)arg1 rendererPlugin:(shared_ptr<wemagic::MagicRendererPlugin>)arg2;
- (void)onCanvasCreated:(long long)arg1;
- (void)onCanvasLayout:(long long)arg1 left:(float)arg2 top:(float)arg3 width:(float)arg4 height:(float)arg5;
- (void)onCanvasDestroy:(long long)arg1;
- (void)onCanvasFirstFrameRendered:(long long)arg1;
- (void)removeAllCanvasViews;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
