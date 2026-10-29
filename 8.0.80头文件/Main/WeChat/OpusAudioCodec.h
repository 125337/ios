@interface OpusAudioCodec : NSObject
{
    TROpusTool * _encoder; // +0x8
    TROpusStreamDecoder * _decoder; // +0x10
    NSMutableData * _encodePcmBuffer; // +0x18
}
+ (id)encodePcmBuffer:(id)arg1 sampleRate:(int)arg2;
- (id)init;
- (void)dealloc;
- (int)initEncoderWithSampleRate:(int)arg1 channels:(int)arg2 bitrate:(int)arg3 mode:(long long)arg4;
- (int)initEncoder;
- (int)setEncoderNsEnabled:(BOOL)arg1;
- (void)uninitEncoder;
- (void)resetEncoder;
- (id)encodePcmData:(id)arg1;
- (int)initDecoderWithSampleRate:(int)arg1 channels:(int)arg2;
- (int)initDecoder;
- (void)uninitDecoder;
- (void)resetDecoder;
- (id)decodeOpusData:(id)arg1 isLastSlice:(BOOL)arg2;
- (id)decodeOpusDataFully:(id)arg1;
- (BOOL)isEncoderInitialized;
- (BOOL)isDecoderInitialized;
- (int)encoderSampleRate;
- (int)encoderChannels;
- (int)encoderFrameSamples;
- (int)decoderSampleRate;
- (int)decoderChannels;
- (TROpusTool *)encoder;
- (void)setEncoder:(TROpusTool *)arg1;
- (TROpusStreamDecoder *)decoder;
- (void)setDecoder:(TROpusStreamDecoder *)arg1;
- (id)encodePcmBuffer;
- (void)setEncodePcmBuffer:(id)arg1;
- (void).cxx_destruct;
@end
