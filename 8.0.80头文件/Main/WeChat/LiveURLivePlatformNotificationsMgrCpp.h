@interface LiveURLivePlatformNotificationsMgrCpp : UnitRCObjcBaseProxyClass <LiveURLivePlatformNotificationsMgr>
+ (id)create;
- (void)setIsNotificationsSuppressed:(BOOL)arg1;
- (void)handleIncomingNotificationMessage:(id)arg1 message:(id)arg2;
- (void)onMessageActionInvoked;
- (void)setObserver:(id)arg1;
@end
