@interface WCEditImageSafeAreaScrollView : WCEditImageScrollView
{
    MMUIView * _topLine; // +0x20
    MMUIView * _bottomLine; // +0x28
    MMUIView * _leftLine; // +0x30
    MMUIView * _rightLine; // +0x38
    CGRect _areaFrame; // +0x40
}
+ (BOOL)isCGRect1:(CGRect)arg1 inRect2:(CGRect)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)autoAdjustAllWidgetsPosition;
- (void)autoAdjustWidgetPosition:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAreaLineFrame:(CGRect)arg1;
- (void)setAreaLineHidden:(BOOL)arg1;
- (void)drawDottedLineByCAShapeLayer:(id)arg1 isHorizonal:(BOOL)arg2;
- (void)drawDottedLineByCAShapeLayer:(id)arg1 dotLength:(int)arg2 dotSpacing:(int)arg3 lineColor:(id)arg4 lineDirection:(BOOL)arg5;
- (CGRect)areaFrame;
- (void)setAreaFrame:(CGRect)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (void).cxx_destruct;
@end
