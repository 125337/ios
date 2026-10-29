@interface WCFinderNearbyStreamFetchMgr : NSObject
{
    BOOL _shouldFetchHistory; // +0x8
    BOOL _needCleanData; // +0x9
    BOOL _hasFetchEnterData; // +0xa
    BOOL _stopFetchNextPage; // +0xb
    NSMutableArray * _serverFetchTasks; // +0x10
    WCFinderAbstractTask * _currentServerFetchTask; // +0x18
    NSData * _lastBuff; // +0x20
    NSString * _userCity; // +0x28
    NSArray * _streamDataArray; // +0x30
    unsigned long long _historyType; // +0x38
    unsigned long long _prefetchLastFeedCount; // +0x40
    FinderStreamLayoutInfo * _layoutInfo; // +0x48
}
+ (id)sharedInstance;
- (void)resetMgrData;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (void)loadingNextSreamFeedPage;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1 fetchLastestDataWithUnreadDataItems:(id)arg2;
- (void)preformNextServerFetchTasks;
- (void)checkServerFetchTasks;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)fetchLastestDataWithUnreadDataItems:(id)arg1;
- (void)requestNextPageData;
- (id)serverFetchTasks;
- (void)setServerFetchTasks:(id)arg1;
- (id)currentServerFetchTask;
- (void)setCurrentServerFetchTask:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)userCity;
- (void)setUserCity:(id)arg1;
- (BOOL)shouldFetchHistory;
- (void)setShouldFetchHistory:(BOOL)arg1;
- (id)streamDataArray;
- (void)setStreamDataArray:(id)arg1;
- (BOOL)needCleanData;
- (void)setNeedCleanData:(BOOL)arg1;
- (unsigned long long)historyType;
- (void)setHistoryType:(unsigned long long)arg1;
- (BOOL)hasFetchEnterData;
- (void)setHasFetchEnterData:(BOOL)arg1;
- (BOOL)stopFetchNextPage;
- (void)setStopFetchNextPage:(BOOL)arg1;
- (unsigned long long)prefetchLastFeedCount;
- (void)setPrefetchLastFeedCount:(unsigned long long)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@end

