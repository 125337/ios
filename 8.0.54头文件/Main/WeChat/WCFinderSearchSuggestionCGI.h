@interface WCFinderSearchSuggestionCGI : WCFinderBaseCgi
{
    unsigned int _scene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _query; // +0x20
    NSData * _sessionBuffer; // +0x28
}
- (id)initWithSessionBuffer:(id)arg1 query:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)initWithSessionBuffer:(id)arg1 query:(id)arg2 scene:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

