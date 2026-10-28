@interface ShakeMusicQueueItem : NSObject
{
    unsigned int _seq; // +0x8
    unsigned int _offset; // +0xc
    unsigned int _endflag; // +0x10
    unsigned int _tryCount; // +0x14
    NSData * _data; // +0x18
}
- (id)debugDescription;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)endflag;
- (void)setEndflag:(unsigned int)arg1;
- (unsigned int)tryCount;
- (void)setTryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
