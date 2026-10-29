@interface MMLivePlatformNotificationsManager : NSObject <MMLivePlatformNotificationsManagerDelegate>
{
    id <MMLivePlatformNotificationsManagerDelegate> _delegate; // +0x8
    MMLivePlatformNotificationsManagerObserver * _observer; // +0x10
    id <LiveURLivePlatformNotificationsMgr> _core; // +0x18
    unsigned long long _suppressionReasons; // +0x20
}
- (id)init;
- (void)notifyNotificationActionInvocation;
- (void)handleIncomingNotificationMessage:(id)arg1 withMessageId:(id)arg2;
- (void)addSuppressionReason:(unsigned long long)arg1;
- (void)removeSuppressionReason:(unsigned long long)arg1;
- (void)onNotificationChanged:(id)arg1 changeType:(unsigned long long)arg2;
- (void)onReportNotificationWithJson:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id)core;
- (void)setCore:(id)arg1;
- (unsigned long long)suppressionReasons;
- (void)setSuppressionReasons:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
