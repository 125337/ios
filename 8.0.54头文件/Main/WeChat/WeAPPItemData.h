@interface WeAPPItemData : NSObject
{
    unsigned int _debugMode; // +0x8
    unsigned int _version; // +0xc
    NSString * _title; // +0x10
    NSString * _iconImageUrl; // +0x18
    NSString * _username; // +0x20
    NSString * _appid; // +0x28
    UIImage * _iconImage; // +0x30
    NSString * _pagePath; // +0x38
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImageUrl;
- (void)setIconImageUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

