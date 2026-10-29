@interface CBTHalfScreenTimelineImageRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (id)sharePanelParamsWithFeedId:(id)arg1 feedUsername:(id)arg2 imgIndex:(long long)arg3 imageUrl:(id)arg4;
+ (void)reportSharePanelEventWithEventId:(id)arg1 feedId:(id)arg2 feedUsername:(id)arg3 imgIndex:(long long)arg4 imageUrl:(id)arg5;
+ (void)showFromVC:(id)arg1 feedId:(id)arg2 timelineImgList:(id)arg3 imgIndex:(long long)arg4 selectedImagePath:(id)arg5 dismissCallback:(id /* block */)arg6;
+ (id)optionsWithFeedId:(id)arg1 timelineImgList:(id)arg2 imgIndex:(long long)arg3 selectedImagePath:(id)arg4 srcInfoParams:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
