@interface MMFinderGroupLiveChatManager : MMUserService <MMServiceProtocol>
{
    BOOL _isFetchingData; // +0x8
    BOOL _isDataFetchedAfterSwitch; // +0x9
    BOOL _isStart; // +0xa
    BOOL _isFetchingReddotData; // +0xb
    BOOL _isPauseFetchReddot; // +0xc
    BOOL _isStopFetchingCommentData; // +0xd
    unsigned int _nextIntervalMs; // +0x10
    unsigned int _redPointNextIntervalMs; // +0x14
    WCFinderGroupLiveChatSaveToLocalManager * _saveToLocalManager; // +0x18
    NSMutableArray * _boxIdList; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    MMFinderGroupLiveChatBoxId * _boxId; // +0x30
    NSRecursiveLock * _lock; // +0x38
    NSObject<OS_dispatch_source> * _timer; // +0x40
    NSMutableDictionary * _lastBufferDict; // +0x48
    NSMutableSet * _hasLoadedHistoryCache; // +0x50
    OrderedDictionary * _cacheChatHistoryDict; // +0x58
    NSMutableDictionary * _tempClientIdAndSeqDict; // +0x60
    unsigned long long _boxStatus; // +0x68
}
- (void)dealloc;
- (void)startLiveWithTaskId:(id)arg1;
- (void)setup;
- (void)switchBoxId:(id)arg1 pageModel:(id)arg2;
- (void)makeGroupLiveChatRoomReddot;
- (void)makeGroupLiveChatRoomComment:(id)arg1 pageModel:(id)arg2;
- (void)reset;
- (void)clear;
- (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgDict:(id)arg1 forTaskId:(id)arg2 searchSeqNum:(id)arg3;
- (void)fetchLiveGetFriendBoxLiveMsg:(id)arg1 lastBuffer:(id)arg2;
- (void)handleTransferToChatHistoryAppMsgListCompletion:(BOOL)arg1 chatRoomItemDict:(id)arg2 needClearMsg:(BOOL)arg3 boxId:(id)arg4;
- (void)handleTransferToChatHistoryUpdateAppMsgListCompletion:(BOOL)arg1 updateMessageItems:(id)arg2;
- (void)scheduleFetchLiveFriendsBoxLiveMsg;
- (void)scheduleFetchLiveFriendsBoxLiveMsg:(BOOL)arg1;
- (void)stopSchedule;
- (void)fetchCommentFromRemote;
- (double)nextFetchTimeInterval;
- (double)randomFetchTimeInterval;
- (double)nextFetchRedDotTimeInterval;
- (double)randomNextFetchRedDotTimeInterval;
- (void)transferToChatHistoryAppMsgList:(id)arg1 isInitial:(BOOL)arg2 boxId:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyMessage:(id)arg1 needClearMsg:(BOOL)arg2 boxId:(id)arg3 isLocalMessage:(BOOL)arg4;
- (void)notifyMessagesLoaded;
- (void)notifyMessagesSuccessLoaded;
- (void)notifyLocalMessagesLoaded;
- (void)notifyUpdateMessageItems:(id)arg1;
- (void)fetchLiveRedPoint:(id)arg1;
- (void)handleFetchLiveRedPointSuccess:(id)arg1 nextIntervalMs:(unsigned int)arg2;
- (void)notifyRedPointMessage:(id)arg1;
- (void)scheduleFetchLiveBoxReddot;
- (void)scheduleFetchLiveBoxReddot:(BOOL)arg1;
- (void)stopReddotSchedule;
- (void)pauseReddotSchedule;
- (void)fetchReddotFromRemote;
- (id)transferToBoxIdListFromFinderLiveBoxIdList:(id)arg1;
- (void)saveToLocal;
- (BOOL)updateOrAdd:(unsigned long long)arg1 historyItem:(id)arg2;
- (void)removeHistoryItemBySeq:(unsigned long long)arg1;
- (unsigned long long)updateOrAddItem:(id)arg1;
- (unsigned long long)updateItem:(id)arg1 clientMsgId:(id)arg2;
- (void)removeCacheInRange:(_NSRange)arg1;
- (void)trimMsgList;
- (void)removeAllCache;
- (long long)updateIsLike:(BOOL)arg1 seq:(unsigned long long)arg2;
- (long long)updateIsLike:(BOOL)arg1 likeCount:(unsigned int)arg2 seq:(unsigned long long)arg3 clientMsgId:(id)arg4;
- (long long)updateLikeCountWithMsg:(id)arg1 seq:(unsigned long long)arg2;
- (void)updateTempPostMsgItemWithClientMsgId:(id)arg1 item:(id)arg2;
- (void)addTempPostMsgItemWithClientMsgId:(id)arg1 item:(id)arg2;
- (void)removeTempPostMsgItemWithClientMsgId:(id)arg1;
- (id)finderLiveTaskForTaskId:(id)arg1;
- (BOOL)checkCurrentBoxIdHasLoadHistoryMsg;
- (id)currentGroupLivePath;
- (id)currentLastBufferDictPath;
- (id)currentBoxIdLastBuffer;
- (id)cacheChatHistoryDict;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (id)saveToLocalManager;
- (void)setSaveToLocalManager:(id)arg1;
- (id)boxIdList;
- (void)setBoxIdList:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)nextIntervalMs;
- (void)setNextIntervalMs:(unsigned int)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)isDataFetchedAfterSwitch;
- (void)setIsDataFetchedAfterSwitch:(BOOL)arg1;
- (id)lastBufferDict;
- (void)setLastBufferDict:(id)arg1;
- (id)hasLoadedHistoryCache;
- (void)setHasLoadedHistoryCache:(id)arg1;
- (void)setCacheChatHistoryDict:(id)arg1;
- (unsigned int)redPointNextIntervalMs;
- (void)setRedPointNextIntervalMs:(unsigned int)arg1;
- (id)tempClientIdAndSeqDict;
- (void)setTempClientIdAndSeqDict:(id)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)isFetchingReddotData;
- (void)setIsFetchingReddotData:(BOOL)arg1;
- (BOOL)isPauseFetchReddot;
- (void)setIsPauseFetchReddot:(BOOL)arg1;
- (BOOL)isStopFetchingCommentData;
- (void)setIsStopFetchingCommentData:(BOOL)arg1;
- (unsigned long long)boxStatus;
- (void)setBoxStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
