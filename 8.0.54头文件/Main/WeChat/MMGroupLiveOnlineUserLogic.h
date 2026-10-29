@interface MMGroupLiveOnlineUserLogic : MMLiveOnlineUserLogic <MMGroupLiveMgrExt>
{
    id <MMGroupLiveOnlineUserLogicDelegate> logicDelegate; // +0x8
    unsigned long long _onlineUserCount; // +0x10
}
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (BOOL)kickAudience:(id)arg1;
- (id)groupTaskId;
- (id)liveTask;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onGetLiveOnlineUserListWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andUserList:(id)arg3;
- (void)onKickAudienceResult:(id)arg1 userName:(id)arg2 liveId:(unsigned long long)arg3 roomId:(id)arg4;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (unsigned long long)onlineUserCount;
- (void)setOnlineUserCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

