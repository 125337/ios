@interface CBTHalfScreenTimelineCommentRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (void)showFromVC:(id)arg1 feedId:(id)arg2 timelineCommentList:(id)arg3 commentIndex:(long long)arg4 selectedCommentText:(id)arg5 dismissCallback:(id /* block */)arg6;
+ (id)optionsWithFeedId:(id)arg1 timelineCommentList:(id)arg2 commentIndex:(long long)arg3 selectedCommentText:(id)arg4 srcInfoParams:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
