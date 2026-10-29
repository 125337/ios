@interface MBGLView : UIView
{
    BOOL _useRawAxis; // +0x8
    int _canvasId; // +0xc
    MagicBrushCore * _mb; // +0x10
    NSMutableArray * _touchableRects; // +0x18
    UIImageView * _snapshotImage; // +0x20
    UIView * _locationInView; // +0x28
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 canvasId:(int)arg2 mb:(id)arg3;
- (void)setUseRawAxis:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setTouchableRects:(const float *)arg1 top:(const float *)arg2 width:(const float *)arg3 height:(const float *)arg4 count:(unsigned int)arg5;
- (id)getImage;
- (void)snapshotBegin;
- (void)snapshotEnd;
- (id)mb;
- (void)setMb:(id)arg1;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (BOOL)useRawAxis;
- (id)touchableRects;
- (void)setTouchableRects:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)locationInView;
- (void)setLocationInView:(id)arg1;
- (void).cxx_destruct;
@end

