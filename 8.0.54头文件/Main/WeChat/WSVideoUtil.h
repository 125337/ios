@interface WSVideoUtil : NSObject
+ (id)timeFormat:(int)arg1;
+ (void)ReportIDKeyForVideoPlayErrCode:(int)arg1;
+ (void)Report15248ForVideo:(id)arg1 retCode:(int)arg2 playTimeInSec:(unsigned int)arg3;
+ (void)Report16270ForVideo:(id)arg1 retCode:(int)arg2 vt:(int)arg3 cdnTaskInfo:(id)arg4;
+ (void)Report16270VideoCdnStatusToSvr:(id)arg1 retCode:(int)arg2 vt:(int)arg3 cdnTaskInfo:(id)arg4;
+ (void)ReportIDKeyForVideoThumbDownload:(id)arg1 nsUrl:(id)arg2;
@end

