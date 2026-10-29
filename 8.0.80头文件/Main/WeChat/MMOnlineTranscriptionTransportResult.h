@interface MMOnlineTranscriptionTransportResult : NSObject
{
    unsigned int _endFlag; // +0x8
    NSString * _text; // +0x10
    unsigned long long _endFrameSeq; // +0x18
    NSData * _extraData; // +0x20
}
- (id)text;
- (void)setText:(id)arg1;
- (unsigned int)endFlag;
- (void)setEndFlag:(unsigned int)arg1;
- (unsigned long long)endFrameSeq;
- (void)setEndFrameSeq:(unsigned long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
