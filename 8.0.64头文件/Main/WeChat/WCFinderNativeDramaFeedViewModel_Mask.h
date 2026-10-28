@interface WCFinderNativeDramaFeedViewModel_Mask : NSObject <WCFinderNativeDramaListDataProviderDelegate>
{
    id <WCFinderNativeDramaFeedViewModelDelegate_Mask> _delegate; // +0x8
    unsigned long long _dramaID; // +0x10
    WCFinderFeedContentVM * _destinationEpisode; // +0x18
    double _currentPlayRate; // +0x20
    WCFinderNativeDramaListDataProvider * _dataProvider; // +0x28
    unsigned long long _destinationEpisodeID; // +0x30
}
- (id)initWithParams:(id)arg1;
- (BOOL)isDataSourceEmpty;
- (BOOL)isFetchingDramaList;
- (BOOL)hasMoreInDirection:(unsigned long long)arg1;
- (void)fetchWithDirection:(unsigned long long)arg1;
- (id)lockEpisodesFromEpisodeID:(unsigned long long)arg1;
- (void)fetchWithEpisodesID:(unsigned long long)arg1;
- (id)contentVMForEpisodeID:(unsigned long long)arg1;
- (void)updateContentVMWithEpisodeID:(unsigned long long)arg1;
- (id)contentVMForIndex:(long long)arg1;
- (void)dataProvider:(id)arg1 feedItemDidChangeWithDiff:(id)arg2 modifyDirection:(unsigned long long)arg3;
- (id)feedListDataSource;
- (id)fetchListErrorMessage;
- (void)setDestinationEpisode:(id)arg1;
- (void)setCurrentPlayRate:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (id)destinationEpisode;
- (double)currentPlayRate;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (unsigned long long)destinationEpisodeID;
- (void)setDestinationEpisodeID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
