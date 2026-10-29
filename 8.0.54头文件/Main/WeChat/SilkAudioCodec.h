@interface SilkAudioCodec : NSObject <AudioCodecProtocol>
{
    AudioDecoder * m_decoder; // +0x8
    NSMutableData * m_decodedData; // +0x10
    BOOL m_decodeEnd; // +0x18
    AVAudioFormat * _format; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)setDataForDecode:(id)arg1 decodeNow:(BOOL)arg2;
- (id)format;
- (void)getDecodeData:(void *)arg1 time:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)getDecodeData:(void *)arg1 playedFrames:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)decodeData;
- (void)initDataFormat:(id)arg1;
- (void)initDecoder:(id)arg1;
- (BOOL)ifSilkAudioPlayerAgcOn;
- (void)setFormat:(id)arg1;
- (void).cxx_destruct;
@end

