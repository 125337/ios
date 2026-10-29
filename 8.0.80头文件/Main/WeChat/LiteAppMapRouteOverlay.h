@interface LiteAppMapRouteOverlay : QPolyline
{
    BOOL _dotLine; // +0x38
    BOOL _arrowLine; // +0x39
    BOOL _enableGradient; // +0x3a
    NSMutableArray * _arrStyle; // +0x40
    NSMutableArray * _arrColor; // +0x48
    NSMutableArray * _arrText; // +0x50
    QTextStyle * _textStyle; // +0x58
    long long _lineId; // +0x60
    UIColor * _color; // +0x68
    double _width; // +0x70
    double _borderWidth; // +0x78
    UIColor * _borderColor; // +0x80
    UIImage * _arrowImg; // +0x88
    long long _style; // +0x90
    double _symbolGap; // +0x98
    long long _displayLevel; // +0xa0
}
- (id)arrStyle;
- (void)setArrStyle:(id)arg1;
- (id)arrColor;
- (void)setArrColor:(id)arg1;
- (id)arrText;
- (void)setArrText:(id)arg1;
- (id)textStyle;
- (void)setTextStyle:(id)arg1;
- (long long)lineId;
- (void)setLineId:(long long)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (BOOL)dotLine;
- (void)setDotLine:(BOOL)arg1;
- (BOOL)arrowLine;
- (void)setArrowLine:(BOOL)arg1;
- (BOOL)enableGradient;
- (void)setEnableGradient:(BOOL)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)arrowImg;
- (void)setArrowImg:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (double)symbolGap;
- (void)setSymbolGap:(double)arg1;
- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (void).cxx_destruct;
@end
