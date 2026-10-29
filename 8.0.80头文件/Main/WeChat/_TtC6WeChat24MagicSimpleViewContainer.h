@interface _TtC6WeChat24MagicSimpleViewContainer : UIView <_TtP25MagicCardStarterProtocols23MagicSimpleViewDelegate_>
{
     canvasView; // +0x8
    BOOL isContainerValid; // +0x10
}
- (BOOL)isContainerValid;
- (void)setIsContainerValid:(BOOL)arg1;
- (void)createCanvasViewWithCanvasView:(id)arg1;
- (void)layoutCanavsViewWithLeft:(long long)arg1 top:(long long)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)destroyCanvasView;
- (void)onCanvasViewFirstFrameRendered;
- (BOOL)isValid;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
@end
