@interface MMFinderLiveConnectMicLogic : MMFinderLiveCDNViewerMicLogic <MMFinderLiveConnectMicUserViewDelegate, WCLiveActionSheetDelegate, MMFinderLiveConnectMicOperationPanelDelegate, MMFinderLiveConnectMicAllUserInfoViewDelegate, MMFinderLiveMicTalkingUsersViewActionDelegate, MMFinderLiveAudioRoomInfoViewDelegate, MMLiveViewExt, MMLiveTaskMgrExt, IRecordPermissionCheckExt, MMLiveAnchorSEISynchronizeDelegate, MMScrollActionSheetDelegate, MMFinderLiveConnectMicAudienceApplyPageSheetDelegate, MMFinderLiveModifyMicSeatNamePanelDelegate, MMFinderLiveMicInviteAudiencePanelDelegate, MMFinderLiveMicInviteAudienceBubbleViewDelegate, MMLiveConnectMicAudienceCameraOperationPanelDelegate, MMLiveFilterOperationPanelDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveMakeupOperationPanelDelegate, MMFinderLiveConnectMicPkPanelDelegate, MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate, MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate, MMFinderLiveKTVStateExt, MMFinderLiveKTVSongOperationExt, WCFinderLocationServiceExt, ILocationMgrExt>
{
    BOOL _isAnchorBattleDisabled; // +0x8
    BOOL _isAnchorPkChangeLayoutEnabled; // +0x9
    BOOL _isMicWithShareScreenEnabled; // +0xa
    BOOL _recordPermissionCheckOK; // +0xb
    BOOL _shouldRecordFirstMicUITime; // +0xc
    BOOL _canUseNewMicSEI; // +0xd
    BOOL _isInStopMultiAnchorMicProcess; // +0xe
    BOOL _hasStartedActivateMicForAnchor; // +0xf
    BOOL _isInDelayActivateMicForAnchorProcess; // +0x10
    BOOL _canAutoConnect; // +0x11
    BOOL _canShowConnectMicButtonRedDot; // +0x12
    BOOL _isCdnUserBeforeConnectMic; // +0x13
    BOOL _canUseFetchLiveMicInfoCGI; // +0x14
    BOOL _isWaitingMultiAnchorMicAcceptCGI; // +0x15
    BOOL _shouldAcceptRandomMicAfterLastResp; // +0x16
    BOOL _hasShownAnchorLocationGuideView; // +0x17
    BOOL _isFetchingLocationForAudience; // +0x18
    BOOL _isAudienceConnectMicDismissDefaultSource; // +0x19
    BOOL _isRenewCreateBattleProcess; // +0x1a
    BOOL _needRenewCreateBattle; // +0x1b
    BOOL _paidApplyMicRequesting; // +0x1c
    int _closeCountOfJoinLiveRespAnchorMicSession; // +0x20
    unsigned int _fetchLiveMicInfoFailedCount; // +0x24
    unsigned int _audienceDelayTimeInPaidMicCountdown; // +0x28
    id <MMFinderLiveConnectMicActionDelegate> _actionDelegate; // +0x30
    MMFinderLiveConnectMicUser * _connectMicAudienceSelfUser; // +0x38
    MMFinderLiveConnectMicUser * _micTalkingAudienceSelfUser; // +0x40
    MMFinderLivePreviewRelatedOperationView * _previewRelatedOperationView; // +0x48
    unsigned long long _micLayoutMode; // +0x50
    OrderedDictionary * _applyConnectMicAudienceDict; // +0x58
    NSMutableSet * _unreadApplyConnectMicAudienceSet; // +0x60
    NSMutableOrderedSet * _closedMicAudienceSessionIdSet; // +0x68
    OrderedDictionary * _invitedMicAudienceDict; // +0x70
    OrderedDictionary * _applyConnectMicAnchorDict; // +0x78
    NSMutableSet * _unreadApplyConnectMicAnchorSet; // +0x80
    unsigned long long _currentCdnVideoDisplayType; // +0x88
    unsigned long long _currentCdnVideoDisplayScene; // +0x90
    unsigned long long _recordPermissionCheckScene; // +0x98
    MMFinderLiveConnectMicAudienceApplyPageSheet * _applyConnectMicPageSheet; // +0xa0
    WCLiveActionSheet * _modifyMicSeatInfoActionSheet; // +0xa8
    WCLiveActionSheet * _applyAudioMicActionSheet; // +0xb0
    MMFinderLiveAudioRoomConnectMicView * _applyAudioMicActionPage; // +0xb8
    WCLiveActionSheet * _cancelOrStopConnectMicActionSheetForAnchor; // +0xc0
    WCLiveActionSheet * _cancelOrStopConnectMicActionSheetForAudience; // +0xc8
    WCLiveActionSheet * _freeMicUserActionSheet; // +0xd0
    MMFinderLiveModifyMicSeatNamePanel * _modifyMicSeatNamePanel; // +0xd8
    MMFinderLiveMicInviteAudiencePanel * _inviteAudiencePanel; // +0xe0
    NSMutableDictionary * _closeInfoDict; // +0xe8
    MMFinderLiveConnectMicPkPanel * _pkPanel; // +0xf0
    NSMutableDictionary * _unorderedConnectMicAudienceDict; // +0xf8
    OrderedDictionary * _waitConnectAudienceDict; // +0x100
    NSMutableArray * _connectMicAudienceListForCDNUser; // +0x108
    OrderedDictionary * _otherRoomConnectMicAudienceDict; // +0x110
    NSArray * _allMicTalkingUsersList; // +0x118
    MMTimer * _anchorCheckAcceptedAudienceTimer; // +0x120
    MMTimer * _anchorCheckMicAnchorUsersTimer; // +0x128
    MMTimer * _anchorCheckReceivedMicUsersTimer; // +0x130
    OrderedDictionary * _cachedMicTalkingAudienceDict; // +0x138
    OrderedDictionary * _micTalkingAudienceDict; // +0x140
    OrderedDictionary * _appliedMicAnchorDict; // +0x148
    OrderedDictionary * _acceptedMicAnchorDict; // +0x150
    MMFinderLiveConnectMicUser * _randomMicTempAnchorUser; // +0x158
    NSString * _multiAnchorMicSessionIdInJoinLiveResp; // +0x160
    MMFinderLiveConnectMicUser * _tappedFreeMicUser; // +0x168
    MMFinderLiveFreeMicFeatureDescriptionPanel * _freeMicFeatureDescriptionPanel; // +0x170
    unsigned long long _lastStartFreeMicTalkingTime; // +0x178
    unsigned long long _lastStopFreeMicTalkingTime; // +0x180
    unsigned long long _timeIntervalThresholdFromLastStartFreeMic; // +0x188
    unsigned long long _timeIntervalThresholdFromLastStopFreeMic; // +0x190
    MMFinderLiveConnectMicFlowReporter * _micFlowReporter; // +0x198
    MMLiveAudienceConnectMicSessionDataReporter * _audienceConnectMicSessionDataReporter; // +0x1a0
    unsigned long long _micIndexForAudienceToApplyMic; // +0x1a8
    MMFinderLiveConnectMicAudienceApplyInfo * _audienceApplyMicInfo; // +0x1b0
    MMFinderLiveConnectMicLayoutModeSubtitleWrap * _micLayoutModeSubtitleWrap; // +0x1b8
    unsigned long long _timeIntervalThresholdFromLastFetchLiveMicInfoCGI; // +0x1c0
    unsigned long long _lastFetchLiveMicInfoTime; // +0x1c8
    unsigned long long _activateMicForAnchorExitRoomRequestCount; // +0x1d0
    unsigned long long _activateMicForAnchorExitRoomFinishedCount; // +0x1d8
    MMFinderLivedConnectMicAudiencePreviewCameraView * _audiencePreviewCameraView; // +0x1e0
    UIView<MMLiveBeautyOperationPanelExternalClosing> * _currentAudienceCameraSettingsCategoryPanel; // +0x1e8
    MMFinderLiveConnectMicTeamPkPanel * _teamupPanel; // +0x1f0
    MMLiveCachedConnectMicInfoBeforeSwitchCdnOrTrtc * _cachedInfoBeforeSwitchCdnOrTrtc; // +0x1f8
    MMLocatingCoordinateLogic * _locatingLogic; // +0x200
    FinderLiveLocation * _finderLiveLocation; // +0x208
    MMTimer * _locationValidityTimer; // +0x210
    MMTimer * _locationGuideTimer; // +0x218
    MMFinderLiveAudioRoomLocationGuideView * _anchorLocationGuideView; // +0x220
    unsigned long long _locationPermissionCheckScene; // +0x228
    NSMutableArray * _renewCreateBattleComplishBlock; // +0x230
    NSString * _lastFinishedBattleSessionId; // +0x238
    unsigned long long _selectedBattleDuration; // +0x240
    MMFinderLiveConnectMicPkSelectionResult * _lastSelectResult; // +0x248
    unsigned long long _prePkLayoutMode; // +0x250
    OrderedDictionary * _connectMicAudienceDict; // +0x258
    NSString * _anchorMicGroupSessionId; // +0x260
    FinderLiveMicInfo_Wording * _micInfoWording; // +0x268
    FinderLiveBattleSettingInfo * _battleSettings; // +0x270
    MMFinderLiveConnectMicOperationPanel * _connectMicOperationPanel; // +0x278
    NSString * _focusedSdkUserId; // +0x280
    MMFinderLivePaidConnectMicAudienceApplyPanel * _strongPaidMicAudienceApplyPanel; // +0x288
    MMFinderLivePaidConnectMicAudienceApplyPanel * _weakPaidMicAudienceApplyPanel; // +0x290
    MMFinderLivePaidConnectMicAudienceOperationPanel * _weakPaidMicAudienceOperationPanel; // +0x298
    FinderLivePurchaseMicConfig * _purchaseMicConfig; // +0x2a0
    double _paidMicAnchorRating; // +0x2a8
    FinderJumpInfo * _paidMicHistoryJumpInfo; // +0x2b0
    MMFinderLivePaidConnectMicAudienceApplyInfo * _applyInfo; // +0x2b8
    FinderLiveGetPurchaseMicInfoResponse * _cacheGetPurchaseMicInfoResponse; // +0x2c0
    FinderJumpInfo_LiteApp * _cachedAudienceFeedBackJumpInfo; // +0x2c8
    MMTimer * _paidMicCountdownTimer; // +0x2d0
    NSString * _paidMicAudienceApplySessionId; // +0x2d8
    NSMutableSet * _paidMicForceManualDisconnectSessionIdSet; // +0x2e0
    NSMutableSet * _paidMicAutoDisconnectingSessionIdSet; // +0x2e8
    MMFinderLivePaidConnectMicKeepAliveTipsView * _keepAliveTipsView; // +0x2f0
}
+ (unsigned long long)timestampForPaidConnectMicUsageInSeconds;
+ (unsigned long long)timestampForPaidConnectMicUsageInMS;
+ (unsigned long long)convertToMicUserAttrTypeFromConditionType:(unsigned long long)arg1;
- (void)recoverAudienceApplyPanelIfNeeded;
- (void)paidConnectMicAudienceApplyPanelDidClickCameraSetting:(id)arg1;
- (void)paidConnectMicAudienceApplyPanel:(id)arg1 didClickApplyWithApplyInfo:(id)arg2;
- (void)handleSelfConnectMicApplyAcceptedForPaidMic;
- (void)_doApplyPaidConnectMicWithApplyInfo:(id)arg1;
- (void)_doApplyBidWithPrice:(unsigned long long)arg1;
- (void)setupSelfConnectUserWithResp:(id)arg1;
- (void)openPaidConnectMicOperationPanelForAudience;
- (void)handlePaidMicAudienceFeedbackJumpInfo:(id)arg1;
- (void)showPaidMicAudienceFeedbackIfNeeded;
- (void)_openPaidConnectMicPanelWithPurchaseMicInfoResp:(id)arg1;
- (void)_openOrUpdatePaidConnectMicAudienceApplyPanelWithResp:(id)arg1;
- (void)_openOrUpdatePaidConnectMicAudienceOperationPanelWithResp:(id)arg1;
- (id)genConsumeParameterWithResp:(id)arg1 price:(unsigned int)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)onPaidConnectMicAudienceOperationPanel:(id)arg1 didConfirmBidWithAmount:(unsigned long long)arg2;
- (void)onPaidConnectMicAudienceOperationPanelDidClickCancelConnect:(id)arg1;
- (void)handlePaidConnectMicUserEstimatedEndTimeDidFill:(id)arg1;
- (void)reportPaidConnectMicUserWithSessionId:(id)arg1 timestampInMS:(unsigned long long)arg2 retryCount:(unsigned char)arg3;
- (void)handleMicAudienceRemovedForPaidMicWithSessionId:(id)arg1;
- (void)markPaidMicForceManualDisconnectWithSessionId:(id)arg1;
- (void)updatePaidConnectMicAnchorSetting:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelClickPaidMicSettingWithPanelInfo:(id)arg1;
- (void)paidConnectMicAnchorSettingPanel:(id)arg1 didConfirmWithLatestSetting:(id)arg2;
- (void)paidConnectMicAnchorSettingPanelDidCancel:(id)arg1;
- (BOOL)paidConnectMicAnchorSettingPanelCanChangeMicLayoutMode:(id)arg1;
- (void)initPaidMicLogic;
- (void)handlePaidMicConfig:(id)arg1;
- (void)updateMicLayoutModeForPaidMicIfNeeded;
- (void)handleLiveClosedForPaidMic;
- (void)handleAcceptLiveMicForPaidMicWithUser:(id)arg1 sessionId:(id)arg2 anchorStatus:(id)arg3;
- (void)handleSEIMicUserInfoListForPaidMic:(id)arg1;
- (void)schedulePaidMicCountdownTimerIfNeeded;
- (void)invalidatePaidMicCountdownTimer;
- (void)onPaidMicCountdownTimerFired;
- (void)autoDisconnectUserIfNeeded:(id)arg1;
- (void)showKeepAliveViewForUserIfNeeded:(id)arg1 forceUpdateLayout:(BOOL)arg2;
- (void)removeKeepAliveTipsView;
- (void)paidconnectmic_startLoading;
- (void)paidconnectmic_stopLoading;
- (BOOL)isPaidConnectMic;
- (BOOL)isMicPurchaseSettingStillUpToDate:(id)arg1;
- (void)showPaidMicPageSheet:(id)arg1;
- (id)paidconnectmic_anchorContact;
- (void)cancelOrRejectPkWithCloseScene:(unsigned long long)arg1;
- (void)cancelOrRejectPkWithCloseScene:(unsigned long long)arg1 shouldShowToast:(BOOL)arg2;
- (void)closeConnectMicBattle:(unsigned long long)arg1 shouldShowToast:(BOOL)arg2;
- (unsigned long long)selectedBattleDuration;
- (void)anchorApplyNewBattleNotOneMoreWithOpponentScenario:(unsigned long long)arg1 isModifyBattle:(BOOL)arg2 requireChanges:(BOOL)arg3;
- (void)applyAnchorBattleWithPkSelectionResult:(id)arg1 isModifyBattle:(BOOL)arg2;
- (void)applyAudienceBattleWithPkSelectionResult:(id)arg1 isModifyBattle:(BOOL)arg2;
- (id)currentAudienceUserIndices;
- (id)audiencePkReassignUserIndicesWithMode:(unsigned long long)arg1;
- (void)actionAnchorApplyBattle:(unsigned long long)arg1;
- (void)actionAnchorCloseMic;
- (void)actionAnchorQuitBattle;
- (void)actionAnchorAcceptBattle:(unsigned long long)arg1;
- (void)actionAnchorCancelBattle:(unsigned long long)arg1;
- (void)actionAnchorStartBattle;
- (void)actionAnchorStartBattleOneMore;
- (void)anchorApplyMultiAnchorsBattleOneMore;
- (id)prepareAnchorPkTeamInfoForApply:(unsigned long long)arg1 scope:(unsigned long long)arg2;
- (void)anchorApplyNewPk:(unsigned long long)arg1 scope:(unsigned long long)arg2 teamInfo:(id)arg3 battleDuration:(unsigned long long)arg4 winningCondition:(unsigned long long)arg5 winningConditionArguments:(id)arg6 battleLayout:(unsigned int)arg7;
- (void)handleNewApplyConnectMicBattleResult:(BOOL)arg1 error:(id)arg2 battleSessionId:(id)arg3;
- (void)anchorAcceptMultiAnchorsOrCrossRoomPk;
- (void)handleNewAcceptConnectMicBattleResult:(BOOL)arg1 error:(id)arg2 battleSessionId:(id)arg3;
- (id)createAudienceBattleTeamInfoWithBattleMode:(unsigned long long)arg1 battleDuration:(unsigned long long)arg2 battleScope:(unsigned long long)arg3;
- (id)currentAudienceBattleTeamInfo;
- (void)anchorStartAudienceOrCrossRoomBattle;
- (void)handleInitiateBattleWithAudienceResult:(BOOL)arg1 error:(id)arg2 battleSessionId:(id)arg3;
- (void)anchorCancelAudienceBattle;
- (void)anchorFinishAudienceBattlePrematurely;
- (void)handleCancelBattleWithAudienceResult:(BOOL)arg1 error:(id)arg2;
- (BOOL)anchorCreateAudienceBattle:(id)arg1;
- (void)liveVCBlockLoading:(BOOL)arg1;
- (void)failRenewCreateAudienceBattleProcess;
- (void)handleCreateBattleWithAudienceResult:(BOOL)arg1 error:(id)arg2 battleSessionId:(id)arg3 battleMode:(unsigned long long)arg4 battleScope:(unsigned long long)arg5 battleDuration:(unsigned long long)arg6 winningCondition:(unsigned long long)arg7 winningConditionArguments:(id)arg8 teamInfo:(id)arg9;
- (void)actionAnchorChangePlayMode;
- (void)anchorModifyAudienceBattle:(id)arg1 block:(id /* block */)arg2;
- (void)renewCreateAudienceBattle:(unsigned long long)arg1 battleScope:(unsigned long long)arg2 battleDuration:(unsigned long long)arg3 winningCondition:(unsigned long long)arg4 winningConditionArguments:(id)arg5 teamInfo:(id)arg6 block:(id /* block */)arg7;
- (void)anchorQuitCrossRoomBattle;
- (void)anchorModifyCrossRoomBattle;
- (id)createCrossRoomPkSelectResultWithCurrentBattleInfo;
- (void)anchorModifyCrossRoomBattleWithPkSelectionResult:(id)arg1 isModifyBattle:(BOOL)arg2;
- (void)anchorModifyCrossRoomBattle:(id)arg1;
- (BOOL)anchorCreateCrossRoomBattle:(id)arg1;
- (void)differBattleDataChangedWithBeforePkInfo:(id)arg1 afterPkInfo:(id)arg2;
- (void)receiveBattleNotifyInfo:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)checkAllCachedMicUsersDictWithUserInfo:(id)arg1;
- (BOOL)addConnectMicAudienceWithUserInfo:(id)arg1;
- (BOOL)removeConnectMicAudienceWithSessionId:(id)arg1;
- (BOOL)removeConnectMicAudienceWithSessionId:(id)arg1 showToast:(BOOL)arg2;
- (BOOL)addConnectMicAnchorWithUserInfo:(id)arg1;
- (BOOL)removeConnectMicAnchorWithSdkUserId:(id)arg1;
- (void)checkAndCallActivateLiveConnectMicForAnchor;
- (void)delayActivateLiveConnectMicForAnchor;
- (BOOL)removeAppliedOrAcceptedMicAnchorWithUserInfo:(id)arg1;
- (BOOL)removeAppliedOrAcceptedMicAnchorWithUserInfo:(id)arg1 updatePanelAndButton:(BOOL)arg2;
- (BOOL)removeAppliedMicAnchorWithUserInfo:(id)arg1 updatePanelAndButton:(BOOL)arg2;
- (BOOL)addOtherRoomConnectMicAudienceWithUserInfo:(id)arg1;
- (void)updateOtherRoomUserRoomIdWithUserInfo:(id)arg1 andAnchorUserInfo:(id)arg2;
- (BOOL)removeOtherRoomConnectMicAudienceWithSdkUserId:(id)arg1;
- (BOOL)addWaitConnectAudienceWithUserInfo:(id)arg1;
- (BOOL)addWaitConnectAudienceWithUserInfo:(id)arg1 updatePanel:(BOOL)arg2;
- (BOOL)removeWaitConnectAudienceWithSessionId:(id)arg1;
- (BOOL)removeWaitConnectAudienceWithSessionId:(id)arg1 updatePanel:(BOOL)arg2;
- (void)addCachedMicTalkingAudienceWithUserInfo:(id)arg1;
- (BOOL)addMicTalkingAudienceWithUserInfo:(id)arg1;
- (BOOL)removeMicTalkingAudienceWithSdkUserId:(id)arg1;
- (id)getConnectMicAudienceUserListWithApplyAudience:(BOOL)arg1;
- (void)checkRemoteClosedAudienceTRTCStatus:(id)arg1;
- (void)receiveCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 closeMicInfo:(id)arg3;
- (void)receiveCloseConnectMicMsgForAudienceWithSessionId:(id)arg1 closeMicInfo:(id)arg2;
- (void)receiveApplyConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 sessionId:(id)arg3 expiredTime:(unsigned long long)arg4 micUserAttrFlag:(unsigned int)arg5 seatId:(unsigned int)arg6 useVideo:(BOOL)arg7 autoConnect:(BOOL)arg8;
- (unsigned long long)currentMaxConnectingMicAudienceCountWithFinderLiveTask:(id)arg1;
- (void)receiveConnectMicLiveSdkInfo:(id)arg1 expiredTime:(unsigned long long)arg2 sessionId:(id)arg3 sequence:(unsigned long long)arg4 seatId:(unsigned int)arg5 useVideo:(BOOL)arg6;
- (void)receiveConnectMicAudienceUser:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(BOOL)arg3 updateMicUsersListForCdnAudience:(BOOL)arg4;
- (void)receiveConnectMicOtherRoomAudienceUser:(id)arg1 updateMicUsersListForCdnAudience:(BOOL)arg2;
- (void)receiveConnectMicAudienceUserForAnchor:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(BOOL)arg3;
- (void)receiveSelfConnectMicUserInfo:(id)arg1 fromJoinLive:(BOOL)arg2;
- (void)receiveConnectMicUserForAudience:(id)arg1 updateMicUsersListForCdnAudience:(BOOL)arg2;
- (void)handleAnchorNewApplyConnectMicFromContact:(id)arg1 applyAnchor:(id)arg2 acceptorAnchor:(id)arg3 pkroomAnchors:(id)arg4 applyId:(id)arg5 randomMicBuffer:(id)arg6 expiredTime:(unsigned long long)arg7;
- (void)handleAnchorNewApplyMicForSenderWithUserInfo:(id)arg1;
- (void)handleAnchorNewApplyMicForTargetAnchorWithUserInfo:(id)arg1;
- (void)acceptNewRandomMic;
- (void)checkAndAcceptNewRandomMic;
- (void)handleAnchorNewAcceptConnectMicFromContact:(id)arg1 pkroomAnchors:(id)arg2 sessionId:(id)arg3 vroomId:(id)arg4 vroomIdVersion:(unsigned long long)arg5;
- (BOOL)handleNewOtherRoomMicAnchorUser:(id)arg1;
- (BOOL)handleMicAnchorUserInfo:(id)arg1 withFinderLiveTask:(id)arg2;
- (void)handleSdkRoomIdChangedForConnectingMicAnchorUser:(id)arg1 withFinderLiveTask:(id)arg2;
- (void)handleAnchorNewCloseConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 applyId:(id)arg3 sessionId:(id)arg4;
- (void)handleAnchorNewPkInfoInJoinLiveResp:(id)arg1;
- (void)stopJoinLiveRespAnchorMicSession;
- (void)checkAndFetchFinderLiveMicInfo;
- (void)receiveAnchorApplyConnectMicFromContact:(id)arg1 coverImageUrlString:(id)arg2 sdkUserId:(id)arg3 sdkRoomId:(unsigned int)arg4 liveRoomImages:(id)arg5 randomMicBuffer:(id)arg6 sessionId:(id)arg7;
- (void)receiveAnchorAcceptConnectMicFromContact:(id)arg1 coverImageUrlString:(id)arg2 liveRoomImages:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 sdkPkSign:(id)arg6 sdkNewPkSign:(id)arg7 sessionId:(id)arg8 sequence:(unsigned long long)arg9;
- (void)receiveAnchorCloseConnectMicFromContact:(id)arg1 sessionId:(id)arg2 sdkUserId:(id)arg3;
- (void)receiveAnchorConnectMicStatus:(long long)arg1 connectMicFinderContact:(id)arg2 coverImageUrlString:(id)arg3 liveRoomImages:(id)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 sdkUserId:(id)arg7 sdkRoomId:(unsigned int)arg8 fromJoinLive:(BOOL)arg9;
- (void)updateAudioModeBackgroundConfiguration:(id)arg1 withSessionId:(id)arg2 andFinderLiveTask:(id)arg3;
- (void)receiveOtherRoomAudienceCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2 sdkUserId:(id)arg3;
- (void)receiveAnchorCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveAnchorConnectMicNotifyApplyRandomMicContact:(id)arg1 randomMicBuffer:(id)arg2 isMultiAnchorMic:(BOOL)arg3;
- (void)receiveMicIntercomFinderLiveContact:(id)arg1 sdkUserId:(id)arg2 sessionId:(id)arg3 fromFirstJoinLive:(BOOL)arg4;
- (void)receiveCloseMicIntercomWithSessionId:(id)arg1;
- (void)receiveLiveMicBreakTrtcWithSdkUserId:(id)arg1;
- (void)checkAndChangeToCDNPlayWithTask:(id)arg1;
- (void)receiveLiveMicHeartBrokenUsers:(id)arg1;
- (void)receiveMicWording:(id)arg1;
- (void)receiveMicBattleSettings:(id)arg1;
- (void)checkAndUpdateMicTalkingListForCdnUser;
- (void)checkRemoteClosedCachedMicTalkingAudienceForCDNUser;
- (void)checkAndClearMicTalkingDictAndListForCdnUser;
- (void)clearConnectMicAudienceListForCDNUser;
- (void)clearOtherRoomConnectMicAudienceDic;
- (void)checkAndClearConnectMicAudienceForCDNUser;
- (void)checkRemoteClosedWaitConnectMicAudienceForCDNUser;
- (id)findMicAudienceUserInfoForCDNUserBySdkUserId:(id)arg1;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)updateConnectMicAudienceListForCDNUser;
- (void)checkConnectMicUserInfoAndVideoSizeForCdnAudience;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)realCheckAndUpdateMicUsersStatusForCdnAudienceWithOldVersionSeiMicUserList:(id)arg1;
- (void)enableApplyConnectMic:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)enableApplyConnectMicFailedWithTargetValue:(BOOL)arg1 andCompleteBlock:(id /* block */)arg2;
- (void)updateCanApplyConnectMic:(BOOL)arg1 fromJoinLive:(BOOL)arg2;
- (void)updateCanApplyFreeTalk:(BOOL)arg1 fromJoinLive:(BOOL)arg2;
- (void)enableFreeTalk:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)forceDisableFreeTalk;
- (void)batchEnableApplyConnectMic:(BOOL)arg1 enableFreeTalk:(BOOL)arg2 enablePaidMic:(BOOL)arg3 paidMicSetting:(id)arg4 completeBlock:(id /* block */)arg5;
- (void)openMicModeSettingPanel;
- (void)realEnableFreeTalkFail:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)realEnableFreeTalk:(BOOL)arg1 withLiveTask:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)notifyFreeTalkFlagValueChanged:(BOOL)arg1;
- (void)closeAllMicTalkingUsersForAnchor;
- (void)updateConnectMicConditionSetting:(unsigned long long)arg1 fromJoinLive:(BOOL)arg2;
- (void)showAnchorRandomMicStateView;
- (void)updateAnchorRandomConnectAvatarsWithLiveContacts:(id)arg1;
- (void)showAudienceSelfConnectMicUserViewWithState:(unsigned long long)arg1;
- (void)updateAllConnectedMicUsersInfo;
- (BOOL)updateMicUsersInfoForFocusModeBySeiWithLiveTask:(id)arg1;
- (void)updateListInMicUsersInfoForTrtcUserWithLiveTask:(id)arg1 andOldMicUsersInfo:(id)arg2;
- (void)checkAndUpdateMicUsersMicIndexAndSeatListForTrtcUser;
- (void)resetAllMicIndexInListWithWaitConnectAudience:(BOOL)arg1 shouldUpdateUnoccupiedSeatList:(BOOL)arg2;
- (unsigned long long)updateMicIndexForUserInDict:(id)arg1 withCurrentMicIndex:(unsigned long long)arg2 shouldSortList:(BOOL)arg3 andUpdatedUserIdSet:(id)arg4;
- (void)updateAllMicIndexInListForAnchorMicCrossRoomPkScene;
- (void)updateAllMicNormalizedUserFrameForTrtcUser;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAnchorScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAnchorNoFocusScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAnchorFocusedScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorMicCrossRoomPkScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceCommonScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceGrabScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceLeadScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceFocusedScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceAudienceSoloPkScenario;
- (void)updateAllMicNormalizedUserFrameForTrtcUserInAnchorToAudienceAudienceTeamupPkScenario;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)changeOrUpdateConnectMicMode;
- (void)changeOrUpdateConnectMicModeShouldUpdateUsersInfo:(BOOL)arg1;
- (void)changeOrUpdateConnectMicAfterLayoutModeChanged;
- (void)syncNotifySeiInfoToServer;
- (void)delaySyncNotifySeiInfo;
- (void)updateMicIndexAfterLayoutModeChangedWithAnchorSdkUserId:(id)arg1 andUserIndicesDict:(id)arg2;
- (void)updateMicIndexAfterLayoutModeChangedWithUserIndicesDict:(id)arg1;
- (void)checkFocusedSdkUserIdAndUpdateMicIndexWithAnchorSdkUserId:(id)arg1;
- (void)swapMicIndexOfAnchorAndFocusedAudience;
- (void)checkAndUpdateLiveView;
- (void)notifyCanApplyConnectMicValueChanged:(BOOL)arg1;
- (void)notifyConnectMicConditionSetting:(unsigned long long)arg1;
- (void)updateMicInfoAndMicTalkingUI;
- (void)updateLiveOperationViewWithMicTalkingUsers:(id)arg1;
- (void)onTrtcSwitchRoleFinished;
- (void)onTrtcSwitchRoleError:(int)arg1 errMsg:(id)arg2;
- (void)checkAndUpdateCloudMixtureParams;
- (void)handleUser:(id)arg1 audioAvailable:(BOOL)arg2;
- (void)handleUser:(id)arg1 videoAvailable:(BOOL)arg2;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)arg1;
- (void)handleRemoteUserLeaveRoomWithSdkUserId:(id)arg1 reason:(long long)arg2;
- (void)handleConnectToOtherRoomResult:(BOOL)arg1 userId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)handleSEIMicTalkingUsersListUpdated:(id)arg1;
- (BOOL)checkAndUpdateMicUsersFocusingStatusForTrtcAudienceWithLiveTask:(id)arg1;
- (void)checkAndUpdateMicUsersMicIndexByFocusedSdkUserIdForTrtcAudienceWithLiveTask:(id)arg1;
- (void)checkAndUpdateMicUsersInfoForTrtcAudienceWithLiveTask:(id)arg1 isSEIInfoChanged:(BOOL)arg2 isMicLayoutModeChanged:(BOOL)arg3;
- (void)handleAllUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (BOOL)updateConnectMicUserTalkingStateWithUserInfo:(id)arg1 andIsTalking:(BOOL)arg2;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)arg1;
- (void)showOtherMicAnchorMicMutedToastWithUserInfo:(id)arg1;
- (void)updateOtherRoomMicUsersWithAnchorSdkUserId:(id)arg1 anchorSEIInfo:(id)arg2;
- (void)handleFirstShowCdnPlayerView;
- (void)handleFirstJoinLive;
- (void)onPaidConnectMicModeChanged;
- (void)autoUpdateMicLayoutModeIfNeeded;
- (void)handlePlayingViaCdnChanged:(BOOL)arg1;
- (void)handleSendFirstLocalAudioFrame;
- (void)handleMicDidReady;
- (void)clearConnectMicAnchorUserInfo:(id)arg1;
- (void)updateIsApplyOrConnectingMicWithOtherAnchor;
- (void)clearRandomMicTempAnchorUserInfoAndUpdateButtonStateHighlighted:(BOOL)arg1;
- (void)clearConnectMicAudienceSelfUserInfoWithToast:(BOOL)arg1 customToastMsg:(id)arg2;
- (void)clearConnectMicAudienceSelfUserInfoWithToast:(BOOL)arg1;
- (void)clearMicTalkingAudienceSelfUserInfoWithToast:(BOOL)arg1;
- (void)updateStateAndReportForFreeMicRealStartTalking;
- (void)changeAndUpdateConnectMicButtonState;
- (void)hideConnectMicButtonRedDotAndUpdateFlag:(BOOL)arg1;
- (void)switchCameraWithCompletionBlock:(id /* block */)arg1;
- (void)mirrorFrontCamera;
- (void)setMicMuted:(BOOL)arg1;
- (BOOL)shouldShowAudienceAccountIntroView;
- (void)resetAudienceApplyMicInfo;
- (void)connectMicActionForAudience;
- (void)fetchLocationAndCheckBadge;
- (void)connectMicAction;
- (BOOL)micButtonActionOpenPkPanelIfNeed;
- (id)pkPanelModel;
- (BOOL)audienceShouldTryStopConnectMicWhenLiveIsPaused;
- (BOOL)tryStopConnectMic;
- (BOOL)tryStopConnectMicWithCloseScene:(long long)arg1;
- (BOOL)tryStopAndCancelAllAnchorMicForAnchorWithTask:(id)arg1 closeScene:(long long)arg2;
- (void)commentTalkButtonDidTapAction;
- (void)tryMicTalking;
- (BOOL)tryStopMicTalking;
- (void)handleApplyMicIntercomResult:(BOOL)arg1 error:(id)arg2 sessionId:(id)arg3 liveSdkInfo:(id)arg4 userInfo:(id)arg5;
- (void)enterBackground;
- (void)enterForeground;
- (void)showCancelApplyOrStopConnectActionSheetForAudience;
- (void)showCancelApplyOrStopConnectActionSheetForAudienceByTapMicArea:(BOOL)arg1;
- (void)checkAndSwitchAudienceSelfUserMicStreamMode:(unsigned long long)arg1;
- (void)showConfirmStopMicActionSheetForAudience;
- (void)showCancelApplyOrStopConnectActionSheetForAnchorWithUserInfo:(id)arg1;
- (void)showCameraOperationPageSheetForAudience;
- (void)startAudienceCameraPreviewWithLiveTask:(id)arg1;
- (void)stopAudienceCameraPreviewWithLiveTask:(id)arg1;
- (void)restartAudienceCameraPreviewWithLiveTask:(id)arg1;
- (id)teamupPanel;
- (id)generateSelfFinderContactForConnectMic;
- (BOOL)setupConnectMicUserSelfUserWithUseVideo:(BOOL)arg1;
- (void)startApplyConnectMicWithVideo:(BOOL)arg1 showLocation:(BOOL)arg2;
- (void)handleApplyLiveMicResult:(BOOL)arg1 error:(id)arg2 sessionId:(id)arg3 applyId:(id)arg4 userInfo:(id)arg5 isNewAnchorMic:(BOOL)arg6 expiredTime:(unsigned long long)arg7 isInvitedMicByAnchor:(BOOL)arg8;
- (void)updateAudienceMicExpiredTimeForAudience:(unsigned long long)arg1;
- (void)updateApplyMicExpiredTimeForAnchor:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)applyConnectMicCgiCommonFailedToastWithIsAcceptErrorTipFlag:(BOOL)arg1;
- (BOOL)isApplyConnectMicFailedToastErrorCode:(long long)arg1;
- (id)applyConnectMicFailedToastMsgForErrorCode:(long long)arg1 isAcceptErrorTip:(BOOL)arg2;
- (BOOL)isApplyConnectMicFailedByMicSettingErrorCode:(long long)arg1;
- (id)applyConnectMicFailedByMicSettingMsgForErrorCode:(long long)arg1 isAcceptErrorTip:(BOOL)arg2;
- (unsigned long long)applyConnectMicReportType:(long long)arg1;
- (void)checkAndCancelConnectMicForAudience;
- (void)cancelConnectMicWithUserInfo:(id)arg1 showToast:(BOOL)arg2 closeScene:(long long)arg3;
- (void)cancelConnectMicWithUserInfo:(id)arg1 showToast:(BOOL)arg2 isTimeOut:(BOOL)arg3;
- (void)checkConnectingMicTimeOutForAnchorMic;
- (void)checkConnectingMicTimeOutForAnchorRandomMic;
- (void)connectMicAudienceTimeOutWithUserInfo:(id)arg1;
- (void)checkAndStopConnectMicForAudience;
- (void)checkAndStopConnectMicForAudienceEnterBackground;
- (void)checkAndCancelAllConnectMicForAnchor;
- (void)stopConnectMicForAnchorWithMicAudience:(id)arg1;
- (void)localStopOrCancelAnchorConnectMicWithMicUser:(id)arg1 andCloseScene:(long long)arg2;
- (void)localStopOrCancelAnchorConnectMicWithMicUser:(id)arg1 shouldReport:(BOOL)arg2 andCloseScene:(long long)arg3;
- (void)cancelAnchorConnectMicWithMicUserInfo:(id)arg1 andCloseScene:(long long)arg2;
- (void)cancelNewAnchorConnectMicWithMicUserInfo:(id)arg1 showToast:(BOOL)arg2 closeScene:(long long)arg3;
- (void)localStopAnchorConnectMicWithMicUser:(id)arg1 shouldReport:(BOOL)arg2 andCloseScene:(long long)arg3;
- (void)stopAudienceConnectMicWithMicUser:(id)arg1 andCloseScene:(long long)arg2;
- (void)realStopConnectMicWithTask:(id)arg1;
- (void)stopConnectMicOrStopAudioForFreeMicWithTask:(id)arg1;
- (void)handleClearLive;
- (void)checkAndDismissAllActionSheet;
- (void)clearUnreadApplyMicAnchorSetWithUsername:(id)arg1;
- (void)updateConnectMicButtonBadge;
- (void)notifyConnectMicWithUserInfo:(id)arg1;
- (void)checkAndNotifyConnectMicEndWithUserInfo:(id)arg1;
- (void)reportAudienceConnectMicSessionBegin;
- (void)reportAudienceConnectMicSessionEnd;
- (void)checkAndClearConnectMicUserTipViewWithUserInfo:(id)arg1;
- (void)sendCloseConnectMicCgiWithConnectMicUser:(id)arg1 andCloseScene:(long long)arg2;
- (void)sendCloseConnectMicCgiWithConnectMicUser:(id)arg1 andCloseScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateCloseInfoDicWithSessionId:(id)arg1 connectMicUserInfo:(id)arg2 shouldResetCount:(BOOL)arg3 shouldRemove:(BOOL)arg4;
- (void)checkCachedMicTalkingAudienceForAnchorMainSendCloseOK:(id)arg1;
- (void)stopMultiAnchorConnectMic;
- (void)localStopConnectMicManuallyWithUserInfo:(id)arg1;
- (void)stopAllInvalidConnectMicWithConditionType:(unsigned long long)arg1;
- (id)currentAnchorFinderUserName;
- (unsigned int)getAudienceDelayTimeInPK;
- (BOOL)updateConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 currentRewardWecoin:(unsigned long long)arg3 otherRewardWecoin:(unsigned long long)arg4 pkResult:(long long)arg5 ownerPlayerInfo:(id)arg6 otherPlayerInfo:(id)arg7 winningStreakCount:(unsigned int)arg8;
- (void)resetAnchorPkInfo;
- (void)clearAnchorPkInfo;
- (BOOL)updateNewConnectMicAnchorUserPkState:(unsigned long long)arg1 timeLeft:(unsigned int)arg2 battleInfo:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;
- (void)updatePkAtmosphereRelatedViewIfNeeded;
- (BOOL)handleBattleInfo:(id)arg1 fromJoinLive:(BOOL)arg2 micSessionId:(id)arg3 serverUnixEpochTimeInSeconds:(unsigned long long)arg4;
- (BOOL)handleBattleInfo_new:(id)arg1 fromJoinLive:(BOOL)arg2 micSessionId:(id)arg3 vroomId:(id)arg4 serverUnixEpochTimeInSeconds:(unsigned long long)arg5;
- (void)startOrStopAnchorSEISynchronize:(BOOL)arg1;
- (void)updateUserPkStateUI;
- (void)updateBattleReportInfo;
- (void)checkAndUpdateMicLayoutModeWithBattleLayoutValue:(unsigned int)arg1;
- (void)checkAndClearInvitedPkState;
- (void)tryStopAndCancelAllConnectMicForAnchor;
- (void)checkAndStopAnchorMicForAnchor:(BOOL)arg1;
- (void)checkAndStopAllAudienceConnectMicForAnchor;
- (void)stopAllConnectedAndAppliedAudienceForAnchorWithScene:(long long)arg1 needCloseMic:(BOOL)arg2;
- (BOOL)cancelRandomConnectMicForAnchorByUser:(BOOL)arg1;
- (void)notifyCancelRandomConnectMicSuccessfulByUser:(BOOL)arg1;
- (void)checkAndCancelRandomConnectMicForAnchor;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)checkAndClearCachedInfoBeforeSwitchCdnOrTrtc;
- (void)updateAudienceMicLayoutModeWithSEIMicMsgInfo:(id)arg1 oldMicUsersInfo:(id)arg2 cachedSeiMicMsgInfo:(id)arg3;
- (void)updateShowAnchorLocationFlagForAnchor:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)setLiveAnchorLocationStatus:(BOOL)arg1;
- (void)checkAndUpdateShowAnchorLocationFlagForAudience;
- (void)prepareAudioRoomAnchorLocationGuide;
- (void)checkAndShowAudioRoomAnchorLocationGuide;
- (void)showAudioRoomAnchorLocationGuide;
- (void)onAnchorAllowingLocation:(id /* block */)arg1;
- (void)fetchLocation:(id /* block */)arg1;
- (void)startLocationValidityTimer;
- (void)stopLocationValidityTimer;
- (BOOL)checkLocationAuthWithAction:(BOOL)arg1;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (id)locatingLogic;
- (void)resumeActionAfterLocationAuthReq:(BOOL)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (void)activateMicForFreeMicAudience;
- (void)startActivateMicForFreeMicAudience;
- (void)activateLiveConnectMicForAnchor;
- (void)startActivateLiveConnectMicForAnchor;
- (void)setFocusedSdkUserIdAndUpdateAnchorStatus:(id)arg1;
- (void)startAnchorCheckAcceptedAudienceTimer;
- (void)stopAnchorCheckAcceptedAudienceTimer;
- (void)checkAllWaitConnectMicAudienceUsers;
- (void)startAnchorCheckMicAnchorUsersTimer;
- (void)stopAnchorCheckMicAnchorUsersTimer;
- (void)checkAndStopAnchorCheckMicAnchorUsersTimer;
- (BOOL)shouldStopAnchorCheckMicAnchorTimer;
- (void)checkAllMicAnchorUsersForAnchor;
- (void)checkAllAppliedAnchorUsersWithCurrentServerTime:(unsigned int)arg1;
- (void)checkAllAcceptedAnchorUsersWithCurrentServerTime:(unsigned int)arg1;
- (void)startAnchorCheckReceivedMicUsersTimer;
- (void)stopAnchorCheckReceivedMicUsersTimer;
- (void)checkReceivedMicUsersForAnchor;
- (void)tryShowMicActionSheetForAudienceWithUserInfo:(id)arg1;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateMicUserLocation;
- (void)updateMicUserHeatValuesInMicInfo:(id)arg1;
- (void)updateMicUser:(id)arg1 micMuted:(BOOL)arg2;
- (void)updateAllOtherRoomMicUsersVolumeAndTalkingStateByMicUserInfo:(id)arg1 withFinderLiveTask:(id)arg2;
- (BOOL)checkAndUnmuteMicWithUserInfoFromMicView:(id)arg1;
- (id)finderLiveTaskId;
- (id)finderLiveOperationView;
- (id)getFinderLiveTask;
- (id)operationViewModel;
- (id)containerView;
- (BOOL)isConnectingMic;
- (BOOL)isAudienceWaitingConnectingMic;
- (BOOL)isWaitingConnectingMic;
- (unsigned long long)connectingAndWaitConnectMicAnchorCount;
- (BOOL)hasConnectingOrWaitConnectMicAnchor;
- (void)setMicLayoutMode:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicUserViewMoveEnd;
- (void)onMMFinderLiveConnectMicUserViewTapHangup;
- (void)onMMFinderLiveConnectMicUserViewTapped;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkMysteriousBadgeInfoAndApplyConnectMicWithVideo:(BOOL)arg1;
- (void)checkMysteriousBadgeInfoAndApplyConnectMicWithVideo:(BOOL)arg1 showLocation:(BOOL)arg2;
- (void)_doApplyConnectMicWithVideo:(BOOL)arg1 showLocation:(BOOL)arg2;
- (void)checkAndUpdateConnectMicOperationPanel;
- (void)checkAndUpdatePkPanel;
- (void)checkAndUpdateInviteAudiencePanel;
- (id)getWaitConnectAudienceSetForInviteAudienceMic;
- (id)getRemovedAudienceSetForInviteAudienceMic;
- (void)checkAndUpdateKTVStatus;
- (void)onMMFinderLiveConnectMicOperationPanelClose;
- (BOOL)onMMFinderLiveConnectMicOperationPanelShouldShowRedDotAtTab:(unsigned long long)arg1;
- (id)onMMFinderLiveConnectMicOperationPanelGetConnectMicUserListWithType:(unsigned long long)arg1;
- (id)onMMFinderLiveConnectMicOperationPanelGetConnectingAnchorUserList;
- (id)onMMFinderLiveConnectMicOperationPanelGetInvitedMicAudienceDict;
- (unsigned long long)onMMFinderLiveConnectMicOperationPanelGetBannedConditionType;
- (void)onMMFinderLiveConnectMicOperationPanelGetPaidConnectMicPanelInfoForAnchor:(id /* block */)arg1;
- (BOOL)onMMFinderLiveConnectMicOperationPanelGetIsWaitingMultiAnchorMicAcceptCGI;
- (void)onMMFinderLiveConnectMicOperationPanelAcceptConnectFromUser:(id)arg1;
- (void)realAcceptConnectMicWithUser:(id)arg1;
- (BOOL)checkCanApplyOrAcceptNewAnchorMic;
- (BOOL)checkCanApplyOrAcceptNewAnchorMicAndShowToast:(BOOL)arg1;
- (BOOL)randomMicCapable;
- (BOOL)checkIsAnchorMicBlockedByViewCaptureAndShowToast;
- (void)checkAndUpdateAcceptedMicAudienceMicIndexWithUserInfo:(id)arg1 audioRoomScene:(unsigned long long)arg2;
- (void)onMMFinderLiveConnectMicOperationPanelApplyConnectToUser:(id)arg1;
- (void)handleAcceptLiveMicResult:(BOOL)arg1 error:(id)arg2 sessionId:(id)arg3 userInfo:(id)arg4 isNewAnchorMic:(BOOL)arg5;
- (void)onMMFinderLiveConnectMicOperationPanelCloseConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelCancelConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelInviteMicToAudienceUser:(id)arg1;
- (id)getRealAcceptedAudienceForAnchorFromUser:(id)arg1;
- (id)getRealAppliedAnchorUserForAnchorFromUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelChangeConditionTypeAudience:(unsigned long long)arg1;
- (BOOL)onMMFinderLiveConnectMicOperationPanelIsSearchOnlineAnchorBlocked;
- (BOOL)onMMFinderLiveConnectMicOperationPanelIsRandomMatchAnchorMicBlocked;
- (void)startRandomMic;
- (void)onMMFinderLiveConnectMicOperationPanelRandomMatchAnchorMic;
- (BOOL)updateCanAutoConnect:(BOOL)arg1;
- (void)autoConnectCurrentAppliedMicAudienceWithFinderLiveTask:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelUpdateCanAutoConnect:(BOOL)arg1;
- (void)updateMicLayoutMode:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndicesDict:(id)arg3 andUpdateMicInfo:(BOOL)arg4;
- (void)onMMFinderLiveConnectMicOperationPanelUpdateMicLayoutMode:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (void)onMMFinderLiveConnectMicOperationPanelShowKtvSongList;
- (void)onMMFinderLiveConnectMicOperationPanelSwitchConnectMicMode;
- (void)onMMFinderLiveConnectMicAllUserInfoViewHiddenStateDidChange:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUnmuteMicWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapUserAreaWithUserInfo:(id)arg1 targetMicOperationView:(id)arg2 isAvatarTapped:(BOOL)arg3;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapAcceptPk;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUpdatedWidgets;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUpdatedConnectMicUserList;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapVote;
- (void)onMMFinderLiveConnectMicAllUserInfoSeatViewTappedWithMicSeatInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewGiftingRequestedWithPreferredGiftId:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapCurrentAnchorMuteMicButton;
- (void)onMMFinderLiveConnectMicAllUserInfoViewPkHeatViewTappedForPkUser:(id)arg1;
- (void)onMMFinderLiveConnectMicNewInvitePkPanelTapPkViewWithOpponentScenario:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicInvitePkPanelCloseMic;
- (id)onMMFinderLiveConnectMicOperationPanelGetFocusedUserId;
- (BOOL)onMMFinderLiveConnectMicOperationPanelIsFocusBlocked;
- (BOOL)isChangeMicLayoutModeToFocusModeBlocked;
- (BOOL)isChangeMicLayoutModeBlocked;
- (BOOL)onMMFinderLiveConnectMicOperationPanelIsChangeMicLayoutModeBlocked;
- (BOOL)isApplyAudienceBattleBlocked;
- (BOOL)onMMFinderLiveConnectMicOperationPanelIsApplyAudienceBattleBlocked;
- (void)handleConnectMicSettingUpdatedChanges:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)onMMFinderLiveMicTalkingUsersViewTapUser:(id)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(BOOL)arg2;
- (void)handleLiveVideoViewRealAppearanceChanged:(BOOL)arg1 withFinderLiveTask:(id)arg2;
- (void)handleLiveAdvertisementAppearanceChanged:(BOOL)arg1 withLiveAdId:(id)arg2;
- (void)handleAudienceLocalAudioModeChangedTo:(BOOL)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onRequestSynchronzizeInfoForSEIAnchorInfo:(id)arg1;
- (void)closeConnectMicOperationPanelAnimated:(BOOL)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onConnectMicAudienceAppliedUsingVideo:(BOOL)arg1 fromPageSheet:(id)arg2;
- (void)onConnectMicAudienceApplyCanceledFromPageSheet:(id)arg1;
- (void)onConnectMicAudienceApplyCameraSettingsRequestedFromPageSheet:(id)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelMirrorFrontCameraInvoked:(id)arg1;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelSwitchCameraInvoked:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(id)arg1 willCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanel:(id)arg1 didCloseWithNextState:(unsigned long long)arg2;
- (void)onMMLiveConnectMicAudienceCameraOperationPanelLayoutUpdated:(id)arg1;
- (void)onMMLiveFilterOperationPanelClose:(BOOL)arg1;
- (void)onMMLiveBeautyOperationContainerViewClose:(BOOL)arg1;
- (void)onMMLiveMakeupOperationPanelClose:(BOOL)arg1;
- (void)closeAllPageSheets;
- (void)handleIsViewCapturingChangedTo:(BOOL)arg1;
- (BOOL)checkIsShareScreenBlockedAndShowToast;
- (BOOL)checkIsShareScreenBlocked:(BOOL)arg1 showToast:(BOOL)arg2;
- (void)updateMicWithShareScreenEnabled:(BOOL)arg1;
- (void)updateAnchorPkChangeLayoutEnabled:(BOOL)arg1;
- (void)onMMFinderLiveConnectMicPkPanelCloseMic;
- (void)onMMFinderLiveConnectMicPkPanelAcceptPk;
- (void)onMMFinderLiveConnectMicPkPanelCancelPk;
- (void)onMMFinderLiveConnectMicPkPanelApplyOneMore;
- (void)onMMFinderLiveConnectMicPkPanelChangePlayMode;
- (void)onMMFinderLiveConnectMicPkPanelStartPk;
- (void)onMMFinderLiveConnectMicPkPanelSearchAction;
- (void)onMMFinderLiveConnectMicPkPanelMoreAction;
- (void)onMMFinderLiveConnectMicPkPanelAcceptConnectFromUser:(id)arg1;
- (void)onMMFinderLiveConnectMicPkPanelApplyConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicPkPanelCloseConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicPkPanelCancelConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicPkPanelInviteMicToAudienceUser:(id)arg1;
- (void)onConnectMicPkPanelQuitPk;
- (void)onConnectMicPkPanelFinishPkPrematurely;
- (void)onConnectMicPkPanelWillClose;
- (void)doStopAudienceSelfConnectMic;
- (BOOL)tryRemoveConnectMicUserFromApplyDictForPaidMicWithSdkUserId:(id)arg1 sessionId:(id)arg2;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 conditionChanged:(unsigned long long)arg2;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 autoConnectChanged:(BOOL)arg2;
- (void)onConnectMicAnchorPkLayoutModeChangeConfirmed:(unsigned long long)arg1;
- (void)updateAnchorPkLayoutMode:(unsigned long long)arg1 notifyToServer:(BOOL)arg2;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)checkAudiencePkStartTipsStateIfNeeded;
- (void)showModifyMicSeatInfoActionSheetWithSeatBaseInfo:(id)arg1 settingFlag:(unsigned long long)arg2;
- (void)modifyMicSeatName:(id)arg1 withSeatId:(unsigned long long)arg2;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(BOOL)arg1;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)updateAudioRoomModeMicIndexAndSeatListForTrtcUserWithLiveTask:(id)arg1;
- (void)resetAllMicIndexInListWithAudioRoomScene:(unsigned long long)arg1;
- (void)resetAllMicIndexInListForAudioRoomModeWithUnoccupiedSeatListUpdateFlag:(BOOL)arg1;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(BOOL)arg2;
- (void)updateAudioRoomInfoView;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateKtvSingerFlagInAudioRoomMicUsersInfo;
- (void)checkAndUpdateAudioRoomMicUsersInfoForTrtcAudienceWithLiveTask:(id)arg1 isMicLayoutModeChanged:(BOOL)arg2;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveKTVSongOperationRequestSongBlockedWithType:(unsigned long long)arg1 taskId:(id)arg2;
- (void)showInviteAudiencePanelWithMicIndex:(unsigned long long)arg1;
- (void)inviteAudienceConnectMicWithUserInfo:(id)arg1 micIndex:(unsigned long long)arg2;
- (void)handleInviteAudienceMicWithSeatId:(unsigned int)arg1 isVideoMic:(BOOL)arg2 expiredTime:(unsigned long long)arg3 inviteMicBuffer:(id)arg4;
- (void)maximizeOrMinimizeMicAudience:(id)arg1 isMaximizeOperation:(BOOL)arg2;
- (void)onMMFinderLiveMicInviteAudienceBubbleViewAcceptButtonTappedWithSeatId:(unsigned long long)arg1 inviteMicBuffer:(id)arg2;
- (void)onMMFinderLiveAudioRoomInfoViewTappedWithUserInfo:(id)arg1 micSeatInfo:(id)arg2 targetView:(id)arg3;
- (void)onMMFinderLiveAudioRoomInfoViewUnmuteMicWithUserInfo:(id)arg1;
- (void)onMMFinderLiveModifyMicSeatNamePanelModifyMicSeatName:(id)arg1 withSeatId:(unsigned long long)arg2 seatBaseInfo:(id)arg3;
- (void)onMMFinderLiveMicInviteAudiencePanelInviteUser:(id)arg1 micIndex:(unsigned long long)arg2;
- (void)anchorConnectMicModeSettingPanelDidCloseWithSelectedMode:(unsigned long long)arg1 paidMicSetting:(id)arg2;
- (void)anchorConnectMicModeSettingPanelDidUpdatePaidConnectMicAnchorSetting:(id)arg1;
- (BOOL)anchorConnectMicModeSettingPanelCanChangeMicLayoutMode;
- (void)anchorConnectMicModeSettingPanelReportWithExtraDict:(id)arg1 subElementType:(unsigned int)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)connectMicAudienceSelfUser;
- (void)setConnectMicAudienceSelfUser:(id)arg1;
- (id)micTalkingAudienceSelfUser;
- (void)setMicTalkingAudienceSelfUser:(id)arg1;
- (id)previewRelatedOperationView;
- (void)setPreviewRelatedOperationView:(id)arg1;
- (BOOL)isAnchorBattleDisabled;
- (void)setIsAnchorBattleDisabled:(BOOL)arg1;
- (BOOL)isAnchorPkChangeLayoutEnabled;
- (void)setIsAnchorPkChangeLayoutEnabled:(BOOL)arg1;
- (BOOL)isMicWithShareScreenEnabled;
- (void)setIsMicWithShareScreenEnabled:(BOOL)arg1;
- (unsigned long long)micLayoutMode;
- (id)applyConnectMicAudienceDict;
- (void)setApplyConnectMicAudienceDict:(id)arg1;
- (id)unreadApplyConnectMicAudienceSet;
- (void)setUnreadApplyConnectMicAudienceSet:(id)arg1;
- (id)closedMicAudienceSessionIdSet;
- (void)setClosedMicAudienceSessionIdSet:(id)arg1;
- (id)invitedMicAudienceDict;
- (void)setInvitedMicAudienceDict:(id)arg1;
- (id)applyConnectMicAnchorDict;
- (void)setApplyConnectMicAnchorDict:(id)arg1;
- (id)unreadApplyConnectMicAnchorSet;
- (void)setUnreadApplyConnectMicAnchorSet:(id)arg1;
- (unsigned long long)currentCdnVideoDisplayType;
- (void)setCurrentCdnVideoDisplayType:(unsigned long long)arg1;
- (unsigned long long)currentCdnVideoDisplayScene;
- (void)setCurrentCdnVideoDisplayScene:(unsigned long long)arg1;
- (BOOL)recordPermissionCheckOK;
- (void)setRecordPermissionCheckOK:(BOOL)arg1;
- (unsigned long long)recordPermissionCheckScene;
- (void)setRecordPermissionCheckScene:(unsigned long long)arg1;
- (id)applyConnectMicPageSheet;
- (void)setApplyConnectMicPageSheet:(id)arg1;
- (id)modifyMicSeatInfoActionSheet;
- (void)setModifyMicSeatInfoActionSheet:(id)arg1;
- (id)applyAudioMicActionSheet;
- (void)setApplyAudioMicActionSheet:(id)arg1;
- (id)applyAudioMicActionPage;
- (void)setApplyAudioMicActionPage:(id)arg1;
- (id)cancelOrStopConnectMicActionSheetForAnchor;
- (void)setCancelOrStopConnectMicActionSheetForAnchor:(id)arg1;
- (id)cancelOrStopConnectMicActionSheetForAudience;
- (void)setCancelOrStopConnectMicActionSheetForAudience:(id)arg1;
- (id)freeMicUserActionSheet;
- (void)setFreeMicUserActionSheet:(id)arg1;
- (id)modifyMicSeatNamePanel;
- (void)setModifyMicSeatNamePanel:(id)arg1;
- (id)inviteAudiencePanel;
- (void)setInviteAudiencePanel:(id)arg1;
- (id)closeInfoDict;
- (void)setCloseInfoDict:(id)arg1;
- (id)pkPanel;
- (void)setPkPanel:(id)arg1;
- (id)unorderedConnectMicAudienceDict;
- (void)setUnorderedConnectMicAudienceDict:(id)arg1;
- (id)waitConnectAudienceDict;
- (void)setWaitConnectAudienceDict:(id)arg1;
- (id)connectMicAudienceListForCDNUser;
- (void)setConnectMicAudienceListForCDNUser:(id)arg1;
- (id)otherRoomConnectMicAudienceDict;
- (void)setOtherRoomConnectMicAudienceDict:(id)arg1;
- (id)allMicTalkingUsersList;
- (void)setAllMicTalkingUsersList:(id)arg1;
- (id)anchorCheckAcceptedAudienceTimer;
- (void)setAnchorCheckAcceptedAudienceTimer:(id)arg1;
- (id)anchorCheckMicAnchorUsersTimer;
- (void)setAnchorCheckMicAnchorUsersTimer:(id)arg1;
- (id)anchorCheckReceivedMicUsersTimer;
- (void)setAnchorCheckReceivedMicUsersTimer:(id)arg1;
- (BOOL)shouldRecordFirstMicUITime;
- (void)setShouldRecordFirstMicUITime:(BOOL)arg1;
- (BOOL)canUseNewMicSEI;
- (void)setCanUseNewMicSEI:(BOOL)arg1;
- (id)cachedMicTalkingAudienceDict;
- (void)setCachedMicTalkingAudienceDict:(id)arg1;
- (id)micTalkingAudienceDict;
- (void)setMicTalkingAudienceDict:(id)arg1;
- (id)appliedMicAnchorDict;
- (void)setAppliedMicAnchorDict:(id)arg1;
- (id)acceptedMicAnchorDict;
- (void)setAcceptedMicAnchorDict:(id)arg1;
- (id)randomMicTempAnchorUser;
- (void)setRandomMicTempAnchorUser:(id)arg1;
- (BOOL)isInStopMultiAnchorMicProcess;
- (void)setIsInStopMultiAnchorMicProcess:(BOOL)arg1;
- (id)multiAnchorMicSessionIdInJoinLiveResp;
- (void)setMultiAnchorMicSessionIdInJoinLiveResp:(id)arg1;
- (int)closeCountOfJoinLiveRespAnchorMicSession;
- (void)setCloseCountOfJoinLiveRespAnchorMicSession:(int)arg1;
- (BOOL)hasStartedActivateMicForAnchor;
- (void)setHasStartedActivateMicForAnchor:(BOOL)arg1;
- (BOOL)isInDelayActivateMicForAnchorProcess;
- (void)setIsInDelayActivateMicForAnchorProcess:(BOOL)arg1;
- (id)tappedFreeMicUser;
- (void)setTappedFreeMicUser:(id)arg1;
- (id)freeMicFeatureDescriptionPanel;
- (void)setFreeMicFeatureDescriptionPanel:(id)arg1;
- (unsigned long long)lastStartFreeMicTalkingTime;
- (void)setLastStartFreeMicTalkingTime:(unsigned long long)arg1;
- (unsigned long long)lastStopFreeMicTalkingTime;
- (void)setLastStopFreeMicTalkingTime:(unsigned long long)arg1;
- (unsigned long long)timeIntervalThresholdFromLastStartFreeMic;
- (void)setTimeIntervalThresholdFromLastStartFreeMic:(unsigned long long)arg1;
- (unsigned long long)timeIntervalThresholdFromLastStopFreeMic;
- (void)setTimeIntervalThresholdFromLastStopFreeMic:(unsigned long long)arg1;
- (id)micFlowReporter;
- (void)setMicFlowReporter:(id)arg1;
- (id)audienceConnectMicSessionDataReporter;
- (void)setAudienceConnectMicSessionDataReporter:(id)arg1;
- (BOOL)canAutoConnect;
- (void)setCanAutoConnect:(BOOL)arg1;
- (BOOL)canShowConnectMicButtonRedDot;
- (void)setCanShowConnectMicButtonRedDot:(BOOL)arg1;
- (unsigned long long)micIndexForAudienceToApplyMic;
- (void)setMicIndexForAudienceToApplyMic:(unsigned long long)arg1;
- (id)audienceApplyMicInfo;
- (void)setAudienceApplyMicInfo:(id)arg1;
- (id)micLayoutModeSubtitleWrap;
- (void)setMicLayoutModeSubtitleWrap:(id)arg1;
- (BOOL)isCdnUserBeforeConnectMic;
- (void)setIsCdnUserBeforeConnectMic:(BOOL)arg1;
- (BOOL)canUseFetchLiveMicInfoCGI;
- (void)setCanUseFetchLiveMicInfoCGI:(BOOL)arg1;
- (unsigned long long)timeIntervalThresholdFromLastFetchLiveMicInfoCGI;
- (void)setTimeIntervalThresholdFromLastFetchLiveMicInfoCGI:(unsigned long long)arg1;
- (unsigned long long)lastFetchLiveMicInfoTime;
- (void)setLastFetchLiveMicInfoTime:(unsigned long long)arg1;
- (unsigned int)fetchLiveMicInfoFailedCount;
- (void)setFetchLiveMicInfoFailedCount:(unsigned int)arg1;
- (unsigned long long)activateMicForAnchorExitRoomRequestCount;
- (void)setActivateMicForAnchorExitRoomRequestCount:(unsigned long long)arg1;
- (unsigned long long)activateMicForAnchorExitRoomFinishedCount;
- (void)setActivateMicForAnchorExitRoomFinishedCount:(unsigned long long)arg1;
- (id)audiencePreviewCameraView;
- (void)setAudiencePreviewCameraView:(id)arg1;
- (id)currentAudienceCameraSettingsCategoryPanel;
- (void)setCurrentAudienceCameraSettingsCategoryPanel:(id)arg1;
- (void)setTeamupPanel:(id)arg1;
- (BOOL)isWaitingMultiAnchorMicAcceptCGI;
- (void)setIsWaitingMultiAnchorMicAcceptCGI:(BOOL)arg1;
- (BOOL)shouldAcceptRandomMicAfterLastResp;
- (void)setShouldAcceptRandomMicAfterLastResp:(BOOL)arg1;
- (id)cachedInfoBeforeSwitchCdnOrTrtc;
- (void)setCachedInfoBeforeSwitchCdnOrTrtc:(id)arg1;
- (void)setLocatingLogic:(id)arg1;
- (id)finderLiveLocation;
- (void)setFinderLiveLocation:(id)arg1;
- (id)locationValidityTimer;
- (void)setLocationValidityTimer:(id)arg1;
- (id)locationGuideTimer;
- (void)setLocationGuideTimer:(id)arg1;
- (id)anchorLocationGuideView;
- (void)setAnchorLocationGuideView:(id)arg1;
- (unsigned long long)locationPermissionCheckScene;
- (void)setLocationPermissionCheckScene:(unsigned long long)arg1;
- (BOOL)hasShownAnchorLocationGuideView;
- (void)setHasShownAnchorLocationGuideView:(BOOL)arg1;
- (BOOL)isFetchingLocationForAudience;
- (void)setIsFetchingLocationForAudience:(BOOL)arg1;
- (BOOL)isAudienceConnectMicDismissDefaultSource;
- (void)setIsAudienceConnectMicDismissDefaultSource:(BOOL)arg1;
- (BOOL)isRenewCreateBattleProcess;
- (void)setIsRenewCreateBattleProcess:(BOOL)arg1;
- (BOOL)needRenewCreateBattle;
- (void)setNeedRenewCreateBattle:(BOOL)arg1;
- (id)renewCreateBattleComplishBlock;
- (void)setRenewCreateBattleComplishBlock:(id)arg1;
- (id)lastFinishedBattleSessionId;
- (void)setLastFinishedBattleSessionId:(id)arg1;
- (unsigned long long)selectedBattleDuration;
- (id)lastSelectResult;
- (void)setLastSelectResult:(id)arg1;
- (unsigned long long)prePkLayoutMode;
- (void)setPrePkLayoutMode:(unsigned long long)arg1;
- (id)connectMicAudienceDict;
- (void)setConnectMicAudienceDict:(id)arg1;
- (id)anchorMicGroupSessionId;
- (void)setAnchorMicGroupSessionId:(id)arg1;
- (id)micInfoWording;
- (void)setMicInfoWording:(id)arg1;
- (id)battleSettings;
- (void)setBattleSettings:(id)arg1;
- (id)connectMicOperationPanel;
- (void)setConnectMicOperationPanel:(id)arg1;
- (id)focusedSdkUserId;
- (void)setFocusedSdkUserId:(id)arg1;
- (BOOL)paidApplyMicRequesting;
- (void)setPaidApplyMicRequesting:(BOOL)arg1;
- (id)strongPaidMicAudienceApplyPanel;
- (void)setStrongPaidMicAudienceApplyPanel:(id)arg1;
- (id)weakPaidMicAudienceApplyPanel;
- (void)setWeakPaidMicAudienceApplyPanel:(id)arg1;
- (id)weakPaidMicAudienceOperationPanel;
- (void)setWeakPaidMicAudienceOperationPanel:(id)arg1;
- (id)purchaseMicConfig;
- (void)setPurchaseMicConfig:(id)arg1;
- (double)paidMicAnchorRating;
- (void)setPaidMicAnchorRating:(double)arg1;
- (id)paidMicHistoryJumpInfo;
- (void)setPaidMicHistoryJumpInfo:(id)arg1;
- (id)applyInfo;
- (void)setApplyInfo:(id)arg1;
- (id)cacheGetPurchaseMicInfoResponse;
- (void)setCacheGetPurchaseMicInfoResponse:(id)arg1;
- (id)cachedAudienceFeedBackJumpInfo;
- (void)setCachedAudienceFeedBackJumpInfo:(id)arg1;
- (id)paidMicCountdownTimer;
- (void)setPaidMicCountdownTimer:(id)arg1;
- (id)paidMicAudienceApplySessionId;
- (void)setPaidMicAudienceApplySessionId:(id)arg1;
- (id)paidMicForceManualDisconnectSessionIdSet;
- (void)setPaidMicForceManualDisconnectSessionIdSet:(id)arg1;
- (id)paidMicAutoDisconnectingSessionIdSet;
- (void)setPaidMicAutoDisconnectingSessionIdSet:(id)arg1;
- (id)keepAliveTipsView;
- (void)setKeepAliveTipsView:(id)arg1;
- (unsigned int)audienceDelayTimeInPaidMicCountdown;
- (void)setAudienceDelayTimeInPaidMicCountdown:(unsigned int)arg1;
- (void).cxx_destruct;
@end

