@interface WebViewJSEventHandler_launchApplication : WebviewJSEventHandlerBase <PBMessageObserverDelegate>
{
    NSString * _appID; // +0x8
    NSString * _launchAppID; // +0x10
    NSString * _messageExt; // +0x18
    NSString * _parameter; // +0x20
    NSString * _scheme; // +0x28
    NSString * _extraData; // +0x30
    BOOL _bIsShowLaunchFailToast; // +0x38
    NSString * _installSchemeUrl; // +0x40
    unsigned int _installAction; // +0x48
    NSString * _sourceInfo; // +0x50
    NSString * _bizInfo; // +0x58
    WCSKAdNetworkItem * _skAdItem; // +0x60
}
- (void)dealloc;
- (void)resetCacheParam;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCheckResponse:(id)arg1;
- (void)sendReqLaunchAppWithShowType:(unsigned long long)arg1 jumpAppStoreFlag:(int)arg2;
- (void)gameReportLaunchWithIsCancel:(BOOL)arg1 launchSuccess:(BOOL)arg2;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
- (BOOL)hasPermissionToLaunchWebStore;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 jumpAppStoreFlag:(int)arg3 getError:(id *)arg4;
- (void).cxx_destruct;
@end
