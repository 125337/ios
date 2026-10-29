@interface MMFinderLiveCDNViewerMicLogic : MMLiveConnectMicLogic <MMLiveConnectMicSEIHandlerDelegate, MMFinderLiveKTVStateExt, MMFinderLivePkTaskedBonusStateOrchestratorDelegate>
{
    BOOL _isVideoLandscapeMode; // +0x8
    BOOL _isAnchorMain; // +0x9
    BOOL _isBackendSeiInfoEnabled; // +0xa
    BOOL _canShowMicTopic; // +0xb
    MMFinderLiveConnectMicPKInfo * _anchorPkInfo; // +0x10
    OrderedDictionary * _cachedConnectMicAudienceDict; // +0x18
    OrderedDictionary * _cachedConnectMicAnchorDict; // +0x20
    OrderedDictionary * _cachedOtherRoomMicAudienceDict; // +0x28
    OrderedDictionary * _otherRoomMicAnchorDict; // +0x30
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x38
    MMFinderLiveConnectMicJoinLiveBattleInfoWrap * _joinLiveBattleInfoWrap; // +0x40
    MMLiveSEIConnectMicMsg * _lastSeiMicMsg; // +0x48
    NSString * _micVroomId; // +0x50
    unsigned long long _micVroomIdVersion; // +0x58
    NSMutableArray * _micSeatBaseInfoListInAudioRoomMode; // +0x60
    NSMutableArray * _micSeatBaseInfoListInOrdinaryMode; // +0x68
    unsigned long long _battleNotifyVersion; // +0x70
    MMLiveConnectMicSEIHandler * _seiHandler; // +0x78
    unsigned long long _dataSrcFlag; // +0x80
}
+ (id)generateSortedMicUserListWithOriginalList:(id)arg1;
+ (id)generateNoUserMicUsersInfoForMultiPlayerAudioRoomModeWithAnchorSdkUserId:(id)arg1 andAnchorContact:(id)arg2;
- (BOOL)updateNewConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 battleInfo:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;
- (void)assemblePkUIConf_new:(unsigned long long)arg1;
- (void)decreasePkInfoDisplayedTimeLeft_new;
- (BOOL)handleBattleInfo_new:(id)arg1 fromJoinLive:(BOOL)arg2 micSessionId:(id)arg3 vroomId:(id)arg4 serverUnixEpochTimeInSeconds:(unsigned long long)arg5;
- (void)checkAndClearOverPkState_new;
- (void)handlePkStateOver;
- (void)handlePkStateAborted;
- (void)checkJoinLiveBattleInfoWrap_new;
- (void)checkClearPkInfoWhenSeiUpdated;
- (void)checkAndUpdateMicLayoutModeWithBattleLayoutValue:(unsigned int)arg1;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1;
- (void)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5;
- (BOOL)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5 ownerPlayerInfo:(id)arg6 otherPlayerInfo:(id)arg7 winningStreakCount:(unsigned int)arg8;
- (void)assemblePkUIConf;
- (void)decreasePkInfoDisplayedTimeLeft;
- (BOOL)handleBattleInfo:(id)arg1 fromJoinLive:(BOOL)arg2 micSessionId:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;
- (void)checkAndClearOverPkState;
- (void)checkJoinLiveBattleInfoWrap;
- (id)initWithTaskId:(id)arg1;
- (BOOL)isMultiAnchorMicEnabled;
- (BOOL)isAudiencePkEnable;
- (void)receiveCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 closeMicInfo:(id)arg3;
- (void)checkCachedMicAudienceDictWithClosedMicSessionId:(id)arg1;
- (void)checkCachedMicAnchorDictWithClosedMicSessionId:(id)arg1;
- (unsigned long long)getAvailableMicIndexFromSeatId:(unsigned int)arg1;
- (void)checkAllCachedMicUsersDictWithUserInfo:(id)arg1;
- (id)findConnectMicUserInfoInDict:(id)arg1 bySdkUserId:(id)arg2;
- (void)addCachedConnectMicAudienceWithUserInfo:(id)arg1;
- (void)addCachedConnectMicAnchorWithUserInfo:(id)arg1;
- (void)addCachedOtherRoomMicAudienceWithUserInfo:(id)arg1;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(BOOL)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 seatId:(unsigned int)arg7 fromJoinLive:(BOOL)arg8 isInOtherRoom:(BOOL)arg9 anchorSdkUserId:(id)arg10;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(BOOL)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 seatId:(unsigned int)arg7 fromJoinLive:(BOOL)arg8 isInOtherRoom:(BOOL)arg9 anchorSdkUserId:(id)arg10 updateMicUsersListForCdnAudience:(BOOL)arg11;
- (void)receiveConnectMicAudienceUser:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(BOOL)arg3 updateMicUsersListForCdnAudience:(BOOL)arg4;
- (void)receiveConnectMicUserForAudience:(id)arg1 updateMicUsersListForCdnAudience:(BOOL)arg2;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1 updateMicUsersListForCdnAudience:(BOOL)arg2;
- (void)receiveAnchorConnectMicStatus:(long long)arg1 connectMicFinderContact:(id)arg2 coverImageUrlString:(id)arg3 liveRoomImages:(id)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 sdkUserId:(id)arg7 sdkRoomId:(unsigned int)arg8 fromJoinLive:(BOOL)arg9;
- (void)receiveAnchorCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveOtherRoomAudienceCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 sdkUserId:(id)arg3;
- (id)findValidMicAnchorUserInfoFromAllDictWithSdkUserId:(id)arg1;
- (id)findMicAnchorUserInfoFromDict:(id)arg1 withSessionId:(id)arg2;
- (id)findMicAnchorUserInfoFromAllDictWithSessionId:(id)arg1;
- (void)resetAnchorPkInfo;
- (void)clearAnchorPkInfo;
- (void)checkAndChangeToPkStateStartedForAudience;
- (void)updateJoinLiveBattleInfoWrapWithBattleInfo:(id)arg1 andMicSessionId:(id)arg2 vroomId:(id)arg3;
- (void)handleJoinLiveBattleInfoForAnchor:(id)arg1;
- (unsigned int)getAudienceDelayTimeInPK;
- (void)receiveAnchorConnectMicBattleInfo:(id)arg1 fromJoinLive:(BOOL)arg2 micSessionId:(id)arg3 vroomId:(id)arg4 serverUnixEpochTimeInSeconds:(unsigned long long)arg5;
- (void)checkAndClearInvitedPkState;
- (id)currentAnchorFinderUserName;
- (void)updateUserPkStateUI;
- (void)updateBattleReportInfo;
- (void)checkAndUpdateLiveView;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)checkConnectMicUserInfoAndVideoSizeForCdnAudience;
- (void)resetConnectMicUsersInfoForCDNUser;
- (void)clearConnectMicAnchorUserInfo:(id)arg1;
- (void)checkAndClearConnectMicUsersForCDNUser;
- (void)checkAndClearConnectMicAnchorForCDNUser;
- (void)checkAndClearConnectMicAudienceForCDNUser;
- (void)checkRemoteClosedCachedMicAudienceForCDNUser;
- (void)checkRemoteClosedCachedOtherRoomMicAudienceForCDNUser;
- (void)notifyConnectMicWithUserInfo:(id)arg1;
- (id)findMicAudienceUserInfoForCDNUserBySdkUserId:(id)arg1;
- (void)realUpdateConnectMicUsersInfoForCDNUserWithSeiMicMsg:(id)arg1 cdnVideoDisplayType:(unsigned long long)arg2;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithSeiMicMsg:(id)arg1;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOtherConnectMicAnchor:(id)arg1 anchorSeiStatus:(unsigned int)arg2 anchorSEIInfo:(id)arg3;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)arg1;
- (void)showOtherMicAnchorMicMutedToastWithUserInfo:(id)arg1;
- (void)updateOtherRoomMicUsersWithAnchorSdkUserId:(id)arg1 anchorSEIInfo:(id)arg2;
- (void)addDataSrcFlag:(unsigned long long)arg1 async:(BOOL)arg2;
- (BOOL)isCurrDataSrcCompletely;
- (id)handleNewAnchorPkInfoAndGenerateMicUser:(id)arg1 checkSessionId:(BOOL)arg2;
- (BOOL)checkIsSameMicUserInfo:(id)arg1 withApplyId:(id)arg2 andSessionId:(id)arg3;
- (BOOL)checkIsSameMicUserInfo:(id)arg1 withOtherMicUserInfo:(id)arg2;
- (void)handleAnchorNewApplyConnectMicFromContact:(id)arg1 applyAnchor:(id)arg2 acceptorAnchor:(id)arg3 pkroomAnchors:(id)arg4 applyId:(id)arg5 randomMicBuffer:(id)arg6 expiredTime:(unsigned long long)arg7 applyFinderObject:(id)arg8;
- (void)handleAnchorNewAcceptConnectMicFromContact:(id)arg1 pkroomAnchors:(id)arg2 sessionId:(id)arg3 vroomId:(id)arg4 vroomIdVersion:(unsigned long long)arg5;
- (void)handleAnchorNewCloseConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 applyId:(id)arg3 sessionId:(id)arg4;
- (void)handleAnchorNewPkInfoInJoinLiveResp:(id)arg1;
- (BOOL)handleFinderLiveMicPkInfo:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (BOOL)handleNewOtherRoomMicAnchorUser:(id)arg1;
- (void)handleNewAnchorMicInfosInJoinLiveResp:(id)arg1;
- (BOOL)handleNewAnchorMicInfos:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (BOOL)handleMicAudienceList:(id)arg1 fromFirstJoinLive:(BOOL)arg2 isInOtherRoom:(BOOL)arg3 anchorSdkUserId:(id)arg4;
- (void)handleCurrentLiveRoomMicAudienceList:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (void)updateMicAudienceLikeCountWithAudienceInfo:(id)arg1;
- (void)handleFinderLiveMicInfo:(id)arg1 fromFirstJoinLive:(BOOL)arg2 updateMicUsersListForCdnAudience:(BOOL)arg3;
- (id)liveTask;
- (void)onTaskedBonusStateChangedByOrchestrator:(id)arg1;
- (void)handleLiveStreamServerTimeUpdated:(unsigned long long)arg1;
- (id)audioRoomSeiMicMsg;
- (void)realUpdateConnectMicUsersInfoForCDNUserWithAudioRoomSeiMicMsg:(id)arg1;
- (BOOL)enableGenerateMicUserFromSei;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithAudioRoomSeiMicMsg:(id)arg1;
- (void)updateAudioRoomInfoView;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateAudioRoomMicViewWithSdkUserId:(id)arg1 andUIChangeType:(unsigned long long)arg2;
- (void)updateKtvSingerFlagInAudioRoomMicUsersInfo;
- (void)updateKtvSingerFlagInAudioRoomMicUsersInfoWithResetLastSingerTalkingStatusFlag:(BOOL)arg1;
- (void)resetMicUserIsTalkingByAnchorSEIWithMicUserInfo:(id)arg1;
- (void)updateAudioRoomViewWithMicTopicContent:(id)arg1;
- (void)updateAudioRoomViewWithMicTopicTitle:(id)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerVoicingChanged:(BOOL)arg3;
- (void)checkAndInitSeiHandler;
- (void)handleFinderLiveBackendPeriodSeiInfoUpdated:(id)arg1;
- (void)updateBackendSeiInfoEnabled:(BOOL)arg1;
- (void)checkAndInitMicSeatBaseInfoListInAudioRoomMode;
- (void)checkAndInitMicSeatBaseInfoListInOrdinaryMode;
- (void)handleFinderLiveMicConfigUpdated:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (void)handleFinderLiveSeatInfoListUpdated:(id)arg1 isAudioRoomMode:(BOOL)arg2;
- (void)updateSeatNameForMicSeatBaseInfo:(id)arg1 withMicSeatBaseInfoList:(id)arg2;
- (void)updateMicUsersInfoSeatNameWithMicSeatBaseInfoList:(id)arg1;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(BOOL)arg1;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateMicTopicWithFinderLiveMicConfig:(id)arg1 updateAll:(BOOL)arg2;
- (void)updateCanShowMicTopic:(BOOL)arg1;
- (void)updateConnectMicViewMicTopic;
- (void)onLiveConnectMicSEIHandlerAudioRoomSeiMicMsgUpdated;
- (id)anchorPkInfo;
- (void)setAnchorPkInfo:(id)arg1;
- (BOOL)isVideoLandscapeMode;
- (void)setIsVideoLandscapeMode:(BOOL)arg1;
- (id)cachedConnectMicAudienceDict;
- (void)setCachedConnectMicAudienceDict:(id)arg1;
- (id)cachedConnectMicAnchorDict;
- (void)setCachedConnectMicAnchorDict:(id)arg1;
- (id)cachedOtherRoomMicAudienceDict;
- (void)setCachedOtherRoomMicAudienceDict:(id)arg1;
- (id)otherRoomMicAnchorDict;
- (void)setOtherRoomMicAnchorDict:(id)arg1;
- (id)allConnectedMicUsersInfo;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (id)joinLiveBattleInfoWrap;
- (void)setJoinLiveBattleInfoWrap:(id)arg1;
- (id)lastSeiMicMsg;
- (void)setLastSeiMicMsg:(id)arg1;
- (BOOL)isAnchorMain;
- (void)setIsAnchorMain:(BOOL)arg1;
- (id)micVroomId;
- (void)setMicVroomId:(id)arg1;
- (unsigned long long)micVroomIdVersion;
- (void)setMicVroomIdVersion:(unsigned long long)arg1;
- (id)micSeatBaseInfoListInAudioRoomMode;
- (void)setMicSeatBaseInfoListInAudioRoomMode:(id)arg1;
- (id)micSeatBaseInfoListInOrdinaryMode;
- (void)setMicSeatBaseInfoListInOrdinaryMode:(id)arg1;
- (unsigned long long)battleNotifyVersion;
- (void)setBattleNotifyVersion:(unsigned long long)arg1;
- (id)seiHandler;
- (void)setSeiHandler:(id)arg1;
- (BOOL)isBackendSeiInfoEnabled;
- (void)setIsBackendSeiInfoEnabled:(BOOL)arg1;
- (BOOL)canShowMicTopic;
- (void)setCanShowMicTopic:(BOOL)arg1;
- (unsigned long long)dataSrcFlag;
- (void)setDataSrcFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
