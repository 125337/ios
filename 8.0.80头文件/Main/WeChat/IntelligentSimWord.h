@interface IntelligentSimWord : MMObject
{
    unsigned int _searchCount; // +0x8
    NSString * _word; // +0x10
    double _confidence; // +0x18
    NSArray * _arrSimWordClassificationId; // +0x20
    NSArray * _arrMessage; // +0x28
    NSArray * _arrSimpleMsg; // +0x30
}
- (void)copyFieldFromSimWord:(id)arg1;
- (id)description;
- (id)word;
- (void)setWord:(id)arg1;
- (double)confidence;
- (void)setConfidence:(double)arg1;
- (id)arrSimWordClassificationId;
- (void)setArrSimWordClassificationId:(id)arg1;
- (unsigned int)searchCount;
- (void)setSearchCount:(unsigned int)arg1;
- (id)arrMessage;
- (void)setArrMessage:(id)arg1;
- (id)arrSimpleMsg;
- (void)setArrSimpleMsg:(id)arg1;
- (void).cxx_destruct;
@end
