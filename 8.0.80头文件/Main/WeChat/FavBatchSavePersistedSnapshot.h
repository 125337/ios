@interface FavBatchSavePersistedSnapshot : NSObject <PBCoding>
{
    int _state; // +0x8
    int _failureReason; // +0xc
    long long _totalCount; // +0x10
    long long _successCount; // +0x18
    NSString * _reportParamsJSON; // +0x20
}
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_totalCount;
+ (void)PBArrayAdd_successCount;
+ (void)PBArrayAdd_failureReason;
+ (void)PBArrayAdd_reportParamsJSON;
+ (void)initialize;
- (id)getPBPropertyTable;
- (int)state;
- (void)setState:(int)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (long long)successCount;
- (void)setSuccessCount:(long long)arg1;
- (int)failureReason;
- (void)setFailureReason:(int)arg1;
- (id)reportParamsJSON;
- (void)setReportParamsJSON:(id)arg1;
- (void).cxx_destruct;
@end
