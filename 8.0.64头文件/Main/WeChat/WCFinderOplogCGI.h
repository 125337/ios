@interface WCFinderOplogCGI : WCFinderBaseCgi
{
    id /* block */ _failure; // +0x8
    id /* block */ _successful; // +0x10
    NSMutableDictionary * _handlerMap; // +0x18
}
- (id)initWithRequest:(id)arg1;
- (void)addCmdId:(int)arg1 responseClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id)handlerMap;
- (void)setHandlerMap:(id)arg1;
- (void).cxx_destruct;
@end
