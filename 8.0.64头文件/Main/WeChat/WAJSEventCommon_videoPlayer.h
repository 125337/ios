@interface WAJSEventCommon_videoPlayer : NSObject
+ (void)setVideoPath:(id)arg1 videoView:(id)arg2 appId:(id)arg3;
+ (void)reportAppBrandVideoPreLoadWithFilePath:(id)arg1 costTimeMs:(unsigned long long)arg2 preLoadStatus:(unsigned long long)arg3;
+ (unsigned long long)queryPreloadStatusWithVideoUrl:(id)arg1;
@end
