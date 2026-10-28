@interface OpenSDKGetA8KeyHandler : BaseOpenSDKHandler <MMAuthorizeViewControllerDelegate, PBMessageObserverDelegate>
{
    NSString * _authUrl; // +0x8
    MMAuthorizeScopeViewController * _scopeVC; // +0x10
}
- (void)startHandler:(id)arg1;
- (void)dealloc;
- (void)backTo3rdApp:(id)arg1 errCode:(int)arg2 errStr:(id)arg3;
- (void)realHandleReqAfterermissionValidation;
- (void)getA8Key;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (id)getExtTaransLinkParams;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
- (id)authUrl;
- (void)setAuthUrl:(id)arg1;
- (id)scopeVC;
- (void)setScopeVC:(id)arg1;
- (void).cxx_destruct;
@end
