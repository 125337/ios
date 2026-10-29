@interface MMSelectCoverView : UIView
{
    UIColor * _selectedColor; // +0x8
    UIColor * _cursorColor; // +0x10
    double _leftLineLength; // +0x18
    double _topLineLength; // +0x20
    double _rightLineLength; // +0x28
    double _bottomLineLength; // +0x30
    double _dotRadius; // +0x38
    CGRect _leftCursorRect; // +0x40
    CGRect _rightCursorRect; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isTouchInLeftCursor:(CGPoint)arg1;
- (BOOL)isTouchInRightCursor:(CGPoint)arg1;
- (double)farLeft;
- (double)farRight;
- (double)farTop;
- (double)farBottom;
- (CGRect)leftCursorRect;
- (void)setLeftCursorRect:(CGRect)arg1;
- (CGRect)rightCursorRect;
- (void)setRightCursorRect:(CGRect)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (id)cursorColor;
- (void)setCursorColor:(id)arg1;
- (double)leftLineLength;
- (void)setLeftLineLength:(double)arg1;
- (double)topLineLength;
- (void)setTopLineLength:(double)arg1;
- (double)rightLineLength;
- (void)setRightLineLength:(double)arg1;
- (double)bottomLineLength;
- (void)setBottomLineLength:(double)arg1;
- (double)dotRadius;
- (void)setDotRadius:(double)arg1;
- (void).cxx_destruct;
@end
