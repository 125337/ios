@interface WAJSEventHandler_navigateBack : WAJSEventHandler_BaseEvent
{
    NSString * _routeId; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)navigateBackWithPopCount:(int)arg1 webView:(id)arg2 skipIntermediate:(BOOL)arg3;
- (id)routeId;
- (void)setRouteId:(id)arg1;
- (void).cxx_destruct;
@end
