@interface WAOpusAudioCodec : NSObject
{
    BOOL _oggHeaderWritten; // +0x8
    BOOL _firstEncodeDone; // +0x9
    unsigned long long _totalPcmSamples; // +0x10
    TROpusTool * _encoder; // +0x18
    WAOGGOpusMuxer * _oggMuxer; // +0x20
    NSMutableData * _encodePcmBuffer; // +0x28
}
- (id)init;
- (void)dealloc;
- (int)initEncoderWithSampleRate:(int)arg1 channels:(int)arg2 bitrate:(int)arg3 mode:(long long)arg4;
- (void)uninitEncoder;
- (id)oggFileHeader;
- (id)parseOpusRawFrames:(id)arg1 skipHeader:(BOOL)arg2;
- (id)encodePcmData:(id)arg1;
- (BOOL)encodePcmData:(id)arg1 oggData:(id *)arg2 rawV1Data:(id *)arg3;
- (id)flushEncoder:(BOOL)arg1;
- (BOOL)flushEncoder:(BOOL)arg1 oggData:(id *)arg2 rawV1Data:(id *)arg3;
- (BOOL)isEncoderInitialized;
- (int)encoderSampleRate;
- (int)encoderChannels;
- (int)encoderFrameSamples;
- (unsigned long long)totalPcmSamples;
- (void)setTotalPcmSamples:(unsigned long long)arg1;
- (TROpusTool *)encoder;
- (void)setEncoder:(TROpusTool *)arg1;
- (id)oggMuxer;
- (void)setOggMuxer:(id)arg1;
- (id)encodePcmBuffer;
- (void)setEncodePcmBuffer:(id)arg1;
- (BOOL)oggHeaderWritten;
- (void)setOggHeaderWritten:(BOOL)arg1;
- (BOOL)firstEncodeDone;
- (void)setFirstEncodeDone:(BOOL)arg1;
- (void).cxx_destruct;
@end
