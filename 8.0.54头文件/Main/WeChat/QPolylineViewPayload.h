@interface QPolylineViewPayload : QPathViewPayload
{
    BOOL _drawSymbol; // +0x78
    BOOL _useGradient; // +0x79
    double _borderWidth; // +0x80
    UIColor * _borderColor; // +0x88
    UIColor * _eraseColor; // +0x90
    long long _drawType; // +0x98
    UIImage * _styleTextureImage; // +0xa0
    double _footprintStep; // +0xa8
    UIImage * _symbolImage; // +0xb0
    double _symbolGap; // +0xb8
}
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)eraseColor;
- (void)setEraseColor:(id)arg1;
- (long long)drawType;
- (void)setDrawType:(long long)arg1;
- (id)styleTextureImage;
- (void)setStyleTextureImage:(id)arg1;
- (double)footprintStep;
- (void)setFootprintStep:(double)arg1;
- (BOOL)drawSymbol;
- (void)setDrawSymbol:(BOOL)arg1;
- (BOOL)useGradient;
- (void)setUseGradient:(BOOL)arg1;
- (id)symbolImage;
- (void)setSymbolImage:(id)arg1;
- (double)symbolGap;
- (void)setSymbolGap:(double)arg1;
- (void).cxx_destruct;
@end

