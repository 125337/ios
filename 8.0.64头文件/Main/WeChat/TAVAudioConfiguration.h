@interface TAVAudioConfiguration : NSObject <TAVAudioProcessingNode, NSCopying>
{
    float _volume; // +0x8
    id <TAVAudioProcessingNode> _effectNode; // +0x10
    TAVSimpleVolumeProcessingNode * _volumeProcessingNode; // +0x18
}
- (id)init;
- (void)setVolume:(float)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)applyEffectToBufferListInOut:(AudioBufferList *)arg1 renderInfo:(id)arg2;
- (float)volume;
- (id)effectNode;
- (void)setEffectNode:(id)arg1;
- (id)volumeProcessingNode;
- (void)setVolumeProcessingNode:(id)arg1;
- (void).cxx_destruct;
@end
