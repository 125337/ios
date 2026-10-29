@interface WASkillInfo : NSObject
{
    unsigned int _appVersion; // +0x8
    NSString * _appid; // +0x10
    NSString * _publicLibVersion; // +0x18
    NSString * _name; // +0x20
    unsigned long long _skillVersion; // +0x28
    NSString * _downloadUrl; // +0x30
    NSString * _md5; // +0x38
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)publicLibVersion;
- (void)setPublicLibVersion:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)skillVersion;
- (void)setSkillVersion:(unsigned long long)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end
