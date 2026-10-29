@interface FavoritePhotoAccountNameCard : MMObject <NSCopying>
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    long long _certFlag; // +0x18
    NSString * _brandIconUrl; // +0x20
    long long _brandFlags; // +0x28
    long long _brandType; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (long long)certFlag;
- (void)setCertFlag:(long long)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (long long)brandFlags;
- (void)setBrandFlags:(long long)arg1;
- (long long)brandType;
- (void)setBrandType:(long long)arg1;
- (void).cxx_destruct;
@end
