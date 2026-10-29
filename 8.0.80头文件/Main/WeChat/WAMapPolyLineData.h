@interface WAMapPolyLineData : NSObject
{
    BOOL _dotLine; // +0x8
    BOOL _arrowLine; // +0x9
    BOOL _enableGradient; // +0xa
    long long _lineId; // +0x10
    UIColor * _color; // +0x18
    double _width; // +0x20
    double _borderWidth; // +0x28
    UIColor * _borderColor; // +0x30
    UIImage * _arrowImg; // +0x38
    long long _style; // +0x40
    double _symbolGap; // +0x48
    long long _displayLevel; // +0x50
}
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
