@interface OVCAudioTrack : NSObject
{
    SharedPtr<XMFAudioTrack> _backingAudioTrack; // +0x8
}
- (id)initWithBackingAudioTrack:(const void *)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)codecIDName;
- (id)codecProfileName;
- (float)sampleRate;
- (id)sampleFormatName;
- (id)channelLayoutName;
- (long long)channelCount;
- (long long)sampleUnitsPerFrame;
- (long long)averageBitrate;
- (SharedPtr<XMFAudioTrack>)backingAudioTrack;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
