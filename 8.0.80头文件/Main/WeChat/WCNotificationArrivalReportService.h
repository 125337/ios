@interface WCNotificationArrivalReportService : MMUserService <MMServiceProtocol>
+ (void)handleVoIPPushInfo:(id)arg1;
- (void)cook;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
@end
