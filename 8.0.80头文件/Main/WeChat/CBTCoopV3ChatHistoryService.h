@interface CBTCoopV3ChatHistoryService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenPreview:(id)arg1;
- (void).cxx_destruct;
@end
