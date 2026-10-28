@interface WAMPLinkNode : MMObject
{
    unsigned int _debugModeType; // +0x8
    unsigned int _appVersion; // +0xc
    NSString * _appid; // +0x10
    NSString * _pagePath; // +0x18
    NSString * _nickName; // +0x20
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (void).cxx_destruct;
@end
