@interface VoIPIgnoreManager : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setAutoIgnoreForUsername:(id)arg1;
- (void)clearAll;
- (void)requestMuteNotificationWithMethod:(int)arg1 expireTs:(unsigned long long)arg2 username:(id)arg3 logTag:(id)arg4;
@end
