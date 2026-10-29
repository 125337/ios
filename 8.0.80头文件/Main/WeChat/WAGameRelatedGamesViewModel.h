@interface WAGameRelatedGamesViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    BOOL _isFetching; // +0x9
    unsigned int _backToTopThreshold; // +0xc
    NSString * _hostAppId; // +0x10
    NSString * _nextBypass; // +0x18
    id <WAGameRelatedGamesViewModelDelegate> _delegate; // +0x20
    NSMutableArray * _mutableGames; // +0x28
    unsigned long long _fetchSeq; // +0x30
}
- (id)initWithHostAppId:(id)arg1;
- (id)games;
- (void)fetchFirstPage;
- (void)fetchNextPage;
- (void)doFetch;
- (void)onDiscoverConfigResponse:(id)arg1 seq:(unsigned long long)arg2;
- (void)processDiscoverConfigResponseOnMain:(id)arg1 seq:(unsigned long long)arg2;
- (void)handleFetchSuccess:(id)arg1 nextBypass:(id)arg2 backToTopThreshold:(unsigned int)arg3;
- (void)handleFetchFailure:(id)arg1;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)nextBypass;
- (void)setNextBypass:(id)arg1;
- (unsigned int)backToTopThreshold;
- (void)setBackToTopThreshold:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mutableGames;
- (void)setMutableGames:(id)arg1;
- (unsigned long long)fetchSeq;
- (void)setFetchSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
