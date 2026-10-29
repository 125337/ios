@interface TingAudioRecordConfiguration : NSObject
{
    BOOL _enableLoudnessAnimation; // +0x8
    BOOL _enableSilenceDetect; // +0x9
    BOOL _enableCalcLoudnessDuration; // +0xa
    TingRecordFormat * _format; // +0x10
    long long _minTimeInSecond; // +0x18
    long long _maxTimeInSecond; // +0x20
}
+ (id)makeWithFormat:(id)arg1 minTimeInSecond:(long long)arg2 maxTimeInSecond:(long long)arg3 enableLoudnessAnimation:(BOOL)arg4 enableSilenceDetect:(BOOL)arg5 enableCalcLoudnessDuration:(BOOL)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)format;
- (void)setFormat:(id)arg1;
- (long long)minTimeInSecond;
- (void)setMinTimeInSecond:(long long)arg1;
- (long long)maxTimeInSecond;
- (void)setMaxTimeInSecond:(long long)arg1;
- (BOOL)enableLoudnessAnimation;
- (void)setEnableLoudnessAnimation:(BOOL)arg1;
- (BOOL)enableSilenceDetect;
- (void)setEnableSilenceDetect:(BOOL)arg1;
- (BOOL)enableCalcLoudnessDuration;
- (void)setEnableCalcLoudnessDuration:(BOOL)arg1;
- (void).cxx_destruct;
@end
