@interface MMLiveCDNPlayerIllegalEvent : NSObject
{
    NSArray * _itemInfos; // +0x8
    unsigned long long _illegalType; // +0x10
    unsigned long long _occurTimestampMs; // +0x18
}
- (id)initWithItemInfos:(id)arg1 illegalType:(unsigned long long)arg2;
- (BOOL)isSameWithEvent:(id)arg1;
- (id)toReportDictionary;
- (void)report;
- (id)illegalDescription;
- (id)logDescription;
- (id)itemInfos;
- (void)setItemInfos:(id)arg1;
- (unsigned long long)illegalType;
- (void)setIllegalType:(unsigned long long)arg1;
- (unsigned long long)occurTimestampMs;
- (void)setOccurTimestampMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
