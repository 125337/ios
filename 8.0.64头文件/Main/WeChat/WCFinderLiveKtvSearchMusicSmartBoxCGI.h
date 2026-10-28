@interface WCFinderLiveKtvSearchMusicSmartBoxCGI : WCFinderLiveBaseCgi
{
    NSString * _searchID; // +0x8
    NSString * _searchKey; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 searchId:(id)arg2 searchKey:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)searchKey;
- (void)setSearchKey:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
