@interface WAWeAppAutoTestLaunchRequest : NSObject
{
    BOOL _passForwardLifeCycleEventToPreviousTask; // +0x8
    unsigned int _appVersion; // +0xc
    NSString * _username; // +0x10
    NSString * _appID; // +0x18
    NSString * _pagePath; // +0x20
    NSString * _sceneNote; // +0x28
    long long _scene; // +0x30
    long long _versionType; // +0x38
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)versionType;
- (void)setVersionType:(long long)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (BOOL)passForwardLifeCycleEventToPreviousTask;
- (void)setPassForwardLifeCycleEventToPreviousTask:(BOOL)arg1;
- (void).cxx_destruct;
@end
