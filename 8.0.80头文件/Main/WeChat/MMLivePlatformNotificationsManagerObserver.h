@interface MMLivePlatformNotificationsManagerObserver : NSObject <LiveURLivePlatformNotificationsMgrObserver>
{
    id <MMLivePlatformNotificationsManagerDelegate> _delegate; // +0x8
}
- (void)onNotificationChanged:(id)arg1 changeType:(int)arg2;
- (void)onReportNotificationWithJson:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
