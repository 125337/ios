@interface WCFinderDelFeedCGI : WCFinderBaseCgi
{
    int _delScene; // +0x8
    int _feedSourceScene; // +0xc
    NSString * _tid; // +0x10
    NSString * _nonceID; // +0x18
    NSString * _posterName; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
    NSString * _clientId; // +0x38
}
- (id)initWithFeedTid:(id)arg1 nonceID:(id)arg2 clientId:(id)arg3 posterName:(id)arg4 delScene:(int)arg5 feedSourceScene:(int)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)posterName;
- (void)setPosterName:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (int)delScene;
- (void)setDelScene:(int)arg1;
- (int)feedSourceScene;
- (void)setFeedSourceScene:(int)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (void).cxx_destruct;
@end
