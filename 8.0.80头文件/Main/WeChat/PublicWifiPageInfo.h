@interface PublicWifiPageInfo : MMObject
{
    unsigned int _hasMobile; // +0x8
    unsigned int _finishActionCode; // +0xc
    unsigned int _isDefaultFocus; // +0x10
    NSString * _nickName; // +0x18
    NSString * _appid; // +0x20
    NSString * _headImgUrl; // +0x28
    NSString * _welcomeMsg; // +0x30
    NSString * _privacyDescriUrl; // +0x38
    NSString * _authurlSign; // +0x40
    NSString * _subTitle; // +0x48
    NSString * _finishUrl; // +0x50
    NSString * _userName; // +0x58
    NSString * _signature; // +0x60
    NSString * _qingHuaiPageUrl; // +0x68
}
- (void)dealloc;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)welcomeMsg;
- (void)setWelcomeMsg:(id)arg1;
- (id)privacyDescriUrl;
- (void)setPrivacyDescriUrl:(id)arg1;
- (id)authurlSign;
- (void)setAuthurlSign:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (unsigned int)hasMobile;
- (void)setHasMobile:(unsigned int)arg1;
- (unsigned int)finishActionCode;
- (void)setFinishActionCode:(unsigned int)arg1;
- (id)finishUrl;
- (void)setFinishUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (unsigned int)isDefaultFocus;
- (void)setIsDefaultFocus:(unsigned int)arg1;
- (id)qingHuaiPageUrl;
- (void)setQingHuaiPageUrl:(id)arg1;
- (void).cxx_destruct;
@end
