@interface WCFinderNativeDramaListDataProvider : NSObject
{
    BOOL _hasLoadedListContext; // +0x8
    id <WCFinderNativeDramaListDataProviderDelegate> _delegate; // +0x10
    NSString * _fetchListErrorMessage; // +0x18
    NSString * _streamBuffer; // +0x20
    WCFinderNativeDramaListDataProviderParams * _params; // +0x28
    NSMutableArray * _series; // +0x30
    NSMutableArray * _fetchingDirection; // +0x38
    NSMutableArray * _fetchingCGI; // +0x40
    unsigned long long _sndsi; // +0x48
}
- (id)initWithParams:(id)arg1;
- (BOOL)isFetching;
- (BOOL)hasMoreInDirection:(unsigned long long)arg1;
- (BOOL)hasMoreInDramaID:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (id)streamRemindInfoForDramaID:(unsigned long long)arg1;
- (id)tabGuideBubbleInfosForDramaID:(unsigned long long)arg1;
- (void)fetchDramaID:(unsigned long long)arg1 episodeID:(unsigned long long)arg2 direction:(unsigned long long)arg3;
- (void)fetchDramaWithJSParams:(id)arg1;
- (id)_seriesOfIdentifier:(unsigned long long)arg1;
- (void)_fetchSeries:(id)arg1 episodeIdentifier:(unsigned long long)arg2 direction:(unsigned long long)arg3;
- (void)_fetchSingleEpisode:(unsigned long long)arg1 series:(id)arg2;
- (void)_fetchSingleEpisodeWithJSParams:(id)arg1 series:(id)arg2;
- (void)_didFetchSingleEpisode:(id)arg1 series:(id)arg2 force:(BOOL)arg3;
- (void)_updateObjects:(id)arg1 series:(id)arg2 targetEpisodeID:(unsigned long long)arg3 direction:(unsigned long long)arg4;
- (id)_contentVMWithDataItem:(id)arg1;
- (void)_updateDramaReportInfoForDataItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fetchListErrorMessage;
- (void)setFetchListErrorMessage:(id)arg1;
- (id)streamBuffer;
- (void)setStreamBuffer:(id)arg1;
- (BOOL)hasLoadedListContext;
- (void)setHasLoadedListContext:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)series;
- (void)setSeries:(id)arg1;
- (id)fetchingDirection;
- (void)setFetchingDirection:(id)arg1;
- (id)fetchingCGI;
- (void)setFetchingCGI:(id)arg1;
- (unsigned long long)sndsi;
- (void)setSndsi:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
