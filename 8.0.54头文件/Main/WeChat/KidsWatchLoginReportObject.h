@interface KidsWatchLoginReportObject : NSObject
{
    unsigned long long _loginType; // +0x8
    NSString * _qrCode; // +0x10
    unsigned long long _kidsCount; // +0x18
    unsigned long long _accountType; // +0x20
}
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(int)arg2;
- (unsigned long long)loginType;
- (void)setLoginType:(unsigned long long)arg1;
- (id)qrCode;
- (void)setQrCode:(id)arg1;
- (unsigned long long)kidsCount;
- (void)setKidsCount:(unsigned long long)arg1;
- (unsigned long long)accountType;
- (void)setAccountType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

