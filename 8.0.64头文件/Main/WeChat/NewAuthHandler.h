@interface NewAuthHandler : MMObject <MMWebViewDelegate, IAppDataExt, MMKernelExt>
{
    OpenApiParameter * m_parameter; // +0x8
    UINavigationController * m_oAuthViewController; // +0x10
    BOOL m_isDoing; // +0x18
    OpenSDKAuthorizeLoginManager * m_nativeAuthManager; // +0x20
    MMTipsViewController * m_alertConfirmVC; // +0x28
    NSString * _m_nsScope; // +0x30
    NSString * _m_nsState; // +0x38
}
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)startWechatConnect:(id)arg1;
- (BOOL)isNeedStartIpadOAuth;
- (void)startIPadOAuthInNativeView;
- (void)cancelWechatConnect;
- (id)parseURLParams;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)delayCancelAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)denyAllHandleAndReturn3rdApp;
- (void)send3rdRespWithErrCode:(int)arg1 errStr:(id)arg2;
- (void)createOAuthView;
- (id)createOAuthRequestWithOpenParameter;
- (void)removeOAuthView;
- (void)OnOAuthCancel;
- (void)OnOAuthDeny;
- (void)onOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5 iLinkAuthBuffer:(id)arg6;
- (id)appendURLStrWithURLStr:(id)arg1 iLinkAuthBuffer:(id)arg2;
- (void)alertLaunchAppWithUrl:(id)arg1 confirmWording:(id)arg2 appIconUrl:(id)arg3 appNickname:(id)arg4 fromDegrade:(BOOL)arg5;
- (id)limitString:(id)arg1 WithLimitLength:(unsigned int)arg2;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onPostQuit;
- (void)onNewOAuthCancel;
- (void)onNewOAuthDeny;
- (void)onNewOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onNewOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5 iLinkAuthBuffer:(id)arg6;
- (void)onIPadOAuthCancel;
- (void)onIPadOAuthError:(int)arg1 errMsg:(id)arg2;
- (void)onIPadOAuthRedirectUrl:(id)arg1 confirmRedirectUrl:(id)arg2 confirmWording:(id)arg3 appIconUrl:(id)arg4 appNickname:(id)arg5;
- (id)m_nsScope;
- (void)setM_nsScope:(id)arg1;
- (id)m_nsState;
- (void)setM_nsState:(id)arg1;
- (void).cxx_destruct;
@end
