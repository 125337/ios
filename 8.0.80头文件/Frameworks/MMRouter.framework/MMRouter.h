@interface MMRouter : NSObject
{
    NSMutableDictionary * _routes; // +0x8
    NSMutableArray * _routeURLList; // +0x10
}
+ (id)sharedInstance;
+ (void)registerRouteURL:(id)arg1 handler:(id /* block */)arg2;
+ (BOOL)routeURL:(id)arg1;
+ (BOOL)routeURL:(id)arg1 withParameters:(id)arg2;
+ (BOOL)canRoute:(id)arg1;
+ (id)makeRouterAuthorizer:(id)arg1 handler:(id /* block */)arg2;
- (id)achieveParametersFromURL:(id)arg1;
- (void)addRouteURL:(id)arg1 handler:(id /* block */)arg2;
- (id)addURLPattern:(id)arg1;
- (id)pathComponentsFromURL:(id)arg1;
- (id)routes;
- (id)routeURLList;
- (void)setRoutes:(id)arg1;
- (void)setRouteURLList:(id)arg1;
- (void).cxx_destruct;
@end
