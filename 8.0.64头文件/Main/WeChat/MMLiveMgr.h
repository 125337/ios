@interface MMLiveMgr : MMUserService <IMsgExt, IContactMgrExt, IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary * _openedLiveItemDict; // +0x8
    NSRecursiveLock * _lock; // +0x10
    OrderedDictionary * _fetchLiveInfoQueue; // +0x18
    NSMutableDictionary * _fetchingDict; // +0x20
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)unreadLiveCount:(id)arg1;
- (id)unreadLiveList:(id)arg1;
- (id)openedLiveList:(id)arg1;
- (void)closeLiveTipBar:(unsigned long long)arg1 roomId:(id)arg2;
- (void)closeLiveTipBarWithRoomId:(id)arg1;
- (void)loadLiveInfoIfExists:(id)arg1;
- (void)loadOpenedLivesAsync;
- (void)batchFetchLiveInfo:(id)arg1 roomId:(id)arg2;
- (BOOL)checkFetchLiveInfoQueue;
- (void)updateLiveStatusEndWithLiveId:(unsigned long long)arg1;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)addOpenedLive:(id)arg1;
- (void)addOpenedLiveList:(id)arg1 roomId:(id)arg2;
- (void)removeOpenedLive:(id)arg1;
- (void)removeOpenedLive:(unsigned long long)arg1 roomId:(id)arg2;
- (void)updateOpenedLiveIfNecessary:(id)arg1;
- (void)notifyLiveCountChanged:(id)arg1;
- (BOOL)isGroupLiveMessage:(id)arg1;
- (id)currentLiveChatRoomId;
- (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onGetNewXmlCloseLiveMsg:(id)arg1;
- (void)onGetNewXmlFinderChatRoomLiveCloseMsg:(id)arg1;
- (void)onGetNewXmlFinderChatRoomLiveTipsbar:(id)arg1;
- (id)openedLiveItemDict;
- (void)setOpenedLiveItemDict:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)fetchLiveInfoQueue;
- (void)setFetchLiveInfoQueue:(id)arg1;
- (id)fetchingDict;
- (void)setFetchingDict:(id)arg1;
- (void).cxx_destruct;
@end
