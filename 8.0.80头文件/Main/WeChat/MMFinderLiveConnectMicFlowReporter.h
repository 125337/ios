@interface MMFinderLiveConnectMicFlowReporter : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
}
- (id)initWithTaskId:(id)arg1;
- (void)reportWithUserId:(id)arg1 opType:(unsigned long long)arg2 andOpMsg:(id)arg3;
- (void)reportStartAnchorMicWithUserId:(id)arg1 andOpType:(unsigned long long)arg2;
- (void)reportAnchorMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportAcceptAudienceMicWithUserId:(id)arg1;
- (void)reportAudienceMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 andRoleType:(unsigned long long)arg3;
- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 reason:(long long)arg3 andRoleType:(unsigned long long)arg4;
- (void)reportRemoteUserEvent:(unsigned long long)arg1 withUserId:(id)arg2;
- (void)reportAudienceApplyMicSuccessWithUserId:(id)arg1 sessionId:(id)arg2 isInvitedMicByAnchor:(BOOL)arg3;
- (void)reportAudienceReceiveAnchorAcceptWithUserId:(id)arg1 sessionId:(id)arg2 result:(unsigned long long)arg3;
- (void)reportAudienceTrtcSwitchRoleWithUserId:(id)arg1 sessionId:(id)arg2 success:(BOOL)arg3 errCode:(long long)arg4;
- (void)reportAudienceFoundConnectedMicOnJoinLiveWithUserId:(id)arg1 sessionId:(id)arg2 isConnecting:(BOOL)arg3;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
