@interface MMFinderLiveAnchorThumbLikeListViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    BOOL _isLoading; // +0x9
    BOOL _firstPageLoaded; // +0xa
    BOOL _invalidated; // +0xb
    id <MMFinderLiveAnchorThumbLikeListViewModelDelegate> _delegate; // +0x10
    unsigned long long _totalLikeCount; // +0x18
    NSMutableArray * _likeContactList; // +0x20
    NSData * _lastBuffer; // +0x28
    unsigned long long _generation; // +0x30
    MMLiveTask * _requestTask; // +0x38
    NSMutableDictionary * _likeCounts; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    unsigned long long _objectId; // +0x50
}
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 totalLikeCount:(unsigned long long)arg3;
- (void)loadFirstPage;
- (void)loadNextPage;
- (void)fetchPageWithLastBuffer:(id)arg1 isFirstPage:(BOOL)arg2;
- (id)likeCountForContact:(id)arg1;
- (BOOL)acceptsGeneration:(unsigned long long)arg1;
- (id)identityKeyForContact:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)totalLikeCount;
- (void)setTotalLikeCount:(unsigned long long)arg1;
- (id)likeContactList;
- (void)setLikeContactList:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)firstPageLoaded;
- (void)setFirstPageLoaded:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (BOOL)invalidated;
- (void)setInvalidated:(BOOL)arg1;
- (id)requestTask;
- (void)setRequestTask:(id)arg1;
- (id)likeCounts;
- (void)setLikeCounts:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
