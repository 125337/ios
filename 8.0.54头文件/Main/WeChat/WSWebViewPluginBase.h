@interface WSWebViewPluginBase : NSObject <IWSWebViewPluginProtocol>
{
    id <WSWebViewPluginableProtocol> _webviewOwner; // +0x8
    NSString * _debugModuleName; // +0x10
}
+ (id)GetInstanceFrom:(id)arg1;
+ (id)GetExistInstanceFrom:(id)arg1;
+ (id)InstanceFrom:(id)arg1;
+ (id)ExistInstanceFrom:(id)arg1;
- (BOOL)isWebviewPreload;
- (BOOL)isWebviewOnForeground;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)debugModuleName;
- (void)sendEventToJSBridge:(id)arg1 withParams:(id)arg2;
- (void)sendEventToJSBridge:(id)arg1 withParams:(id)arg2 delaySendIfNotBridged:(BOOL)arg3;
- (id)webview;
- (id)communicator;
- (id)curViewController;
- (id)webviewOwner;
- (void)setWebviewOwner:(id)arg1;
- (void)setDebugModuleName:(id)arg1;
- (void).cxx_destruct;
@end

