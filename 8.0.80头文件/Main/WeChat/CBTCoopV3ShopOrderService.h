@interface CBTCoopV3ShopOrderService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleLaunchDetail:(id)arg1;
- (id)currentVisibleNavigationController;
- (void).cxx_destruct;
@end
