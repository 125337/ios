@interface QRCodeOAuthState : MMObject
{
    unsigned int _errCode; // +0x8
    NSString * _redirectUrl; // +0x10
    NSString * _confirmRedirectUrl; // +0x18
    NSString * _confirmWording; // +0x20
    NSString * _nickName; // +0x28
}
- (id)description;
- (unsigned int)errCode;
- (void)setErrCode:(unsigned int)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (id)confirmRedirectUrl;
- (void)setConfirmRedirectUrl:(id)arg1;
- (id)confirmWording;
- (void)setConfirmWording:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void).cxx_destruct;
@end

