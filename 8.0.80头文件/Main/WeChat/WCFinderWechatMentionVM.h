@interface WCFinderWechatMentionVM : NSObject
{
    BOOL _shouldShowNewTips; // +0x8
    BOOL _ignoredMentionsExpanded; // +0x9
    BOOL _shouldShowIgnoreTips; // +0xa
    id <WCFinderWechatMentionVMDelegate> _delegate; // +0x10
    WCFinderListLoadingStateModel * _loadingState; // +0x18
    long long _tabType; // +0x20
    unsigned long long _redDotUnreadCount; // +0x28
    NSMutableArray * _readArray; // +0x30
    NSMutableArray * _unreadArray; // +0x38
    NSMutableSet * _svrMentionIDSet; // +0x40
    NSData * _pageBuffer; // +0x48
    MentionListLastReadInfo * _lastReadInfo; // +0x50
    double _cacheContainerWidth; // +0x58
    NSDiffableDataSourceSnapshot * _currentSnapshot; // +0x60
    unsigned long long _displayStyle; // +0x68
    unsigned long long _redDotUnreadCountVersion; // +0x70
}
- (id)initWithTabType:(long long)arg1;
- (void)fetchFirstPageData;
- (void)refetchData;
- (void)clearDataWithNotifyChange:(BOOL)arg1;
- (void)expandIgnoredMentionWithCompletion:(id /* block */)arg1;
- (void)fetchMoreData;
- (void)setRedDotUnreadCount:(unsigned long long)arg1;
- (void)_fetchDataWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (unsigned long long)messageReportTabID;
- (long long)getRequestScene;
- (void)appendMentionList:(id)arg1;
- (id)dataSnapshot;
- (void)closeIgnoreTips;
- (BOOL)shouldShowExpandFooter;
- (id)cellVMIndexPath:(id)arg1;
- (BOOL)_showNewMentionTipsHeader:(long long)arg1;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (void)deleteMentionWithIndexPath:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)deleteMentionWithIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (BOOL)shouldShowNewTips;
- (void)setShouldShowNewTips:(BOOL)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (BOOL)ignoredMentionsExpanded;
- (void)setIgnoredMentionsExpanded:(BOOL)arg1;
- (unsigned long long)redDotUnreadCount;
- (id)readArray;
- (void)setReadArray:(id)arg1;
- (id)unreadArray;
- (void)setUnreadArray:(id)arg1;
- (id)svrMentionIDSet;
- (void)setSvrMentionIDSet:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (id)lastReadInfo;
- (void)setLastReadInfo:(id)arg1;
- (double)cacheContainerWidth;
- (void)setCacheContainerWidth:(double)arg1;
- (id)currentSnapshot;
- (void)setCurrentSnapshot:(id)arg1;
- (BOOL)shouldShowIgnoreTips;
- (void)setShouldShowIgnoreTips:(BOOL)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)redDotUnreadCountVersion;
- (void)setRedDotUnreadCountVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
