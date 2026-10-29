@interface WANearByPreViewItem : MMObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _debugMode; // +0xc
    NSString * _userName; // +0x10
    NSString * _previewNickName; // +0x18
    NSString * _headImageUrlString; // +0x20
    NSString * _path; // +0x28
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)previewNickName;
- (void)setPreviewNickName:(id)arg1;
- (id)headImageUrlString;
- (void)setHeadImageUrlString:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end
