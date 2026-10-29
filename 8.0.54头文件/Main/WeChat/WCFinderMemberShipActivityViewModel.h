@interface WCFinderMemberShipActivityViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt, WCFinderMemberShipZoneTabModelProtocol>
{
    BOOL _isAuthor; // +0x8
    id <WCFinderMemberShipActivityViewModelDelegate> _delegate; // +0x10
    unsigned long long _unreadCount; // +0x18
    unsigned long long _totalCount; // +0x20
    NSString * _finderUsername; // +0x28
    NSMutableArray * _displayPageModels; // +0x30
    WCFinderMemberShipDiscussionPage * _currentPage; // +0x38
    NSString * _finderMemberTicket; // +0x40
    NSString * _redirectFeedID; // +0x48
}
- (id)initWithFinderMemberTicket:(id)arg1 finderUsername:(id)arg2 isAuthor:(BOOL)arg3 redirectFeedID:(id)arg4;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (void)updateSelectedPage:(id)arg1;
- (void)getLocalFirstPageData;
- (void)requestFirstPage;
- (id /* block */)createFeedMapper;
- (id /* block */)createAuthorPostingFeedFetcher;
- (id /* block */)createPageCacheFetcher:(unsigned long long)arg1;
- (BOOL)enableReceivePostDataItem:(id)arg1;
- (void)onMemberShipQAPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onMemberShipQAPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipQAPostSessionStartUpload:(id)arg1;
- (void)insertOrUpdateDataItem:(id)arg1 refTid:(id)arg2;
- (void)insertOrUpdateDataItem:(id)arg1 refTid:(id)arg2 pageArray:(id)arg3;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(BOOL)arg2;
- (void)requestRemoteFirstPageData;
- (void)requestSearchPageData:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)unreadCount;
- (void)setUnreadCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)displayPageModels;
- (void)setDisplayPageModels:(id)arg1;
- (id)currentPage;
- (void)setCurrentPage:(id)arg1;
- (id)finderMemberTicket;
- (void)setFinderMemberTicket:(id)arg1;
- (id)redirectFeedID;
- (void)setRedirectFeedID:(id)arg1;
- (void).cxx_destruct;
@end

