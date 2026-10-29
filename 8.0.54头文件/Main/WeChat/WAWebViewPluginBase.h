@interface WAWebViewPluginBase : NSObject <IWAWebViewPluginProtocol>
{
    WAWebViewController * _webViewController; // +0x8
    BOOL _isRecording; // +0x10
    id <WAWebViewPluginContextProtocol> _context; // +0x18
}
- (id)init;
- (void)setIsRecording:(BOOL)arg1;
- (void)setWebViewOwner:(id)arg1;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)webViewController;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)isRecording;
- (void).cxx_destruct;
@end

