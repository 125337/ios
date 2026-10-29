@interface WCFinderWechatMentionViewModel : NSObject
{
    BOOL _shouldShowNewTips; // +0x8
    BOOL _hadFetchData; // +0x9
    BOOL _continueFlag; // +0xa
    id <WCFinderWechatMentionViewModelDelegate> _delegate; // +0x10
    unsigned long long _tabType; // +0x18
    WCFinderListLoadingStateModel * _loadingState; // +0x20
    NSMutableArray * _dataArray; // +0x28
    NSArray * _readDataArray; // +0x30
    NSArray * _unreadDataArray; // +0x38
    NSMutableSet * _mentionIDSet; // +0x40
    unsigned long long _currenMaxReadId; // +0x48
    double _cacheContainerWith; // +0x50
}
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;
- (id)mentionIDSet;
- (void)fetchNewestMention;
- (id)getMentionCellVMWithIndexPath:(id)arg1;
- (id)getMentionArrayWithSection:(unsigned long long)arg1;
- (unsigned long long)getMentionCount;
- (unsigned long long)getUnreadMentionCount;
- (BOOL)_showNewMentionTipsHeader:(unsigned long long)arg1;
- (void)updateLastWechatMentionReadId;
- (id)dataArray;
- (void)fetchLocalMentions;
- (void)fetchLastMentionsWithMention;
- (void)appendDataArrayWithMentions:(id)arg1;
- (id)mergeCellViewModel:(id)arg1;
- (void)deleteMentionIndexPath:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)deleteMentionWithIndexPath:(id)arg1;
- (long long)mentionType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (BOOL)shouldShowNewTips;
- (void)setShouldShowNewTips:(BOOL)arg1;
- (void)setDataArray:(id)arg1;
- (id)readDataArray;
- (void)setReadDataArray:(id)arg1;
- (id)unreadDataArray;
- (void)setUnreadDataArray:(id)arg1;
- (void)setMentionIDSet:(id)arg1;
- (unsigned long long)currenMaxReadId;
- (void)setCurrenMaxReadId:(unsigned long long)arg1;
- (BOOL)hadFetchData;
- (void)setHadFetchData:(BOOL)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (double)cacheContainerWith;
- (void)setCacheContainerWith:(double)arg1;
- (void).cxx_destruct;
@end

