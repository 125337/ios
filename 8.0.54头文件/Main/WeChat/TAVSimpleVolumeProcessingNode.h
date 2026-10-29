@interface TAVSimpleVolumeProcessingNode : NSObject <TAVAudioProcessingNode>
{
    float _volume; // +0x8
}
- (id)init;
- (id)initWithVolume:(float)arg1;
- (void)applyEffectToBufferListInOut:(AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
@end

