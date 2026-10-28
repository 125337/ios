@interface MMQuartz2DView : UIView <IMMQuartz2DContextDelegate>
{
    NSMutableArray * _drawObjs; // +0x8
    NSMutableDictionary * _context; // +0x10
    NSMutableArray * _contextStack; // +0x18
    long long _touchId; // +0x20
    NSMutableDictionary * _touches; // +0x28
    BOOL _touched; // +0x30
    unsigned int _canvasId; // +0x34
    int _interactionMode; // +0x38
    NSString * _userData; // +0x40
    id <IMMQuartz2DDelegate> _canvasDelegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)getString:(id)arg1;
- (id)getMethodData:(id)arg1 forMethod:(id)arg2;
- (void)setDrawActions:(id)arg1 reset:(BOOL)arg2;
- (void)drawRect:(CGRect)arg1;
- (id)canvasToImageOffScreenWithScale:(double)arg1;
- (id)getContext:(id)arg1;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (void)removeContext:(id)arg1;
- (void)saveContext;
- (void)restoreContext;
- (void)recreateContext;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)getTouchID:(id)arg1 remove:(BOOL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)getImage;
- (id)getImageDataWithTargetRect:(CGRect)arg1;
- (unsigned int)canvasId;
- (void)setCanvasId:(unsigned int)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (int)interactionMode;
- (void)setInteractionMode:(int)arg1;
- (id)canvasDelegate;
- (void)setCanvasDelegate:(id)arg1;
- (void).cxx_destruct;
@end
