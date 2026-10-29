@interface WCFinderFeedFavCgi : WCFinderBaseCgi
{
    BOOL _fav; // +0x8
    int _scene; // +0xc
    NSString * _sessionBuffer; // +0x10
    NSDictionary * _clientUdfKv; // +0x18
    id /* block */ _completionBlock; // +0x20
    id /* block */ _failedBlock; // +0x28
}
- (id)initWithFeedID:(id)arg1 nonceID:(id)arg2 isFav:(BOOL)arg3 sessionBuffer:(id)arg4 scene:(int)arg5 sourceType:(int)arg6 clientUdfKv:(id)arg7 params:(id)arg8 completion:(id /* block */)arg9 failed:(id /* block */)arg10;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isFav;
- (void)setFav:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)clientUdfKv;
- (void)setClientUdfKv:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

