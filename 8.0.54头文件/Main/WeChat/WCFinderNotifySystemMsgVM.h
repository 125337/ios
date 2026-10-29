@interface WCFinderNotifySystemMsgVM : NSObject
{
    id <WCFinderNotifySystemMsgVMDelegate> _delegate; // +0x8
    WCFinderContact * _currentContact; // +0x10
    WCFinderListLoadingStateModel * _loadingState; // +0x18
    NSString * _currentFinderUsername; // +0x20
    unsigned long long _identityScene; // +0x28
    NSMutableArray * _readArray; // +0x30
    NSMutableArray * _unreadArray; // +0x38
    NSMutableSet * _svrMentionIDSet; // +0x40
    NSData * _pageBuffer; // +0x48
    MentionListLastReadInfo * _lastReadInfo; // +0x50
    double _containerCacheWidth; // +0x58
}
- (id)initWithFinderUsername:(id)arg1 identityScene:(unsigned long long)arg2;
- (void)fetchFirstPageData;
- (void)refetchData;
- (BOOL)isAuthorScene;
- (void)clearDataWithNotifyChange:(BOOL)arg1;
- (void)fetchMoreData;
- (void)_fetchData;
- (void)appendMentionList:(id)arg1;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (id)cellVMWithIndexPath:(id)arg1;
- (id)dataSnapshot;
- (void)recalucateCellCacheHeight:(double)arg1;
- (long long)getRequestScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentContact;
- (void)setCurrentContact:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (unsigned long long)identityScene;
- (void)setIdentityScene:(unsigned long long)arg1;
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
- (double)containerCacheWidth;
- (void)setContainerCacheWidth:(double)arg1;
- (void).cxx_destruct;
@end

