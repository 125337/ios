@interface WebviewAskAuthorizationLogic : MMObject <PBMessageObserverDelegate>
{
    WebviewAuthorizationCache * _authCache; // +0x8
    NSMutableArray * _needCheckQueue; // +0x10
    WebviewAuthorizationInfo * _willSetScopeInfo; // +0x18
    NSMutableArray * _willSetScopeList; // +0x20
    NSString * _alertTitle; // +0x28
    BOOL _isQueueHandling; // +0x30
}
- (void)dealloc;
- (id)init;
- (void)updateScopeInfoList:(id)arg1;
- (void)askAuthInfo:(id)arg1;
- (void)askSvrAuthInfo:(id)arg1;
- (void)askUserAuthInfo:(id)arg1;
- (void)checkScopeAuthInfo;
- (void)onCheckScopeReq:(id)arg1 scopeResp:(id)arg2 authInfo:(id)arg3;
- (void)setScopeAuthInfo:(id)arg1 scopeInfoList:(id)arg2;
- (void)onSetScopeReq:(id)arg1 scopeResp:(id)arg2;
- (unsigned int)structCGI:(id)arg1 withType:(unsigned int)arg2 withUserData:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getScopeListStrFromArray:(id)arg1;
- (void).cxx_destruct;
@end

