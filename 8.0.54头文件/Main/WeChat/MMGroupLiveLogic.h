@interface MMGroupLiveLogic : MMLiveLogic <MMGroupLiveMgrExt>
{
    BOOL _isKeyRequesting; // +0x8
    BOOL _isInUpdateLiveMicEnableCgiProcess; // +0x9
    id <MMGroupLiveLogicDelegate> _liveLogicDelegate; // +0x10
    NSString * _roomId; // +0x18
    long long _roleType; // +0x20
}
- (void)initConnectMicLogic;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)createLiveWithLiveCreateParamsModel:(id)arg1;
- (BOOL)joinLive:(unsigned long long)arg1;
- (BOOL)closeLive;
- (BOOL)closeLiveByAssitant;
- (BOOL)closeLiveByCutLive;
- (void)clearLive;
- (BOOL)setOffline;
- (BOOL)shareLive;
- (BOOL)getLiveInfo;
- (BOOL)getLiveMicAudienceInfo;
- (BOOL)fetchNewLiveSdkInfo;
- (void)enterBackground;
- (void)enterForeground;
- (void)sysCallInterrupted:(BOOL)arg1;
- (void)resetAnchorStatus;
- (void)onCreateLiveResult:(id)arg1 andLiveInfo:(id)arg2 isVerified:(BOOL)arg3 andVerifyUrl:(id)arg4;
- (void)onJoinLiveResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)onShareLiveResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(id)arg2;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 liveMicId:(id)arg2 msgServerTime:(unsigned int)arg3 andLiveSdkInfo:(id)arg4;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(BOOL)arg2;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(id)arg2;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(id)arg2;
- (void)onApplyLiveMicResult:(id)arg1 liveId:(unsigned long long)arg2 liveMicId:(id)arg3 isVerified:(BOOL)arg4 andVerifyUrl:(id)arg5;
- (void)onAcceptLiveMicResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (void)onCloseApplyLiveMicResult:(id)arg1 lastAttemptValue:(BOOL)arg2 andLiveId:(unsigned long long)arg3;
- (void)onGetRefreshLiveMicWithLiveId:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onGetLiveMicAudienceInfoResult:(id)arg1 liveId:(unsigned long long)arg2 andAudience:(id)arg3;
- (void)onGetLiveOnlineMemberByIdResult:(id)arg1 liveId:(unsigned long long)arg2 andAudienceOnlineInfo:(id)arg3;
- (void)onUpdateLiveMicEnableWithTaskId:(id)arg1 enable:(BOOL)arg2;
- (void)onAcceptLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onCloseLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onApplyLiveMicWithTaskId:(id)arg1;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)arg1;
- (void)onConnectMicModeChanged:(BOOL)arg1;
- (id)groupTaskId;
- (id)liveTask;
- (id)groupLiveConnectMicLogic;
- (void)applyConnectMic;
- (id)liveLogicDelegate;
- (void)setLiveLogicDelegate:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (BOOL)isKeyRequesting;
- (void)setIsKeyRequesting:(BOOL)arg1;
- (BOOL)isInUpdateLiveMicEnableCgiProcess;
- (void)setIsInUpdateLiveMicEnableCgiProcess:(BOOL)arg1;
- (void).cxx_destruct;
@end

