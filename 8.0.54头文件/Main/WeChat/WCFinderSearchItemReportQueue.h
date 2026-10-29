@interface WCFinderSearchItemReportQueue : NSObject
{
    unsigned long long _batchReportCount; // +0x8
    unsigned long long _reportType; // +0x10
    unsigned long long _reportSearchScene; // +0x18
    NSMutableSet * _reportedItems; // +0x20
    NSMutableArray * _pendingReportItems; // +0x28
    long long _lastReportExposeTimeInMs; // +0x30
}
- (id)init;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)recardBeginExposeTimestamp;
- (void)recardContact:(id)arg1 index:(long long)arg2 reqId:(id)arg3 text:(id)arg4;
- (void)recardFeed:(id)arg1 index:(long long)arg2 reqId:(id)arg3 text:(id)arg4;
- (void)tryReport;
- (void)report;
- (unsigned long long)batchReportCount;
- (void)setBatchReportCount:(unsigned long long)arg1;
- (unsigned long long)reportType;
- (void)setReportType:(unsigned long long)arg1;
- (unsigned long long)reportSearchScene;
- (void)setReportSearchScene:(unsigned long long)arg1;
- (id)reportedItems;
- (void)setReportedItems:(id)arg1;
- (id)pendingReportItems;
- (void)setPendingReportItems:(id)arg1;
- (long long)lastReportExposeTimeInMs;
- (void)setLastReportExposeTimeInMs:(long long)arg1;
- (void).cxx_destruct;
@end

