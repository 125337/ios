@interface WARemoteDebugSendPkg : NSObject
{
    unsigned int _minSeq; // +0x8
    unsigned int _maxSeq; // +0xc
    unsigned int _timestap; // +0x10
    NSString * _uuid; // +0x18
    NSData * _data; // +0x20
}
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)minSeq;
- (void)setMinSeq:(unsigned int)arg1;
- (unsigned int)maxSeq;
- (void)setMaxSeq:(unsigned int)arg1;
- (unsigned int)timestap;
- (void)setTimestap:(unsigned int)arg1;
- (void).cxx_destruct;
@end

