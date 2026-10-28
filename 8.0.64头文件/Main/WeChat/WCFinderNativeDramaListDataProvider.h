@interface WCFinderNativeDramaListDataProvider : NSObject <WCFinderFeedListViewDataSource>
{
    BOOL _downHasMore; // +0x8
    BOOL _upHasMore; // +0x9
    id <WCFinderNativeDramaListDataProviderDelegate> _delegate; // +0x10
    NSMutableDictionary * _promotions; // +0x18
    unsigned long long _targetEpisodeID; // +0x20
    NSString * _fetchListErrorMessage; // +0x28
    WCFinderNativeDramaListDataProviderParams * _params; // +0x30
    NSMutableArray * _contentVMs; // +0x38
    NSData * _upLastBuffer; // +0x40
    NSData * _downLastBuffer; // +0x48
    NSMutableArray * _fetchingDirection; // +0x50
    NSMutableArray * _fetchingCGI; // +0x58
    WCFinderNativeDramaPromotionDataService * _promotionDataService; // +0x60
}
- (id)initWithParams:(id)arg1;
- (BOOL)isFetchingInDirections:(id)arg1;
- (void)fetchWithDirection:(unsigned long long)arg1;
- (void)fetchWithEpisodeID:(unsigned long long)arg1;
- (void)_fetchWithDirection:(unsigned long long)arg1 episodeID:(unsigned long long)arg2;
- (void)_fetchSingleEpisode:(unsigned long long)arg1;
- (void)_fetchSingleEpisodeWithJSParams:(id)arg1;
- (void)_didFetichSIngleEpisode:(id)arg1;
- (void)_updateObjects:(id)arg1 direction:(unsigned long long)arg2;
- (void)_notifyItemDidChangedWithOldItems:(id)arg1 direction:(unsigned long long)arg2;
- (void)localUpdateEpisodeID:(unsigned long long)arg1;
- (id)_contentVMWithDataItem:(id)arg1;
- (void)fetchPromotionWithEpisodeID:(unsigned long long)arg1 enterEpisodeID:(unsigned long long)arg2 shouldInsert:(id /* block */)arg3 completion:(id /* block */)arg4;
- (BOOL)isPromotionWithIdentifier:(id)arg1;
- (BOOL)isFetchingPromotion;
- (id)contentVMForIndex:(long long)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)items;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)promotions;
- (void)setPromotions:(id)arg1;
- (unsigned long long)targetEpisodeID;
- (void)setTargetEpisodeID:(unsigned long long)arg1;
- (BOOL)downHasMore;
- (void)setDownHasMore:(BOOL)arg1;
- (BOOL)upHasMore;
- (void)setUpHasMore:(BOOL)arg1;
- (id)fetchListErrorMessage;
- (void)setFetchListErrorMessage:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)contentVMs;
- (void)setContentVMs:(id)arg1;
- (id)upLastBuffer;
- (void)setUpLastBuffer:(id)arg1;
- (id)downLastBuffer;
- (void)setDownLastBuffer:(id)arg1;
- (id)fetchingDirection;
- (void)setFetchingDirection:(id)arg1;
- (id)fetchingCGI;
- (void)setFetchingCGI:(id)arg1;
- (id)promotionDataService;
- (void)setPromotionDataService:(id)arg1;
- (void).cxx_destruct;
@end
