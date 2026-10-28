@interface WCFinderLiveSearchMusicCGI : WCFinderLiveBaseCgi
{
    NSString * _searchText; // +0x8
    NSData * _liveCookies; // +0x10
    NSData * _lastBuffer; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 searchText:(id)arg2 lastBuffer:(id)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)convertMusicItemList:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
