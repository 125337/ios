@interface FBSDKDeviceLoginCodeInfo : NSObject
{
    NSString * _identifier; // +0x8
    NSString * _loginCode; // +0x10
    NSURL * _verificationURL; // +0x18
    NSDate * _expirationDate; // +0x20
    unsigned long long _pollingInterval; // +0x28
}
- (id)initWithIdentifier:(id)arg1 loginCode:(id)arg2 verificationURL:(id)arg3 expirationDate:(id)arg4 pollingInterval:(unsigned long long)arg5;
- (id)identifier;
- (id)loginCode;
- (id)verificationURL;
- (id)expirationDate;
- (unsigned long long)pollingInterval;
- (void).cxx_destruct;
@end
