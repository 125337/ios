@interface MMLiveGroupConnectMicLogic : MMLiveConnectMicLogic <MMLiveConnectMicOperationPanelDelegate, WCActionSheetDelegate, MMLiveConnectMicVideoPreviewPanelDelegate, IRecordPermissionCheckExt>
{
    BOOL _canConnectMic; // +0x8
    BOOL _isConnectingMic; // +0x9
    BOOL _hasSentCloseLiveMic; // +0xa
    BOOL _recordPermissionCheckOK; // +0xb
    BOOL _hasStartedRemoteVideo; // +0xc
    unsigned int _lastMicConnectedTime; // +0x10
    unsigned int _linkCount; // +0x14
    MMLiveApplyConnectMicAudience * _currentConnectedMicAudience; // +0x18
    MMLiveApplyConnectMicAudience * _connectingMicAudience; // +0x20
    MMLiveApplyConnectMicAudience * _connectMicAudienceInfoForSelf; // +0x28
    OrderedDictionary * _applyConnectMicAudienceDict; // +0x30
    NSMutableSet * _unreadApplyConnectMicAudienceSet; // +0x38
    NSString * _lastReportLiveMicId; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(id)arg2;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 liveMicId:(id)arg2 msgServerTime:(unsigned int)arg3 andLiveSdkInfo:(id)arg4;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(BOOL)arg2;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(id)arg2;
- (void)receiveLiveMicAudience:(id)arg1 withLiveId:(unsigned long long)arg2 fromMicAudiencCgi:(BOOL)arg3;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(id)arg2;
- (void)onGetCurrentLiveMicAudience:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)onGetLiveOnlineMemberByIdResult:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)onApplyLiveMicResult:(id)arg1 liveId:(unsigned long long)arg2 liveMicId:(id)arg3;
- (void)onAcceptLiveMicResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (void)onCloseApplyLiveMicResult:(id)arg1 lastAttemptValue:(BOOL)arg2 andLiveId:(unsigned long long)arg3;
- (void)onGetRefreshLiveMicWithLiveId:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)setCanConnectMic:(BOOL)arg1;
- (void)changeToNormalModeShouldShowToast:(BOOL)arg1;
- (void)changeToConnectedMicModeShouldShowToast:(BOOL)arg1;
- (void)onTrtcSwitchRoleFinished;
- (void)handleUser:(id)arg1 audioAvailable:(BOOL)arg2;
- (void)handleUser:(id)arg1 videoAvailable:(BOOL)arg2;
- (void)connectMicActionForAudience;
- (void)connectMicAction;
- (void)showApplyConnectMicActionSheet;
- (void)checkAndStartRemoteVideoViewWithUserId:(id)arg1;
- (void)checkAndStopRemoteVideoViewWithUserId:(id)arg1;
- (void)onMMLiveConnectMicOperationPanelChangeMicState:(BOOL)arg1;
- (void)onMMLiveConnectMicOperationPanelClose;
- (void)onMMLiveConnectMicOperationPanelStartConnectToAudience:(id)arg1;
- (void)checkConnectingMicTimeOutWithAudience:(id)arg1;
- (void)onMMLiveConnectMicOperationPanelStopConnect;
- (void)onMMLiveConnectMicOperationPanelCancelConnect;
- (void)stopOrCancelConnectMicForAnchor;
- (void)stopOrCancelConnectMicForAnchorAndSendCgi:(BOOL)arg1;
- (void)checkAndSendCloseLiveMicForAnchor;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startApplyConnectMic;
- (BOOL)tryApplyConnectMic;
- (void)cancelConnectMicForAudience;
- (void)cancelConnectMicForAudienceAndShowToast:(BOOL)arg1;
- (void)tryCancelConnectMicForAudienceAndShowToast:(BOOL)arg1;
- (void)stopConnectMicForConnectedAudienceWithTask:(id)arg1;
- (void)stopLocalConnectMicWithTask:(id)arg1;
- (BOOL)tryStopConnectMic;
- (void)showConnectMicVideoPreviewPanel;
- (id)generateReportHandler;
- (void)onMMLiveConnectMicVideoPreviewPanelClose;
- (void)onMMLiveConnectMicVideoPreviewPanelCancel;
- (void)onMMLiveConnectMicVideoPreviewPanelConfirm;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)connectMicOperationPanel;
- (id)connectMicVideoPreviewPanel;
- (id)getLiveTask;
- (id)containerView;
- (void)setNetworkReachable:(BOOL)arg1;
- (id)liveTask;
- (id)groupliveTaskId;
- (BOOL)isConnectingMicByMyself;
- (BOOL)canConnectMic;
- (id)currentConnectedMicAudience;
- (void)setCurrentConnectedMicAudience:(id)arg1;
- (id)connectingMicAudience;
- (void)setConnectingMicAudience:(id)arg1;
- (id)connectMicAudienceInfoForSelf;
- (void)setConnectMicAudienceInfoForSelf:(id)arg1;
- (id)applyConnectMicAudienceDict;
- (void)setApplyConnectMicAudienceDict:(id)arg1;
- (id)unreadApplyConnectMicAudienceSet;
- (void)setUnreadApplyConnectMicAudienceSet:(id)arg1;
- (BOOL)isConnectingMic;
- (void)setIsConnectingMic:(BOOL)arg1;
- (BOOL)hasSentCloseLiveMic;
- (void)setHasSentCloseLiveMic:(BOOL)arg1;
- (BOOL)recordPermissionCheckOK;
- (void)setRecordPermissionCheckOK:(BOOL)arg1;
- (unsigned int)lastMicConnectedTime;
- (void)setLastMicConnectedTime:(unsigned int)arg1;
- (unsigned int)linkCount;
- (void)setLinkCount:(unsigned int)arg1;
- (BOOL)hasStartedRemoteVideo;
- (void)setHasStartedRemoteVideo:(BOOL)arg1;
- (id)lastReportLiveMicId;
- (void)setLastReportLiveMicId:(id)arg1;
- (void).cxx_destruct;
@end

