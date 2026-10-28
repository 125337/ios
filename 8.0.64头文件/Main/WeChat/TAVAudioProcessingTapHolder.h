@interface TAVAudioProcessingTapHolder : NSObject <NSCopying>
{
    opaqueMTAudioProcessingTap * _tapRef; // +0x8
    TAVAudioTapProcessorChain * _audioProcessingChain; // +0x10
}
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (opaqueMTAudioProcessingTap *)tapRef;
- (void)setTapRef:(opaqueMTAudioProcessingTap *)arg1;
- (id)audioProcessingChain;
- (void)setAudioProcessingChain:(id)arg1;
- (void).cxx_destruct;
@end
