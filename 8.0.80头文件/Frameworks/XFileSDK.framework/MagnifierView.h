@interface MagnifierView : 
{
    UIImage * _metalContentImage; // +0x8
    MTKView * _mtkView; // +0x10
    MagnifierRender * _renderer; // +0x18
    double _magScale; // +0x20
    TextSelectionCursorView * _headCursor; // +0x28
    TextSelectionCursorView * _tailCursor; // +0x30
    CGPoint _touchPoint; // +0x38
    CGPoint _contentOffset; // +0x48
}
- (id)initWithFrame:(int)arg1 frame:(CGRect)arg2;
- (void)initCursorView;
- (void)setTouchPoint:(CGPoint)arg1;
- (void)setCursorInfo:(double)arg1 headPosition:(CGPoint)arg2 tailLineHeight:(double)arg3 tailPosition:(CGPoint)arg4;
- (id)metalContentImage;
- (void)setMetalContentImage:(id)arg1;
- (CGPoint)touchPoint;
- (CGPoint)contentOffset;
- (void)setContentOffset:(CGPoint)arg1;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (double)magScale;
- (void)setMagScale:(double)arg1;
- (id)headCursor;
- (void)setHeadCursor:(id)arg1;
- (id)tailCursor;
- (void)setTailCursor:(id)arg1;
- (void).cxx_destruct;
@end
