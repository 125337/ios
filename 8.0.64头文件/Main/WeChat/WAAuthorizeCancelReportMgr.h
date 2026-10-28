@interface WAAuthorizeCancelReportMgr : MMUserService <MMServiceProtocol>
- (id)init;
- (void)cancelLoginConfirmWithAppID:(id)arg1 scope:(id)arg2 loginType:(unsigned int)arg3 debugModeType:(unsigned int)arg4 externalInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)cancelAuthorizeConfirmWithAppID:(id)arg1 scope:(id)arg2 debugModeType:(unsigned int)arg3 externalInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)cancelOperateWXDataConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3 debugModeType:(unsigned int)arg4 externalInfo:(id)arg5 sessionId:(id)arg6 avatarOpt:(unsigned int)arg7 completion:(id /* block */)arg8;
@end
