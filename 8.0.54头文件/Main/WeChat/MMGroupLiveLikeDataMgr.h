@interface MMGroupLiveLikeDataMgr : MMLiveLikeDataMgr <MMGroupLiveMgrExt>
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyLikeWithPostTask:(id)arg1;
- (void)updateLikeMessage:(id)arg1 likeCount:(unsigned long long)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onLiveLikeResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
@end

