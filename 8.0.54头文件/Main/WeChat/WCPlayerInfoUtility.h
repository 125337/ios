@interface WCPlayerInfoUtility : MMObject
+ (id)genDefaultAVPlayerInfoWithMediaWrap:(id)arg1 playerScene:(unsigned long long)arg2 videoPath:(id)arg3 initialTime:(double)arg4 bLoop:(BOOL)arg5;
+ (void)updateAVPlayerInfo:(id)arg1 withMediaWrap:(id)arg2;
+ (unsigned long long)getMediaUrlNetTypeByVideoPath:(id)arg1;
+ (id)generateDownloadArgsWrapWithMediaWrap:(id)arg1 playerScene:(unsigned long long)arg2;
@end

