@interface WCFinderProfileLiveDataFetcher2 : NSObject
{
    BOOL _isAuthor; // +0x8
    BOOL _isRequestingFristPage; // +0x9
    unsigned long long _refreshTime; // +0x10
    WCFinderStreamLoadingState * _loadingState; // +0x18
    NSString * _username; // +0x20
    long long _cgiFlag; // +0x28
}
- (id)init;
- (id)initWithLoadingState:(id)arg1;
- (void)requestFirstPage:(id)arg1 complete:(id /* block */)arg2;
- (void)requestNextPage:(id)arg1 complete:(id /* block */)arg2;
- (void)_requestPage:(id)arg1 firstPage:(BOOL)arg2 compelte:(id /* block */)arg3;
- (id)profileLoadingState;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)cgiFlag;
- (void)setCgiFlag:(long long)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (BOOL)isRequestingFristPage;
- (void)setIsRequestingFristPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
