@interface MiniGameVideoFile : NSObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _appState; // +0xc
    unsigned int _isDevEdited; // +0x10
    NSString * _appId; // +0x18
    NSString * _appName; // +0x20
    NSString * _absFilePath; // +0x28
    NSString * _configJson; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
}
- (id)initFromLocalVideoInfo:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)absFilePath;
- (void)setAbsFilePath:(id)arg1;
- (id)configJson;
- (void)setConfigJson:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (unsigned int)isDevEdited;
- (void)setIsDevEdited:(unsigned int)arg1;
- (void).cxx_destruct;
@end
