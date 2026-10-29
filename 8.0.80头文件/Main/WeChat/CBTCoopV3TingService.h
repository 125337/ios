@interface CBTCoopV3TingService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleLaunch:(id)arg1;
- (id)parseTingItem:(id)arg1;
- (void)applyForwardLandingPolicyIfNeeded:(id)arg1 tingItem:(id)arg2;
- (void).cxx_destruct;
@end
