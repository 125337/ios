@interface HistoryMsgUtils : NSObject
+ (BOOL)isJoinGroupMsgNeedDownloadMsg:(id)arg1;
+ (BOOL)isOpenNewHistoryMsgShow;
+ (BOOL)isOpenNewHistoryMsgUpload;
+ (BOOL)isCloseOldHistoryMsgUpload;
+ (BOOL)checkHistoryUploadInfo:(id)arg1;
+ (id)genTextMsgWithText:(id)arg1 msgWrap:(id)arg2;
+ (id)covertToAddMsgWithMsgWrap:(id)arg1;
+ (id)getThumbnailWithMsgWrap:(id)arg1;
+ (BOOL)isNeedUploadDataMsg:(id)arg1;
+ (BOOL)canSendOriMsg:(id)arg1;
+ (BOOL)isCanSendOriginAppMsg:(id)arg1;
+ (BOOL)isMsgUseCdnUpload:(id)arg1;
+ (void)reportWhenShowHistoryMsg:(id)arg1;
+ (void)reportWhenReceiveInviteMsg:(id)arg1;
@end

