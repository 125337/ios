@interface AnimatingChunk : NSObject
{
    double _currentAlpha; // +0x8
    UIColor * _fontColor; // +0x10
    double _fadeDuration; // +0x18
    _NSRange _range; // +0x20
}
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (double)currentAlpha;
- (void)setCurrentAlpha:(double)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (double)fadeDuration;
- (void)setFadeDuration:(double)arg1;
- (void).cxx_destruct;
@end
