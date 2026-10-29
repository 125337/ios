@interface MMLiveHapticsEvent : NSObject
{
    unsigned long long _eventType; // +0x8
    double _beginTimeOffset; // +0x10
    double _duration; // +0x18
    double _intensity; // +0x20
    double _sharpness; // +0x28
    double _attackTime; // +0x30
    double _decayTime; // +0x38
    double _releaseTime; // +0x40
    unsigned long long _sustain; // +0x48
}
+ (id)transientEvent;
+ (id)continuousEvent;
- (id)init;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)coreHapticsEvent;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (double)beginTimeOffset;
- (void)setBeginTimeOffset:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)intensity;
- (void)setIntensity:(double)arg1;
- (double)sharpness;
- (void)setSharpness:(double)arg1;
- (double)attackTime;
- (void)setAttackTime:(double)arg1;
- (double)decayTime;
- (void)setDecayTime:(double)arg1;
- (double)releaseTime;
- (void)setReleaseTime:(double)arg1;
- (unsigned long long)sustain;
- (void)setSustain:(unsigned long long)arg1;
@end
