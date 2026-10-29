@interface MBEventHandler_launchApplication : MBEventHandlerBaseAsync
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
    unsigned int _showType; // +0x54
    NSString * _sourceInfo; // +0x58
    NSString * _bizInfo; // +0x60
    WCSKAdNetworkItem * _skAdItem; // +0x68
}
- (id)apiName;
- (void)resetCacheParam;
- (void)invoke:(id)arg1;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 context:(id)arg3 getError:(id *)arg4;
- (BOOL)invokeInMainThread;
- (void).cxx_destruct;
@end
