@interface VoicePrintQueueItem : NSObject
{
    unsigned int voiceId; // +0x8
    unsigned int offset; // +0xc
    unsigned int length; // +0x10
    unsigned int endflag; // +0x14
    unsigned int trycount; // +0x18
}
- (unsigned int)voiceId;
- (void)setVoiceId:(unsigned int)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)length;
- (void)setLength:(unsigned int)arg1;
- (unsigned int)endflag;
- (void)setEndflag:(unsigned int)arg1;
- (unsigned int)trycount;
- (void)setTrycount:(unsigned int)arg1;
@end

