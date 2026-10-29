@interface AppleIDAuthorizationWrap : NSObject
{
    BOOL _isAppleIDBound; // +0x8
    NSString * _username; // +0x10
    NSString * _password; // +0x18
    NSString * _appleRegisterTicket; // +0x20
}
- (id)description;
- (BOOL)isValid;
- (BOOL)isAppleIDBound;
- (void)setIsAppleIDBound:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)appleRegisterTicket;
- (void)setAppleRegisterTicket:(id)arg1;
- (void).cxx_destruct;
@end
