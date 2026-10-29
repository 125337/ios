@interface WCFinderBulletCommentReporter : NSObject
+ (void)exposureWithCommentIds:(id)arg1 reportJsons:(id)arg2 contentTid:(id)arg3 startTime:(double)arg4 commentScene:(int)arg5 requestReportJson:(id)arg6;
+ (void)postSuccessWithComments:(id)arg1 contentVM:(id)arg2 isLandscape:(BOOL)arg3 commentScene:(int)arg4;
+ (void)enabledEventWithEnabled:(BOOL)arg1 isLandscape:(BOOL)arg2 commentScene:(int)arg3 contentVM:(id)arg4;
+ (void)popUpMenuWithEvent:(id)arg1 isLandscape:(BOOL)arg2 action:(unsigned long long)arg3 commentInfo:(id)arg4 commentScene:(int)arg5 contentVM:(id)arg6 followButtonId:(unsigned long long)arg7;
+ (void)actionSheetMenuWithEvent:(id)arg1 action:(unsigned long long)arg2 commentInfo:(id)arg3 commentScene:(int)arg4 contentVM:(id)arg5 followButtonId:(unsigned long long)arg6;
+ (id)_bulletReportInfoWithCommentInfo:(id)arg1;
+ (id)_generalParametersWithContentVM:(id)arg1 isLandscape:(BOOL)arg2;
+ (id)_actionOptionsStringWithAction:(unsigned long long)arg1;
+ (long long)_postTypeFromCommentInfo:(id)arg1;
+ (double)_playPercentForContentVM:(id)arg1;
+ (id)genBulletCommentReportStrWithContentVM:(id)arg1 commentInfo:(id)arg2 status:(long long)arg3 isLandscape:(BOOL)arg4;
+ (void)reportPostBulletCommentWithContentVM:(id)arg1 commentInfo:(id)arg2 status:(long long)arg3 isLandscape:(BOOL)arg4;
+ (void)reportBulletCommentWithContentVM:(id)arg1 commentInfo:(id)arg2 isLandscape:(BOOL)arg3 feedViewerScene:(unsigned long long)arg4 eventType:(long long)arg5;
+ (void)reportDeleteBulletCommentWithContentVM:(id)arg1 commentInfo:(id)arg2 isLandscape:(BOOL)arg3 feedViewerScene:(unsigned long long)arg4;
+ (void)reportOpenBulletCommentViewControllerWithPlayingState:(BOOL)arg1 feedId:(id)arg2 scene:(int)arg3;
+ (id)genBulletCommentReportDictWithContentVM:(id)arg1 commentInfo:(id)arg2 isLandscape:(BOOL)arg3 feedViewerScene:(unsigned long long)arg4;
+ (long long)convertToScreenType:(BOOL)arg1;
+ (void)reportBulletSetting:(id)arg1 mediaType:(unsigned long long)arg2 commentscene:(int)arg3 isSwitchOn:(BOOL)arg4;
+ (void)bindBulletOpenGuideBubbleView:(id)arg1 logicParent:(id)arg2 contentVM:(id)arg3 playPercent:(int)arg4 showWord:(id)arg5;
+ (void)markBulletOpenGuideBubbleView:(id)arg1 unexpReason:(long long)arg2;
@end
