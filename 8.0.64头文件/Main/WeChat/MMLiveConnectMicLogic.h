@interface MMLiveConnectMicLogic : NSObject
{
    BOOL _networkReachable; // +0x8
    id <MMLiveConnectMicActionDelegate> _actionDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    MMLiveOperationView * _operationView; // +0x20
    NSString * _meetId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)onTrtcSwitchRoleFinished;
- (void)onTrtcSwitchRoleError:(int)arg1 errMsg:(id)arg2;
- (void)handleUser:(id)arg1 audioAvailable:(BOOL)arg2;
- (void)handleUser:(id)arg1 videoAvailable:(BOOL)arg2;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)arg1;
- (void)handleRemoteUserLeaveRoomWithSdkUserId:(id)arg1 reason:(long long)arg2;
- (void)handleConnectToOtherRoomResult:(BOOL)arg1 userId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)handleSEIMicTalkingUsersListUpdated:(id)arg1;
- (void)handleAllUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)updateOtherConnectMicAnchor:(id)arg1 anchorSeiStatus:(unsigned int)arg2 anchorSEIInfo:(id)arg3;
- (void)handleFirstShowCdnPlayerView;
- (void)handlePlayingViaCdnChanged:(BOOL)arg1;
- (void)handleSendFirstLocalAudioFrame;
- (void)handleMicDidReady;
- (void)handleAudienceLocalAudioModeChangedTo:(BOOL)arg1;
- (void)handleIsViewCapturingChangedTo:(BOOL)arg1;
- (void)connectMicActionForAudience;
- (void)connectMicAction;
- (void)connectMicActionWithAiAssistantInfo:(id)arg1;
- (BOOL)tryStopConnectMic;
- (BOOL)audienceShouldTryStopConnectMicWhenLiveIsPaused;
- (void)enterBackground;
- (void)enterForeground;
- (void)showToastWithTitle:(id)arg1;
- (void)showToastWithTitle:(id)arg1 shouldVibrate:(BOOL)arg2;
- (void)showErrorToastWithText:(id)arg1;
- (void)showErrorToastWithText:(id)arg1 shouldVibrate:(BOOL)arg2;
- (void)handleConnectMicSettingUpdatedChanges:(id)arg1;
- (void)handleLiveStreamServerTimeUpdated:(unsigned long long)arg1;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)meetId;
- (void)setMeetId:(id)arg1;
- (BOOL)networkReachable;
- (void)setNetworkReachable:(BOOL)arg1;
- (void).cxx_destruct;
@end
