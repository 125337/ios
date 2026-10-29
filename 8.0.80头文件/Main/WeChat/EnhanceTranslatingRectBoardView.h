@interface EnhanceTranslatingRectBoardView : UIView
{
    BOOL _isAnimating; // +0x8
    CADisplayLink * _displayLink; // +0x10
    double _beginTimeInterval; // +0x18
    double _animationDuration; // +0x20
    CGPoint _headPoint; // +0x28
    CGPoint _tailPoint; // +0x38
    CGRect _rectBoardFrame; // +0x48
}
- (void)drawRect:(CGRect)arg1;
- (void)showRectBoardAnimation:(CGRect)arg1;
- (void)resetRectBoard;
- (void)displayLinkTicked;
- (CGPoint)convertPointFromMovingDistance:(double)arg1;
- (void)drawLinesInRectangle:(id)arg1 headPoint:(CGPoint)arg2 tailPoint:(CGPoint)arg3;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (CGRect)rectBoardFrame;
- (void)setRectBoardFrame:(CGRect)arg1;
- (CGPoint)headPoint;
- (void)setHeadPoint:(CGPoint)arg1;
- (CGPoint)tailPoint;
- (void)setTailPoint:(CGPoint)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)beginTimeInterval;
- (void)setBeginTimeInterval:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void).cxx_destruct;
@end
