@interface WAJSEventHandler_launchApplication : WAJSEventHandler_BaseEvent
{
    NSString * _appID; // +0x8
    NSString * _launchAppID; // +0x10
    NSString * _messageExt; // +0x18
    NSString * _parameter; // +0x20
    NSString * _scheme; // +0x28
    NSString * _extraData; // +0x30
    BOOL _bIsShowLaunchFailToast; // +0x38
    long long _operateDirectly; // +0x40
    NSString * _installSchemeUrl; // +0x48
    unsigned int _installAction; // +0x50
    NSString * _sourceInfo; // +0x58
    NSString * _bizInfo; // +0x60
    WCSKAdNetworkItem * _skAdItem; // +0x68
}
- (void)resetCacheParam;
- (void)handleJSEvent:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onCheckResponse:(id)arg1;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)hasPermissionToLaunchWebStore;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 context:(id)arg4 getError:(id *)arg5;
- (void).cxx_destruct;
@end

