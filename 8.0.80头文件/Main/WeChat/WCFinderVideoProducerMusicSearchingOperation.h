@interface WCFinderVideoProducerMusicSearchingOperation : WCFinderVideoProducerBaseOperation
{
    NSMutableArray * _searchRequestList; // +0x8
    WCFinderVideoProducerMusicSearchRequest * _currentSearchRequest; // +0x10
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)operationDidStart;
- (void)operationDidStop;
- (void)didRequestToSearchNewKey:(id)arg1;
- (void)didShowSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingSelectedSearchResultMusic;
- (id)searchRequestList;
- (void)setSearchRequestList:(id)arg1;
- (id)currentSearchRequest;
- (void)setCurrentSearchRequest:(id)arg1;
- (void).cxx_destruct;
@end
