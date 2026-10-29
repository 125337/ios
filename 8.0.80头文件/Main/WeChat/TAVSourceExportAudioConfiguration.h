@interface TAVSourceExportAudioConfiguration : NSObject
{
    NSDictionary * _inputSettings; // +0x8
    unsigned long long _sampleRate; // +0x10
    unsigned long long _encoderBitRate; // +0x18
    unsigned long long _channelCount; // +0x20
    NSDictionary * _audioOutputSetting; // +0x28
}
- (id)init;
- (id)makeOutputSetting;
- (id)inputSettings;
- (void)setInputSettings:(id)arg1;
- (unsigned long long)sampleRate;
- (void)setSampleRate:(unsigned long long)arg1;
- (unsigned long long)encoderBitRate;
- (void)setEncoderBitRate:(unsigned long long)arg1;
- (unsigned long long)channelCount;
- (void)setChannelCount:(unsigned long long)arg1;
- (id)audioOutputSetting;
- (void)setAudioOutputSetting:(id)arg1;
- (void).cxx_destruct;
@end
