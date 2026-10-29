@interface WCFinderLivePersonalCenterWechatMentionVM : NSObject
{
    id <WCFinderLivePersonalCenterWechatMentionVMDelegate> _delegate; // +0x8
    WCFinderListLoadingStateModel * _loadingState; // +0x10
    NSMutableArray * _readArray; // +0x18
    NSMutableArray * _unreadArray; // +0x20
    NSMutableSet * _svrMentionIDSet; // +0x28
    NSData * _pageBuffer; // +0x30
    MentionListLastReadInfo * _lastReadInfo; // +0x38
    double _cacheContainerWidth; // +0x40
    NSDiffableDataSourceSnapshot * _currentSnapshot; // +0x48
}
- (id)init;
- (void)fetchFirstPageData;
- (void)refetchData;
- (void)clearDataWithNotifyChange:(BOOL)arg1;
- (void)fetchMoreData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (long long)getRequestScene;
- (void)appendMentionList:(id)arg1;
- (id)dataSnapshot;
- (id)cellVMIndexPath:(id)arg1;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (void)deleteMentionWithIndexPath:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)deleteMentionWithIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
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
- (void).cxx_destruct;
@end
