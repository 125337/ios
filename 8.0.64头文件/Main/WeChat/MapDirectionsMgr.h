@interface MapDirectionsMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
- (void)requestDirections:(id)arg1;
- (CLLocationCoordinate2D *)parseRouteWithRouteArray:(id)arg1 outCount:(unsigned long long *)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
