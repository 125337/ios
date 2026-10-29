@interface WAWebViewPluginBase : NSObject <IWAWebViewPluginProtocol>
{
    WAWebViewController * _webViewController; // +0x8
    BOOL _isRecording; // +0x10
    id <WAWebViewPluginContextProtocol> _context; // +0x18
    NSString * _boundEnvVersion; // +0x20
    NSString * _boundAppId; // +0x28
}
- (id)init;
- (void)setIsRecording:(BOOL)arg1;
- (void)setWebViewOwner:(id)arg1;
- (void)setBoundAppId:(id)arg1;
- (id)getAppID;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)isExternalNotification:(id)arg1;
- (id)webViewController;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)isRecording;
- (id)boundEnvVersion;
- (void)setBoundEnvVersion:(id)arg1;
- (id)boundAppId;
- (void).cxx_destruct;
@end
