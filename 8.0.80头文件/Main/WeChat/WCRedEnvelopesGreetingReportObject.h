@interface WCRedEnvelopesGreetingReportObject : MMObject
{
    int _emoticonType; // +0x8
    unsigned int _changeAmountTimes; // +0xc
    unsigned int _addSelfieEmoticonTimes; // +0x10
    unsigned int _addCustomEmoticonTimes; // +0x14
    unsigned int _addSelfieEmoticonFromBoardTimes; // +0x18
    NSString * _emoticonMd5; // +0x20
}
- (int)emoticonType;
- (void)setEmoticonType:(int)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (unsigned int)changeAmountTimes;
- (void)setChangeAmountTimes:(unsigned int)arg1;
- (unsigned int)addSelfieEmoticonTimes;
- (void)setAddSelfieEmoticonTimes:(unsigned int)arg1;
- (unsigned int)addCustomEmoticonTimes;
- (void)setAddCustomEmoticonTimes:(unsigned int)arg1;
- (unsigned int)addSelfieEmoticonFromBoardTimes;
- (void)setAddSelfieEmoticonFromBoardTimes:(unsigned int)arg1;
- (void).cxx_destruct;
@end
