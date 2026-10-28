@interface TemplateWeappOPWrap : NSObject <NSCopying>
{
    unsigned int _weappVersion; // +0x8
    unsigned int _weappState; // +0xc
    NSString * _username; // +0x10
    NSString * _path; // +0x18
    NSString * _appID; // +0x20
    NSString * _iconUrl; // +0x28
    NSString * _nickname; // +0x30
    NSString * _imageUrl; // +0x38
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
