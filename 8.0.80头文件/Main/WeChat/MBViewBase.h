@interface MBViewBase : UIView
{
    int _canvasId; // +0x8
    MagicBrushCore * _mb; // +0x10
    UIView * _locationInView; // +0x18
    NSMutableArray * _touchableRects; // +0x20
    UIImageView * _snapshotImage; // +0x28
    weak_ptr<magicbrush::MagicBrushCore> _mbCpp; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 canvasId:(int)arg2 mb:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 canvasId:(int)arg2 mbCpp:(shared_ptr<magicbrush::MagicBrushCore>)arg3;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (shared_ptr<magicbrush::MagicBrushTouchEvent>)touchEventFromUITouch:(id)arg1 withEvent:(id)arg2 andAction:(int)arg3 inView:(id)arg4;
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
- (id)locationInView;
- (void)setLocationInView:(id)arg1;
- (id)touchableRects;
- (void)setTouchableRects:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (weak_ptr<magicbrush::MagicBrushCore>)mbCpp;
- (void)setMbCpp:(weak_ptr<magicbrush::MagicBrushCore>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
