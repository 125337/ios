@interface ExtDeviceFlutterPlugin : NSObject <ExtDeviceNativeAPI, IOnlineClientMgrExt, MMWebViewDelegate, MMFlutterPlugin>
{
    BOOL _showingVerifyWebView; // +0x8
    ExtDeviceLoginFlutterAPI * _loginFlutterApi; // +0x10
    ExtDeviceManageFlutterAPI * _manageFlutterApi; // +0x18
    UIViewController * _hostViewController; // +0x20
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)goFileTransferWithError:(id *)arg1;
- (void)goSecondVerifyAuthURL:(id)arg1 error:(id *)arg2;
- (void)goHelpWebviewUrl:(id)arg1 error:(id *)arg2;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewDidReturn:(id)arg1;
- (void)cancelLogin;
- (id)loginFlutterApi;
- (void)setLoginFlutterApi:(id)arg1;
- (id)manageFlutterApi;
- (void)setManageFlutterApi:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (BOOL)showingVerifyWebView;
- (void)setShowingVerifyWebView:(BOOL)arg1;
- (void).cxx_destruct;
@end
