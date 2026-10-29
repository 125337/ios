@interface PersonalHotwordBatchResult : NSObject
{
    unsigned long long _successCount; // +0x8
    NSArray * _failures; // +0x10
    NSArray * _skipped; // +0x18
}
- (id)initWithSuccessCount:(unsigned long long)arg1 failures:(id)arg2 skipped:(id)arg3;
- (unsigned long long)failureCount;
- (unsigned long long)skippedCount;
- (unsigned long long)successCount;
- (void)setSuccessCount:(unsigned long long)arg1;
- (id)failures;
- (void)setFailures:(id)arg1;
- (id)skipped;
- (void)setSkipped:(id)arg1;
- (void).cxx_destruct;
@end
