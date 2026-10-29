@interface WASkiaCanvasView : UIView
{
    long long _touchId; // +0x8
    NSMutableDictionary * _touches; // +0x10
    NSDictionary * _longpressParam; // +0x18
    BOOL _touched; // +0x20
    UIImageView * _snapshotImageView; // +0x28
    BOOL _onForeground; // +0x30
    int _canvasId; // +0x34
    int _gestureMode; // +0x38
    id <WASkiaViewDelegate> _delegate; // +0x40
    NSString * _userData; // +0x48
    shared_ptr<blink::HTMLCanvasViewNG> _canvasView; // +0x50
    shared_ptr<blink::BindingApp> _app; // +0x60
}
+ (Class)layerClass;
+ (id)getVirsionString;
- (id)initWithFrame:(CGRect)arg1 bindingApp:(shared_ptr<blink::BindingApp>)arg2 canvasId:(int)arg3;
- (id)initWithFrame2:(CGRect)arg1 bindingApp:(id)arg2 canvasId:(int)arg3;
- (void)dealloc;
- (void)initSkiaCanvas:(id)arg1;
- (void)present;
- (void)notifyVisibilityChanged:(BOOL)arg1;
- (void)setBindingApp:(shared_ptr<blink::BindingApp>)arg1 canvasId:(unsigned int)arg2;
- (id)getImage;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)getTouchID:(id)arg1 remove:(BOOL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)getUniqueIdAppendAppTag;
- (void)setSkiaCanvasTextureDelegate:(id)arg1;
- (void)setSkiaCanvasViewDelegate:(id)arg1;
- (shared_ptr<blink::HTMLCanvasViewNG>)canvasView;
- (void)setCanvasView:(shared_ptr<blink::HTMLCanvasViewNG>)arg1;
- (id)delegate;
- (id)userData;
- (void)setUserData:(id)arg1;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (int)gestureMode;
- (void)setGestureMode:(int)arg1;
- (shared_ptr<blink::BindingApp>)app;
- (void)setApp:(shared_ptr<blink::BindingApp>)arg1;
- (BOOL)onForeground;
- (void)setOnForeground:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

