@interface WCNewClickStatReportData : MMObject
{
    unsigned int seq; // +0x8
    unsigned int index; // +0xc
    unsigned int indexCnt; // +0x10
    unsigned int reverseInt1; // +0x14
    unsigned int reverseInt2; // +0x18
    unsigned int reportToLogID; // +0x1c
    NSMutableString * eventIDList; // +0x20
    NSMutableString * reverseStr; // +0x28
    NSMutableString * attribute; // +0x30
}
- (id)init;
- (void)report;
- (void)replaceSpecialSymbol;
- (id)toString;
- (id)description;
- (id)eventIDList;
- (void)setEventIDList:(id)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)indexCnt;
- (void)setIndexCnt:(unsigned int)arg1;
- (unsigned int)reverseInt1;
- (void)setReverseInt1:(unsigned int)arg1;
- (unsigned int)reverseInt2;
- (void)setReverseInt2:(unsigned int)arg1;
- (id)reverseStr;
- (void)setReverseStr:(id)arg1;
- (id)attribute;
- (void)setAttribute:(id)arg1;
- (unsigned int)reportToLogID;
- (void)setReportToLogID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

