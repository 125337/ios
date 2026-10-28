@interface TingAudioRecorderBufferImpl : TingAudioRecorderBufferObjc
{
    AVAudioPCMBuffer * _buffer; // +0x8
    NSData * _pcmData; // +0x10
}
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)pcmData;
- (void)setPcmData:(id)arg1;
- (void).cxx_destruct;
@end
