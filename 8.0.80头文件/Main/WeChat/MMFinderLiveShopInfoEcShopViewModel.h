@interface MMFinderLiveShopInfoEcShopViewModel : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _isRequestingFavorite; // +0x9
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    FinderLiveGetAnchorHeaderEcInfoResponse * _response; // +0x18
    NSData * _headerShopInfoSheetPassBuffer; // +0x20
    id /* block */ _onResponseUpdate; // +0x28
    id /* block */ _onFavoriteUpdate; // +0x30
    id /* block */ _onError; // +0x38
    WCFinderLiveGetAnchorHeaderEcInfoCGI * _fetchCGI; // +0x40
    WCFinderLiveFavoriteShopCGI * _favoriteCGI; // +0x48
    double _lastRefreshTimestamp; // +0x50
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)refresh;
- (void)refreshAfterUserAction;
- (void)startFetchCGI;
- (void)handleFetchSuccess:(id)arg1;
- (void)handleFetchFailWithCode:(long long)arg1 message:(id)arg2;
- (void)performFavoriteToggle;
- (void)handleFavoriteSuccessWithTargetState:(BOOL)arg1;
- (void)handleFavoriteFailWithCode:(long long)arg1 message:(id)arg2;
- (id)liveTaskId;
- (id)response;
- (void)setResponse:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isRequestingFavorite;
- (void)setIsRequestingFavorite:(BOOL)arg1;
- (id)headerShopInfoSheetPassBuffer;
- (void)setHeaderShopInfoSheetPassBuffer:(id)arg1;
- (id /* block */)onResponseUpdate;
- (void)setOnResponseUpdate:(id /* block */)arg1;
- (id /* block */)onFavoriteUpdate;
- (void)setOnFavoriteUpdate:(id /* block */)arg1;
- (id /* block */)onError;
- (void)setOnError:(id /* block */)arg1;
- (id)fetchCGI;
- (void)setFetchCGI:(id)arg1;
- (id)favoriteCGI;
- (void)setFavoriteCGI:(id)arg1;
- (double)lastRefreshTimestamp;
- (void)setLastRefreshTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
