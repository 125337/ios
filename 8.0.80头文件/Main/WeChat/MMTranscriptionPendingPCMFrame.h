@interface MMTranscriptionPendingPCMFrame : NSObject
{
    NSData * _pcmData; // +0x8
    unsigned long long _frameSeq; // +0x10
}
- (id)pcmData;
- (void)setPcmData:(id)arg1;
- (unsigned long long)frameSeq;
- (void)setFrameSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
