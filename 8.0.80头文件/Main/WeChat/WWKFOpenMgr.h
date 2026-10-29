@interface WWKFOpenMgr : MMUserService <MMServiceProtocol>
{
    WWKFContactOpLogic * _contactOpLogic; // +0x8
    FastOpenOpenIMKefuContactOpLogic * _fastOpenContactOpLogic; // +0x10
    TryAddOpenIMKefuContactOpLogic * _tryAddContactOpLogic; // +0x18
    long long _timestampMs; // +0x20
}
+ (BOOL)shouldShowErrWithhErrCode:(long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)kefuTypeForUserName:(id)arg1;
- (void)reportKfLoadResultWithValue:(int)arg1 extra:(id)arg2;
- (void)cancelCurrentWWKFRequest;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(id /* block */)arg4;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 openExtInfo:(id)arg4 completeBlock:(id /* block */)arg5;
- (BOOL)shouldSkipLocalFastOpenForScene:(int)arg1;
- (BOOL)tryJumpToLocalWWKFSessionWithUrl:(id)arg1 context:(id)arg2 openExtInfo:(id)arg3;
- (BOOL)tryJumpToLocalWWKFSessionWithUserName:(id)arg1 url:(id)arg2 context:(id)arg3 openExtInfo:(id)arg4;
- (void)startFastOpenAsyncRefreshWithUrl:(id)arg1 scene:(int)arg2 openExtInfo:(id)arg3;
- (void)startFastOpenAsyncRefreshWithUserName:(id)arg1 scene:(int)arg2;
- (void)handleWWKFContactFlowWithContact:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(id /* block */)arg4;
- (void)startLegacyWWKFContactFlowWithUserName:(id)arg1 context:(id)arg2;
- (void)handleFetchContactResp:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)showUserConfirmAddContactWithContact:(id)arg1 context:(id)arg2;
- (void)requestAddContactWithContact:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)jumpToWWKFMsgLogicViewControllerWithContact:(id)arg1 context:(id)arg2;
- (void)doJumpWWKFMsgLogicViewController:(id)arg1 navigationController:(id)arg2 inScene:(int)arg3 showPageSheet:(BOOL)arg4;
- (void)processFlowContextWhenFlowUIWorks:(id)arg1;
- (id)dismissFlowViewControllerWhenFlowWorks:(id)arg1;
- (id)parseCarryWordFromKFUrl:(id)arg1;
- (void)handleTryAddFailedWithRet:(int)arg1 errMsg:(id)arg2 context:(id)arg3;
- (void)doShowAlertWithSvrControlErrMsg:(id)arg1 context:(id)arg2;
- (void)doCallbackResultWithErrCode:(long long)arg1 context:(id)arg2;
- (id)contactOpLogic;
- (void)setContactOpLogic:(id)arg1;
- (id)fastOpenContactOpLogic;
- (void)setFastOpenContactOpLogic:(id)arg1;
- (id)tryAddContactOpLogic;
- (void)setTryAddContactOpLogic:(id)arg1;
- (long long)timestampMs;
- (void)setTimestampMs:(long long)arg1;
- (void).cxx_destruct;
@end
