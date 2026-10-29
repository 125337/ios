@interface StreamSilkAudioCodec : NSObject <StreamAudioCodecProtocol>
{
    StreamAudioDecoder * m_decoder; // +0x8
    NSMutableData * m_originData; // +0x10
    NSMutableData * m_decodedData; // +0x18
    BOOL m_decodeError; // +0x20
    BOOL m_appendEnd; // +0x21
    AVAudioFormat * _format; // +0x28
    double _sampleRate; // +0x30
}
- (id)init;
- (id)initWithSampleRate:(double)arg1;
- (void)dealloc;
- (void)setDataForDecode:(id)arg1 decodeNow:(BOOL)arg2;
- (id)format;
- (void)getDecodeData:(void *)arg1 time:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)getDecodeData:(void *)arg1 playedFrames:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)appendData:(id)arg1 decodeNow:(BOOL)arg2 lastSlice:(BOOL)arg3;
- (void)decodeData;
- (void)initDataFormat;
- (void)initDecoder;
- (void)setFormat:(id)arg1;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;
- (void).cxx_destruct;
@end
