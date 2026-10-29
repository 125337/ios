@interface WCDrawLineView : UIView
{
    BOOL _isBottomLine; // +0x8
    long long _lineStyle; // +0x10
    double _lineWidth; // +0x18
    UIColor * _lineColor; // +0x20
    double _paddingStart; // +0x28
    double _paddingEnd; // +0x30
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)drawRect:(CGRect)arg1;
- (long long)lineStyle;
- (void)setLineStyle:(long long)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (double)paddingStart;
- (void)setPaddingStart:(double)arg1;
- (double)paddingEnd;
- (void)setPaddingEnd:(double)arg1;
- (BOOL)isBottomLine;
- (void)setIsBottomLine:(BOOL)arg1;
- (void).cxx_destruct;
@end
