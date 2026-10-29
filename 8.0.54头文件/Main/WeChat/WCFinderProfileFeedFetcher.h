@interface WCFinderProfileFeedFetcher : NSObject <WCFinderProfileDataFetcher>
{
    BOOL _filterLiveFeed; // +0x8
    BOOL _dropFeedForFirstPageFetched; // +0x9
    BOOL _mininLocalPostingFeed; // +0xa
    BOOL _isAuthor; // +0xb
    BOOL _isLoadingFristPage; // +0xc
    WCFinderStreamLoadingState * _loadingState; // +0x10
    WCFinderStreamLoadingState * _pullingState; // +0x18
    WCFinderUserPageParams * _params; // +0x20
    NSString * _dataScene; // +0x28
    unsigned long long _refreshTime; // +0x30
    unsigned long long _firstPageRequestCount; // +0x38
    id /* block */ _feedMapper; // +0x40
    WCFinderProfileADPlugin * _adPlugin; // +0x48
    unsigned long long _minTid; // +0x50
    NSMutableArray * _waitFetchingBlock; // +0x58
    NSMutableArray * _tempStorageUpFeeds; // +0x60
}
- (id)init;
- (id)username;
- (void)loadCache:(id)arg1;
- (void)requestFristPage:(id)arg1 complete:(id /* block */)arg2;
- (void)requestNextPage:(id)arg1 complete:(id /* block */)arg2;
- (void)requestPointedPage:(id)arg1 complete:(id /* block */)arg2;
- (void)requestPrePage:(id)arg1 originFeedArray:(id)arg2 complete:(id /* block */)arg3;
- (void)_upFetchPageData:(id)arg1 originFeedArray:(id)arg2 isFirst:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)_fetchPageData:(id)arg1 firstPage:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)wakeWaitBlock;
- (id)mapFeed:(id)arg1;
- (id)mapContentVMS:(id)arg1;
- (id)userPageFetcher:(BOOL)arg1 isFirstPage:(BOOL)arg2;
- (id)_userPageFetcher:(BOOL)arg1 isFirstPage:(BOOL)arg2;
- (id)_userPagePullFetcher;
- (id)copy;
- (id)_mergePostingFeedWithDataItemArray:(id)arg1;
- (void)profileRequestFirstPage:(id)arg1 complete:(id /* block */)arg2;
- (void)profileRequestNextPage:(id)arg1 complete:(id /* block */)arg2;
- (void)profileRequestPrePage:(id)arg1 complete:(id /* block */)arg2;
- (id)profileLoadingState;
- (id)profilePullingState;
- (void)fetchDiagnosisData:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)pullingState;
- (void)setPullingState:(id)arg1;
- (BOOL)filterLiveFeed;
- (void)setFilterLiveFeed:(BOOL)arg1;
- (BOOL)dropFeedForFirstPageFetched;
- (void)setDropFeedForFirstPageFetched:(BOOL)arg1;
- (BOOL)mininLocalPostingFeed;
- (void)setMininLocalPostingFeed:(BOOL)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)firstPageRequestCount;
- (void)setFirstPageRequestCount:(unsigned long long)arg1;
- (id /* block */)feedMapper;
- (void)setFeedMapper:(id /* block */)arg1;
- (id)adPlugin;
- (void)setAdPlugin:(id)arg1;
- (unsigned long long)minTid;
- (void)setMinTid:(unsigned long long)arg1;
- (BOOL)isLoadingFristPage;
- (void)setIsLoadingFristPage:(BOOL)arg1;
- (id)waitFetchingBlock;
- (void)setWaitFetchingBlock:(id)arg1;
- (id)tempStorageUpFeeds;
- (void)setTempStorageUpFeeds:(id)arg1;
- (void).cxx_destruct;
@end

