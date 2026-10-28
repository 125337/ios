@interface WAAppDetailInfoManager : MMUserService <MMServiceProtocol>
- (void)requestAuthorizationInfoForApp:(id)arg1;
- (void)modAuthorizationInfoForApp:(id)arg1 list:(id)arg2 ReceiveMsgStatusChanged:(BOOL)arg3 FinalReceiveMsgStatusAllow:(BOOL)arg4;
- (void)requestDeleteAppUseUserInfo:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleAppGetAuthInfoResponse:(id)arg1;
- (void)handleAppModAuthInfoResponse:(id)arg1;
- (void)handleDeleteUserAuthInfoResponse:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
@end
