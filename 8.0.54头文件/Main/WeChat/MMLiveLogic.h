@interface MMLiveLogic : NSObject <MMLiveConnectMicActionDelegate>
{
    MMLiveTaskId * _taskId; // +0x8
    id <MMLiveLogicDelegate> _liveLogicDelegate; // +0x10
    MMLiveConnectMicLogic * _connectMicLogic; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initConnectMicLogic;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)createLiveWithLiveCreateParamsModel:(id)arg1;
- (BOOL)joinLive:(unsigned long long)arg1;
- (BOOL)cancelLive;
- (void)clearLive;
- (BOOL)closeLive;
- (BOOL)closeLiveByAssitant;
- (BOOL)closeLiveByCutLive;
- (BOOL)closeWait:(unsigned int)arg1;
- (BOOL)setOffline;
- (BOOL)notifyStartLiveSucceeded;
- (BOOL)shareLive;
- (BOOL)getLiveInfo;
- (BOOL)fetchNewLiveSdkInfo;
- (void)enterBackground;
- (void)enterForeground;
- (void)sysCallInterrupted:(BOOL)arg1;
- (void)resetAnchorStatus;
- (void)applyConnectMic;
- (void)enterLiveRoom;
- (void)enableLiveReward:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableLiveLike:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)hiddenAudienceName:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableRealTimeDataPanel:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)enableAnchorProductQuestion:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)openGloryList:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)startWeChatPayVerifyProcess:(long long)arg1;
- (BOOL)backToPluginLive;
- (void)onUpdateLiveMicEnableWithTaskId:(id)arg1 enable:(BOOL)arg2;
- (void)onAcceptLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)arg1;
- (void)onConnectMicModeChanged:(BOOL)arg1;
- (void)handleNotifyCommentForSkinSegOpen;
- (void)handleNotifyCommentForSkinSegClose;
- (void)reportSDKEnterRoomError:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)liveLogicDelegate;
- (void)setLiveLogicDelegate:(id)arg1;
- (id)connectMicLogic;
- (void)setConnectMicLogic:(id)arg1;
- (void).cxx_destruct;
@end

