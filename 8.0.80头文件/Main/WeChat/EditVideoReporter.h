@interface EditVideoReporter : MMObject
+ (void)editVideoReportOnEntranceType:(unsigned long long)arg1 withClickBtn:(unsigned long long)arg2 withEditAttr:(id)arg3 withVideoDuration:(unsigned long long)arg4 withCropDuration:(unsigned long long)arg5;
+ (void)editVideoReportCompositionResult:(BOOL)arg1 startTime:(timeval)arg2 endTime:(timeval)arg3 videoDuration:(unsigned long long)arg4 videoStartTime:(unsigned long long)arg5 videoEndTime:(unsigned long long)arg6;
@end
