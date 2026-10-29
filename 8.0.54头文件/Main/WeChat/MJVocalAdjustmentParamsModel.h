@interface MJVocalAdjustmentParamsModel : NSObject <PBCoding>
{
    double _loudness; // +0x8
    double _duration; // +0x10
    double _defaultLoudness; // +0x18
    double _minLoudness; // +0x20
    double _maxLoudness; // +0x28
}
+ (void)PBArrayAdd_loudness;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_defaultLoudness;
+ (void)PBArrayAdd_minLoudness;
+ (void)PBArrayAdd_maxLoudness;
+ (void)initialize;
+ (id)modelWithVocalAdjustmentParams:(id)arg1;
- (id)getPBPropertyTable;
- (id)toVocalAdjustmentParams;
- (id)description;
- (double)loudness;
- (void)setLoudness:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)defaultLoudness;
- (void)setDefaultLoudness:(double)arg1;
- (double)minLoudness;
- (void)setMinLoudness:(double)arg1;
- (double)maxLoudness;
- (void)setMaxLoudness:(double)arg1;
@end

