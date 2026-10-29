@interface MJVoiceInputDenoiser : NSObject
{
    BOOL _isValid; // +0x8
    unsigned int _sampleRate; // +0xc
    NSData * _lastRemainingData; // +0x10
    NSString * _processingIdentifier; // +0x18
    AudioChannels3aProcessorInterface * _backingDenoiser; // +0x20
}
- (id)initWithSampleRate:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)setupDenoiser;
- (id)denoiseWithData:(id)arg1 identifier:(id)arg2;
- (id)denoiseLastRemainingData;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (unsigned int)sampleRate;
- (void)setSampleRate:(unsigned int)arg1;
- (id)lastRemainingData;
- (id)processingIdentifier;
- (void)setProcessingIdentifier:(id)arg1;
- (AudioChannels3aProcessorInterface *)backingDenoiser;
- (void)setBackingDenoiser:(AudioChannels3aProcessorInterface *)arg1;
- (void).cxx_destruct;
@end

