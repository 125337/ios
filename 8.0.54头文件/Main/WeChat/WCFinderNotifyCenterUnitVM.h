@interface WCFinderNotifyCenterUnitVM : NSObject
{
    BOOL _ignoredMentionsExpanded; // +0x8
    BOOL _shouldShowIgnoreTips; // +0x9
    id <WCFinderNotifyCenterUnitVMDelegate> _delegate; // +0x10
    unsigned long long _tabType; // +0x18
    WCFinderContact * _currentContact; // +0x20
    WCFinderListLoadingStateModel * _loadingState; // +0x28
    ThankRedPackageInfo * _redPackageBannerInfo; // +0x30
    NSMutableArray * _readArray; // +0x38
    NSMutableArray * _unreadArray; // +0x40
    NSMutableSet * _svrMentionIDSet; // +0x48
    NSData * _pageBuffer; // +0x50
    MentionListLastReadInfo * _lastReadInfo; // +0x58
    double _cacheContainerWidth; // +0x60
}
- (id)initWithContact:(id)arg1 tabType:(unsigned long long)arg2;
- (void)fetchFirstPageData;
- (void)refetchData;
- (void)clearDataWithNotifyChange:(BOOL)arg1;
- (void)clearData;
- (void)expandIgnoredMentionWithCompletion:(id /* block */)arg1;
- (void)fetchMoreData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)appendMentionList:(id)arg1;
- (long long)getRequestScene;
- (void)cleanUnreadCount;
- (id)cellVMWithSectionID:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (id)dataSnapshot;
- (void)closeIgnoreTips;
- (BOOL)shouldShowExpandFooter;
- (void)deleteMentionAtIndex:(unsigned long long)arg1 withSectionID:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)addToBlackListWithMention:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)recalucateCellCacheHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (id)currentContact;
- (void)setCurrentContact:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)redPackageBannerInfo;
- (void)setRedPackageBannerInfo:(id)arg1;
- (BOOL)ignoredMentionsExpanded;
- (void)setIgnoredMentionsExpanded:(BOOL)arg1;
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
- (BOOL)shouldShowIgnoreTips;
- (void)setShouldShowIgnoreTips:(BOOL)arg1;
- (void).cxx_destruct;
@end

