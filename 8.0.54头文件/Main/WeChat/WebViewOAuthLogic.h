@interface WebViewOAuthLogic : MMObject <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate, WAAuthorizePageSheetDelegate, WAPageSheetDelegate>
{
    id /* block */ _completeBlock; // +0x8
    JSApiScopeConfirmWindow * _confirmWindow; // +0x10
    NSString * _oauthUrl; // +0x18
    BOOL _needNotifySvrWhenConfirm; // +0x20
    NSString * _confirmRediretUrl; // +0x28
    WOAPPrivacyConfirmLogic * _privacyConfirmLogic; // +0x30
    NSString * _appId; // +0x38
    unsigned int _stayTimeStart; // +0x40
    unsigned long long _stepStartTime; // +0x48
    unsigned int _sessionID; // +0x50
    BOOL _isAuthing; // +0x54
    BOOL _cachedIsInteractivePopEnabled; // +0x55
    MMUIViewController * _vc; // +0x58
    JSApiScopeAuthorizeInfo * _authInfo; // +0x60
    NSMutableArray * _pendingScopeInfoList; // +0x68
    NSMutableArray * _handledScopeInfoList; // +0x70
    JSApiScopeAuthorizePageSheet * _pageSheet; // +0x78
    NSString * _refererUrl; // +0x80
}
- (void)startOAuthWithUrl:(id)arg1 userName:(id)arg2 scene:(int)arg3 oAuthType:(unsigned int)arg4 referUrl:(id)arg5 viewController:(id)arg6 completeBlock:(id /* block */)arg7;
- (void)reset;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithContext:(id)arg1;
- (void)onConfirmViewCancel;
- (void)reportAuthOperate:(unsigned long long)arg1 isShowAuthView:(BOOL)arg2 errCode:(int)arg3;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOauthResponse:(id)arg1;
- (void)handleConfirmResponse:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)sendConfirmOprationToSvrWithContext:(id)arg1;
- (void)doSendAuthStatusToSvrWithContext:(id)arg1;
- (void)showConfirmWindow:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onScopeWindowCancel:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)storageWebViewInteractivePopEnabled;
- (void)recoveryWebViewInteractivePopEnabled;
- (void)showAuthPageSheet:(id)arg1;
- (void)dismissAuthPageSheet;
- (void)setAndSortScopeInfoList:(id)arg1;
- (void)setupAuthInfoWithAuthResp:(id)arg1;
- (BOOL)hasPendingScopeInfo;
- (void)handleFirstScopeInfoAndUpdateAuthInfo;
- (void)updateScopeInfoStatusAndMoveFromPendingQueue2HandledQueue:(BOOL)arg1;
- (void)relayoutOauthPageSheet;
- (void)authorizeAccept:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)sendAuthStatusToSvrWhenAllPageSheetDismissWithOAuthContext:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (double)getViewHeight;
- (BOOL)isAuthing;
- (void)setIsAuthing:(BOOL)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)pendingScopeInfoList;
- (void)setPendingScopeInfoList:(id)arg1;
- (id)handledScopeInfoList;
- (void)setHandledScopeInfoList:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (BOOL)cachedIsInteractivePopEnabled;
- (void)setCachedIsInteractivePopEnabled:(BOOL)arg1;
- (id)refererUrl;
- (void)setRefererUrl:(id)arg1;
- (void).cxx_destruct;
@end

