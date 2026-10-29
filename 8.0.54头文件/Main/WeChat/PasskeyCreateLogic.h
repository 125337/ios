@interface PasskeyCreateLogic : WCAccountBaseControlLogic
{
    BOOL _passkeyExists; // +0x30
    BOOL _passkeySwitch; // +0x31
    id <PasskeyCreateDelegate> _delegate; // +0x38
    NSData * _passkeyUserID; // +0x40
    NSString * _passkeyUserName; // +0x48
    PasskeyEntitlementProvider * _provider; // +0x50
    NSString * _verifyID; // +0x58
}
- (id)init;
- (void)updatePasskeySwitch:(BOOL)arg1;
- (void)startCreate;
- (void)requestUserIDAndUsernameWithTicket:(id)arg1;
- (void)verifyWxPassword;
- (void)requestAuthorizeFromDomain;
- (void)passkeyRegisterWithRawData:(id)arg1 credentialID:(id)arg2;
- (void)passkeyDelete;
- (void)requestBindPasskeyWithRequest:(id)arg1 successBlock:(id /* block */)arg2;
- (void)updatePasskeyCredentialId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)passkeyExists;
- (void)setPasskeyExists:(BOOL)arg1;
- (BOOL)passkeySwitch;
- (void)setPasskeySwitch:(BOOL)arg1;
- (id)passkeyUserID;
- (void)setPasskeyUserID:(id)arg1;
- (id)passkeyUserName;
- (void)setPasskeyUserName:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)verifyID;
- (void)setVerifyID:(id)arg1;
- (void).cxx_destruct;
@end

