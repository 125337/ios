@interface CBTCoopV3ShopItemService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleWarmupDetail:(id)arg1;
- (void)handleLaunchDetail:(id)arg1;
- (void)openProductJumpInfo:(id)arg1 navVC:(id)arg2 productId:(id)arg3;
- (id)currentVisibleNavigationController;
- (void).cxx_destruct;
@end
