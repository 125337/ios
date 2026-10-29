@interface CBTCoopV3BrandAccountService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenProfile:(id)arg1;
- (void)doPushBrandProfile:(id)arg1 params:(id)arg2 navVC:(id)arg3;
- (void)hydrateContactFromParams:(id)arg1 params:(id)arg2;
- (id)parseJSON:(id)arg1;
- (id)currentVisibleNavigationController;
- (void).cxx_destruct;
@end
