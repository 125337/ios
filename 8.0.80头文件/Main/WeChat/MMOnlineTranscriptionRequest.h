@interface MMOnlineTranscriptionRequest : NSObject
{
    BOOL _isEnd; // +0x8
    unsigned int _seq; // +0xc
    unsigned int _offset; // +0x10
    NSData * _data; // +0x18
}
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
