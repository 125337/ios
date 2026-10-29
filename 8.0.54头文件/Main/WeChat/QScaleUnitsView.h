@interface QScaleUnitsView : UIView
{
    NSMutableArray * _strings; // +0x8
    UIColor * _lightColor; // +0x10
    UIColor * _normalColor; // +0x18
    UIColor * _strokeColor; // +0x20
    float _fontSize; // +0x28
    BOOL _withUnits; // +0x2c
    BOOL _useLightText; // +0x2d
    NSString * _baseLegendString; // +0x30
    NSString * _unitsString; // +0x38
    double _segmentLengthInPixels; // +0x40
    long long _segmentNumber; // +0x48
    UILabel * _segmentLable; // +0x50
    NSString * _fontName; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initAttributes;
- (void)calculateLegend;
- (id)getFormattedString:(double)arg1;
- (void)setSegmentNumber:(long long)arg1;
- (void)setSegmentLengthInPixels:(double)arg1;
- (void)setUseLightText:(BOOL)arg1;
- (void)updateSegmentLable;
- (BOOL)useLightText;
- (id)baseLegendString;
- (void)setBaseLegendString:(id)arg1;
- (id)unitsString;
- (void)setUnitsString:(id)arg1;
- (double)segmentLengthInPixels;
- (long long)segmentNumber;
- (id)segmentLable;
- (void)setSegmentLable:(id)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (void).cxx_destruct;
@end

