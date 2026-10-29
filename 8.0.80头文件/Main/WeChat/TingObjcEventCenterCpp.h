@interface TingObjcEventCenterCpp : UnitRCObjcBaseProxyClass <TingObjcEventCenter>
+ (id)sharedInstance;
- (void)registerListener:(id)arg1 eventId:(id)arg2;
- (void)unregisterListener:(id)arg1;
- (void)fireEvent:(id)arg1 data:(id)arg2;
@end
