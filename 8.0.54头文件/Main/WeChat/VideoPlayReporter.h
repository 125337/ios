@interface VideoPlayReporter : NSObject
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2;
+ (void)reportOnClickToPlayWithMsg:(id)arg1 playAction:(int)arg2 totalPlayTime:(unsigned int)arg3 loadingTime:(unsigned long long)arg4;
+ (id)getActionPrefix:(id)arg1;
+ (void)reportOnDownloadMsg:(id)arg1 taskInfo:(id)arg2;
@end

