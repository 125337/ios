@interface QBRouteIPListService : QBWupService
+ (id)service;
+ (void)saveIpList:(id)arg1;
- (void)getRouteIpList;
- (void)getRouteIpListWithRequest:(id)arg1 completion:(id /* block */)arg2;
@end

