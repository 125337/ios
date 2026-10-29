@interface CBTCoopV3WeAppLaunchContext : NSObject
{
    BOOL _isMCPCard; // +0x8
    NSString * _appId; // +0x10
    NSString * _username; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _handoffId; // +0x28
    NSString * _handoff; // +0x30
    long long _versionType; // +0x38
    NSString * _sceneNote; // +0x40
    unsigned long long _scene; // +0x48
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)handoffId;
- (void)setHandoffId:(id)arg1;
- (id)handoff;
- (void)setHandoff:(id)arg1;
- (long long)versionType;
- (void)setVersionType:(long long)arg1;
- (BOOL)isMCPCard;
- (void)setIsMCPCard:(BOOL)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
