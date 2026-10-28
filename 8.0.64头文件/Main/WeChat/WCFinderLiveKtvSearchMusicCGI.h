@interface WCFinderLiveKtvSearchMusicCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    NSData * _lastBuffer; // +0x10
    NSData * _liveCookies; // +0x18
    NSString * _searchID; // +0x20
    NSString * _searchKey; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failureBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 searchId:(id)arg2 searchKey:(id)arg3 lastBuffer:(id)arg4 liveCookies:(id)arg5 scene:(unsigned int)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
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
