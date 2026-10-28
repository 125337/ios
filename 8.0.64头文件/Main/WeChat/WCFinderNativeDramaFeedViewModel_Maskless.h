@interface WCFinderNativeDramaFeedViewModel_Maskless : NSObject <WCFinderNativeDramaListDataProviderDelegate>
{
    id <WCFinderNativeDramaFeedViewModelDelegate_Maskless> _delegate; // +0x8
    unsigned long long _dramaID; // +0x10
    unsigned long long _enterEpisodeID; // +0x18
    WCFinderFeedContentVM * _destinationEpisode; // +0x20
    double _currentPlayRate; // +0x28
    WCFinderNativeDramaListDataProvider * _dataProvider; // +0x30
    unsigned long long _destinationEpisodeID; // +0x38
}
+ (int)scene;
- (id)initWithParams:(id)arg1;
- (BOOL)isFetchingDramaList;
- (BOOL)hasMoreInDirection:(unsigned long long)arg1;
- (void)fetchWithDirection:(unsigned long long)arg1;
- (void)fetchWithEpisodesID:(unsigned long long)arg1;
- (void)fetchPromotionIfNeedWithEpisodesID:(unsigned long long)arg1 shouldInsert:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)isNativeDramaFeed:(id)arg1;
- (id)adGatingInfoForIndex:(long long)arg1;
- (id)contentVMForEpisodeID:(unsigned long long)arg1;
- (id)contentVMForIndex:(long long)arg1;
- (void)dataProvider:(id)arg1 feedItemDidChangeWithDiff:(id)arg2 modifyDirection:(unsigned long long)arg3;
- (id)feedListDataSource;
- (id)items;
- (void)setDestinationEpisode:(id)arg1;
- (void)setCurrentPlayRate:(double)arg1;
- (id)fetchListErrorMessage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (unsigned long long)enterEpisodeID;
- (void)setEnterEpisodeID:(unsigned long long)arg1;
- (id)destinationEpisode;
- (double)currentPlayRate;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (unsigned long long)destinationEpisodeID;
- (void)setDestinationEpisodeID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
