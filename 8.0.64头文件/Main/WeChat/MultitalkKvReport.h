@interface MultitalkKvReport : NSObject
+ (void)callReportWithResult:(unsigned int)arg1;
+ (void)receiveReportWithResult:(unsigned int)arg1 groupId:(id)arg2;
+ (void)connectReportWithResult:(unsigned int)arg1 roleType:(unsigned int)arg2 consuming:(long long)arg3 groupId:(id)arg4 failedReason:(unsigned int)arg5;
+ (void)durationReportWithDuration:(unsigned int)arg1 groupId:(id)arg2;
+ (void)selectContactReportWithSelectedContactCount:(unsigned int)arg1 hasReachLimit:(unsigned int)arg2 scene:(unsigned int)arg3 selectedContactFromGroupCount:(unsigned int)arg4 groupId:(id)arg5 clickCount:(unsigned int)arg6;
+ (void)videoDurationReportWithDuration:(unsigned int)arg1 groupId:(id)arg2;
+ (void)functionGroupId:(id)arg1 minimizeClick:(unsigned int)arg2 muteClick:(unsigned int)arg3 speakerClick:(unsigned int)arg4 videoClick:(unsigned int)arg5 addMemberClick:(unsigned int)arg6;
+ (void)minimizeClickWithGroupId:(id)arg1 withMode:(unsigned int)arg2 action:(unsigned int)arg3;
+ (void)reportClickEnterButtonOfBanner:(BOOL)arg1 overLimit:(BOOL)arg2 result:(BOOL)arg3 wxGroupId:(id)arg4 roomid:(unsigned long long)arg5 roomkey:(unsigned long long)arg6;
+ (void)reportClickCancelButtonOfBanner:(BOOL)arg1 overLimit:(BOOL)arg2 result:(BOOL)arg3 wxGroupId:(id)arg4 roomid:(unsigned long long)arg5 roomkey:(unsigned long long)arg6;
+ (void)reportClickCancelButtonForRejectOfBanner:(BOOL)arg1 overLimit:(BOOL)arg2 result:(BOOL)arg3 wxGroupId:(id)arg4 roomid:(unsigned long long)arg5 roomkey:(unsigned long long)arg6;
+ (void)reportClickBannerWhenReachLimit:(BOOL)arg1 wxGroupId:(id)arg2 roomid:(unsigned long long)arg3 roomkey:(unsigned long long)arg4;
+ (void)reportActionType:(unsigned int)arg1 status:(unsigned int)arg2 roomid:(unsigned long long)arg3 roomkey:(unsigned long long)arg4;
+ (void)reportOperationArrowBtnExposeWithExpand:(BOOL)arg1 roomKey:(unsigned long long)arg2 roomId:(unsigned long long)arg3;
+ (void)reportOperationArrowBtnClickWithExpand:(BOOL)arg1 roomKey:(unsigned long long)arg2 roomId:(unsigned long long)arg3;
+ (void)reportScreenSharingWithGroupId:(id)arg1 sessionId:(unsigned int)arg2 screenType:(long long)arg3 actionType:(long long)arg4 userType:(long long)arg5;
@end
