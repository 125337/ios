@interface MJTimeRulerScale : NSObject
{
    double _timeUnit; // +0x8
    double _minSpacing; // +0x10
    double _maxSpacing; // +0x18
    long long _submarkCount; // +0x20
    double _minSpacingBetweenSubmarks; // +0x28
    id /* block */ _timeCodeFormatter; // +0x30
}
+ (id)timeRulerScaleWithLevel:(unsigned long long)arg1 frameRate:(float)arg2;
- (id)description;
- (double)timeUnit;
- (void)setTimeUnit:(double)arg1;
- (double)minSpacing;
- (void)setMinSpacing:(double)arg1;
- (double)maxSpacing;
- (void)setMaxSpacing:(double)arg1;
- (long long)submarkCount;
- (void)setSubmarkCount:(long long)arg1;
- (double)minSpacingBetweenSubmarks;
- (void)setMinSpacingBetweenSubmarks:(double)arg1;
- (id /* block */)timeCodeFormatter;
- (void)setTimeCodeFormatter:(id /* block */)arg1;
- (void).cxx_destruct;
@end

