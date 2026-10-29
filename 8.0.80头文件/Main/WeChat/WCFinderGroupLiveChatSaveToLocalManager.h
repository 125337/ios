@interface WCFinderGroupLiveChatSaveToLocalManager : NSObject
{
    WCFinderGroupLiveChatSaveToLocalBaseHandler * _handler; // +0x8
    NSString * _liveId; // +0x10
    NSString * _roomId; // +0x18
    NSMutableSet * _saveDataSet; // +0x20
    NSObject<OS_dispatch_queue> * _kQueue; // +0x28
}
- (void)dealloc;
- (id)initWithHandler:(id)arg1 liveId:(id)arg2;
- (void)reset;
- (void)switchChatRoom:(id)arg1;
- (void)clearHistoryChat;
- (void)saveHistoryChat:(id)arg1 filePath:(id)arg2;
- (void)saveLastBufferDict:(id)arg1 filePath:(id)arg2;
- (void)loadLastBufferDict:(id /* block */)arg1 filePath:(id)arg2 roomId:(id)arg3;
- (BOOL)checkFileAvailable:(id)arg1;
- (void)loadHistoryChat:(id /* block */)arg1 filePath:(id)arg2 roomId:(id)arg3;
- (id)packHistoryModel:(id)arg1;
- (id)currentGroupLivePath;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)saveDataSet;
- (void)setSaveDataSet:(id)arg1;
- (id)kQueue;
- (void)setKQueue:(id)arg1;
- (void).cxx_destruct;
@end
