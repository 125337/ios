@interface PhotoAccountShareNameCard : MMObject <NSCopying>
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _fromNickname; // +0x18
    NSString * _fullPy; // +0x20
    NSString * _shortPy; // +0x28
    NSString * _alias; // +0x30
    long long _imageStatus; // +0x38
    long long _scene; // +0x40
    NSString * _province; // +0x48
    NSString * _city; // +0x50
    NSString * _sign; // +0x58
    long long _perCard; // +0x60
    long long _sex; // +0x68
    long long _certFlag; // +0x70
    NSString * _certInfo; // +0x78
    NSString * _certInfoExt; // +0x80
    NSString * _brandIconUrl; // +0x88
    NSString * _brandHomeUrl; // +0x90
    NSString * _brandSubscriptConfigUrl; // +0x98
    long long _brandFlags; // +0xa0
    NSString * _regionCode; // +0xa8
    NSString * _bizNameCardInfo; // +0xb0
    long long _brandType; // +0xb8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)fromNickname;
- (void)setFromNickname:(id)arg1;
- (id)fullPy;
- (void)setFullPy:(id)arg1;
- (id)shortPy;
- (void)setShortPy:(id)arg1;
- (id)alias;
- (void)setAlias:(id)arg1;
- (long long)imageStatus;
- (void)setImageStatus:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (long long)perCard;
- (void)setPerCard:(long long)arg1;
- (long long)sex;
- (void)setSex:(long long)arg1;
- (long long)certFlag;
- (void)setCertFlag:(long long)arg1;
- (id)certInfo;
- (void)setCertInfo:(id)arg1;
- (id)certInfoExt;
- (void)setCertInfoExt:(id)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)brandHomeUrl;
- (void)setBrandHomeUrl:(id)arg1;
- (id)brandSubscriptConfigUrl;
- (void)setBrandSubscriptConfigUrl:(id)arg1;
- (long long)brandFlags;
- (void)setBrandFlags:(long long)arg1;
- (id)regionCode;
- (void)setRegionCode:(id)arg1;
- (id)bizNameCardInfo;
- (void)setBizNameCardInfo:(id)arg1;
- (long long)brandType;
- (void)setBrandType:(long long)arg1;
- (void).cxx_destruct;
@end
