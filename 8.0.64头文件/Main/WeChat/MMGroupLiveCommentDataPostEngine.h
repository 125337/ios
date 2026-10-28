@interface MMGroupLiveCommentDataPostEngine : MMLiveCommentDataPostEngine <MMGroupLiveMgrExt>
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyPostLiveMessageWithPostTask:(id)arg1;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)arg1 boxType:(unsigned int)arg2;
- (void)onPostLiveMessageResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
@end
