@interface WCTimelineSavePicVideoReporter : NSObject
+ (void)doReportSessionID:(id)arg1 snsScene:(long long)arg2 failedReason:(id)arg3 dataItem:(id)arg4 isSuccess:(BOOL)arg5 materialType:(long long)arg6;
+ (unsigned long long)snsSceneFromWCSNSNodeVideoViewScene:(unsigned long long)arg1;
+ (unsigned long long)snsSceneFromWCMomentsBrowseScene:(unsigned long long)arg1;
+ (unsigned long long)snsSceneFromContentItemScene:(long long)arg1;
+ (id)getSnsSessionIdWithUserName:(id)arg1 EnterScene:(long long)arg2;
@end
