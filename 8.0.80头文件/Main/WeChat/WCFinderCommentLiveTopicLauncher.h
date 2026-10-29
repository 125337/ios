@interface WCFinderCommentLiveTopicLauncher : NSObject
+ (void)launchWithMicTopic:(id)arg1 recommendReason:(id)arg2 reportJson:(id)arg3 username:(id)arg4 fromVC:(id)arg5 feedId:(id)arg6 commentCount:(long long)arg7 commentScene:(id)arg8 liveMode:(unsigned int)arg9 liveSubMode:(unsigned int)arg10;
+ (void)launchCreateNoticeWithMicTopic:(id)arg1 reportJson:(id)arg2 username:(id)arg3 fromVC:(id)arg4 feedId:(id)arg5 commentCount:(long long)arg6 commentScene:(id)arg7;
+ (void)showEducationFromVC:(id)arg1 micTopic:(id)arg2 recommendReason:(id)arg3 reportJson:(id)arg4 username:(id)arg5 feedId:(id)arg6 commentCount:(long long)arg7 commentScene:(id)arg8 liveMode:(unsigned int)arg9 liveSubMode:(unsigned int)arg10;
+ (void)launchStarterWithMicTopic:(id)arg1 username:(id)arg2 fromVC:(id)arg3 refFeedId:(unsigned long long)arg4 reportJson:(id)arg5 liveMode:(unsigned int)arg6 liveSubMode:(unsigned int)arg7;
+ (void)p_reportElementWithActionType:(unsigned long long)arg1 elementId:(id)arg2 feedId:(id)arg3 commentCount:(long long)arg4 commentScene:(id)arg5 reportJson:(id)arg6;
+ (void)reportCommentBannerActionType:(unsigned long long)arg1 feedId:(id)arg2 commentCount:(long long)arg3 commentScene:(id)arg4 reportJson:(id)arg5;
+ (void)reportCommentCreateNoticeActionType:(unsigned long long)arg1 feedId:(id)arg2 commentCount:(long long)arg3 commentScene:(id)arg4 reportJson:(id)arg5;
+ (void)p_reportEducationGoActionType:(unsigned long long)arg1 feedId:(id)arg2 commentCount:(long long)arg3 commentScene:(id)arg4 reportJson:(id)arg5;
+ (id)p_buildCommentAreaMicTopicInfoWithRefFeedId:(unsigned long long)arg1 reportJson:(id)arg2;
+ (BOOL)p_validateCanLaunchLiveStarterFromVC:(id)arg1;
@end
