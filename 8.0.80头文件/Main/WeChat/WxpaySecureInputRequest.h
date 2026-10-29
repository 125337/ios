@interface WxpaySecureInputRequest : NSObject
{
    NSString * _sessionId; // +0x8
    long long _keyboardKind; // +0x10
    NSString * _passwordEncryptMode; // +0x18
    NSDictionary * _extraData; // +0x20
    long long _maximumLength; // +0x28
}
+ (id)requestWithSessionId:(id)arg1 keyboardKind:(long long)arg2 passwordEncryptMode:(id)arg3 extraData:(id)arg4 maximumLength:(long long)arg5;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)keyboardKind;
- (void)setKeyboardKind:(long long)arg1;
- (id)passwordEncryptMode;
- (void)setPasswordEncryptMode:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (long long)maximumLength;
- (void)setMaximumLength:(long long)arg1;
- (void).cxx_destruct;
@end
