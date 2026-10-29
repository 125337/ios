@interface CBTBlockquoteConfig : NSObject
{
    double _barWidth; // +0x8
    UIColor * _barColor; // +0x10
    double _barMarginEnd; // +0x18
    unsigned long long _nestLevel; // +0x20
}
+ (id)defaultConfig;
+ (id)configWithNestLevel:(unsigned long long)arg1;
- (double)barWidth;
- (void)setBarWidth:(double)arg1;
- (id)barColor;
- (void)setBarColor:(id)arg1;
- (double)barMarginEnd;
- (void)setBarMarginEnd:(double)arg1;
- (unsigned long long)nestLevel;
- (void)setNestLevel:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
