@interface UDRUniversalConfig : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getUniversalConfig;
@end
