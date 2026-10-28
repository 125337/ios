@interface EditImageSNSBorderView : UIView
{
    double _lineWidth; // +0x8
    UIView * _topBorderLine; // +0x10
    UIView * _bottomBorderLine; // +0x18
    UIView * _leftBorderLine; // +0x20
    UIView * _rightBorderLine; // +0x28
    UIView * _topShadowLine; // +0x30
    UIView * _bottomShadowLine; // +0x38
    UIView * _leftShadowLine; // +0x40
    UIView * _rightShadowLine; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)createShadowLine;
- (id)createBorderLine;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (id)topBorderLine;
- (void)setTopBorderLine:(id)arg1;
- (id)bottomBorderLine;
- (void)setBottomBorderLine:(id)arg1;
- (id)leftBorderLine;
- (void)setLeftBorderLine:(id)arg1;
- (id)rightBorderLine;
- (void)setRightBorderLine:(id)arg1;
- (id)topShadowLine;
- (void)setTopShadowLine:(id)arg1;
- (id)bottomShadowLine;
- (void)setBottomShadowLine:(id)arg1;
- (id)leftShadowLine;
- (void)setLeftShadowLine:(id)arg1;
- (id)rightShadowLine;
- (void)setRightShadowLine:(id)arg1;
- (void).cxx_destruct;
@end
