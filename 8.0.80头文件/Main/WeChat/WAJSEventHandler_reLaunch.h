@interface WAJSEventHandler_reLaunch : WAJSEventHandler_BaseEvent
{
    NSString * _routeId; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)relaunchWithUrl:(id)arg1;
- (id)routeId;
- (void)setRouteId:(id)arg1;
- (void).cxx_destruct;
@end
