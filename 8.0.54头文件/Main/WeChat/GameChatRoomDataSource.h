@interface GameChatRoomDataSource : NSObject
{
    BOOL _isChosenChannel; // +0x8
    BOOL _isNormalDataSource; // +0x9
    BOOL _isLoadCacheData; // +0xa
    NSMutableDictionary * _localClisMsgDict; // +0x10
    NSMutableDictionary * _serverSeqDict; // +0x18
    NSMutableArray * _cellModelArray; // +0x20
    GCCollectionViewManager * _viewManager; // +0x28
    GCLoadingMoreCellModel * _loadMoreCellModel; // +0x30
    long long _lastMaxReceiveSeq; // +0x38
    unsigned long long _minReceiveMessageSeq; // +0x40
    unsigned long long _maxReceiveMessageSeq; // +0x48
    long long _channelId; // +0x50
}
- (id)init;
- (id)initWithLoadMoreCellModel:(id)arg1;
- (BOOL)canAddModel:(id)arg1;
- (id)filteredCellModelArray:(id)arg1 msgAlreayInLocalArray:(id)arg2;
- (void)replaceLocalMsgWithServerMsg:(id)arg1;
- (BOOL)checkArrayEqualViewManager;
- (void)loadFirstPageWithCellModelArray:(id)arg1;
- (void)refreshWithCellModelArray:(id)arg1 andInvisibleList:(id)arg2;
- (BOOL)checkContainsSeq:(unsigned long long)arg1;
- (void)enumerateChatBaseCellModel:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)handleChosenChannelWithRefreshCellModelArray:(id)arg1;
- (id)logInfoWithDict:(id)arg1 tip:(id)arg2;
- (void)insertNewCellModel:(id)arg1;
- (BOOL)appendModel:(id)arg1;
- (void)onNewCellModelAdd:(id)arg1;
- (void)removeLoadMoreCell;
- (void)reloadData;
- (void)clearAllData;
- (BOOL)isEmpty;
- (void)clearPreviousDataIfNeed;
- (void)clearCacheDataIfNeed;
- (id)timeCellModelForTime:(long long)arg1;
- (id)centerTipTextModelForText:(id)arg1 edgeInsets:(UIEdgeInsets)arg2;
- (long long)intervalWithLastMsgTime;
- (long long)intervalWithLastTimeNode;
- (id)addTimeModel:(id)arg1 isApend:(BOOL)arg2 lastMsgTime:(long long)arg3 lastTimeNodeTime:(long long)arg4 firstServerNode:(id)arg5;
- (void)updateMinAndMaxSeqWithCellArray:(id)arg1;
- (void)appendModelArray:(id)arg1 complection:(id /* block */)arg2;
- (void)logNewMsgArrayInsert:(id)arg1 arrayWithTimeNode:(id)arg2 fromLog:(id)arg3;
- (void)loadCachedModelArray:(id)arg1 complection:(id /* block */)arg2;
- (void)setViewManager:(id)arg1;
- (void)stopRefreshHeader;
- (id)filterdCellModelArray:(id)arg1 fromLog:(id)arg2;
- (void)onPreviousCellModelReceived:(id)arg1 fromLog:(id)arg2;
- (void)clearMinAndMaxMsgSeq;
- (void)logStr:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (id)localClisMsgDict;
- (void)setLocalClisMsgDict:(id)arg1;
- (id)serverSeqDict;
- (void)setServerSeqDict:(id)arg1;
- (id)cellModelArray;
- (void)setCellModelArray:(id)arg1;
- (id)viewManager;
- (id)loadMoreCellModel;
- (void)setLoadMoreCellModel:(id)arg1;
- (long long)lastMaxReceiveSeq;
- (void)setLastMaxReceiveSeq:(long long)arg1;
- (unsigned long long)minReceiveMessageSeq;
- (void)setMinReceiveMessageSeq:(unsigned long long)arg1;
- (unsigned long long)maxReceiveMessageSeq;
- (void)setMaxReceiveMessageSeq:(unsigned long long)arg1;
- (BOOL)isChosenChannel;
- (void)setIsChosenChannel:(BOOL)arg1;
- (BOOL)isNormalDataSource;
- (void)setIsNormalDataSource:(BOOL)arg1;
- (long long)channelId;
- (void)setChannelId:(long long)arg1;
- (BOOL)isLoadCacheData;
- (void)setIsLoadCacheData:(BOOL)arg1;
- (void).cxx_destruct;
@end

