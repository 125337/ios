@interface MMFinderLiveKTVConnectMicLogic : NSObject <IRecordPermissionCheckExt>
{
    BOOL _hasStartedActivateMicForAnchor; // +0x8
    BOOL _isRequestSongBlockedByRealNameCheck; // +0x9
    BOOL _isShowingMysteriousNoticeView; // +0xa
    unsigned int _audienceStayTrtcRoomTimeAfterStopSinging; // +0xc
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x10
    MMFinderLiveKTVConnectMicSessionInfo * _connectMicSessionInfo; // +0x18
    NSMutableDictionary * _endSingingSessionInfoDict; // +0x20
    unsigned long long _recordPermissionCheckResult; // +0x28
    id /* block */ _requestSongCheckResultBlock; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)initNotifications;
- (id)finderLiveTask;
- (id)currentSongId;
- (void)beginKtvSingingSessionWithSongUniqueId:(id)arg1 resultBlock:(id /* block */)arg2;
- (BOOL)tryConnectMicIfRequireSdkInfo:(BOOL)arg1 sdkInfo:(id)arg2;
- (void)endKtvSingingSessionWithSongUniqueId:(id)arg1 shouldStopConnectMic:(BOOL)arg2;
- (void)endKtvSingingSessionForOtherSingerWithSongUniqueId:(id)arg1;
- (void)checkAndClearConnectMicSessionInfoWithSongUniqueId:(id)arg1;
- (void)sendEndKtvSingingSessionCgiWithSongUniqueId:(id)arg1;
- (void)handleEndKtvSingingSessionFailedWithSongUniqueId:(id)arg1;
- (void)handleTrtcSwitchRoleResult:(BOOL)arg1 errorMsg:(id)arg2;
- (BOOL)isCurrentInMic;
- (void)updateMicMute:(BOOL)arg1;
- (void)updateAudienceStayTrtcRoomTimeAfterStopSinging:(unsigned int)arg1;
- (BOOL)startConnectMicWithTask:(id)arg1 sdkInfo:(id)arg2;
- (void)stopConnectMicWithTask:(id)arg1;
- (void)delayCheckAndSwitchToCDNPlay;
- (void)checkAndSwitchToCDNPlayWithTask:(id)arg1;
- (void)updateRequestSongBlockFlagWithRealNameCheckResultFromCGI:(int)arg1;
- (void)checkIsAudienceRequestSongBlockedWithResultBlock:(id /* block */)arg1;
- (void)checkIsAudienceRequestSongBlockedPhaseTwoWithResultBlock:(id /* block */)arg1 liveTask:(id)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onBecomeActive;
- (void)startActivateLiveConnectMicForAnchor;
- (void)activateLiveConnectMicForAnchor;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)connectMicSessionInfo;
- (void)setConnectMicSessionInfo:(id)arg1;
- (id)endSingingSessionInfoDict;
- (void)setEndSingingSessionInfoDict:(id)arg1;
- (BOOL)hasStartedActivateMicForAnchor;
- (void)setHasStartedActivateMicForAnchor:(BOOL)arg1;
- (unsigned int)audienceStayTrtcRoomTimeAfterStopSinging;
- (void)setAudienceStayTrtcRoomTimeAfterStopSinging:(unsigned int)arg1;
- (BOOL)isRequestSongBlockedByRealNameCheck;
- (void)setIsRequestSongBlockedByRealNameCheck:(BOOL)arg1;
- (unsigned long long)recordPermissionCheckResult;
- (void)setRecordPermissionCheckResult:(unsigned long long)arg1;
- (id /* block */)requestSongCheckResultBlock;
- (void)setRequestSongCheckResultBlock:(id /* block */)arg1;
- (BOOL)isShowingMysteriousNoticeView;
- (void)setIsShowingMysteriousNoticeView:(BOOL)arg1;
- (void).cxx_destruct;
@end

