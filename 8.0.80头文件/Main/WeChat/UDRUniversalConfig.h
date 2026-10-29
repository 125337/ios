@interface UDRUniversalConfig : MMRootService <MMServiceProtocol>
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (id)getUniversalConfig;
@end
