@interface OMJILinkLoginParams : NSObject
{
    NSString * _authCode; // +0x8
    NSString * _clientInfo; // +0x10
    long long _loginType; // +0x18
}
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2;
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2 loginType:(long long)arg3;
- (id)authCode;
- (id)clientInfo;
- (long long)loginType;
- (void).cxx_destruct;
@end
