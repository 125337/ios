@interface QTrafficStyle : NSObject
{
    int _borderWidth; // +0x8
    int _lineWidth; // +0xc
    UIColor * _smoothColor; // +0x10
    UIColor * _smoothBorderColor; // +0x18
    UIColor * _slowColor; // +0x20
    UIColor * _slowBorderColor; // +0x28
    UIColor * _congestedColor; // +0x30
    UIColor * _congestedBorderColor; // +0x38
    UIColor * _seriouseCongestedColor; // +0x40
    UIColor * _seriouseCongestedBorderColor; // +0x48
}
- (id)smoothColor;
- (void)setSmoothColor:(id)arg1;
- (id)smoothBorderColor;
- (void)setSmoothBorderColor:(id)arg1;
- (id)slowColor;
- (void)setSlowColor:(id)arg1;
- (id)slowBorderColor;
- (void)setSlowBorderColor:(id)arg1;
- (id)congestedColor;
- (void)setCongestedColor:(id)arg1;
- (id)congestedBorderColor;
- (void)setCongestedBorderColor:(id)arg1;
- (id)seriouseCongestedColor;
- (void)setSeriouseCongestedColor:(id)arg1;
- (id)seriouseCongestedBorderColor;
- (void)setSeriouseCongestedBorderColor:(id)arg1;
- (int)borderWidth;
- (void)setBorderWidth:(int)arg1;
- (int)lineWidth;
- (void)setLineWidth:(int)arg1;
- (void).cxx_destruct;
@end

