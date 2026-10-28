@interface WCPayJumpRemindControlLogic : MMObject <MMTipsViewControllerDelegate, MMWebViewDelegate>
{
    unsigned int _clientScene; // +0x8
    unsigned int _payScene; // +0xc
    id /* block */ _interceptBlk; // +0x10
    id /* block */ _continueBlk; // +0x18
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0x20
    id <MMUIViewControllerDelegate> _vcRootDelegate; // +0x28
    MMWebViewController * _m_gdprUserKeyInfoWebviewController; // +0x30
}
- (void)handleJumpRemindInfo:(id)arg1 clientScene:(unsigned int)arg2 payScene:(unsigned int)arg3 vcRootDelegate:(id)arg4 onIntercept:(id /* block */)arg5 onContinue:(id /* block */)arg6;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)getAppendClientVersionInUrl:(id)arg1 clientScene:(unsigned int)arg2 payScene:(unsigned int)arg3;
- (void)handleJumpUrl;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)excuteBlk:(BOOL)arg1 nativepath:(id)arg2;
- (id /* block */)interceptBlk;
- (void)setInterceptBlk:(id /* block */)arg1;
- (id /* block */)continueBlk;
- (void)setContinueBlk:(id /* block */)arg1;
- (id)jumpRemindInfo;
- (void)setJumpRemindInfo:(id)arg1;
- (id)vcRootDelegate;
- (void)setVcRootDelegate:(id)arg1;
- (unsigned int)clientScene;
- (void)setClientScene:(unsigned int)arg1;
- (unsigned int)payScene;
- (void)setPayScene:(unsigned int)arg1;
- (id)m_gdprUserKeyInfoWebviewController;
- (void)setM_gdprUserKeyInfoWebviewController:(id)arg1;
- (void).cxx_destruct;
@end
