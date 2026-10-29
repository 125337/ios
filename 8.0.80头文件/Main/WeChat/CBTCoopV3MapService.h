@interface CBTCoopV3MapService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleExpand:(id)arg1;
- (id)stringFromPayload:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
@end
