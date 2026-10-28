@interface XMailBindMailControlLogic : MMObject <MMWebViewDelegate, XMailCommitBindCgiDelegate, MMUIViewControllerExt, XMailPrepareBindCgiDelegate>
{
    id <XMailBindMailControlLogicDelegate> _delegate; // +0x8
    MMUIViewController * _rootViewController; // +0x10
    NSString * _defaultMailAddr; // +0x18
    XMailCommitBindCgi * _commitBindCgi; // +0x20
}
- (void)startLogic;
- (void)showLoginMailWebViewWithUrl:(id)arg1 fromViewController:(id)arg2;
- (id)currentViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)startCommitBindWxRegMailAddr:(id)arg1 fromViewController:(id)arg2;
- (void)checkBeforeSwitchToMailAddr:(id)arg1 completionblock:(id /* block */)arg2;
- (void)exitIfBackToRootVC;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)MMUIViewControllerDidBePoped:(id)arg1;
- (void)onWebViewClickClose:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onXMailCommitBindCgiSuccess:(id)arg1 mailAddr:(id)arg2;
- (void)onXMailPrepareBindCgi:(id)arg1 success:(BOOL)arg2 loginUrl:(id)arg3 wxRegMailAddr:(id)arg4 wxMailRegUrl:(id)arg5 wxMailHeadUrl:(id)arg6;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (id)defaultMailAddr;
- (void)setDefaultMailAddr:(id)arg1;
- (id)commitBindCgi;
- (void)setCommitBindCgi:(id)arg1;
- (void).cxx_destruct;
@end
