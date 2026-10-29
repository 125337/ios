@interface WCFinderVideoPlayInfoHelper : NSObject
+ (id)getVideoDownloadProgressSimplifiedInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;
+ (id)getVideoDownloadProgressInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3;
+ (id)getPreloadProgressBarWithTitle:(id)arg1 len:(double)arg2 buff:(double)arg3 play:(double)arg4 isStreaming:(BOOL)arg5;
+ (id)getVideoPreloadProgressBar;
+ (id)getVideoDownloadDebugInfoWithReporter:(id)arg1 mediaWrap:(id)arg2 mediaInfo:(id)arg3 playBackInfo:(id)arg4;
+ (id)getVideoSpeedInfoWithContentVM:(id)arg1;
+ (id)getAudioBitrateWithPlayBackInfo:(id)arg1;
@end
