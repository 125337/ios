@interface WNRecordingSentinel : NSObject
+ (id)sharedInstance;
+ (void)reportRecordStopWithReason:(long long)arg1 recordId:(id)arg2 favLocalId:(unsigned int)arg3 favId:(unsigned int)arg4 durationMs:(long long)arg5 extra:(id)arg6;
- (id)_mmkv;
- (void)recordingDidStartWithRecordId:(id)arg1 favLocalId:(unsigned int)arg2 favId:(unsigned int)arg3;
- (void)recordingTick;
- (void)recordingWillStopWithReason:(long long)arg1;
- (void)recordingDidEnd;
- (void)checkAndReportPreviousAbnormalExitOnLaunch;
@end
