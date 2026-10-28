@interface WWKFOpenMgr : MMUserService <MMServiceProtocol>
{
    WWKFContactOpLogic * _contactOpLogic; // +0x8
}
+ (BOOL)shouldShowErrWithhErrCode:(long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cancelCurrentWWKFRequest;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(id /* block */)arg4;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 openExtInfo:(id)arg4 completeBlock:(id /* block */)arg5;
- (void)handleWWKFContactFlowWithContact:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(id /* block */)arg4;
- (void)handleFetchContactResp:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)showUserConfirmAddContactWithContact:(id)arg1 context:(id)arg2;
- (void)requestAddContactWithContact:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)jumpToWWKFMsgLogicViewControllerWithContact:(id)arg1 context:(id)arg2;
- (void)doJumpWWKFMsgLogicViewController:(id)arg1 navigationController:(id)arg2 inScene:(int)arg3 showPageSheet:(BOOL)arg4;
- (void)processFlowContextWhenFlowUIWorks:(id)arg1;
- (id)dismissFlowViewControllerWhenFlowWorks:(id)arg1;
- (id)parseCarryWordFromKFUrl:(id)arg1;
- (void)doShowAlertWithSvrControlErrMsg:(id)arg1 context:(id)arg2;
- (void)doCallbackResultWithErrCode:(long long)arg1 context:(id)arg2;
- (id)contactOpLogic;
- (void)setContactOpLogic:(id)arg1;
- (void).cxx_destruct;
@end
