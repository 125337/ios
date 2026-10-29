@interface WCFinderLiveKtvSearchMusicSmartBoxCGI : WCFinderLiveBaseCgi
{
    unsigned int _requestScene; // +0x8
    NSString * _searchID; // +0x10
    NSString * _searchKey; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 searchId:(id)arg2 searchKey:(id)arg3 requestScene:(unsigned int)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)searchKey;
- (void)setSearchKey:(id)arg1;
- (unsigned int)requestScene;
- (void)setRequestScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
