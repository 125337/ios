@interface OpenIMUtil : NSObject
+ (BOOL)checkIsOpenImChatWithViewController:(id)arg1;
+ (void)showOpenIMStorageMakeSureViewController:(id)arg1 privacyAgreementUrl:(id)arg2 fromVC:(id)arg3;
+ (void)reportOpenIMChatRoomWithReportScene:(int)arg1 chatRoomUserName:(id)arg2;
+ (void)reportOpenIMSearchFriendWithReportSessionID:(id)arg1 reportActionCode:(int)arg2 reportActionResult:(int)arg3 reportClickAddContact:(int)arg4;
+ (void)reportOpenIMSucceedContactdWithReportSessionID:(id)arg1 reportUserName:(id)arg2 reportSucceedStatus:(int)arg3 reportUserStatus:(int)arg4 reportShowSucceedMethod:(int)arg5 reportClickSucceedAction:(int)arg6 reportWatchMessageRecord:(int)arg7 reportSendMessageStatus:(int)arg8;
+ (void)reportOpenIMChatRoomClickGroupMemberHeaderImage:(id)arg1;
+ (void)reportOpenIMNewSucceedContactdWithReportSessionID:(id)arg1 reportActionCode:(int)arg2 resignationWorkUsername:(id)arg3 takeOverWorkUsername:(id)arg4 workEnterpriseDescId:(id)arg5 workEnterpriseName:(id)arg6;
@end

