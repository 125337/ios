@interface MultiDeviceLoginLogic : NSObject <MMWebViewDelegate>
{
    BOOL _showingVerifyWebView; // +0x8
    id <MultiDeviceLoginLogicDelegate> _delegate; // +0x10
    MultiDeviceLoginInfo * _info; // +0x18
    MultiDeviceLoginConfirmInfo * _confirmInfo; // +0x20
}
+ (void)cancelLoginWithLoginUrlStr:(id)arg1;
- (id)initWithLoginInfo:(id)arg1;
- (void)jumpToUsageURL;
- (void)cancelLogin;
- (void)confirmLoginWithInfo:(id)arg1;
- (void)privateConfirmLoginWithInfo:(id)arg1;
- (BOOL)needShowMultiDeviceGuide;
- (void)markMultiDeviceGuideShown;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewDidReturn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)confirmInfo;
- (void)setConfirmInfo:(id)arg1;
- (BOOL)showingVerifyWebView;
- (void)setShowingVerifyWebView:(BOOL)arg1;
- (void).cxx_destruct;
@end
