@interface TAVTimeRangeTimeEffect : NSObject <TAVTimeEffectProtocol>
{
    NSArray * _effects; // +0x8
    struct _timeRange; // +0x10
}
- (void)addSpeedEffectWithSpeed:(float)arg1;
- (void)addReverseEffect;
- (void)addLoopEffectWithLoopCount:(unsigned long long)arg1;
- (id)effects;
- (id)applyTimeEffectToClips:(id)arg1;
- (struct)additionalDurationAfterApplyEffect;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (void)setEffects:(id)arg1;
- (void).cxx_destruct;
@end

