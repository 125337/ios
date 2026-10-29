@interface LiteAppJsApiOpenApp : LiteAppJsApi
{
    NSString * _appID; // +0x20
    NSString * _launchAppID; // +0x28
    NSString * _messageExt; // +0x30
    NSString * _parameter; // +0x38
    NSString * _scheme; // +0x40
    NSString * _extraData; // +0x48
    BOOL _bIsShowLaunchFailToast; // +0x50
    NSString * _installSchemeUrl; // +0x58
    unsigned int _installAction; // +0x60
    BOOL _disableOpenId; // +0x64
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (id)openAppErrorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 getError:(id *)arg4;
- (void).cxx_destruct;
@end
