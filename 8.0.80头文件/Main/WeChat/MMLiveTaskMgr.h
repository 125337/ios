@interface MMLiveTaskMgr : MMUserService <WAAppTaskNavigateBackNativeExt, MMLiveTaskDelegate, WCFinderCreateUserViewControllerDelegate, WCFinderCreateCoordinatorDelegate, MMLiveCDNLivePreloaderDelegate, MonoServiceMsgLogicDelegate, WCFinderLiveExt, MMKernelExt, MMLiveNameVerifyViewControllerDelegate, CXCallObserverDelegate, MonoServiceMgrExt, ILiveTaskMgrExt, MMSceneDelegateExt, MMLimitedModeEntryViewControllerExt, MMLimitedModeExt, WCAudioSessionExt, WCAudioModuleDelegate, IMMWindowMgrExt, WCAudioModuleExt, MMAcceptAgreementResultViewControllerDelegate, MMLivePolicyViewForAudienceControllerDelegate, MMLiveContainerLogicDelegate, MMLiveViewControllerDelegate, MMFinderLivePIPMinimizeLogicDelegate, MMServiceProtocol, TXLiveBaseAdapterDelegete>
{
    BOOL _isMinimizeMode; // +0x8
    BOOL _supportLandScape; // +0x9
    BOOL _isAllLiveClosed; // +0xa
    BOOL _isInMoreLiveScene; // +0xb
    BOOL _openLivePromoteExtend; // +0xc
    BOOL _openLivePromotionMiniapp; // +0xd
    BOOL _gestureMasterSwitchEnabled; // +0xe
    BOOL _isInFinderDiscoveryLiveScene; // +0xf
    BOOL _isInNearbyMoreLiveScene; // +0x10
    BOOL _openLiveOpPromotionMiniapp; // +0x11
    BOOL _achievementsPanelEnabled; // +0x12
    BOOL _imageStickerEnabledForTextType; // +0x13
    BOOL _imageStickerEnabledForImageType; // +0x14
    BOOL _anchorCustomizeRewardEnabled; // +0x15
    BOOL _emoticonCommentSwitchEnabled; // +0x16
    BOOL _aiAssistantSwitchEnabled; // +0x17
    BOOL _aiAssistantMasterSwitchEnabled; // +0x18
    BOOL _recommendSettingEntranceEnabled; // +0x19
    BOOL _debug_forbidDisplayLive; // +0x1a
    BOOL _debug_forbidDisplayBanner; // +0x1b
    BOOL _isViewDismissedDuringCreateLiveSession; // +0x1c
    unsigned char _originPriority; // +0x1d
    BOOL _isAppActive; // +0x1e
    BOOL _tempHoldAudioMonoService; // +0x1f
    BOOL _useNewGiftResourcesManagement; // +0x20
    BOOL _hasClearedData; // +0x21
    int _audioModuleScene; // +0x24
    unsigned int _gameVersionType; // +0x28
    MMLivePivotViewController * _currentPivotViewController; // +0x30
    MMLiveContainerLogic * _liveContainerLogic; // +0x38
    unsigned long long _needDisplayLotteryEntrance; // +0x40
    unsigned long long _needDisplayPIPEntrance; // +0x48
    unsigned long long _selfLikeHighCheerCount; // +0x50
    PIPPerformanceComputeParamConfig * _pipPerformanceComputeParamConfig; // +0x58
    MMFinderLiveFansGroupInfo * _selfCreatedFansGroup; // +0x60
    MMFinderLiveUIStateInfo * _currentUIStateInfo; // +0x68
    MMLiveTempCacheInfo * _liveTempCacheInfo; // +0x70
    unsigned long long _lastUserTapOpenedLiveId; // +0x78
    unsigned long long _lastUserTapOpenedLiveTimestamp; // +0x80
    FinderCoCertRewardInfo * _finderCoCertRewardInfo; // +0x88
    MMGameLiveLaunchModel * _gameLiveLaunchModel; // +0x90
    MMFinderLiveReadStatMgr * _readStatMgr; // +0x98
    NSMutableSet * _p2pStreamIdsInRoom; // +0xa0
    MMLiveRewardGiftNewCustomizationMagicRewardResManager * _giftNewCustomMagicRewardResManager; // +0xa8
    TXLiveAudioSessionCategorySetParam * _lastTXLiveCategorySetParam; // +0xb0
    MMLiveContainerLogicHandler * _liveContainerLogicHandler; // +0xb8
    MMFinderLiveCreateLiveLogic * _createLiveLogic; // +0xc0
    MMFinderLiveLastTaskModel * _lastTaskModel; // +0xc8
    UIViewController * _parentFeedListViewController; // +0xd0
    id /* block */ _forbidLiveConfirmBlock; // +0xd8
    CXCallObserver * _callObserver; // +0xe0
    unsigned long long _needDisplayAppSceneEntrance; // +0xe8
    id /* block */ _loadingCompletionBlock; // +0xf0
    NSMutableDictionary * _extraInfoDict; // +0xf8
    NSMutableDictionary * _tryViewPayedTagDict; // +0x100
    NSMutableDictionary * _staticCacheInfoDict; // +0x108
    unsigned long long _appScene; // +0x110
    MMLiveLimitedBusinessMgr * _limitedBusinessMgr; // +0x118
    NSMutableSet * _isInLiveSquareVcSet; // +0x120
    WCFinderTaskScheduler * _taskScheduler; // +0x128
    MMLiveRewardGiftNewCustomizationMagicEngineMemoryManager * _giftNewCustomMagicEngineMemoryManager; // +0x130
    _TtC6WeChat26FinderLiveStayTimeReporter * _stayTimeReporter; // +0x138
    MMFinderLivePrimitiveTask * _primitiveTask; // +0x140
    MMFinderLiveNowPlayingControlLogic * _nowPlayingControlLogic; // +0x148
    NSMutableDictionary * _anchorFunctionSwitchFlagsMap; // +0x150
    NSObject * _finderLiveTokenLockObject; // +0x158
    NSMutableDictionary * _finderLiveTokensDictionaries; // +0x160
    UINavigationController * _navigationController; // +0x168
    MMLiveViewController * _liveViewController; // +0x170
    NSMutableDictionary * _dictLiveId2Task; // +0x178
    MMLiveTask * _liveTask; // +0x180
    NSMutableDictionary * _dictTaskId2FeedTask; // +0x188
    MMLiveFeedStreamTask * _feedStreamTask; // +0x190
    id <MMLiveConflictHandling> _conflictHandler; // +0x198
    MMLivePolicyViewForAudienceController * _policyViewController; // +0x1a0
    MMLiveNameVerifyViewController * _nameVerifyViewController; // +0x1a8
    WCFinderLivePreviewViewController * _currentPreviewViewController; // +0x1b0
    MMFinderLiveReplayViewController * _currentReplayViewController; // +0x1b8
    MMUIViewController * _currentParticipantWaitingViewController; // +0x1c0
    WCFinderCreateLiveViewModel * _redPacketCreateLiveViewModel; // +0x1c8
    WCFinderCreateLiveViewModel * _webOperationCreateLiveViewModel; // +0x1d0
    WCFinderCreateLiveViewModel * _gameCreateLiveViewModel; // +0x1d8
    WCFinderCreateLiveViewModel * _bizLiveCreateLiveViewModel; // +0x1e0
    NSArray * _roomIds; // +0x1e8
    WCFinderCreateCoordinator * _createUserCoordinator; // +0x1f0
    NSString * _gameAppId; // +0x1f8
    MMFinderLiveLogic * _liveLogic; // +0x200
    MMLiveStopStateDisplayViewController * _stopStateDisplayVC; // +0x208
    MMLiveCDNLivePreloader * _cdnLivePreloader; // +0x210
}
+ (void)deleteStopStateDisplayControllerFromNavigationVC:(id)arg1;
+ (BOOL)isNavigationContainStopStateDisplayController:(id)arg1;
+ (BOOL)resolveCommonExternalConflicts;
+ (BOOL)checkWaAppTaskIsExistInAudioModule;
+ (BOOL)checkWaAppPushTaskIsExistInAudioModule;
+ (CGRect)transferFrameForCurrentOrientation:(CGRect)arg1;
- (id)dictionaryForFinderLiveToken:(id)arg1;
- (id)finderLiveTokenForSetDictionary:(id)arg1;
- (void)removeDictionaryForFinderLiveToken:(id)arg1;
- (void)openWeAppInLiveWithParams:(id)arg1;
- (void)updateSimulatedNativeWeAppOpenParams:(id)arg1 handlerWrapper:(id)arg2;
- (id)getCurrentWeAppId;
- (BOOL)isContainWeAppInLive;
- (void)closePrehotWeAppInLive:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeCurrentWeAppInLive:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWeAppInLive:(id)arg1 animated:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)killWeAppInLive:(id)arg1 animated:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)closeForegroundWeApp:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)onWillJumpToMiniAppAfterBackNativeWithContext:(id)arg1;
- (void)onWillJumpToFinderProductDetailAfterBackNativeWithContext:(id)arg1;
- (void)handleSheetModeEvent:(id)arg1;
- (BOOL)updateLiveSdkInfo:(id)arg1 partialUpdate:(BOOL)arg2 withTaskId:(id)arg3;
- (void)setVideoEnabled:(BOOL)arg1 withTaskId:(id)arg2;
- (void)setAudioEnabled:(BOOL)arg1 withTaskId:(id)arg2;
- (void)setTrtcUser:(id)arg1 isVideoEnabled:(BOOL)arg2 withTaskId:(id)arg3;
- (void)setTrtcUser:(id)arg1 isAudioEnabled:(BOOL)arg2 withTaskId:(id)arg3;
- (id)getRemoteUserConfigByUser:(id)arg1 withTaskId:(id)arg2;
- (void)enterLiveRoomWithTaskId:(id)arg1;
- (void)exitLiveRoomWithTaskId:(id)arg1;
- (BOOL)updateTask:(id)arg1 withLiveId:(unsigned long long)arg2;
- (BOOL)resetTask:(id)arg1;
- (void)onLiveTaskReportFaceTrackOutputData:(id)arg1;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveTask:(id)arg1 liveSdkInfoWillExpire:(id)arg2;
- (void)onLiveTask:(id)arg1 switchRoleType:(int)arg2 errMsg:(id)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 audioAvailable:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 videoAvailable:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (void)onLiveTaskConnectionLost:(id)arg1;
- (void)onLiveTaskConnectionRecovery:(id)arg1;
- (void)onLiveTask:(id)arg1 user:(id)arg2 eventName:(id)arg3 info:(id)arg4;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2 p2pStatus:(id)arg3;
- (void)onLiveTask:(id)arg1 pushNetStatus:(id)arg2;
- (void)onLiveTask:(id)arg1 remoteUserEnterRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 remoteUserLeaveRoom:(id)arg2 reason:(long long)arg3;
- (void)onLiveTask:(id)arg1 connectOtherRoomResult:(BOOL)arg2 userId:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5;
- (void)onLiveTaskFirstShowCdnPlayerView:(id)arg1;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcMainRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 replayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 SEIConnectMicUserInfoListUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 SEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3 showMicTopic:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 userVoiceVolume:(id)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 pureAudioModeNotificationRequestedForStatus:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 localAudioModeStateChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioRoomSceneChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioRoomSEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 liveStreamServerTimeUpdated:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 flvNetworkQualityUpdated:(long long)arg2 hasChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 anchorIsTalking:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 otherConnectMicAnchor:(id)arg2 anchorSeiStatus:(unsigned int)arg3 anchorSEIInfo:(id)arg4;
- (void)onLiveTask:(id)arg1 micMutedDidChange:(BOOL)arg2;
- (void)onLiveTaskAnchorAudioModeBackgroundPlayerVMChanged:(id)arg1;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)onLiveTaskPauseLiveForAudience:(id)arg1;
- (void)onLiveTaskResumeLiveForAudience:(id)arg1;
- (void)onLiveTaskMuteLiveForAudience:(id)arg1;
- (void)onLiveTaskUnMuteLiveForAudience:(id)arg1;
- (void)onLiveTaskPauseLiveForAnchor:(id)arg1;
- (void)onLiveTaskResumeLiveForAnchor:(id)arg1;
- (void)onLiveTask:(id)arg1 updateLiveDescription:(id)arg2;
- (void)onLiveTask:(id)arg1 videoFPSChanged:(unsigned int)arg2;
- (void)onLiveTask:(id)arg1 playingViaCdnChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isSyndicateParticipantValueChanged:(BOOL)arg2;
- (void)onLiveTaskLandScapeEnabledChanged:(id)arg1;
- (void)onLiveTaskSendFirstLocalAudioFrame:(id)arg1;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 audienceApplyingMicStatusChanged:(BOOL)arg2;
- (void)onLiveTaskSwitchCdnPlayerViewFinished:(id)arg1;
- (void)onLiveTask:(id)arg1 multiAngleCdnPlayerViewCountUpdated:(unsigned long long)arg2 andCurrentIndex:(unsigned long long)arg3;
- (void)onLiveTask:(id)arg1 currentDisplayingCdnPlayerViewIndexUpdated:(unsigned long long)arg2 andProgress:(double)arg3;
- (void)onLiveTask:(id)arg1 willStartMultiAngleSwitchAnimationWithDuration:(double)arg2 currentProgress:(double)arg3 switchToNext:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 trtcHasVideoSrcChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 applyingOrConnectingMicWithOtherAnchorChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTask:(id)arg1 livePausedForPaidLiveTrialTimeupChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (void)onLiveTaskExitLive:(id)arg1;
- (void)onLiveTask:(id)arg1 enableFloatBarrageUpdated:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isLargeLiveFlagUpdated:(BOOL)arg2;
- (void)onLiveTaskCommentRefreshConfigUpdated:(id)arg1;
- (void)onLiveTask:(id)arg1 currAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayerItemDecodeTypeChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 supportSEIModeChanged:(unsigned int)arg2;
- (void)onLiveTask:(id)arg1 isHdrCdnLiveChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 exitStateChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioAuthorityActiveChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 trtcAudioFrameCostTime:(long long)arg2 userId:(id)arg3 business:(long long)arg4;
- (void)onLiveTask:(id)arg1 cameraCastConnectionChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 processNewMusicSEI:(id)arg2;
- (void)onLiveTask:(id)arg1 capturedAudioFrame:(id)arg2;
- (void)onLiveTask:(id)arg1 localCaptureSampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (void)onLiveTask:(id)arg1 commentNewHeaderStyleShouldDisplay:(BOOL)arg2;
- (void)startFinderLiveWithParamsModel:(id)arg1 navigationController:(id)arg2;
- (void)startFinderLiveWithScene:(unsigned int)arg1 navigationController:(id)arg2;
- (void)startFinderLiveWithFinderUsername:(id)arg1 finderLiveShareItem:(id)arg2 navigationController:(id)arg3;
- (BOOL)shouldSkipCameraAccessCheckOnEnterCreateLivePage;
- (id)checkGroupLiveIdentityWithGroupContact:(id)arg1 navigationController:(id)arg2;
- (id)prepareGroupLiveStarterViewModelWithGroupContact:(id)arg1 navigationController:(id)arg2;
- (BOOL)checkGroupLiveIdentityPassedWithGroupContact:(id)arg1 starterViewModel:(id)arg2;
- (void)startFinderLiveInGroupWithGroupContact:(id)arg1 navigationController:(id)arg2;
- (void)startFinderLiveInGroupWithGroupContact:(id)arg1 needConfirm:(BOOL)arg2 navigationController:(id)arg3;
- (void)startFinderLiveInGroupWithGroupContactOldVersion:(id)arg1 needConfirm:(BOOL)arg2 navigationController:(id)arg3;
- (void)startFinderLiveInGroupWithGroupContactNewVersion:(id)arg1 navigationController:(id)arg2;
- (void)showGroupLivePanelWithGroupContact:(id)arg1 starterViewModel:(id)arg2 playTypeList:(id)arg3 subTitle:(id)arg4 defaultPublicLive:(BOOL)arg5;
- (void)applyGroupLivePlayType:(id)arg1 defaultPublicLive:(BOOL)arg2 toStarterViewModel:(id)arg3;
- (void)applyPublicVisibilityToStarterViewModel:(id)arg1;
- (void)createGroupLivePrepareWithSelfContact:(id)arg1 starterViewModel:(id)arg2;
- (void)startFinderLiveWithSingleShareLiveContentVM:(id)arg1 navigationController:(id)arg2 tabType:(long long)arg3 shareItem:(id)arg4 customParams:(id)arg5 replayEntryType:(id)arg6 routeParam:(id)arg7;
- (void)startFinderLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 commentScene:(int)arg5 replayEntryType:(id)arg6 useVerticalFullscreenMinimization:(BOOL)arg7 routeParam:(id)arg8;
- (void)startFinderLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 shareItem:(id)arg7 relatedLiveParams:(id)arg8 replayEntryType:(id)arg9 useVerticalFullscreenMinimization:(BOOL)arg10 animated:(BOOL)arg11 routeParam:(id)arg12;
- (void)realStartFinderLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 shareItem:(id)arg7 relatedLiveParams:(id)arg8 customParams:(id)arg9 replayEntryType:(id)arg10 useAnchoredBypass:(BOOL)arg11 disableHistoryLives:(BOOL)arg12 useVerticalFullscreenMinimization:(BOOL)arg13 animated:(BOOL)arg14 routeParam:(id)arg15;
- (void)reStartFinderLiveByExtendWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 inMainScene:(BOOL)arg3 tabType:(long long)arg4 commentScene:(int)arg5 relatedLiveParams:(id)arg6 useAnchoredBypass:(BOOL)arg7 disableHistoryLives:(BOOL)arg8 useVerticalFullscreenMinimization:(BOOL)arg9 animated:(BOOL)arg10 routeParam:(id)arg11;
- (void)startFinderLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 commentScene:(int)arg5 relatedLiveParams:(id)arg6 replayEntryType:(id)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 animated:(BOOL)arg9 routeParam:(id)arg10;
- (void)startFinderLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 routeParam:(id)arg9;
- (void)startFinderLiveWithFinderLiveContentVM:(id)arg1 navigationController:(id)arg2;
- (BOOL)reStartFinderLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 tabType:(long long)arg3 commentScene:(int)arg4 useVerticalFullscreenMinimization:(BOOL)arg5 routeParam:(id)arg6;
- (BOOL)reStartFinderLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 commentScene:(int)arg5 useVerticalFullscreenMinimization:(BOOL)arg6 routeParam:(id)arg7;
- (void)startFinderLiveWithFinderContactContentVM:(id)arg1 navigationController:(id)arg2 tabType:(long long)arg3 customParams:(id)arg4 commentScene:(int)arg5 routeParam:(id)arg6;
- (BOOL)canEnterLiveRoomInFeed:(id)arg1;
- (BOOL)judgeExternalConflictsWithLiveVM:(id)arg1;
- (BOOL)startFinderLiveWithFinderLiveContentVM:(id)arg1 feedLiveRoomCell:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 customParams:(id)arg5 commentScene:(int)arg6;
- (void)exitLiveWithFinderLiveContentVM:(id)arg1 inFeedLiveRoomCell:(id)arg2;
- (void)exitEmbeddedLiveForSwitchInFeedVC;
- (BOOL)needJumpReplayFeed:(id)arg1 commentScene:(int)arg2 replayEntryType:(id)arg3;
- (void)fetchDataItemWithFinderContact:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)needEnterLiveCompleteViewController:(id)arg1;
- (void)prepareStartFinderLiveForAudience:(id)arg1;
- (void)startFinderLivePreviewWithFinderContactContentVM:(id)arg1 navigationController:(id)arg2 tabType:(long long)arg3 redDotTipsShowInfo:(id)arg4 commentScene:(int)arg5 useVerticalFullscreenMinimization:(BOOL)arg6 routeParam:(id)arg7;
- (void)presentLivePreviewView:(id)arg1;
- (void)dismissLivePreviewViewWithAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)switchPreviewViewToPivotViewWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 tabType:(long long)arg3 commentScene:(int)arg4 redDotTipsShowInfo:(id)arg5 useAnchoredBypass:(BOOL)arg6 disableHistoryLives:(BOOL)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 scrollDisabledReasons:(unsigned long long)arg9 routeParam:(id)arg10;
- (void)switchPreviewViewToPivotViewWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedExportIdIndex:(id)arg3 tabType:(long long)arg4 commentScene:(int)arg5 useAnchoredBypass:(BOOL)arg6 disableHistoryLives:(BOOL)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 scrollDisabledReasons:(unsigned long long)arg9 routeParam:(id)arg10;
- (BOOL)preJudgeEnableStartLiveForFinderLiveTask:(id)arg1;
- (void)updatePivotViewRelatedVMWith:(id)arg1;
- (BOOL)startFinderLiveWithTaskWithoutNavigation:(id)arg1;
- (void)initIndicatorStateFlagAfterStartLive;
- (BOOL)isErrorPageLegal:(id)arg1;
- (void)startFinderLiveWithTask:(id)arg1 navigationController:(id)arg2;
- (void)ensureBeautyResourcesAvailableForLiveTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (double)getFootprintPercentThreshold;
- (BOOL)enableFeedPreload;
- (BOOL)openFinderLiveRoomViewWithTask:(id)arg1 navigationController:(id)arg2;
- (BOOL)switchLiveAliasRoleType:(long long)arg1;
- (BOOL)switchLiveToOtherAnchor:(id)arg1;
- (BOOL)switchLiveToOtherAnchor:(id)arg1 withUserInfo:(id)arg2;
- (BOOL)switchLiveToOtherAnchor:(id)arg1 withUserInfo:(id)arg2 commentScene:(int)arg3 isSwitchLiveEnabledBlock:(id /* block */)arg4;
- (void)realStartFinderGameLiveWithFinderUserName:(id)arg1 responseModel:(id)arg2 gameLiveEntryScene:(long long)arg3 gameAppId:(id)arg4 gameAuthTicket:(id)arg5 opensdkVersion:(unsigned int)arg6 opensdkGameLiveExtInfo:(id)arg7 createLivePrepareModel:(id)arg8 navigationController:(id)arg9;
- (void)startFinderGameLiveWithFinderUserName:(id)arg1 gameLiveEntryScene:(long long)arg2 gameAppId:(id)arg3 gameAuthTicket:(id)arg4 navigationController:(id)arg5;
- (void)startFinderGameLiveWithFinderUserName:(id)arg1 gameLiveEntryScene:(long long)arg2 gameAppId:(id)arg3 gameAuthTicket:(id)arg4 opensdkVersion:(unsigned int)arg5 opensdkGameLiveExtInfo:(id)arg6 navigationController:(id)arg7;
- (void)startFinderGameLiveWithPrepareAndFinderUserName:(id)arg1 gameLiveEntryScene:(long long)arg2 gameAppId:(id)arg3 gameVersionType:(unsigned int)arg4 navigationController:(id)arg5 startInfo:(id)arg6;
- (void)startFinderLiveForRedPacketWithNavigationController:(id)arg1 params:(id)arg2 fromStartScene:(long long)arg3;
- (void)startFinderLiveForBizLive:(id)arg1;
- (void)popRedPacketWebViewControllerIfNeeded;
- (void)internalStartFinderLiveForRedPacketWithRoomIds:(id)arg1 navigationController:(id)arg2;
- (void)startFinderLiveWithFinderUsername:(id)arg1 finderLiveNoticeList:(id)arg2 recoverVM:(id)arg3 userFlag:(unsigned int)arg4 liveGlobalFlag:(unsigned int)arg5 allTags:(id)arg6 currentTag:(id)arg7 visibilityFileList:(id)arg8 maxVisibilityChatroomCount:(unsigned int)arg9 maxRedPacketChatroomCount:(unsigned int)arg10 redPacketChatroomSelectionStyle:(long long)arg11 preparedRedPacketBindingRoomIds:(id)arg12 userSetting:(id)arg13 promptInfo:(id)arg14 spamJumpInfo:(id)arg15 paramsModel:(id)arg16 navigationController:(id)arg17;
- (void)startFinderLiveForExternalWithNavigationController:(id)arg1 params:(id)arg2 fromStartScene:(long long)arg3 startInfo:(id)arg4;
- (void)startFinderLiveForWebOperationWithNavigationController:(id)arg1 params:(id)arg2;
- (BOOL)checkHasCreateFinderLive;
- (id)getCategoryTagInfoFromParams:(id)arg1;
- (id)currentFinderLiveTask;
- (id)getFinderLiveTask:(id)arg1;
- (BOOL)isPivotVCTransforming;
- (BOOL)isPivotVCPreviewRelatedState;
- (CGAffineTransform)pivotVcRelatedLiveTransformation;
- (BOOL)relatedLivesEnabled;
- (void)shareProductFromCurrentFinderLiveRoom:(id)arg1;
- (void)enterLiveSqaureWithCustomTransition:(BOOL)arg1;
- (void)popLiveSqaureWithCustomTransition:(BOOL)arg1;
- (void)finderCreateAccountViewShow:(id)arg1;
- (void)finderCreateAccountConfirmed:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)createUserFinished:(id)arg1;
- (void)createUserConfirmed;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)createUserClosed;
- (BOOL)isFinderLiveNeedVerified;
- (BOOL)isFirstShowSwitchAccountIntroction;
- (BOOL)isFinderLiveFirstStartInGroup;
- (BOOL)attachFinderLiveReplayViewController:(id)arg1;
- (BOOL)detachFinderLiveReplayViewController;
- (void)showLivePolicyBeforeGameLiveFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)showCastConfirmBeforeCameraCastFrom:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)checkIsReplayStatus:(id)arg1;
- (BOOL)checkIsReplayStopgapStatus:(id)arg1;
- (BOOL)checkIsNearbyMoreLiveVcFromGlideSquare:(id)arg1;
- (BOOL)isAdsLiveRoomWith:(id)arg1;
- (id)getAdsDurationIntervalRange;
- (unsigned long long)getAdsLiveRoomRewardTimeWith:(id)arg1;
- (BOOL)isAdsLiveRoom;
- (void)liveAdsBannerStartShowWith:(id)arg1;
- (void)checkAndReportliveAdStartPlayWith:(id)arg1;
- (void)checkAndExecAdsCallBack:(int)arg1 action:(long long)arg2;
- (void)triggerAdRelatedFeedbackWithActionType:(long long)arg1;
- (void)checkAndReportAdAction:(int)arg1;
- (void)checkAndReportAdAction:(int)arg1 taskId:(id)arg2;
- (void)adReportClickActionType:(int)arg1 adReportScene:(long long)arg2 hitPoint:(CGPoint)arg3 taskId:(id)arg4;
- (id)getCurGameLiveLaunchModel;
- (void)cleanCurGameLiveLaunchModel;
- (id)genGameLiveAuthVC;
- (void)goNextVCOnCreateAccountSuccessForGameLive;
- (void)goNextVCOnPolicyDoneForGameLive;
- (void)clearCachedWeAppForTask:(id)arg1 wegameOnly:(BOOL)arg2;
- (void)cancelLiveWeAppPreload;
- (void)preloadLiveWithContentVMArray:(id)arg1;
- (void)preloadLiveWithLiveContentVms:(id)arg1;
- (void)preloadLiveWithFinderDataItemsImpl:(id)arg1;
- (void)liveCDNPreloader:(id)arg1 didFinishPreloadUrl:(id)arg2;
- (void)liveCDNPreloader:(id)arg1 didFailPreloadUrl:(id)arg2 error:(id)arg3;
- (id)startFinderLiveForPcCastingWithParamsModel:(id)arg1 castingInfo:(id)arg2 castDelegate:(id)arg3 finderObjectMustValid:(BOOL)arg4 navigationController:(id)arg5 externCameraCastingAdapter:(id)arg6;
- (id)updateFinderLiveTaskForCameraCast:(id)arg1 castDelegate:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDefaultData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)registerNotification;
- (void)unRegisterNotification;
- (void)registerCallCenter;
- (void)clearDataForExitLive:(BOOL)arg1;
- (void)clearDataForExitLive:(BOOL)arg1 force:(BOOL)arg2;
- (void)clearLiveContainerLogic;
- (void)checkAndReportLiveViewControllerLeak:(id)arg1;
- (void)checkAndReportLiveTaskLeak:(id)arg1;
- (void)checkAndReportLivePivotViewControllerLeak:(id)arg1;
- (void)updateAllLiveClosedFlag:(BOOL)arg1;
- (void)clearData;
- (void)ensureLiveViewControllerDetached:(id)arg1;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7 useVerticalFullscreenMinimization:(BOOL)arg8 routeParam:(id)arg9;
- (void)startLiveWithTask:(id)arg1 navigationController:(id)arg2;
- (id)liveFunctionSwitchFlagsForAnchorFinderUsername:(id)arg1;
- (id)liveFunctionSwitchFlagsForTaskID:(id)arg1;
- (BOOL)containTask:(id)arg1;
- (void)registerLiveTask:(id)arg1;
- (void)unregisterLiveTask:(id)arg1;
- (void)closeCurrentLiveAndRemoveMinimizeTaskWithCompletion:(id /* block */)arg1;
- (void)stopLive:(unsigned long long)arg1;
- (void)stopLive:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)attachStopStateDisplayControllerForInterruptBusiness:(unsigned long long)arg1;
- (void)cacheLastLiveTask;
- (void)reenterLastLiveTaskIfNeeded;
- (void)startFinderLiveBySquareSingFromVC:(id)arg1 commentScene:(int)arg2 dataItems:(id)arg3 songItem:(id)arg4;
- (void)deleteLiveControllers;
- (void)closeStopStateDisplayVCAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)removeCurrentLiveMinimizeTask;
- (void)closeCurrentLive;
- (void)closeCurrentLiveDirectly;
- (void)closeCurrentLiveDirectlyWithCompletion:(id /* block */)arg1;
- (void)transferCurrentLiveToPrimitiveWithCompletion:(id /* block */)arg1;
- (void)updatePrimitiveTask:(id)arg1;
- (void)quitLiveWithoutNavigation;
- (void)minimizeLive;
- (void)minimizeLiveWithCompletion:(id /* block */)arg1;
- (void)notifyLiveExtendAnimationDidEnd;
- (void)notifyLiveWillStart;
- (id)getLiveTask:(id)arg1;
- (id)getBaseLiveTask:(id)arg1;
- (id)currentTask;
- (id)getFinderLiveFunctionTask:(id)arg1;
- (id)currentFeedStreamTask;
- (id)finderLiveViewController;
- (id)getCurrentPresentViewController;
- (id)getCurrentParticipantWaitingViewController;
- (id)getCurrentContentViewController;
- (id)getCurrentLiveViewController;
- (id)getCurrentLiveReplayViewController;
- (BOOL)isViewControllerPushedFromLiveRoom:(id)arg1;
- (BOOL)isViewControllerPresentedFromLiveRoom:(id)arg1;
- (BOOL)isViewControllerFromSheetOverLiveRoom:(id)arg1;
- (BOOL)isLiveViewControllerIsVisible;
- (BOOL)isLiveViewControllerIsVisibleLooseCheck:(BOOL)arg1;
- (BOOL)isFullPageSheetPageOverLiveVC;
- (BOOL)isFullPageSheetPageOverLiveVCLooseCheck:(BOOL)arg1;
- (BOOL)isAnyPageSheetOverLiveVc;
- (id)pageSheetNavigationController;
- (BOOL)isLiveViewDetachedFromPageStack;
- (BOOL)isMinimizeTaskMgrContainLive;
- (void)resignRestrictedMode;
- (void)makeLiveViewController;
- (void)makeLiveViewControllerAnimated:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)dismissWeAppIfNeededWithPresentedVC:(id)arg1 targetVC:(id)arg2 animated:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)dismissPresentedVCStackAnimated:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)popToLiveVCWithoutPresentedAnimated:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)dismissFullScreenAvatarView:(id)arg1;
- (void)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)popToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)execCompletion:(id /* block */)arg1 needDismissLiveVC:(BOOL)arg2 animated:(BOOL)arg3;
- (void)dismissLiveVCAndExec:(id /* block */)arg1 animated:(BOOL)arg2;
- (void)dismissLiveViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)fadeOutLiveViewControllerComplete:(id /* block */)arg1;
- (id)liveGiftResourceMgr;
- (long long)currentTransitionState;
- (BOOL)isSupportGPUSampling;
- (BOOL)isLive;
- (BOOL)isLiveAsAnchor;
- (BOOL)isLiveAsAudience;
- (BOOL)isAnchorInNotConnectMic;
- (BOOL)isAudienceInNotConnectMic;
- (BOOL)isLiveInMainAppScene;
- (BOOL)isLiveExistInIpad;
- (void)pauseLiveAnchorPausedForOuter;
- (void)resumeLiveAnchorPausedForOuter;
- (void)notifyAutoCheckInterfaceOrientationsIfNeeded;
- (unsigned long long)getCurrentLiveAppScene;
- (void)changeLiveAppScene:(unsigned long long)arg1;
- (void)updateLiveCurrentAppSceneWithView:(id)arg1;
- (id)getLiveInAppScene:(unsigned long long)arg1;
- (id)getCurrentStopingLive;
- (BOOL)judgeIsLiveWithoutIgnoreSpecialScene;
- (BOOL)isLiveAndUsingMicForReport;
- (BOOL)isLiveAndPushViaTrtc;
- (void)updateNeedDisplayLotteryEntrance;
- (void)updateSelfLikeHighCheerCount;
- (BOOL)isLiveWithoutCalling;
- (BOOL)isLiveAndUsingMic;
- (unsigned long long)enableBeInterruptInMinimize;
- (BOOL)isLiveAndUsingCamera;
- (BOOL)isLiveAndUsingCameraWithCheckMonoServiceRelease:(BOOL)arg1;
- (BOOL)isShowMinimizeWindow;
- (BOOL)isShowWindowOverLiveVC;
- (BOOL)isShowHomePageBottomPlayerView;
- (void)addAudioMonoService;
- (void)addVideoMonoService;
- (void)removeAudioMonoServiceBusinessForIPad;
- (void)releaseAudioMonoService;
- (void)releaseVideoMonoService;
- (BOOL)isCurrentLiveHoldAudioMonoService;
- (void)cancelRevertAudioSessionAndCategoryDelay;
- (void)revertAudioSessionAndCategoryDelay;
- (void)revertAudioSessionAndCategory;
- (BOOL)resolveLiveAppSceneConflictsForStartLive:(unsigned long long)arg1 fromView:(id)arg2 toast:(BOOL)arg3;
- (id)currentLiveAudioModule:(int)arg1;
- (void)cancelAudioModuleInterruptionNotify;
- (void)updateAudioModuleScenePriority:(id)arg1 priority:(unsigned char)arg2;
- (void)revertAudioModuleScenePriority:(id)arg1;
- (void)cleanMorphDismissTarget:(id)arg1;
- (id)getPivotSrcUrl;
- (long long)getRelatedLiveShowPosition;
- (void)refreshSelfBadgeInfoWithCompletion:(id /* block */)arg1;
- (void)notifyCurrLiveVCAutoRotateToOrientation:(long long)arg1 completion:(id /* block */)arg2 ignoreTopWindow:(BOOL)arg3;
- (void)notifyCurrLiveVCAutoRotateToAnchorMainOrientation:(id /* block */)arg1 ignoreTopWindow:(BOOL)arg2;
- (id)getMagicEngineMemoryManager;
- (void)performTaskBlock:(id /* block */)arg1;
- (void)performTaskBlock:(id /* block */)arg1 priority:(long long)arg2;
- (void)performTaskBlock:(id /* block */)arg1 priority:(long long)arg2 asyncEnd:(BOOL)arg3;
- (void)ignoreNonEssentialTasks:(BOOL)arg1;
- (void)startTaskScheduler;
- (void)pauseTaskScheduler;
- (void)resumeTaskScheduler;
- (unsigned long long)numberOfTasks;
- (id)getKTVBoxWithTaskId:(id)arg1;
- (void)resetLastTXLiveCategorySetParam;
- (BOOL)checkCurrCanSetTXLiveCategorySetParam;
- (void)updateNeedDisplayAppSceneEntrance;
- (BOOL)enableDisplayAppSceneEntrance;
- (void)pauseForAntiAddictChect;
- (void)resumeForAntiAddictChect;
- (void)triggerLiveAntiAddictCheckFromVC:(id)arg1;
- (void)unableCurrentLivePlayingForAudienceInMainScene:(BOOL)arg1;
- (void)enableCurrentLivePlayingForAudience;
- (BOOL)muteLiveRemoteAudioForSysInterrupt;
- (BOOL)muteLiveRemoteAudioFromOuter;
- (BOOL)muteLiveRemoteAudioForAdVideo;
- (BOOL)muteLiveRemoteAudioForLeaveToAppGame;
- (BOOL)muteLiveRemoteAudioFromErrPage;
- (BOOL)muteLiveRemoteAudioForInterrupt:(unsigned long long)arg1;
- (BOOL)muteLiveNeedToastRemoteAudioForInterrupt:(unsigned long long)arg1;
- (BOOL)muteLiveRemoteAudio;
- (BOOL)unmuteLiveRemoteAudioForSysInterrupt;
- (BOOL)checkAndUnMuteLiveRemoteAudioFromOuterInterrupt;
- (BOOL)unmuteLiveRemoteAudioForInterrupt;
- (BOOL)unmuteLiveRemoteAudioFromOuter;
- (BOOL)unmuteLiveRemoteAudioForAdVideo;
- (BOOL)unmuteLiveRemoteAudioForLeaveToAppGame;
- (BOOL)unmuteLiveRemoteAudioForErrorPage;
- (BOOL)muteLiveRemoteAudioForTempPause;
- (BOOL)unmuteLiveRemoteAudioForTempPause;
- (BOOL)muteLiveRemoteAudioForInterimItem;
- (BOOL)unmuteLiveRemoteAudioForInterimItem;
- (BOOL)unmuteLiveRemoteAudio;
- (void)checkNeedReleaseAudioServiceWhenMinimize;
- (void)handleAudioIntteruptForAudienceWhenMinimizeChangeInIphone;
- (BOOL)isInSysIntterupting;
- (BOOL)isCurrentLiveAudioModuleCanSetActive;
- (void)handleSysIntteruptBeginForAudience;
- (void)handleSysIntteruptEndForAudience;
- (void)handleOuterIntteruptBeginForAudience;
- (void)handleOuterIntteruptEndForAudience;
- (BOOL)canAutoReport;
- (void)updateLiveViewForMinimizeWindow:(id)arg1;
- (void)showLiveInMinimizedWindow;
- (void)dismissLiveMinimizedWindow;
- (void)reportCurrentState;
- (id)getExtraInfoForLiveId:(unsigned long long)arg1;
- (void)removeExtraInfoForLiveId:(unsigned long long)arg1;
- (id)getStaticCacheInfoForLiveId:(unsigned long long)arg1;
- (void)showAlert:(id)arg1;
- (void)showForbidLiveViewWithTitle:(id)arg1 andContent:(id)arg2 withLinkContent:(BOOL)arg3 withConfirmBlock:(id /* block */)arg4;
- (void)showConfirmWithTitle:(id)arg1 message:(id)arg2 confirmButtonText:(id)arg3 withConfirmBlock:(id /* block */)arg4;
- (BOOL)attachFinderLiveViewController:(id)arg1;
- (BOOL)detachFinderLiveViewController;
- (BOOL)presentPivotView:(id)arg1 animated:(BOOL)arg2;
- (void)restartLiveWithPivotView:(id)arg1 navigation:(id)arg2;
- (void)dismissTopViewController;
- (void)dismissLiveViewControllerWithClearSrc;
- (void)dismissLiveViewControllerWithClearSrc:(id /* block */)arg1;
- (void)openLiveViewControllerForAnchor;
- (BOOL)openLiveViewController:(id)arg1 fadeIn:(BOOL)arg2;
- (BOOL)openFinderLiveReplayViewController:(id)arg1;
- (void)createVerifiedMobileViewController;
- (id)currentUIStateInfo;
- (id)extraInfoDict;
- (id)staticCacheInfoDict;
- (BOOL)isReleaseMonoService;
- (void)setIsReleaseMonoService:(BOOL)arg1;
- (id)liveTempCacheInfo;
- (id)currentAudioMonoServiceId;
- (id)currentVideoMonoServiceId;
- (void)updateLastUserTapOpenedLiveId:(unsigned long long)arg1;
- (void)changeToCategoryPlayback;
- (id)getCurrentAttachWindow;
- (BOOL)enableOpenLiveVCInFadeInMode;
- (void)onMinimizeWindowWillDisplay;
- (void)onMinimizeWindowDidHide;
- (void)updateMetricsCustomInfo;
- (void)resetFinderReportExtInfoIfNeeded;
- (void)updateTXLiveCategorySetParam:(id)arg1;
- (id)getNowPlayingControlLogicAutoCreateIfNotExist:(BOOL)arg1;
- (BOOL)enableNowPlayingControl;
- (void)setMemberLiveEnabled:(BOOL)arg1;
- (BOOL)memberLiveEnabled;
- (void)setLiveContainerLogic:(id)arg1;
- (BOOL)isKitchenOpenLivePerformAnalysisEntrance;
- (BOOL)recommendSettingEntranceEnabled;
- (BOOL)debug_forbidDisplayLive;
- (BOOL)debug_forbidDisplayBanner;
- (id)giftNewCustomMagicRewardResManager;
- (id)liveContainerLogicHandler;
- (BOOL)isInPrimitiveLive;
- (id)p2pStreamIdsInRoom;
- (void)onMMLiveViewControllerClose:(BOOL)arg1;
- (void)onMMLiveViewControllerClose:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onMMLiveViewControllerClose:(BOOL)arg1 navigate:(BOOL)arg2;
- (void)onMMLiveViewControllerCloseAndNavigateToCompleteVC:(id)arg1;
- (void)onMMLiveViewControllerCancel;
- (void)onMMLiveViewControllerMinimize:(id /* block */)arg1;
- (void)onMMLiveViewControllerStarterFinished:(BOOL)arg1 extraInfo:(id)arg2;
- (void)onLiveViewExtendAnimationDidEnd;
- (void)onLiveViewQuitAnimationWillStart;
- (void)onLiveViewQuitAnimationDidEnd;
- (void)onLiveViewQuitAnimationDidEndExitLive:(BOOL)arg1;
- (void)onLiveViewCollapseAnimationDidEnd;
- (void)onLiveViewMinimizeInteractiveDidEnd;
- (void)onLiveViewCollapseAnimationWillStartBeforeAdjustRotation;
- (void)onLiveViewCollapseAnimationWillStart;
- (void)onLiveViewExtendFromCollapseAnimationWillStart;
- (void)onLiveViewExtendFromCollapseAnimationDidEnd;
- (void)onLiveViewMinimizeInteractiveWillEnd;
- (void)onLiveViewMinimizedWindowWillShow;
- (void)onLiveViewMinimizedWindowShowed;
- (void)onLiveViewMinimizedWindowDismiss;
- (void)onLiveMinimizeWindowAttachLiveView;
- (void)onLiveMinimizeWindowDismissLiveView;
- (void)onLiveHomePageBottomPlayerAttachLiveView;
- (void)onLiveContainerLogicHomePageBottomPlayerLiveViewAppearanceChanged:(BOOL)arg1;
- (long long)onLiveViewRequestPreviousOrientation;
- (BOOL)enableFinderLiveUsePIPMinimizeWindow;
- (void)onPIPMinimizeWindowAttachLiveView;
- (void)onPIPMinimizeWindowDismissLiveView;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)BeginSysInterruption:(int)arg1;
- (void)EndSysInterruption:(int)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)enterLiveAfterVerified;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (BOOL)muteLiveNeedToastRemoteAudioForInterrupt;
- (void)onAudioMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (void)delayCheckAndUnMuteRemoteAudio;
- (void)checkAndUnMuteRemoteAudio;
- (void)handleAudioIntteruptBeginInIpad:(unsigned long long)arg1;
- (void)handleAudioIntteruptEndInIpad;
- (void)handleAudioIntteruptForAudienceWhenMinimizeChangeInIpad;
- (BOOL)isIpadCurrentHasLiveMonoService;
- (unsigned long long)getCurrentMonoServiceTypeInIpadExceptLive;
- (void)cancelDelayUnMuteLiveForInterrupt;
- (void)delayCheckAndRestartLive;
- (void)checkAndRestartLive;
- (void)cancelDelayRestartLiveForInterrupt;
- (void)onVideoMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onVideoMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onMMLivePolicyViewDidBePopedOrDismissed;
- (void)onMMLivePolicyViewConfirmButtonClicked;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)arg1;
- (void)onFinderLiveVerified:(id)arg1 isNameVerified:(BOOL)arg2 withVerifyUrl:(id)arg3 withEntryType:(long long)arg4;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)setLiveTask:(id)arg1;
- (void)updateLastUserTypeWithTask:(id)arg1;
- (void)createTaskSchedulerIfNeed;
- (void)startLoadingWithOverLimitTime:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)stopLoading;
- (void)stopLoadingOverTime;
- (id)getLiveTrialRecordForLiveId:(unsigned long long)arg1;
- (unsigned int)getLiveTrialRemainTimeForDataItem:(id)arg1;
- (unsigned int)getLiveTrialTotalLimitTimeForDataItem:(id)arg1;
- (void)updateLiveTrialRemainTime:(unsigned int)arg1 totalLimitTime:(unsigned int)arg2 trialEndTime:(unsigned int)arg3 forLiveId:(unsigned long long)arg4;
- (BOOL)getTryViewPaidTagForLiveId:(unsigned long long)arg1;
- (void)updateTryViewPaidTag:(BOOL)arg1 forLiveId:(unsigned long long)arg2;
- (id)tryViewPayedTagDict;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMainSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (void)onSubSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (void)onSubSceneClosed;
- (void)onSubSceneOpenFailed;
- (void)onLimitedModeChanged;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (BOOL)closeLivePIPMode;
- (void)setCloseLivePIPMode:(BOOL)arg1;
- (void)updateNeedDisplayPIPEntrance;
- (void)updatePIPPerformanceComputeParams;
- (int)audioModuleScene;
- (void)checkAndSetAudioModuleActive;
- (BOOL)isSupportPictureInPictureAutoStartInCurrLive;
- (BOOL)isCurrHasPIPModuleAuthority;
- (void)addIsInLiveSquareVc:(id)arg1;
- (void)removeIsInLiveSquareVc:(id)arg1;
- (BOOL)checkIsInLiveSquareVc;
- (void)revertAudioSessionAndCategoryForOuterIfNeeded;
- (void)removeAllInLiveSquareVcFlag;
- (id)isInLiveSquareVcSet;
- (BOOL)checkAudioModuleIsNotInFinderLiveSence;
- (BOOL)checkAudioModuleInFinderLiveSence;
- (void)checkNeedShowAdvertisement:(double)arg1;
- (void)checkNeedShowAdvertisement:(double)arg1 adInfo:(id)arg2;
- (BOOL)isShowAdInStream:(long long)arg1;
- (BOOL)isShowAdInTrailer:(long long)arg1;
- (BOOL)isPreloadAd:(long long)arg1;
- (id)filterValidVideoAdInfo:(double)arg1 adInfoArr:(id)arg2;
- (void)checkAllAdInfoNeedPreload:(id)arg1 anchorTime:(double)arg2;
- (void)showAdvertisementInLive:(id)arg1 initialPlayTime:(unsigned int)arg2;
- (void)showFinderLiveTrailerBannerViewInLive:(id)arg1;
- (void)audioModuleDidActive:(id)arg1;
- (BOOL)onBaseAdapterAudioSessionCategoryCheckCanSet:(id)arg1;
- (void)onBaseAdapterAudioSessionCategoryWillSet:(id)arg1;
- (void)onBaseAdapterAudioSessionCategoryDidSet:(id)arg1;
- (void)onWindowLevelChanged;
- (void)updateInterfaceOrientationsIfNeeded;
- (BOOL)isCurrentLiveNeedFixCurrOrientation;
- (BOOL)enableForceRotateToLandscape;
- (BOOL)isCurrentAttachWindowTopAndKey;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (BOOL)isWatchingLiveNotMinimizeMode;
- (void)replayKitStopLive;
- (void)foldToWindowIfNeeded;
- (BOOL)isMinimizeMode;
- (void)setIsMinimizeMode:(BOOL)arg1;
- (BOOL)supportLandScape;
- (void)setSupportLandScape:(BOOL)arg1;
- (id)currentPivotViewController;
- (void)setCurrentPivotViewController:(id)arg1;
- (id)liveContainerLogic;
- (unsigned long long)needDisplayLotteryEntrance;
- (void)setNeedDisplayLotteryEntrance:(unsigned long long)arg1;
- (unsigned long long)needDisplayPIPEntrance;
- (void)setNeedDisplayPIPEntrance:(unsigned long long)arg1;
- (unsigned long long)selfLikeHighCheerCount;
- (void)setSelfLikeHighCheerCount:(unsigned long long)arg1;
- (id)pipPerformanceComputeParamConfig;
- (void)setPipPerformanceComputeParamConfig:(id)arg1;
- (id)selfCreatedFansGroup;
- (void)setSelfCreatedFansGroup:(id)arg1;
- (void)setCurrentUIStateInfo:(id)arg1;
- (void)setLiveTempCacheInfo:(id)arg1;
- (BOOL)isAllLiveClosed;
- (void)setIsAllLiveClosed:(BOOL)arg1;
- (unsigned long long)lastUserTapOpenedLiveId;
- (void)setLastUserTapOpenedLiveId:(unsigned long long)arg1;
- (unsigned long long)lastUserTapOpenedLiveTimestamp;
- (void)setLastUserTapOpenedLiveTimestamp:(unsigned long long)arg1;
- (BOOL)isInMoreLiveScene;
- (void)setIsInMoreLiveScene:(BOOL)arg1;
- (id)finderCoCertRewardInfo;
- (void)setFinderCoCertRewardInfo:(id)arg1;
- (BOOL)openLivePromoteExtend;
- (void)setOpenLivePromoteExtend:(BOOL)arg1;
- (BOOL)openLivePromotionMiniapp;
- (void)setOpenLivePromotionMiniapp:(BOOL)arg1;
- (BOOL)gestureMasterSwitchEnabled;
- (void)setGestureMasterSwitchEnabled:(BOOL)arg1;
- (BOOL)isInFinderDiscoveryLiveScene;
- (void)setIsInFinderDiscoveryLiveScene:(BOOL)arg1;
- (BOOL)isInNearbyMoreLiveScene;
- (void)setIsInNearbyMoreLiveScene:(BOOL)arg1;
- (BOOL)openLiveOpPromotionMiniapp;
- (void)setOpenLiveOpPromotionMiniapp:(BOOL)arg1;
- (id)gameLiveLaunchModel;
- (void)setGameLiveLaunchModel:(id)arg1;
- (id)readStatMgr;
- (void)setReadStatMgr:(id)arg1;
- (BOOL)achievementsPanelEnabled;
- (void)setAchievementsPanelEnabled:(BOOL)arg1;
- (BOOL)imageStickerEnabledForTextType;
- (void)setImageStickerEnabledForTextType:(BOOL)arg1;
- (BOOL)imageStickerEnabledForImageType;
- (void)setImageStickerEnabledForImageType:(BOOL)arg1;
- (BOOL)anchorCustomizeRewardEnabled;
- (void)setAnchorCustomizeRewardEnabled:(BOOL)arg1;
- (BOOL)emoticonCommentSwitchEnabled;
- (void)setEmoticonCommentSwitchEnabled:(BOOL)arg1;
- (BOOL)aiAssistantSwitchEnabled;
- (void)setAiAssistantSwitchEnabled:(BOOL)arg1;
- (BOOL)aiAssistantMasterSwitchEnabled;
- (void)setAiAssistantMasterSwitchEnabled:(BOOL)arg1;
- (void)setRecommendSettingEntranceEnabled:(BOOL)arg1;
- (void)setP2pStreamIdsInRoom:(id)arg1;
- (void)setGiftNewCustomMagicRewardResManager:(id)arg1;
- (id)lastTXLiveCategorySetParam;
- (void)setLastTXLiveCategorySetParam:(id)arg1;
- (void)setLiveContainerLogicHandler:(id)arg1;
- (id)createLiveLogic;
- (void)setCreateLiveLogic:(id)arg1;
- (id)lastTaskModel;
- (void)setLastTaskModel:(id)arg1;
- (id)parentFeedListViewController;
- (void)setParentFeedListViewController:(id)arg1;
- (void)setDebug_forbidDisplayLive:(BOOL)arg1;
- (void)setDebug_forbidDisplayBanner:(BOOL)arg1;
- (id /* block */)forbidLiveConfirmBlock;
- (void)setForbidLiveConfirmBlock:(id /* block */)arg1;
- (id)callObserver;
- (void)setCallObserver:(id)arg1;
- (unsigned long long)needDisplayAppSceneEntrance;
- (void)setNeedDisplayAppSceneEntrance:(unsigned long long)arg1;
- (id /* block */)loadingCompletionBlock;
- (void)setLoadingCompletionBlock:(id /* block */)arg1;
- (BOOL)isViewDismissedDuringCreateLiveSession;
- (void)setIsViewDismissedDuringCreateLiveSession:(BOOL)arg1;
- (void)setExtraInfoDict:(id)arg1;
- (void)setTryViewPayedTagDict:(id)arg1;
- (void)setStaticCacheInfoDict:(id)arg1;
- (unsigned long long)appScene;
- (void)setAppScene:(unsigned long long)arg1;
- (id)limitedBusinessMgr;
- (void)setLimitedBusinessMgr:(id)arg1;
- (void)setAudioModuleScene:(int)arg1;
- (unsigned char)originPriority;
- (void)setOriginPriority:(unsigned char)arg1;
- (void)setIsInLiveSquareVcSet:(id)arg1;
- (id)taskScheduler;
- (void)setTaskScheduler:(id)arg1;
- (BOOL)isAppActive;
- (void)setIsAppActive:(BOOL)arg1;
- (id)giftNewCustomMagicEngineMemoryManager;
- (void)setGiftNewCustomMagicEngineMemoryManager:(id)arg1;
- (id)stayTimeReporter;
- (void)setStayTimeReporter:(id)arg1;
- (BOOL)tempHoldAudioMonoService;
- (void)setTempHoldAudioMonoService:(BOOL)arg1;
- (id)primitiveTask;
- (void)setPrimitiveTask:(id)arg1;
- (id)nowPlayingControlLogic;
- (void)setNowPlayingControlLogic:(id)arg1;
- (BOOL)useNewGiftResourcesManagement;
- (void)setUseNewGiftResourcesManagement:(BOOL)arg1;
- (id)anchorFunctionSwitchFlagsMap;
- (void)setAnchorFunctionSwitchFlagsMap:(id)arg1;
- (id)finderLiveTokenLockObject;
- (id)finderLiveTokensDictionaries;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)liveViewController;
- (void)setLiveViewController:(id)arg1;
- (id)dictLiveId2Task;
- (void)setDictLiveId2Task:(id)arg1;
- (id)liveTask;
- (id)dictTaskId2FeedTask;
- (void)setDictTaskId2FeedTask:(id)arg1;
- (id)feedStreamTask;
- (void)setFeedStreamTask:(id)arg1;
- (BOOL)hasClearedData;
- (void)setHasClearedData:(BOOL)arg1;
- (id)conflictHandler;
- (void)setConflictHandler:(id)arg1;
- (id)policyViewController;
- (void)setPolicyViewController:(id)arg1;
- (id)nameVerifyViewController;
- (void)setNameVerifyViewController:(id)arg1;
- (id)currentPreviewViewController;
- (void)setCurrentPreviewViewController:(id)arg1;
- (id)currentReplayViewController;
- (void)setCurrentReplayViewController:(id)arg1;
- (id)currentParticipantWaitingViewController;
- (void)setCurrentParticipantWaitingViewController:(id)arg1;
- (id)redPacketCreateLiveViewModel;
- (void)setRedPacketCreateLiveViewModel:(id)arg1;
- (id)webOperationCreateLiveViewModel;
- (void)setWebOperationCreateLiveViewModel:(id)arg1;
- (id)gameCreateLiveViewModel;
- (void)setGameCreateLiveViewModel:(id)arg1;
- (id)bizLiveCreateLiveViewModel;
- (void)setBizLiveCreateLiveViewModel:(id)arg1;
- (id)roomIds;
- (void)setRoomIds:(id)arg1;
- (id)createUserCoordinator;
- (void)setCreateUserCoordinator:(id)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (unsigned int)gameVersionType;
- (void)setGameVersionType:(unsigned int)arg1;
- (id)liveLogic;
- (void)setLiveLogic:(id)arg1;
- (id)stopStateDisplayVC;
- (void)setStopStateDisplayVC:(id)arg1;
- (id)cdnLivePreloader;
- (void)setCdnLivePreloader:(id)arg1;
- (void).cxx_destruct;
@end
