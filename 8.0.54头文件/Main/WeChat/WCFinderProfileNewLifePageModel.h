@interface WCFinderProfileNewLifePageModel : WCFinderStreamProfilePageModel
{
    BOOL _hasError; // +0x8
    BOOL _loading; // +0x9
    BOOL _empty; // +0xa
    id <WCFinderProfileNewLifePageModelDelegate> _delegate; // +0x10
    NSString * _viewingFeedId; // +0x18
    WCFinderProfileNewLifePageDataProvider * _dataProvider; // +0x20
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (int)tabId;
+ (id)overviewSectionTypes;
- (id)displayName;
- (id)viewPageClassName;
- (id)lastBuffer;
- (BOOL)shouldDisplayTab;
- (void)_updateNewLifeOverviewSection:(long long)arg1 modelList:(id)arg2 fillCache:(BOOL)arg3;
- (void)requestPageData;
- (void)doLoadCache;
- (void)setupDataProviderHandler;
- (id)indexPathForViewingFeed;
- (long long)likeCount;
- (long long)globalFavoriteCount;
- (long long)heartLikeCount;
- (long long)shareCount;
- (id)cardViewModelList;
- (BOOL)hasMore;
- (void)requestFirstPage;
- (void)requestNextPage;
- (void)privateRequestDataWithFirstPage:(BOOL)arg1;
- (int)currentCommentScene;
- (unsigned int)parentEnterScene;
- (int)firstSelectTab;
- (long long)feedCount;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewingFeedId;
- (void)setViewingFeedId:(id)arg1;
- (BOOL)hasError;
- (void)setHasError:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)isEmpty;
- (void)setEmpty:(BOOL)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end

