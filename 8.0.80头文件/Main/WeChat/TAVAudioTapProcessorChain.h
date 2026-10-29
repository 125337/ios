@interface TAVAudioTapProcessorChain : NSObject <NSCopying>
{
    NSArray * _nodes; // +0x8
    AudioStreamBasicDescription _processingFormat; // +0x10
}
- (id)init;
- (void)prepareProcess:(const AudioStreamBasicDescription *)arg1;
- (void)processTimeRange:(struct)arg1 bufferListInOut:(AudioBufferList *)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)nodes;
- (void)setNodes:(id)arg1;
- (AudioStreamBasicDescription)processingFormat;
- (void)setProcessingFormat:(AudioStreamBasicDescription)arg1;
- (void).cxx_destruct;
@end
