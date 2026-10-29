@interface WCFinderUserPOIRequest : WCFinderBaseCgi
{
    NSString * _queryText; // +0x8
    NSString * _finderUserName; // +0x10
    NSData * _lastBuffer; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithQuery:(id)arg1 lastBuffer:(id)arg2 finderUserName:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

