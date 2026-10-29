@interface MMLimitedModeToastInfo : NSObject
{
    unsigned int _businessType; // +0x8
    unsigned int _scene; // +0xc
    NSString * _userName; // +0x10
    NSString * _nickName; // +0x18
}
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void).cxx_destruct;
@end
