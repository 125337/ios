@interface MainFrameGroupLiveReporter : MMUserService <MMGroupLiveMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _chatroomLiveInfos; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)logReceiveGroupLiveMsg:(id)arg1;
- (void)logEnterSessionWithGroupLive:(id)arg1 muteGroup:(BOOL)arg2;
- (id)getOpenedGroupLiveIds:(id)arg1;
- (BOOL)shouldShowGroupReddot:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (id)chatroomLiveInfos;
- (void)setChatroomLiveInfos:(id)arg1;
- (void).cxx_destruct;
@end

