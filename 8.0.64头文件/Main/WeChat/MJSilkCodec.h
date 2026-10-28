@interface MJSilkCodec : NSObject
{
    long long _sampleRate; // +0x8
    AudioCoder _encoder; // +0x10
}
+ (id)decodeToPCMFromSilkData:(id)arg1;
+ (id)decodeToAudioDataFromSilkData:(id)arg1;
+ (id)encodeToSilkFromPCMData:(id)arg1;
- (BOOL)initEncoderWithSampleRate:(long long)arg1;
- (id)encodeFromPCMData:(id)arg1;
- (BOOL)uninitEncoder;
- (AudioCoder)encoder;
- (void)setEncoder:(AudioCoder)arg1;
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
