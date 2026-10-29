@interface EAGLView : UIView
{
    unsigned int _canvasId; // +0x8
    id <EJTouchDelegate> _touchDelegate; // +0x10
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 contentScale:(float)arg2 retainedBacking:(BOOL)arg3 transparent:(BOOL)arg4;
- (void)updateLayerParams:(double)arg1 retainedBacking:(BOOL)arg2 transparent:(BOOL)arg3;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)onExternalTouchEvent:(id)arg1;
- (unsigned int)canvasId;
- (void)setCanvasId:(unsigned int)arg1;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (void).cxx_destruct;
@end

