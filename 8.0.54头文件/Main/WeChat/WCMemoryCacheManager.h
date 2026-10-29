@interface WCMemoryCacheManager : MMRootService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)addUserType:(unsigned long long)arg1;
- (void)removeUserType:(unsigned long long)arg1;
- (void)callClearMemoryCache:(unsigned long long)arg1;
- (void)handlePerfWarningNotification:(id)arg1;
@end

