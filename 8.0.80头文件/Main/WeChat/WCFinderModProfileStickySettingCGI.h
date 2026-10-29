@interface WCFinderModProfileStickySettingCGI : WCFinderBaseCgi
{
    BOOL _isStickyTop; // +0x8
    unsigned long long _feedID; // +0x10
    NSString * _nonceID; // +0x18
    NSString * _username; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithFeedID:(unsigned long long)arg1 nonceID:(id)arg2 username:(id)arg3 isStickyTop:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)feedID;
- (void)setFeedID:(unsigned long long)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)isStickyTop;
- (void)setIsStickyTop:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
