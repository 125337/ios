@interface MMGroupLiveCommentDataFetchEngine : MMLiveCommentDataFetchEngne <MMGroupLiveMgrExt>
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyGetLiveMessageWithTaskId:(id)arg1;
- (id)commentDataMgr;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (id)tranferToLiveCommentDataItems:(id)arg1 roomId:(id)arg2;
- (id)filterLikeMsg:(id)arg1;
@end

