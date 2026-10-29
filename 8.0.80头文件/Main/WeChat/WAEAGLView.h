@interface WAEAGLView : UIView
{
    int _interactionMode; // +0x8
    id <WAEAGLViewGestureDelegate> _gestureDelegate; // +0x10
    UIImageView * _snapshotImageView; // +0x18
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)getImage;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (int)interactionMode;
- (void)setInteractionMode:(int)arg1;
- (id)gestureDelegate;
- (void)setGestureDelegate:(id)arg1;
- (id)snapshotImageView;
- (void)setSnapshotImageView:(id)arg1;
- (void).cxx_destruct;
@end
