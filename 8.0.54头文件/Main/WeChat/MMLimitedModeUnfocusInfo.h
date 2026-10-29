@interface MMLimitedModeUnfocusInfo : NSObject
{
    unsigned int _businessType; // +0x8
    NSString * _userName; // +0x10
    NSString * _nickName; // +0x18
}
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void).cxx_destruct;
@end

