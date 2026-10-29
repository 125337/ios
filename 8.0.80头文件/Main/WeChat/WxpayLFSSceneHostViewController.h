@interface WxpayLFSSceneHostViewController : MMUIViewController <WXPLiteAppSceneHosting, WXCustomWebViewControllerProtocol, WxpayLFSJsApiHostViewController>
{
    UIViewController * _sceneViewController; // +0x70
    NSString * _wxpayCurrentAppId; // +0x78
    NSDictionary * _wxpayExtraInfo; // +0x80
}
- (id)initWithSceneViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)getInitUrl;
- (id)m_initUrl;
- (id)getCurrentUrl;
- (id)getCurrentAppId;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (id)getShareUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (void)enableWebContentImageLongPressingTag;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (id)m_extraInfo;
- (id)m_a8KeyLogicImpl;
- (id)m_jsLogicImpl;
- (BOOL)m_bOfflinePage;
- (id)webView;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (void)setM_bIsJsapiUploadVideoUploading:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setWebViewContentSize:(CGSize)arg1;
- (void)goToURL:(id)arg1;
- (id)wxpayCurrentAppId;
- (void)setWxpayCurrentAppId:(id)arg1;
- (id)wxpayExtraInfo;
- (void)setWxpayExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
