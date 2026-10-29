@interface OMCVocalAdjustmentParams : NSObject
{
    float _loudness; // +0x8
    float _duration; // +0xc
    float _defaultLoudness; // +0x10
    float _minLoudness; // +0x14
    float _maxLoudness; // +0x18
}
- (id)init;
- (id)description;
- (float)loudness;
- (void)setLoudness:(float)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (float)defaultLoudness;
- (void)setDefaultLoudness:(float)arg1;
- (float)minLoudness;
- (void)setMinLoudness:(float)arg1;
- (float)maxLoudness;
- (void)setMaxLoudness:(float)arg1;
@end
