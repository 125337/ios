@interface WCFinderLiveUpdateNewSongListCGI : WCFinderLiveBaseCgi
{
    unsigned int _updateType; // +0x8
    NSData * _liveCookies; // +0x10
    NSMutableArray * _songItems; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 updateType:(unsigned int)arg3 songItems:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (id)firstSongName;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)updateType;
- (void)setUpdateType:(unsigned int)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
