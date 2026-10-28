@interface WXPLiteAppBiometricVerifyService : NSObject <WCPayOpenTouchIDAuthLogicDelegate>
{
    id /* block */ _biometricVerifyCallback; // +0x8
    NSString * _appId; // +0x10
}
- (id)supportBioType;
- (void)cancelAuthenticate;
- (void)authenticate:(id)arg1 callback:(id /* block */)arg2;
- (void)open:(id)arg1 callback:(id /* block */)arg2;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed:(id)arg1;
- (id /* block */)biometricVerifyCallback;
- (void)setBiometricVerifyCallback:(id /* block */)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
