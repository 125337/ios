@interface FavBatchSaveTaskSnapshot : NSObject <NSCopying>
{
    unsigned long long _state; // +0x8
    long long _totalCount; // +0x10
    long long _successCount; // +0x18
    long long _failureCount; // +0x20
    long long _failureReason; // +0x28
    NSDictionary * _reportParams; // +0x30
}
- (id)initWithState:(unsigned long long)arg1 totalCount:(long long)arg2 successCount:(long long)arg3 failureCount:(long long)arg4 failureReason:(long long)arg5 reportParams:(id)arg6;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (long long)successCount;
- (void)setSuccessCount:(long long)arg1;
- (long long)failureCount;
- (void)setFailureCount:(long long)arg1;
- (long long)failureReason;
- (void)setFailureReason:(long long)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
