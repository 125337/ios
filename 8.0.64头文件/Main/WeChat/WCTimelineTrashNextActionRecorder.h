@interface WCTimelineTrashNextActionRecorder : NSObject <PBCoding>
{
    NSMutableDictionary * _records; // +0x8
}
+ (void)PBArrayAdd_records;
+ (void)initialize;
+ (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
+ (void)tryReportNextLocalId:(id)arg1 nextPublishId:(id)arg2;
+ (void)clearAll;
- (id)getPBPropertyTable;
- (id)init;
- (id)records;
- (void)setRecords:(id)arg1;
- (void).cxx_destruct;
@end
