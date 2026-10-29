@interface WCCCService : MMRootService <MMServiceProtocol>
+ (id)WCCC_mmkv;
+ (BOOL)WCCC_isEnabled;
- (void)startDataLoop;
- (void)fetchAndUploadUsedsData;
- (void)_runUploadPipelineWithContext:(const struct *)arg1;
- (BOOL)_buildRunContext:(struct *)arg1;
- (BOOL)_shouldResetWithContext:(const struct *)arg1;
- (void)_resetMMKVWithCurrentUseds:(id)arg1 context:(const struct *)arg2;
- (id)_mergeAccumulatedIntoCurrent:(id)arg1 context:(const struct *)arg2;
- (BOOL)_shouldThrottleWithContext:(const struct *)arg1;
- (void)_reportDiffForAccumulated:(id)arg1 context:(const struct *)arg2;
@end
