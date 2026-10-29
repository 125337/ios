@interface MMLiveBizArticleListViewModel : NSObject
{
    WCFinderLiveTransferCGI * _requestingTransferCGI; // +0x8
    BOOL _isRequestingNextPage; // +0x10
    BOOL _hasNextPage; // +0x11
    unsigned int _nextSeq; // +0x14
    NSString * _lastContext; // +0x18
    id <MMLiveBizArticleListViewModelDelegate> _delegate; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    FinderBizUserInfo * _bizUserInfo; // +0x30
    long long _requestType; // +0x38
    NSMutableArray * _articleList; // +0x40
    NSString * _searchQuery; // +0x48
}
- (id)initWithLiveTaskId:(id)arg1 bizUserInfo:(id)arg2 requestType:(long long)arg3;
- (void)_resetRequestContext;
- (void)requestFirstPage;
- (void)requestNextPageIfNeeded;
- (void)_requestNextPage;
- (unsigned int)_getCGINumber;
- (id)_createRequestObject;
- (Class)_getResponseObjectClass;
- (void)_handleResponseObject:(id)arg1;
- (void)_appendArticles:(id)arg1;
- (void)_articlesDidUpdate;
- (void)_loadStatusDidUpdate;
- (long long)articleLoadStatus;
- (void)setSearchQuery:(id)arg1;
- (void)loadTestArticlesIfNeeded;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (id)bizUserInfo;
- (long long)requestType;
- (id)articleList;
- (id)searchQuery;
- (void).cxx_destruct;
@end

