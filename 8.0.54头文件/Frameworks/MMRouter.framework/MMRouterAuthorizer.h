@interface MMRouterAuthorizer : NSObject
{
    id /* block */ _handlerBlock; // +0x8
    NSString * _routerURL; // +0x10
}
- (id)initWithRouteURL:(id)arg1 handler:(id /* block */)arg2;
- (id /* block */)authProtocol;
- (id /* block */)authProtocolList;
- (id /* block */)handlerBlock;
- (void)setHandlerBlock:(id /* block */)arg1;
- (id)routerURL;
- (void)setRouterURL:(id)arg1;
- (void).cxx_destruct;
@end

