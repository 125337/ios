@interface TemplateWeappOPWrap : NSObject <NSCopying>
{
    BOOL _useTransparentBackground; // +0x8
    unsigned int _weappVersion; // +0xc
    unsigned int _weappState; // +0x10
    NSString * _username; // +0x18
    NSString * _path; // +0x20
    NSString * _appID; // +0x28
    NSString * _iconUrl; // +0x30
    NSString * _nickname; // +0x38
    NSString * _imageUrl; // +0x40
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (unsigned int)weappState;
- (void)setWeappState:(unsigned int)arg1;
- (BOOL)useTransparentBackground;
- (void)setUseTransparentBackground:(BOOL)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end
