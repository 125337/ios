@interface WCFinderHotSpotHistorySectionModel : NSObject
{
    NSMutableArray * _historyRecords; // +0x8
}
- (BOOL)isDataEmpty;
- (unsigned long long)dataCount;
- (id)historyRecordAtIndex:(unsigned long long)arg1;
- (void)loadData;
- (id)historyRecords;
- (void)setHistoryRecords:(id)arg1;
- (void).cxx_destruct;
@end
