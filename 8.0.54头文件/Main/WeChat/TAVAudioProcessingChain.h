@interface TAVAudioProcessingChain : NSObject <NSCopying, TAVAudioProcessingNode>
{
    NSArray * _nodes; // +0x8
}
- (void)applyEffectToBufferListInOut:(AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)nodes;
- (void)setNodes:(id)arg1;
- (void).cxx_destruct;
@end

