@interface CBTStreamMDFeederConfig : NSObject
{
    BOOL _loadingDotEnabled; // +0x8
    double _defaultTickInterval; // +0x10
    double _minTickInterval; // +0x18
    double _maxTickInterval; // +0x20
    double _ewmaAlpha; // +0x28
    double _minOutputRatio; // +0x30
    double _maxOutputRatio; // +0x38
    double _jitterSensitivity; // +0x40
    double _intervalMaxChangeRate; // +0x48
}
+ (id)defaultConfig;
- (double)defaultTickInterval;
- (void)setDefaultTickInterval:(double)arg1;
- (double)minTickInterval;
- (void)setMinTickInterval:(double)arg1;
- (double)maxTickInterval;
- (void)setMaxTickInterval:(double)arg1;
- (double)ewmaAlpha;
- (void)setEwmaAlpha:(double)arg1;
- (double)minOutputRatio;
- (void)setMinOutputRatio:(double)arg1;
- (double)maxOutputRatio;
- (void)setMaxOutputRatio:(double)arg1;
- (double)jitterSensitivity;
- (void)setJitterSensitivity:(double)arg1;
- (double)intervalMaxChangeRate;
- (void)setIntervalMaxChangeRate:(double)arg1;
- (BOOL)loadingDotEnabled;
- (void)setLoadingDotEnabled:(BOOL)arg1;
@end
