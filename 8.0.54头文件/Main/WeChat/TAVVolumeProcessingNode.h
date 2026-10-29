@interface TAVVolumeProcessingNode : NSObject <TAVAudioProcessingNode>
{
    float _startVolume; // +0x8
    float _endVolume; // +0xc
    id /* block */ _timingFunction; // +0x10
    struct _timeRange; // +0x18
}
- (id)init;
- (id)initWithTimeRange:(struct)arg1 startVolume:(float)arg2 endVolume:(float)arg3;
- (void)applyEffectToBufferListInOut:(AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (float)startVolume;
- (void)setStartVolume:(float)arg1;
- (float)endVolume;
- (void)setEndVolume:(float)arg1;
- (id /* block */)timingFunction;
- (void)setTimingFunction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

