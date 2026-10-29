@interface WAJSEventHandler_launchApplication : WAJSEventHandler_BaseEvent
{
    NSString * _appID; // +0x8
    NSString * _launchAppID; // +0x10
    NSString * _messageExt; // +0x18
    NSString * _parameter; // +0x20
    NSString * _scheme; // +0x28
    NSString * _ulink; // +0x30
    WCAdOpenAppHalfScreenInfo * _halfScreenInfo; // +0x38
    NSString * _extraData; // +0x40
    BOOL _bIsShowLaunchFailToast; // +0x48
    long long _operateDirectly; // +0x50
    NSString * _installSchemeUrl; // +0x58
    unsigned int _installAction; // +0x60
    NSString * _sourceInfo; // +0x68
    NSString * _bizInfo; // +0x70
    WCSKAdNetworkItem * _skAdItem; // +0x78
    unsigned long long _jumpUrlType; // +0x80
    WCAdSchemaJumpInfo * _schemaInfo; // +0x88
    MBADConversionContext * _mbAD_ctx; // +0x90
}
- (void)resetCacheParam;
- (void)handleJSEvent:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onCheckResponse:(id)arg1;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)hasPermissionToLaunchWebStore;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 context:(id)arg4 getError:(id *)arg5;
- (BOOL)checkSceneIsAd;
- (void)doAdSchemeJump:(id /* block */)arg1;
- (void)doAdSchemeJump:(id /* block */)arg1 bIsFirst:(BOOL)arg2 bIsLaunchSuccess:(BOOL)arg3 bNeverNoticeAgain:(BOOL)arg4 bIsCancel:(BOOL)arg5;
- (void).cxx_destruct;
@end
