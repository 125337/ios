@interface WCFinderEnhanceTriggerRecordManager : NSObject
{
    NSMutableArray * _records; // +0x8
}
- (id)records;
- (void)recordEnhanceTriggerWithFeedID:(id)arg1 eventType:(int)arg2;
- (BOOL)checkEnhanceTriggerWithEventType:(id)arg1 afterTimeStamp:(unsigned long long)arg2;
- (void)cleanRecordsBeforeTimestamp:(double)arg1;
- (void)clearAllRecords;
- (void)setRecords:(id)arg1;
- (void).cxx_destruct;
@end
