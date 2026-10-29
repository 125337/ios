@interface LocalJSEventHandler_WebAPIBridge : LocalJSEventHandler_BaseEvent <WebviewJSEventHandlerBaseDelegate, WXCustomWebViewControllerProtocol, JSEventHandler, LocalJSEventHandlerWebAPIBridgeEventDelegate>
{
    WebviewJSEventHandlerBase * _handler; // +0x8
}
+ (id)jsApis;
+ (BOOL)CanHandlerEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 context:(id)arg2;
- (void)handleJSEvent:(id)arg1;
- (id)JSAPIName;
- (id)debugModuleName;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)mmWebViewController;
- (id)webviewController;
- (id)getInitUrl;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (void)doJsApiInitEvent;
- (void)enableWebContentImageLongPressingTag;
- (id)extraInfo;
- (id)m_extraInfo;
- (id)m_a8KeyLogicImpl;
- (void)forceShowCloseButton;
- (id)getCurrentAppId;
- (unsigned int)getCurrentScene;
- (id)getCurrentUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getShareUrl;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (id)webView;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void).cxx_destruct;
@end
