@interface TAVLoopTimeEffect : NSObject <TAVTimeRangeTimeEffectProtocol>
{
    unsigned long long _loopCount; // +0x8
}
- (id)applyTimeEffectToClips:(id)arg1;
- (unsigned long long)loopCount;
- (void)setLoopCount:(unsigned long long)arg1;
@end

