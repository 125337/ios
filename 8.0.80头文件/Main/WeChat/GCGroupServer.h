@interface GCGroupServer : GCBaseServer
{
    int _roomStatusLongPollingSeq; // +0x8
    GCRecursiveRunTask * _updateGroupTask; // +0x10
    NSMutableSet * _myChatRoomNameSet; // +0x18
    NSString * _lastVersion; // +0x20
    NSString * _getMoreChatRoomFilter; // +0x28
    NSString * _previousMoreChatRoomFilter; // +0x30
    id /* block */ _roomStatusUpdateBlock; // +0x38
}
- (id)init;
- (void)getAndUpdateMyChatRoomStatus:(id /* block */)arg1;
- (void)requestRoomStatusWithTask:(id)arg1;
- (void)onRoomStatueUpdate:(id)arg1 delaySeconds:(double *)arg2;
- (void)didJoinNewRoom:(id)arg1;
- (void)didExitChatRoom:(id)arg1;
- (void)getFirstEnterInfoRequest:(id)arg1 complectionBlock:(id /* block */)arg2;
- (void)getCanJoinGroupWithLocation:(id)arg1 complectionBlock:(id /* block */)arg2;
- (void)getMoreChatRoom:(id /* block */)arg1;
- (void)fakeMoreGetMoreChatRoomResponse:(id)arg1;
- (id)recommCellModelFromChatRecInfo:(id)arg1;
- (void)onExitRoom;
- (id)updateGroupTask;
- (void)setUpdateGroupTask:(id)arg1;
- (id)myChatRoomNameSet;
- (void)setMyChatRoomNameSet:(id)arg1;
- (id)lastVersion;
- (void)setLastVersion:(id)arg1;
- (id)getMoreChatRoomFilter;
- (void)setGetMoreChatRoomFilter:(id)arg1;
- (id)previousMoreChatRoomFilter;
- (void)setPreviousMoreChatRoomFilter:(id)arg1;
- (int)roomStatusLongPollingSeq;
- (void)setRoomStatusLongPollingSeq:(int)arg1;
- (id /* block */)roomStatusUpdateBlock;
- (void)setRoomStatusUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
