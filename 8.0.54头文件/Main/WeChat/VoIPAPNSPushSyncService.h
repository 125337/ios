@interface VoIPAPNSPushSyncService : MMUserService <MMServiceProtocol>
- (void)handleCacheFromAppGroup;
- (void)handleInviteInfosCacheFromAppGroup;
- (void)handleCancelInfosCacheFromAppGroup;
- (void)handleInfosCacheFromAppGroup;
- (void)cook;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
@end

