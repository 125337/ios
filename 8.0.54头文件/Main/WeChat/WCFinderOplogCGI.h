@interface WCFinderOplogCGI : WCFinderBaseCgi
{
    NSMutableDictionary * _handlerMap; // +0x8
}
- (id)initWithRequest:(id)arg1;
- (void)addCmdId:(int)arg1 responseClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)handlerMap;
- (void)setHandlerMap:(id)arg1;
- (void).cxx_destruct;
@end

