@interface MMLiveColorfulLabel : UILabel
{
    UIColor * _fromColor; // +0x8
    UIColor * _middleColor; // +0x10
    UIColor * _toColor; // +0x18
    CGPoint _startPoint; // +0x20
    CGPoint _endPoint; // +0x30
}
- (void)drawRect:(CGRect)arg1;
- (void)clearAllGradientColors;
- (void)configWithColorHexArray:(id)arg1 fallbackColor:(id)arg2;
- (id)fromColor;
- (void)setFromColor:(id)arg1;
- (id)middleColor;
- (void)setMiddleColor:(id)arg1;
- (id)toColor;
- (void)setToColor:(id)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)endPoint;
- (void)setEndPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
