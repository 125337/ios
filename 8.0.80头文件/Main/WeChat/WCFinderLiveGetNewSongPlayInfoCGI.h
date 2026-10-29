@interface WCFinderLiveGetNewSongPlayInfoCGI : WCFinderLiveBaseCgi
{
    NSData * _liveCookies; // +0x8
    NSString * _uniqueAddId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 uniqueAddId:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)uniqueAddId;
- (void)setUniqueAddId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
