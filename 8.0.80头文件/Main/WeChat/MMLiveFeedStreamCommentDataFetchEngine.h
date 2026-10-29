@interface MMLiveFeedStreamCommentDataFetchEngine : MMLiveCommentDataFetchEngne
+ (void)filterUnValidMsg:(id)arg1;
- (id)init;
- (BOOL)applyGetLiveMessageWithTaskId:(id)arg1;
- (id)commentDataMgr;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)arg1;
- (id)feedStreamTaskWithTaskId:(id)arg1;
@end
