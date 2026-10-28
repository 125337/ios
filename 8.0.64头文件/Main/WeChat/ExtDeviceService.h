@interface ExtDeviceService : MMUserService <MMServiceProtocol>
+ (BOOL)enableMultiPlatformImpl;
- (void)enterLoggedDevicePageFrom:(id)arg1;
- (void)openFlutterExtDeviceLoginPageWithURL:(id)arg1 responseData:(id)arg2;
- (void)openUnlockPageWithUUID:(id)arg1;
@end
