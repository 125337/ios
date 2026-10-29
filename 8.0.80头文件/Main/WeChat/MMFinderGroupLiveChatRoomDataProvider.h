@interface MMFinderGroupLiveChatRoomDataProvider : NSObject
{
    NSArray * _chatRoomItemCache; // +0x8
    NSMutableArray * _mutaChatRoomItemCache; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    WCFinderGroupLiveChatSaveToLocalFileHandler * _fileHandler; // +0x20
}
- (id)initWithLiveId:(id)arg1;
- (void)setup;
- (void)addChatRoomItemList:(id)arg1;
- (void)clearChatRoomItems;
- (BOOL)isContainChatRoomItemInCache:(id)arg1;
- (void)saveToLocal;
- (id)loadRoomBoxIdList;
- (id)mutaChatRoomItemCache;
- (id)chatRoomItemCache;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (void)setChatRoomItemCache:(id)arg1;
- (void)setMutaChatRoomItemCache:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)fileHandler;
- (void)setFileHandler:(id)arg1;
- (void).cxx_destruct;
@end
