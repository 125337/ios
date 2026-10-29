@interface FlutterMMPlatformPlugin : NSObject <MMFlutterPlugin, FlutterPlatformChannel>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getAppVersionWithError:(id *)arg1;
- (void)lightVibrateForce:(BOOL)arg1 error:(id *)arg2;
- (void)mediumVibrateForce:(BOOL)arg1 error:(id *)arg2;
- (id)isScreenOnWithError:(id *)arg1;
- (id)getWeChatRevisionWithError:(id *)arg1;
- (id)getWeChatVersionWithError:(id *)arg1;
@end
