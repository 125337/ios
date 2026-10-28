@interface MMChangeQQLoginTypeHandler : PrivateCommonApiHandler <PasswordLogicDelegate>
{
    int _lastLoginAcountType; // +0x8
    PasswordLogic * _pwdLogic; // +0x10
    NSString * _loginName; // +0x18
}
- (void)handleCommonApiWithParams:(id)arg1;
- (void)failWithShouldSetContent:(BOOL)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)unknownFail:(id)arg1;
- (id)pwdLogic;
- (void)setPwdLogic:(id)arg1;
- (id)loginName;
- (void)setLoginName:(id)arg1;
- (int)lastLoginAcountType;
- (void)setLastLoginAcountType:(int)arg1;
- (void).cxx_destruct;
@end
