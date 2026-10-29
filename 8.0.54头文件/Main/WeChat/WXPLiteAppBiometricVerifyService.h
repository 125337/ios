@interface WXPLiteAppBiometricVerifyService : NSObject
{
    id /* block */ _biometricVerifyCallback; // +0x8
}
- (id)supportBioType;
- (void)cancelAuthenticate;
- (void)authenticate:(id)arg1 callback:(id /* block */)arg2;
- (id /* block */)biometricVerifyCallback;
- (void)setBiometricVerifyCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

