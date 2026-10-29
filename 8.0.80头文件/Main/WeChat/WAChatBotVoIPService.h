@interface WAChatBotVoIPService : MMUserService <IChatBotVoIPExt, IChatBotVoIPSessionDelegate, MMServiceProtocol>
{
    BOOL _isExiting; // +0x8
    WAChatBotVoIPBaseRoomTask * _currentActiveTask; // +0x10
    WAChatBotVoIPBaseRoomTask * _exitingTask; // +0x18
    WAChatBotVoIPBaseRoomTask * _pendingJoinTask; // +0x20
    id /* block */ _exitingTimeoutBlock; // +0x28
}
+ (id)genAgentRoomTaskWithAppId:(id)arg1 identifier:(id)arg2 sessionID:(id)arg3 businessString:(id)arg4;
+ (id)genAgentRoomTaskWithAppId:(id)arg1 identifier:(id)arg2 sessionID:(id)arg3 businessString:(id)arg4 assistantUsername:(id)arg5;
+ (id)genChatbotRoomTaskWithAppId:(id)arg1 identifier:(id)arg2 sessionID:(id)arg3 businessString:(id)arg4 openScene:(int)arg5;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isInRoom;
- (void)joinRoomTask:(id)arg1;
- (void)setCurrentActiveTask:(id)arg1;
- (void)setPendingJoinTask:(id)arg1;
- (void)exitRoomTask:(id)arg1;
- (void)finishExitingWithTask:(id)arg1 reason:(long long)arg2;
- (void)startExitingTimeout;
- (void)cancelExitingTimeout;
- (void)setRoomTask:(id)arg1 muteMicrophone:(BOOL)arg2;
- (void)setRoomTask:(id)arg1 muteMicrophone:(BOOL)arg2 needFullDuplex:(BOOL)arg3 forbidSendMicStatus:(BOOL)arg4;
- (void)setRoomTask:(id)arg1 mutePlayAudio:(BOOL)arg2;
- (BOOL)sendCmdContentData:(id)arg1 data:(id)arg2;
- (BOOL)sendCmdContentData:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)onTalkSucc;
- (void)onCallEnd;
- (void)onRecvToCliInfo:(id)arg1 openScene:(int)arg2 msgID:(unsigned long long)arg3;
- (void)onRecvVoIPAsrInfo:(id)arg1;
- (void)onAudioDeviceInputMeterLevelChangePeak:(float)arg1;
- (id)currentActiveTask;
- (id)exitingTask;
- (void)setExitingTask:(id)arg1;
- (id)pendingJoinTask;
- (BOOL)isExiting;
- (void)setIsExiting:(BOOL)arg1;
- (id /* block */)exitingTimeoutBlock;
- (void)setExitingTimeoutBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
