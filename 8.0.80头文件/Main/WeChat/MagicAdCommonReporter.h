@interface MagicAdCommonReporter : NSObject
+ (BOOL)shouldReportWithPosId:(id)arg1;
+ (void)innerKvReportActionType:(unsigned char)arg1 posId:(id)arg2 aid:(id)arg3;
+ (void)innerKvReportActionType:(unsigned char)arg1 posId:(id)arg2 aid:(id)arg3 value:(long long)arg4;
+ (void)innerKvReportActionType:(unsigned char)arg1 posId:(id)arg2 aid:(id)arg3 value:(long long)arg4 extra:(id)arg5;
+ (void)innerKvReportActionType:(unsigned char)arg1 posId:(id)arg2 aid:(id)arg3 value:(long long)arg4 extra:(id)arg5 extra2:(id)arg6;
@end
