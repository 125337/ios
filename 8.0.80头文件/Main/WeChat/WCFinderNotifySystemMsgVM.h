@interface WCFinderNotifySystemMsgVM : NSObject
{
    int _notificationSubscene; // +0x8
    id <WCFinderNotifySystemMsgVMDelegate> _delegate; // +0x10
    NSString * _currentFinderUsername; // +0x18
    WCFinderContact * _currentContact; // +0x20
    WCFinderListLoadingStateModel * _loadingState; // +0x28
    NSString * _clientUdfKvJSON; // +0x30
    unsigned long long _identityScene; // +0x38
    NSMutableArray * _readArray; // +0x40
    NSMutableArray * _unreadArray; // +0x48
    NSMutableSet * _svrMentionIDSet; // +0x50
    NSData * _pageBuffer; // +0x58
    MentionListLastReadInfo * _lastReadInfo; // +0x60
    double _containerCacheWidth; // +0x68
}
- (id)initWithFinderUsername:(id)arg1 identityScene:(unsigned long long)arg2 notificationSubscene:(int)arg3 clientUdfKvJSON:(id)arg4;
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
- (int)notificationSubscene;
- (void)setNotificationSubscene:(int)arg1;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (id)currentContact;
- (void)setCurrentContact:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)clientUdfKvJSON;
- (void)setClientUdfKvJSON:(id)arg1;
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
