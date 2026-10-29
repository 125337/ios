@interface WCFinderMinimizeFloatingFrames : NSObject
{
    UIBezierPath * _minimizeBezierPath; // +0x8
    CGRect _maximizeAnimatedViewFrame; // +0x10
    CGRect _minimizeAnimatedViewFrame; // +0x30
}
- (CGRect)maximizeAnimatedViewFrame;
- (void)setMaximizeAnimatedViewFrame:(CGRect)arg1;
- (CGRect)minimizeAnimatedViewFrame;
- (void)setMinimizeAnimatedViewFrame:(CGRect)arg1;
- (id)minimizeBezierPath;
- (void)setMinimizeBezierPath:(id)arg1;
- (void).cxx_destruct;
@end
