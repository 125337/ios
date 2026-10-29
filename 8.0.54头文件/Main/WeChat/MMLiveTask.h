@interface MMLiveTask : MMLiveBaseTask <TRTCCloudDelegate, TRTCVideoRenderDelegate, MMLiveAnchorSEISynchronizeExt, MMLiveMangerPusherDelegate, CNetworkStatusExt, MMXp2pWrapperDelegate, TXPIPManagerExt, CameraScanViewControllerExtention, WeEffectManagerResultDelegate, WeEffectEnergyController, MMLiveCaptureAdapterDelegate, MMLivePushAdapterDelegate, MMLiveMetricsMonitorDelegate, MMLiveViewDelegate, MMLiveConflictHandling, MMLiveAnchorSEISynchronizeDelegate>
{
    BOOL _secondaryDeviceCloseLiveSwitch; // +0x8
    BOOL _isInRoom; // +0x9
    BOOL _isDefaultCDNPlay; // +0xa
    BOOL _isLiveAfterAbnormalExit; // +0xb
    BOOL _isLocalAudioStarted; // +0xc
    BOOL _isFaceVerifying; // +0xd
    BOOL _isTakingLivePhoto; // +0xe
    BOOL _isUsedAfterLiveExited; // +0xf
    BOOL _willExit; // +0x10
    BOOL _isExit; // +0x11
    BOOL _isExitLiveByMorphTransition; // +0x12
    BOOL _shouldLiveKeepAudioEnabledAfterMorphDismiss; // +0x13
    BOOL _isLivePaused; // +0x14
    BOOL _isLiveUnablePlay; // +0x15
    BOOL _isLivePausedByPIP; // +0x16
    BOOL _isLivePausedForClosePIP; // +0x17
    BOOL _isLivePausedForEnterBackground; // +0x18
    BOOL _isLivePausedForPaidLiveTrialTimeup; // +0x19
    BOOL _isLivePausedForPaidLiveScreenCapturing; // +0x1a
    BOOL _isLivePausedByMinimizeWindow; // +0x1b
    BOOL _isLivePausedForOuter; // +0x1c
    BOOL _isLivePausedForSysIntterupt; // +0x1d
    BOOL _isLivePausedByHomepagePlayer; // +0x1e
    BOOL _isLiveMuteForIntterupt; // +0x1f
    BOOL _isLiveMuteForSysIntterupt; // +0x20
    BOOL _isLiveMuteForOuter; // +0x21
    BOOL _isLiveMuteForAdVideo; // +0x22
    BOOL _isLiveMuteForLeaveToAppGame; // +0x23
    BOOL _isLiveMuteForErrorPage; // +0x24
    BOOL _isReleaseMonoService; // +0x25
    BOOL _isAnchorOpenAfterCrash; // +0x26
    BOOL _isAudioConnectedMic; // +0x27
    BOOL _isVideoConnectedMic; // +0x28
    BOOL _isUsingCamera; // +0x29
    BOOL _isCurrentUsingCamera; // +0x2a
    BOOL _isOnlineStateButtonDisabled; // +0x2b
    BOOL _isAllowLiveReward; // +0x2c
    BOOL _isAllowFreeTalk; // +0x2d
    BOOL _isAllowConnectMic; // +0x2e
    BOOL _isAllowPaidConnectMic; // +0x2f
    BOOL _isFocusOnInNormalConnectMicPrelive; // +0x30
    BOOL _isPreBanComment; // +0x31
    BOOL _isPreBanLike; // +0x32
    BOOL _isPreOpenGloryList; // +0x33
    BOOL _isBanLikeStatusChanged; // +0x34
    BOOL _isMicMuted; // +0x35
    BOOL _isPreHiddenAudienceName; // +0x36
    BOOL _isEnableLiveSongs; // +0x37
    BOOL _isPreOpenSkinSeg; // +0x38
    BOOL _isAllowSettingBGMusic; // +0x39
    BOOL _isPreEnableGiftWall; // +0x3a
    BOOL _isPreEnableAnchorRealtimeDataPanel; // +0x3b
    BOOL _isPreAllowProductQuestion; // +0x3c
    BOOL _hasShownVideoZoomGuideView; // +0x3d
    BOOL _isApplyOrConnectingMicWithOtherAnchor; // +0x3e
    BOOL _isRulePoped; // +0x3f
    BOOL _useCachedPlayingDataItemWhenEnterLive; // +0x40
    BOOL _useABRCfg; // +0x41
    BOOL _isInBackgroundFlag; // +0x42
    BOOL _isLiveQosReportEnabled; // +0x43
    BOOL _isLiveQosControlEnabled; // +0x44
    BOOL _isLivePlayInfoReportEnabled; // +0x45
    BOOL _isLivePlayInfoControlEnabled; // +0x46
    BOOL _hasSwitchedStreamByQosControl; // +0x47
    BOOL _isFrontCamera; // +0x48
    BOOL _isFrontCameraMirrored; // +0x49
    BOOL _isHEVCEncEnable; // +0x4a
    BOOL _isHEVCEncUsing; // +0x4b
    BOOL _useCustomVideoEncodeResolution; // +0x4c
    BOOL _isAntiAddictPause; // +0x4d
    BOOL _isAllLiveAngleSupportRotate; // +0x4e
    BOOL _ignoreCacheClarity; // +0x4f
    BOOL _localSwitchCdnOrTrtc; // +0x50
    BOOL _isLiveAnchorPausedForOuter; // +0x51
    BOOL _debug_enableLikeAnimation; // +0x52
    BOOL _debug_enableCommentNotifyAnimation; // +0x53
    BOOL _debug_enableGiftNotificationAnimation; // +0x54
    BOOL _debug_enableGiftPagAnimation; // +0x55
    BOOL _debug_enableBannerAnimation; // +0x56
    BOOL _previewLocalCameraOnForMicAudience; // +0x57
    BOOL _isRecordLive; // +0x58
    BOOL _hasSetLivePushMode; // +0x59
    BOOL _hasCreatedAudioEffectMgrBeforeEnterRoom; // +0x5a
    BOOL _isVideoParamSetOK; // +0x5b
    BOOL _isAudioParamSetOK; // +0x5c
    BOOL _isLocalAudioMuted; // +0x5d
    BOOL _isPlayerReportExtended; // +0x5e
    BOOL _hasStartedSyncAnchorSEIUserStatus; // +0x5f
    BOOL _hasSetPureAudioModeForAudience; // +0x60
    BOOL _isAudienceInSwitchRoleProcess; // +0x61
    BOOL _enableSwitchStream; // +0x62
    BOOL _forceHEVCMixing; // +0x63
    BOOL _isAllowFp16; // +0x64
    BOOL _cdnPlayerItemHasEverStartedPlay; // +0x65
    BOOL _shouldHideLoadingForUsingCachedCdnPlayerItem; // +0x66
    BOOL _shouldUpdateChannelInfoDictAfterSwitchChannel; // +0x67
    BOOL _shouldStartPlayForResume; // +0x68
    BOOL _isAudioRouteSetted; // +0x69
    BOOL _isCdnProcessByWeeffect; // +0x6a
    BOOL _isLiveAudioAuthorityUnActive; // +0x6b
    BOOL _enableBackgroundDecoding; // +0x6c
    BOOL _hasEverShownMultiAngle; // +0x6d
    BOOL _notifyLiveClosed; // +0x6e
    BOOL _notifyExitLive; // +0x6f
    unsigned int _videoFPS; // +0x70
    unsigned int _renderFPS; // +0x74
    unsigned int _mSEIMode; // +0x78
    unsigned int _enableP2P; // +0x7c
    unsigned int _curJoinTeamMode; // +0x80
    unsigned int _onlineUserCount; // +0x84
    unsigned int _maxOnlineUserCount; // +0x88
    unsigned int _liveNewFansCount; // +0x8c
    unsigned int _applyConnectMicCount; // +0x90
    unsigned int _connectMicSuccCount; // +0x94
    unsigned int _audienceDelayTime; // +0x98
    unsigned int _mCdnH265BackCfg; // +0x9c
    unsigned int _cdnQualitySvrcfg; // +0xa0
    unsigned int _lastCdnQuality; // +0xa4
    unsigned int _lastVideoStreamCdnQuality; // +0xa8
    unsigned int _lastCdnQualitySwitchTime; // +0xac
    unsigned int _isEnterroomFisrtTime; // +0xb0
    unsigned int _supportHEVCDec; // +0xb4
    unsigned int _stopLocalConnectMicTime; // +0xb8
    unsigned int _liveVrType; // +0xbc
    unsigned int _livePushMode; // +0xc0
    unsigned int _lastQosReportTime; // +0xc4
    unsigned int _mQosReportInterval; // +0xc8
    int _enableHostDenoise; // +0xcc
    int _enableHostClarity; // +0xd0
    unsigned int _lastTransEventTime; // +0xd4
    int _mMicAbility; // +0xd8
    unsigned int _mCDNSwitchCnt; // +0xdc
    unsigned int _enterRoomTime; // +0xe0
    unsigned int _cdnStartPlayTime; // +0xe4
    unsigned int _lastQualityChangeTime; // +0xe8
    unsigned int _mSEIReportInterval; // +0xec
    unsigned int _mReTryBackupUrlCnt; // +0xf0
    int _anchorUserTalkingCount; // +0xf4
    int _mCaptureFps; // +0xf8
    unsigned int _streamAbnormalFlag; // +0xfc
    WCFinderLiveStarterLiveModeSubItem * _selectSubItem; // +0x100
    unsigned long long _currentLiveState; // +0x108
    LiveInfo * _liveInfo; // +0x110
    TRTCParams * _trtcParams; // +0x118
    LiveSdkVideoParams * _trtcVideoParams; // +0x120
    LiveSdkAudioParams * _trtcAudioParams; // +0x128
    LiveSdkChannelParams * _trtcChannelParams; // +0x130
    long long _trtcRoleType; // +0x138
    long long _nextRoleType; // +0x140
    MMLiveView * _liveView; // +0x148
    NSString * _sessionId; // +0x150
    MMXp2pWrapper * _p2pManagerInstance; // +0x158
    unsigned long long _frontCameraMirrorMode; // +0x160
    long long _livePlayStatusForAudience; // +0x168
    long long _livePauseStatus; // +0x170
    unsigned long long _livePauseTime; // +0x178
    unsigned long long _liveStartPlayTimeMs; // +0x180
    unsigned long long _liveRecvIframeTimeMs; // +0x188
    unsigned long long _audienceConnectMicStreamMode; // +0x190
    MicSetting_PurchaseMicSetting * _purchaseMicSettingBeforeLive; // +0x198
    GameTeamUpSpecialGiftSettingDetail * _specialGiftSetting; // +0x1a0
    unsigned long long _videoEncoderParamMode; // +0x1a8
    NSMutableDictionary * _operationReportInfo; // +0x1b0
    NSError * _liveError; // +0x1b8
    long long _currTransitionState; // +0x1c0
    NSString * _currentWeAppId; // +0x1c8
    NSMutableSet * _currentPrehotWeAppIds; // +0x1d0
    NSString * _conflictWording; // +0x1d8
    UINavigationController * _navigationController; // +0x1e0
    unsigned long long _userTapOpenLiveTimestamp; // +0x1e8
    unsigned long long _beginEnterLiveTimestamp; // +0x1f0
    unsigned long long _startCdnPlayTimestamp; // +0x1f8
    unsigned long long _cdnPlayerConnectTimestamp; // +0x200
    unsigned long long _realCdnPlayOkTimestamp; // +0x208
    unsigned long long _firstShowCdnPlayerViewTimestamp; // +0x210
    unsigned long long _firstJoinLiveResponseTimestamp; // +0x218
    long long _cdnQualitySwitchCount; // +0x220
    long long _cdnQualityReduceCount; // +0x228
    MMLiveBeautyLogic * _beautyLogic; // +0x230
    NSMutableArray * _lagHistoryQueue; // +0x238
    NSArray * _seiMicTalkingUsersList; // +0x240
    NSString * _enterLiveLoadingText; // +0x248
    MMLiveMetricsMonitor * _metricsMonitor; // +0x250
    MMLiveEnergyController * _energyController; // +0x258
    NSData * _lastSeiMsg; // +0x260
    NSData * _anchorSeiMsgData; // +0x268
    NSMutableArray * _channelParamsDesc; // +0x270
    MMLiveCdnStreamInfo * _audioModeCdnStreamInfo; // +0x278
    MMLiveCdnStreamInfo * _lastCdnStreamInfo; // +0x280
    NSString * _pendingWeAppId; // +0x288
    NSString * _recentWeAppId; // +0x290
    NSString * _liveDescription; // +0x298
    NSString * _lastServerIP; // +0x2a0
    WAApptaskPublicResLogic * _weappResLogic; // +0x2a8
    MMWeEffectManager * _weeffectManager; // +0x2b0
    MMFinderLiveGiftAttackRenderLogic * _giftAttackRenderLogic; // +0x2b8
    MMFinderLiveBatchRewardAnimationWeVisionRenderer * _batchRewardAnimationWeVisionRenderer; // +0x2c0
    MMLiveFaceDetectLogic * _faceDetectLogic; // +0x2c8
    MMLiveFaceLogic * _faceLogic; // +0x2d0
    MMWeEffectManager * _cdnAudienceWeEffectManager; // +0x2d8
    MMLiveTrtcRenderingNotificationContext * _trtcRenderingNotificationContext; // +0x2e0
    unsigned long long _currentResourceID; // +0x2e8
    NSMutableDictionary * _currentResourceIdDict; // +0x2f0
    MMLiveInteractionGiftRenderLogic * _interactionGiftRenderLogic; // +0x2f8
    WCLiveBlurBtnPowerModeMonitorLogic * _blurBtnPownerModeMonitorLogic; // +0x300
    MMLiveMetricsBusinessMonitorLogic * _metricsBusinessMonitorLogic; // +0x308
    FLVNetworkInfo * _flvNetWorkInfo; // +0x310
    MMLiveStateDataInfoSession * _stateInfoSession; // +0x318
    long long _cacheCdnPixelBufferOptions; // +0x320
    long long _currAudioRoute; // +0x328
    long long _currExitState; // +0x330
    MMFinderLiveCustomPIPHandler * _customPIPHandler; // +0x338
    unsigned long long _anchorMainPreLiveOrientationMask; // +0x340
    unsigned long long _anchorMainOrientationMask; // +0x348
    long long _anchorMainDisplayMode; // +0x350
    MMTimer * _checkExpireTimer; // +0x358
    NSMutableDictionary * _remoteUserVideoInfoDict; // +0x360
    unsigned long long _mCloudAppid; // +0x368
    unsigned long long _mCloudBizid; // +0x370
    long long _mCDNSwitchMode; // +0x378
    UIView * _connectMicUserVideoView; // +0x380
    unsigned long long _anchorSEISeq; // +0x388
    unsigned long long _lastSEIReportTime; // +0x390
    NSMutableDictionary * _lastRecordLiveAudioSessionParams; // +0x398
    long long _mCaptureResEnum; // +0x3a0
    double _lastSEILogTime; // +0x3a8
    OrderedDictionary * _multiAngleChannelInfoDict; // +0x3b0
    double _lastMultiAnglePanGestureTranslationX; // +0x3b8
    double _lastMultiAnglePanGestureMovedDistanceX; // +0x3c0
    MMLiveDisplayMonitor * _displayMonitor; // +0x3c8
    NSDictionary * _anchoTimeJsonContent; // +0x3d0
    MMTimer * _anchorTTimer; // +0x3d8
    long long _currentResourceObjectId; // +0x3e0
    MMLiveWevisionWidgetManageLogic * _wevisionWidgetManageLogic; // +0x3e8
    MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager * _magicRewardMemoryManager; // +0x3f0
    MMLiveRewardGiftNewCustomizationMagicEngineEnergyManager * _magicEngineEnergyManager; // +0x3f8
    long long _cdnAudienceWeEffectScene; // +0x400
    MMLiveRemoteTrtcCustomRenderManager * _remoteTrtcCustomRenderManager; // +0x408
    MMLiveRemoteTrtcCustomRenderComposeManager * _remoteTrtcCustomComposeManager; // +0x410
    MMLiveFaceDecodeLogic * _faceDecodeLogic; // +0x418
    MMLiveRewardMagicEnginePerformanceStatisticManager * _magicEnginePerformanceStatisticManager; // +0x420
    NSMutableDictionary * _remoteTrtcCustomRenderWrapperDict; // +0x428
    LivePAGStatistics * _livePAGStatistics; // +0x430
    MMLiveFaceDetectStatisticLogic * _faceDetectStatisticLogic; // +0x438
    CdnRenderViewBase * _barrageMaskRenderView; // +0x440
    MMLivePrepareAdapter * _prepareAdapter; // +0x448
    MMLiveTRTCPushAdapter * _pushAdapter; // +0x450
    MMLiveMultiAngleChannelInfo * _currentChannelInfo; // +0x458
    MMLiveMultiAngleChannelInfo * _nextChannelInfo; // +0x460
    NSMutableDictionary * _cdnStreamInfoDict; // +0x468
    NSMutableArray * _displayedCdnStreamQualityTagList; // +0x470
    NSMutableArray * _allCdnStreamQualityTagList; // +0x478
    NSData * _qualityTagCacheBuf; // +0x480
    MMLiveCdnStreamErrorReportInfo * _cdnStreamErrorReportInfo; // +0x488
    NSMutableArray * _seiReportInfoList; // +0x490
    unsigned long long _audienceLiveState; // +0x498
    CGSize _remoteVideoFrameSize; // +0x4a0
    CGSize _localVideoFrameSize; // +0x4b0
    CGSize _customVideoEncodeResolution; // +0x4c0
    CGPoint _multiAnglePanGestureBeganLocation; // +0x4d0
}
+ (void)updateCrashAttachInfoWithLiveId:(unsigned long long)arg1 userType:(long long)arg2 tab:(id)arg3;
+ (void)updateMetricsReportInfoWithLiveId:(unsigned long long)arg1 userType:(long long)arg2 liveTask:(id)arg3;
+ (void)updateLastTaskInfo:(id)arg1;
+ (BOOL)isLiveVideoLocalHorizontalWithDisplayScene:(unsigned long long)arg1;
- (void)showAlert:(id)arg1;
- (void)showAlert:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)showToast:(id)arg1;
- (void)showConfirm:(id)arg1 message:(id)arg2 confirmTitle:(id)arg3 confirmBlock:(id /* block */)arg4;
- (void)showConfirm:(id)arg1 confirmTitle:(id)arg2 confirmBlock:(id /* block */)arg3;
- (void)showAlertInLive:(id)arg1;
- (void)showAlertInLive:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)showToastInLive:(id)arg1;
- (void)showConfirmInLive:(id)arg1 message:(id)arg2 confirmTitle:(id)arg3 confirmBlock:(id /* block */)arg4;
- (void)showConfirmInLive:(id)arg1 confirmTitle:(id)arg2 confirmBlock:(id /* block */)arg3;
- (id)finderOrNil;
- (void)setExtraReportMMInfo:(id)arg1;
- (id)extraReportMMInfo;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 andAnchorId:(id)arg3;
- (void)initFrontCameraMirrorMode;
- (void)dealloc;
- (void)clearSharedInstance;
- (void)clearForExit;
- (void)updateTrtcRoleType;
- (id)p2pManagerInstance;
- (BOOL)isAudienceWithoutMic;
- (BOOL)isWaGameLive;
- (BOOL)isLiveClosed;
- (id)anchorIdentityId;
- (BOOL)hasEverEnteredRoom;
- (void)setOnlineUserCount:(unsigned int)arg1;
- (CGSize)remoteVideoFrameSize;
- (BOOL)isSameToTask:(id)arg1;
- (BOOL)resolveConflictsWithLiveTask:(id)arg1 navigationController:(id)arg2 maximizeLiveBlock:(id /* block */)arg3 switchLiveBlock:(id /* block */)arg4;
- (BOOL)resolveExternalConflicts;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7;
- (BOOL)handleConflictForShowMinimizeWindowWithNewFinderDataItems:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7;
- (BOOL)handleConflictForCollapseMinimizeWindowWithNewFinderDataItems:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7;
- (void)showConflictAlertForLiving;
- (id)getConflictWording;
- (long long)trtcRoleTypeFromMMLiveRoleType:(long long)arg1;
- (void)initWeeffectManager;
- (void)initCdnAudienceWeEffectManagerWithScene:(long long)arg1;
- (void)destroyCdnAudienceWeEffectManager;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)arg1;
- (void)updateIsFrontCameraAndCachedValue:(BOOL)arg1;
- (void)switchMirrorMode;
- (void)updateMirrorMode;
- (void)initBeautyLogicWithBeautyPackage:(id)arg1;
- (void)initFaceDetectLogic;
- (id)faceLogic;
- (id)lastCameraModeCachedKey;
- (void)initAbnormalState;
- (void)updateCameraModeCachedValue;
- (void)checkCachedValueAndSwitchCamera;
- (void)checkCachedValueAndUpdateFrontCameraMirrored;
- (void)updateFrontCameraMirroredCachedValue;
- (void)updateMicMutedCachedValue;
- (void)checkMicMutedCachedValue;
- (void)updatePauseStatusCachedValue;
- (void)checkPauseStatusCachedValue;
- (BOOL)sdkUserIsAnchor:(id)arg1;
- (id)anchorSdkUserId;
- (void)startLocalVideo;
- (void)startLocalVideoWithView:(id)arg1;
- (void)startPreviewLocalVideoForConnectMicAudienceWithView:(id)arg1;
- (void)stopPreviewLocalVideoForConnectMicAudience;
- (BOOL)isEnableHQByDevice;
- (void)updateCameraConfigs;
- (void)stopLocalVideo;
- (void)updateLocalVideoWithOpen:(BOOL)arg1;
- (void)startRemoteViewWithUserId:(id)arg1;
- (void)stopRemoteViewWithUserId:(id)arg1;
- (void)switchRoleType:(long long)arg1;
- (BOOL)isVideoPusher;
- (void)updateSEIMode:(unsigned int)arg1;
- (void)updateLiveInfo:(id)arg1;
- (void)updateAnchorStatus:(id)arg1;
- (BOOL)checkIsConnectMicAudioAllowed;
- (BOOL)checkIsConnectMicVideoAllowed;
- (BOOL)updateLiveSdkInfo:(id)arg1 liveInfo:(id)arg2 partialUpdate:(BOOL)arg3;
- (BOOL)updateLiveSdkInfo:(id)arg1 liveInfo:(id)arg2 partialUpdate:(BOOL)arg3 forceUseCdnPlay:(BOOL)arg4 updateVideoFrameAnimated:(BOOL)arg5;
- (void)handleLiveSdkInfoAllValueUpdated:(id)arg1;
- (BOOL)updateLivePushMode:(unsigned int)arg1;
- (unsigned int)realPushMode;
- (void)checkAndUpdateMultiAngleChannelInfoDict;
- (unsigned long long)displayedCdnStreamCount;
- (id)channelParamsDesc;
- (BOOL)updateLiveSdkInfo:(id)arg1 partialUpdate:(BOOL)arg2;
- (void)setTRTCHevcEncode:(BOOL)arg1;
- (BOOL)isHEVCEncSupportedLocal;
- (void)updateLiveSDKAVParams:(id)arg1 audioParams:(id)arg2;
- (void)updatePushAudioVolumeType;
- (void)configPushAudioVolumeType;
- (long long)getCurrAudioVolumeType;
- (void)updateVideoEncoderParamWithSdkVideoParams:(id)arg1 checkKitchen:(BOOL)arg2;
- (void)limitCaptureRenderFpsAndResolutionWithEncParam:(id)arg1;
- (CGSize)getRequireVideoRenderSizeWithEncParam:(id)arg1;
- (void)cancelLimitCaptureRenderFpsAndResolution;
- (void)checkVideoEncoderParamModeAndUpdateVideoEncConfig:(id)arg1 withSdkVideoParams:(id)arg2;
- (void)updateVideoEncoderResMode;
- (void)updateTrtcPrivateMapKey:(id)arg1;
- (BOOL)clearLiveSdkInfo;
- (id)liveView;
- (id)getCurrentDisplayedCdnStreamList;
- (id)getCurrentCdnStreamInfo;
- (id)getCdnStreamInfoWithQualityTag:(unsigned int)arg1;
- (id)getCdnStreamInfoWithVideoQualityLevel:(int)arg1;
- (id)getCurrentCdnStreamInfoDict;
- (unsigned int)getCdnPlayLevelWithQualityTag:(unsigned int)arg1;
- (void)updateMutilAnglePushLiveSdkInfo:(id)arg1;
- (void)deleteMutilAngleWithStreamInfo:(id)arg1;
- (void)updateCdnStreamAndClarityWithLiveSdkParams:(id)arg1;
- (void)updateTRTCCloudMixtureParams;
- (void)setVideoEnabled:(BOOL)arg1;
- (void)setVideoEnabledWithoutDestroyRender:(BOOL)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (void)checkAndUpdateVideoMuteImageForAudioMode;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)setVideoEncoderParamMode:(unsigned long long)arg1;
- (void)setIsApplyOrConnectingMicWithOtherAnchor:(BOOL)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setMicMuted:(BOOL)arg1;
- (int)getCurrVoiceVolume;
- (void)updateCurrVoiceVolume;
- (void)setVoiceVolume:(long long)arg1;
- (id)micMutedCachedKey;
- (void)setTrtcUser:(id)arg1 isVideoEnabled:(BOOL)arg2;
- (void)setTrtcUser:(id)arg1 isAudioEnabled:(BOOL)arg2;
- (void)setTrtcUser:(id)arg1 isVideoMuted:(BOOL)arg2;
- (void)setTrtcUser:(id)arg1 isAudioMuted:(BOOL)arg2;
- (id)getRemoteUserConfig:(id)arg1;
- (void)addOrUpdateRemoteUser:(id)arg1 withRoomId:(id)arg2;
- (void)removeRemoteTrtcUser:(id)arg1;
- (BOOL)isRemoteUserInTrtcRoom:(id)arg1;
- (id)getMutableRemoteUsersDict;
- (void)enterLiveRoom;
- (BOOL)canEnableLocalCapture;
- (void)exitLiveRoom;
- (BOOL)isVideoEnabled;
- (BOOL)isAudioEnabled;
- (BOOL)isPushAdapterExisted;
- (BOOL)isAudienceConnectingMic;
- (BOOL)isAudienceWaitingConnectMicResult;
- (void)checkAndUpdateVideoConfigForConnectMicAudience;
- (void)localConnectMicWithStreamMode:(unsigned long long)arg1 liveSdkInfo:(id)arg2 nextVideoEncoderParamMode:(unsigned long long)arg3;
- (BOOL)changeConnectMicStreamMode:(unsigned long long)arg1 withMicUserUIType:(unsigned long long)arg2;
- (unsigned long long)getVideoEncoderParamModeByMicUserUIType:(unsigned long long)arg1;
- (void)stopLocalConnectMic;
- (void)startLocalVideoForConnectMic;
- (void)startSendVideoForConnectMic;
- (void)stopVideoForConnectMic;
- (void)updateConnectMicUserVideoView:(id)arg1;
- (void)localConnectRoom:(id)arg1 withUserId:(id)arg2 sdkNewPkSign:(id)arg3 andPkSign:(id)arg4;
- (void)stopLocalConnectRoom:(id)arg1;
- (void)stopAudioForConnectMic;
- (BOOL)startLocalAudioForConnectMic;
- (BOOL)startSendAudioForConnectMic;
- (void)checkAndStartSyncConnectMicSEIForAnchor;
- (void)setDefalutPlayMode:(BOOL)arg1;
- (void)stopCdnPlayer;
- (void)releaseCdnPlayer;
- (void)releaseCdnPlayerForExitLive:(BOOL)arg1;
- (void)releaseWeEffectCapture;
- (void)tryReleaseFlutterEngineGroup;
- (void)removeCdnPlayerItemForExitLive:(BOOL)arg1;
- (void)pauseCdnPlayer;
- (void)resumeCdnPlayer;
- (BOOL)muteCdnPlayer;
- (BOOL)unmuteCdnPlayer;
- (BOOL)updateAllRemoteUsersAudioMuted:(BOOL)arg1;
- (BOOL)updateAllRemoteUsersVideoMuted:(BOOL)arg1;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)enableTrtcBackgroundDecoding:(BOOL)arg1;
- (void)enableCDNBackgroundDecoding:(BOOL)arg1;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestCdnARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestCdnYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)disableCdnRenderPixelBuffer;
- (void)enableCdnRenderPixelBuffer;
- (BOOL)isCurrentEnableCdnRenderPixelBuffer;
- (__CVBuffer *)getCurrentCdnPixelBufferRef;
- (void)updateNeedCacheRecentCdnPixelBuffer;
- (void)updateBarrageMaskRenderView:(id)arg1;
- (id)getCdnRenderContext;
- (BOOL)configCdnWeEffectManagerWithScene:(long long)arg1;
- (BOOL)updateCdnRenderNeedProcessByWeffect:(BOOL)arg1 scene:(long long)arg2;
- (void)updateCurrCdnProcessByWeeffect:(BOOL)arg1;
- (void)handleCdnRenderWeffectProcessForPlayerItemChange:(id)arg1 newPlayerItem:(id)arg2;
- (BOOL)needCdnProcessByWeffect;
- (BOOL)isCdnPlayerEnableRci;
- (id)getSelfSdkUserId;
- (id)directGetSelfSdkUserId;
- (void)setIdleTimeDisableIfNeed;
- (void)setExitStateFlag:(unsigned long long)arg1;
- (void)clearExitStateFlag:(unsigned long long)arg1;
- (void)onExitStateChanged;
- (void)checkLiveAudioAuthorityActiveState;
- (void)updateLiveAudioAuthorityActive:(BOOL)arg1;
- (BOOL)updateRemoteTrtc:(id)arg1 renderByCustom:(BOOL)arg2 scene:(long long)arg3;
- (void)stopCustomRenderForAllRemoteTrtcUsers;
- (id)getRemoteTrtcCustomRenderWrapper:(id)arg1 scene:(long long)arg2 autoCreateIfNotExist:(BOOL)arg3;
- (id)getRemoteTrtcCustomRenderManagerAutoCreateIfNotExist:(BOOL)arg1;
- (void)configCallbacksForCustomRenderWrapper:(id)arg1;
- (id)getRemoteTrtcCustomRenderWeefectManager:(id)arg1 scene:(long long)arg2;
- (BOOL)updateTrtcCustomComposeIfOverMaxSupportCnt;
- (void)makeAllGiftAttackRenderSupportByTrtcCustomCompose;
- (void)makeFaceRectVisibleAboveSheetView:(id)arg1;
- (void)setIsMakeFaceRectVisibleMode:(BOOL)arg1 offsetY:(double)arg2;
- (BOOL)checkAllGiftAttackRenderSupportByTrtcCustomCompose;
- (id)getCurrTrtcCustomRenderUserList;
- (void)onMicUserViewInfoDicUpdated;
- (BOOL)updateRemoteTrtcComposeByCustom:(BOOL)arg1 scene:(long long)arg2;
- (void)cancelRemoteTrtcCustomComposeWithUser:(id)arg1;
- (void)stopCustomComposeRenderDirectly;
- (void)destroyCustomComposeRender;
- (id)getRemoteTrtcCustomComposeManagerWithScene:(long long)arg1 autoCreateIfNotExist:(BOOL)arg2;
- (void)configCallbacksForCustomComposeManager:(id)arg1;
- (id)getRemoteTrtcCustomComposeWeefectManager:(long long)arg1;
- (BOOL)checkIsCurrTopPerformanceLevel;
- (BOOL)increasePerformanceLevel;
- (BOOL)decreasePerfLevelCallback;
- (BOOL)checkTimeRangeIsFullLoadWithBeginTime:(double)arg1 endTime:(double)arg2;
- (void)refreshLiveCaptureSrcForTrtcCustomComposeIfNeed:(id)arg1;
- (void)startCdnPlayOrEnterLiveRoom;
- (BOOL)canChangeAudioQuality;
- (void)reportPlayerEvent:(id)arg1 evtId:(int)arg2 evtMsg:(id)arg3;
- (BOOL)isFinderLive;
- (void)startReportTimer;
- (void)stopReportTimer;
- (void)clearReportTimer;
- (void)didFirstCdnPlayOk;
- (void)didFirstJoinLiveOk;
- (void)checkAndUpdateFirstShowCdnPlayerViewTimestamp;
- (void)registerExtension;
- (void)updateIsPureAudioMode:(BOOL)arg1 showTip:(BOOL)arg2;
- (void)updateIsPureAudioMode:(BOOL)arg1 showTip:(BOOL)arg2 updateLocalVideo:(BOOL)arg3;
- (void)updateIsPureAudioMode:(BOOL)arg1 showTip:(BOOL)arg2 forceTipsWhenUnchanged:(BOOL)arg3;
- (void)updateIsPureAudioMode:(BOOL)arg1 showTip:(BOOL)arg2 forceTipsWhenUnchanged:(BOOL)arg3 updateLocalVideo:(BOOL)arg4;
- (void)updateAudienceLocalAudioModeState:(unsigned long long)arg1;
- (void)handleIsAudienceLocalAudioModeChangedTo:(BOOL)arg1;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateAudioRoomScene:(unsigned long long)arg1 fromSEI:(BOOL)arg2;
- (void)onAudioRoomModeChanged;
- (void)onKTVModeChanged;
- (void)enableCustomVideoCapture:(BOOL)arg1;
- (void)setExperimentConfig:(id)arg1 params:(id)arg2;
- (void)sendCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableExternalH264EncodedVideo:(BOOL)arg1;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (BOOL)setVideoEncoderRotation:(long long)arg1;
- (void)sendCustomVideoData:(id)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6;
- (void)enableCustomAudioCapture:(BOOL)arg1;
- (void)sendCustomAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableMixExternalAudio:(BOOL)arg1 playout:(BOOL)arg2;
- (void)mixExternalAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)mixExternalAudioVolume:(long long)arg1 playoutVolume:(long long)arg2;
- (void)setVideoEncoderParamWithWidth:(double)arg1 height:(double)arg2;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)enableVadDetectionWhenVolumeEvaluate:(BOOL)arg1;
- (BOOL)isCurrentAnchorPushingVideo;
- (void)refreshCoverImageVisible;
- (BOOL)isCurrentTrtcHasVideoSource;
- (void)stopRenderBufferForTrtc;
- (void)reStartRenderBufferForTrtcIfNeeded;
- (id)getMagicRewardMemoryManagerAutoCreateIfNotExist:(BOOL)arg1;
- (id)getMagicEngineEnergyManagerAutoCreateIfNotExist:(BOOL)arg1;
- (id)getMagicEnginePerformanceStatisticManagerAutoCreateIfNotExist:(BOOL)arg1;
- (id)getLivePAGStatisticsAutoCreateIfNotExist:(BOOL)arg1;
- (id)getFaceDetectStatisticLogicAutoCreateIfNotExist:(BOOL)arg1;
- (id)liveCaptureInstance;
- (void)initPrepareAdapter;
- (void)initPushAdapter:(BOOL)arg1;
- (void)liveCaptureAdapter:(id)arg1 didFinishCollectingCaptureMetrics:(id)arg2;
- (void)liveCaptureAdapter:(id)arg1 didOutputSampleBufferForRender:(opaqueCMSampleBuffer *)arg2 localRenderFlipX:(BOOL)arg3;
- (void)liveCaptureAdapter:(id)arg1 didOutputRenderFrame:(id)arg2;
- (void)liveCaptureAdapter:(id)arg1 didOutputSampleBufferForTransmit:(opaqueCMSampleBuffer *)arg2 localRenderFlipX:(BOOL)arg3;
- (void)liveCaptureAdapter:(id)arg1 didCapturingChanged:(BOOL)arg2;
- (void)liveCaptureAdapter:(id)arg1 didRenderRotateTransitingChanged:(BOOL)arg2;
- (BOOL)pauseLive;
- (BOOL)pauseLive:(long long)arg1;
- (BOOL)prepareResumeLive;
- (BOOL)resumeLive;
- (void)updateLivePauseStatus:(long long)arg1;
- (void)refreshPauseLiveForAudience;
- (id)getLivePauseSceneDescription;
- (id)getLiveMuteSceneDescription;
- (BOOL)innerPauseLiveForAudience;
- (BOOL)innerResumeLiveForAudience;
- (void)handleConnectMicAfterPauseLiveForAudience;
- (void)handleRemoteUsersStateAfterPauseLiveForAnchor;
- (void)handleRemoteUsersStateAfterPauseLiveForAudience;
- (void)updateAllRemoteUsersVideoAndAudioMuted:(BOOL)arg1;
- (id)pauseStatusCachedKey;
- (id)pauseTimeCachedKey;
- (void)unableLivePlayingForAudience;
- (void)enableLivePlayingForAudience;
- (void)pauseLiveByPIP;
- (void)resumeLiveByPIP;
- (void)pauseLiveForClosePIP;
- (void)resumeLiveForClosePIP;
- (void)pauseLiveForEnterBackground;
- (void)resumeLiveForEnterForeground;
- (void)pauseLiveForPaidLiveScreenCapturing;
- (void)resumeLiveForPaidLiveScreenCapturing;
- (void)pauseLiveAnchorPausedForOuter;
- (void)resumeLiveAnchorPausedForOuter;
- (void)pauseLiveByMinimizeWindow;
- (void)resumeLiveByMinimizeWindow;
- (void)pauseLiveByHomepagePlayer;
- (void)resumeLiveByHomepagePlayer;
- (void)pauseLiveForOuter;
- (void)resumeLiveForOuter;
- (void)pauseLiveForSysIntterupt;
- (void)resumeLiveForSysIntterupt;
- (void)updateLiveCloseStatus:(BOOL)arg1;
- (void)onExitLive;
- (BOOL)muteLiveRemoteAudio;
- (BOOL)unMuteLiveRemoteAudio;
- (void)startRemoteVideo:(id)arg1 withView:(id)arg2;
- (void)stopRemoteVideo:(id)arg1;
- (void)updateRemoteUser:(id)arg1 fillMode:(long long)arg2;
- (void)updateRemoteUser:(id)arg1 volume:(long long)arg2;
- (id)getAudioEffectManager;
- (id)getAudioEffectManagerCreateIfNotExist;
- (void)playMusic:(id)arg1 publish:(BOOL)arg2 startBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)pausePlayMusic:(id)arg1;
- (void)resumePlayMusic:(id)arg1;
- (void)stopPlayMusic:(id)arg1;
- (void)updateIsViewCapturingForAudience:(BOOL)arg1;
- (void)startViewCaptureWithView:(id)arg1;
- (void)stopViewCapture;
- (void)pauseViewCapture;
- (void)resumeViewCapture;
- (void)refreshViewCaptureConfigurations;
- (id)getLiveCaptureVideoFrameWidgetManageLogic;
- (id)getWevisionWidgetManageLogic;
- (BOOL)isTryViewLive;
- (void)checkPaidLiveTrialCountLimitReached;
- (void)sendSEIMessageData:(id)arg1;
- (long long)getBeautySceneType;
- (void)initFaceBeautyParam;
- (void)setEffectSkinBright:(float)arg1 skinSmooth:(float)arg2 lutRosy:(float)arg3 lutColor:(float)arg4 faceThin:(float)arg5 eyeBigger:(float)arg6 eyeBright:(float)arg7;
- (void)onResult:(int)arg1;
- (void)OnResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (void)onWeVisEffectMgrCreateCompleted;
- (void)onWeEffect:(id)arg1 processCostTimeUpdate:(double)arg2 scene:(long long)arg3;
- (void)onWeEffectProcessBegin:(id)arg1 scene:(long long)arg2;
- (void)onWeEffectProcessEnd:(id)arg1 scene:(long long)arg2;
- (void)onWeEffect:(id)arg1 processFpsUpdate:(int)arg2;
- (void)removeResourceID:(long long)arg1 scene:(unsigned long long)arg2;
- (id)currentResourceIdDict;
- (void)addResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (id)getCurResourceIdVector:(unsigned long long)arg1;
- (void)switchCdnOrTrtcPlay:(BOOL)arg1;
- (void)handleQualityChangeInfoFromServer:(id)arg1 liveSdkInfo:(id)arg2;
- (void)handleStreamChangedFromServerWithLiveSdkInfo:(id)arg1;
- (void)handleStreamChangedFromServerWithQualityTagInfo:(id)arg1 recommendedQualityTag:(unsigned int)arg2;
- (void)checkAndUpdateDecryptionParamsWithCdnPlayerItem:(id)arg1 url:(id)arg2 checkStop:(BOOL)arg3;
- (void)clearDataForAudienceSwitchCdnOrTrtcMode;
- (void)checkAndUpdateCdnPlayerEventParams;
- (void)generateMainCdnPlayerItem;
- (void)prepareCdnPlayerItem:(id)arg1;
- (void)generateMainCdnPlayerItemAndUpdateView:(BOOL)arg1;
- (void)updateAllCdnPlayerItemRenderMode:(long long)arg1;
- (BOOL)cdnPlayerItemHasPlayedOK;
- (void)checkAndChangeCategory;
- (void)changeToCategoryPlayback;
- (void)recordCurrentLiveAudioParams;
- (void)checkAndRestoreLiveAudioParams;
- (void)reTryPlayBackupUrl;
- (void)onSwitchRoleCallBack:(int)arg1 errMsg:(id)arg2;
- (void)handlePanGestureForMultiAngleView:(id)arg1;
- (BOOL)animateToSwitchMultiAngleChannelToIndex:(unsigned long long)arg1;
- (BOOL)animateToSwitchMultiAngleChannelToIndex:(unsigned long long)arg1 forceSwitch:(BOOL)arg2;
- (BOOL)prepareForNextMultiAngleChannelInfoWithGestureTranslationX:(double)arg1;
- (BOOL)prepareForNextMultiAngleChannelInfoWithIndex:(unsigned long long)arg1 fromTheLeftSide:(BOOL)arg2 muteNext:(BOOL)arg3;
- (BOOL)prepareForNextMultiAngleChannelInfoWithIndex:(unsigned long long)arg1 fromTheLeftSide:(BOOL)arg2 muteNext:(BOOL)arg3 withAnimation:(BOOL)arg4;
- (void)notifyMultiAngleChannelInfoCountUpdated;
- (BOOL)isInVideoZoomDisplayMode;
- (float)currentVideoDisplayScale;
- (void)handlePinchGestureForZoom:(id)arg1;
- (void)handleTapGestureForZoom:(id)arg1;
- (void)handlePanGestureForZoom:(id)arg1;
- (void)enterVideoZoomDisplayMode;
- (void)exitVideoZoomDisplayModeAnimated:(BOOL)arg1;
- (void)markHasShownVideoZoomGuideView;
- (void)stopKeyUpdateTimer;
- (void)startKeyUpdateTimer:(unsigned long long)arg1;
- (void)notifyLiveSdkInfoWillExpire;
- (void)updateP2pSwitches:(id)arg1;
- (void)onWarning:(int)arg1 warningMsg:(id)arg2;
- (void)onError:(int)arg1 errMsg:(id)arg2 extInfo:(id)arg3;
- (void)onWarning:(int)arg1 warningMsg:(id)arg2 extInfo:(id)arg3;
- (void)onEnterRoom:(long long)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onSwitchRole:(int)arg1 errMsg:(id)arg2;
- (void)onConnectOtherRoom:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onDisconnectOtherRoom:(int)arg1 errMsg:(id)arg2;
- (void)onRemoteUserEnterRoom:(id)arg1;
- (void)onRemoteUserLeaveRoom:(id)arg1 reason:(long long)arg2;
- (void)testOnUserVideoAvailableYES:(id)arg1;
- (void)testOnUserVideoAvailableNO:(id)arg1;
- (void)handleRemoteSdkUserLeaveRoom;
- (void)onUserAudioAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onUserVideoAvailable:(id)arg1 available:(BOOL)arg2;
- (void)handleRemoteSdkUserMediaDataAvailableChanged;
- (void)onUserSubStreamAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onFirstVideoFrame:(id)arg1 streamType:(long long)arg2 width:(int)arg3 height:(int)arg4;
- (void)onUserVideoSizeChanged:(id)arg1 streamType:(long long)arg2 newWidth:(int)arg3 newHeight:(int)arg4;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)onStatistics:(id)arg1;
- (void)onAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (void)handleAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (void)onUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)onRecvCustomCmdMsgUserId:(id)arg1 cmdID:(long long)arg2 seq:(unsigned int)arg3 message:(id)arg4;
- (void)onRecvSEIMsg:(id)arg1 message:(id)arg2;
- (BOOL)tryProcessSeiMsgToJson:(id)arg1 fromUserId:(id)arg2;
- (BOOL)tryProcessSeiMsgToPB:(id)arg1 fromUserId:(id)arg2;
- (void)onSetMixTranscodingConfig:(int)arg1 errMsg:(id)arg2;
- (void)onSendFirstLocalAudioFrame;
- (void)onMicDidReady;
- (void)onAudioEffectFinished:(int)arg1 code:(int)arg2;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3;
- (CGRect)getNormalizedFrameForUserId:(id)arg1;
- (void)onMMLiveViewSwitchCamera;
- (void)onMMLiveViewStartLocalVideo;
- (BOOL)onMMLiveViewIsAudience;
- (id)onMMLiveViewGetAnchorIdentityId;
- (void)onMMLiveViewStartRemoteViewWithSdkUserId:(id)arg1 andView:(id)arg2;
- (void)onMMLiveViewStopRemoteViewWithSdkUserId:(id)arg1;
- (void)onMMLiveViewConnectMicStateChanged;
- (void)onMMLiveViewAnchorAudioModeBackgroundPlayerVMChanged;
- (void)onMMLiveViewSwitchCdnPlayerViewFinishedWithStreamId:(id)arg1 isSwitchToNext:(BOOL)arg2;
- (void)onMMLiveViewNextCdnPlayerViewMovedWithStreamId:(id)arg1 andProgress:(double)arg2;
- (void)onMMLiveViewSwitchCdnPlayerViewWillStartAnimationWithStreamId:(id)arg1 animationDuration:(double)arg2 currentProgress:(double)arg3 switchToNext:(BOOL)arg4;
- (void)sendGameSEIReport:(id)arg1 evtID:(int)arg2;
- (void)sendOneWayDelayReport:(unsigned long long)arg1;
- (id)getCurrentFinderName;
- (id)getCurrentFinderUsername;
- (void)checkSvrIPOrPlayHttps:(id)arg1;
- (id)checkAndGenerateTestReplacePlayerEventObjectWithEventId:(int)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (void)onLiveCDNPlayerItem:(id)arg1 switchStreamResult:(BOOL)arg2 withStreamWrap:(id)arg3;
- (void)updateCdnStreamErrorReportInfoWithQualityTag:(unsigned int)arg1 hasChangedToBackStream:(BOOL)arg2 playerEventId:(int)arg3 sdkErrCode:(int)arg4 qualityTagCacheBuf:(id)arg5;
- (BOOL)tryProcessSeiMsgToJson:(id)arg1 curTime:(unsigned int)arg2;
- (BOOL)tryProcessSeiMsgToPB:(id)arg1 curTime:(unsigned int)arg2;
- (void)logForSEIData:(id)arg1;
- (void)onNetStatus:(id)arg1 p2pStatus:(id)arg2;
- (void)notifySubTitleJsonInfo:(id)arg1;
- (void)notifyFinderLiveAnchorTimeInterval:(id)arg1;
- (void)notifyAdvertismentTimestamp;
- (BOOL)checkAndNotifySEIConnectMicMsg:(id)arg1;
- (void)clearSeiMicMsgInfo;
- (void)checkAndNotifySEIMicTalkingUsersList:(id)arg1;
- (void)clearSeiFreeMicUsersList;
- (id)seiConnectMicUserInfoList;
- (void)clearSeiConnectMicUserInfoList;
- (void)notifyAudioRoomSEIConnectMicMsgUpdated:(BOOL)arg1;
- (void)checkAndUpdateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)arg1 andIsAudioMode:(BOOL)arg2;
- (void)switchToNewQuality:(int)arg1;
- (void)updateLastCdnQuality:(unsigned int)arg1;
- (id)getCdnStreamInfoForQuality:(unsigned int)arg1;
- (void)checkIsHdrCdnLive;
- (BOOL)isHdrCdnLive;
- (BOOL)isHDRLiveRoom;
- (id)remoteUserVideoInfoDict;
- (id)remoteUserVideoInfoForUserId:(id)arg1;
- (id)remoteUserVideoInfoForUserId:(id)arg1 autoCreate:(BOOL)arg2;
- (void)updateMainRemoteViewFillMode;
- (void)updateVideoSize:(CGSize)arg1 cdn:(BOOL)arg2;
- (void)updateLocalVideoFrameSize:(CGSize)arg1;
- (void)updateVideoFPS:(unsigned int)arg1;
- (void)onVideoFpsChanged;
- (void)livePushAdapterWillStartLocalAudio:(id)arg1;
- (void)livePushAdapterDidStartLocalVideo:(id)arg1;
- (void)livePushAdapterDidStopLocalVideo:(id)arg1;
- (void)livePushAdapter:(id)arg1 didPushNetStatus:(id)arg2;
- (void)livePushAdapterRemoteUsersVideoSettingChanged:(id)arg1;
- (void)checkCurrentTrtcHasVideoSource;
- (BOOL)isCurrentHasRemoteVideoSource;
- (id)getFaceDecodeLogicAutoCreateIfNotExist:(BOOL)arg1;
- (id)createKTVBox;
- (void)startRemoteAudienceVideoInAudioModeWithSdkUserId:(id)arg1;
- (BOOL)audioRouteSetted;
- (long long)getAudioRoute;
- (void)requestTrtcAudioRoute:(id /* block */)arg1;
- (void)updateTrtcAudioRouteSetted:(BOOL)arg1;
- (void)delayCheckTrtcAudioRoute;
- (void)updateAnchorLiveRoomCoverImage;
- (void)updateAudienceLiveRoomCoverImage;
- (void)setDelegate:(id)arg1;
- (void)onDelegateUpdated;
- (unsigned long long)currAnchorMainOrientationMask;
- (BOOL)isLiveMute;
- (BOOL)isLivePause;
- (id)operationReportInfo;
- (unsigned int)liveStartTime;
- (id)createLiveViewWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (id)lastRecordLiveAudioSessionParams;
- (void)setIsLivePlayingViaCdn:(BOOL)arg1;
- (void)setLivePlayStatusForAudience:(long long)arg1;
- (void)setIsLivePaused:(BOOL)arg1;
- (void)setIsLiveUnablePlay:(BOOL)arg1;
- (void)setIsLivePausedByPIP:(BOOL)arg1;
- (void)setIsLivePausedForClosePIP:(BOOL)arg1;
- (void)setIsLivePausedForEnterBackground:(BOOL)arg1;
- (void)setIsLivePausedForPaidLiveTrialTimeup:(BOOL)arg1;
- (void)setIsLivePausedForPaidLiveScreenCapturing:(BOOL)arg1;
- (void)setIsLivePausedByMinimizeWindow:(BOOL)arg1;
- (void)setIsLivePausedByHomepagePlayer:(BOOL)arg1;
- (void)setIsLivePausedForOuter:(BOOL)arg1;
- (BOOL)isOnlyPausedInState:(unsigned long long)arg1;
- (BOOL)needStopRenderBufferInLiveRoom;
- (void)setIsInLive:(BOOL)arg1;
- (id)blurBtnPownerModeMonitorLogic;
- (BOOL)isEnableGiftWall;
- (id)metricsBusinessMonitorLogic;
- (id)uiPerfMonitorLogic;
- (BOOL)useCustomPIP;
- (BOOL)isUsingUltraWideCamera;
- (BOOL)isLiveAudioAuthorityActive;
- (BOOL)isKitchenOpenLivePerformAnalysisEntrance;
- (BOOL)debug_enableLikeAnimation;
- (BOOL)debug_enableCommentNotifyAnimation;
- (BOOL)debug_enableGiftNotificationAnimation;
- (BOOL)debug_enableGiftPagAnimation;
- (BOOL)debug_enableBannerAnimation;
- (id)mm2LiveTabName;
- (unsigned long long)currentLiveVideoDisplayScene;
- (unsigned long long)nextLiveVideoDisplayScene;
- (BOOL)isLiveVideoRemoteValid;
- (BOOL)isLiveVideoLocalHorizontal;
- (unsigned long long)currentLiveLocalVideoDisplayScene;
- (BOOL)isLiveLocalVideoRemoteValid;
- (BOOL)isLiveLocalVideoLocalHorizontal;
- (double)getLocalVideoRemoteDisplayWHPercent;
- (BOOL)isAnchorMainDisplayAdjustCameraOrientation;
- (unsigned int)liveStartPlayTime;
- (unsigned int)livePlayTime;
- (BOOL)isCaptureRes1920x1440Enable;
- (void)checkAndStartSyncAnchorSEI;
- (BOOL)isReplay;
- (BOOL)hasAudienceBackgroundMusic;
- (BOOL)isSupportMultiAngleView;
- (BOOL)isSupportAndShowingMultiAngleView;
- (CGSize)nextAngleVideoSize;
- (id)weappResLogic;
- (void)setRoleType:(long long)arg1;
- (void)setIsVideoConnectedMic:(BOOL)arg1;
- (void)setIsAudioConnectedMic:(BOOL)arg1;
- (void)checkAudienceConnectingMicStatusWithOldValue:(BOOL)arg1;
- (unsigned long long)allMultiAngleChannelInfoCount;
- (id)currentCdnPlayerItem;
- (id)nextCdnPlayerItem;
- (void)setMainCdnPlayerItem:(id)arg1;
- (unsigned long long)currentChannelIndex;
- (BOOL)isInMainChannel;
- (void)setCurrentChannelInfo:(id)arg1;
- (void)checkAndUpdateAllowRotateStateInIphone;
- (id)anchorNickname;
- (void)onCurrCdnPlayerItem:(id)arg1 changeTo:(id)arg2;
- (void)onLiveAnchorSEISynchronizeRegistered:(id)arg1;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1 taskId:(id)arg2;
- (void)onStartCustomPixelTransferChange;
- (void)onRequestSynchronzizeInfoForSEIAnchorInfo:(id)arg1;
- (id)generateSEILiveModeInfoString;
- (id)checkAndGenerateSEIKTVStateInfoString;
- (void)updateMicInfoInSEIAnchorInfo:(id)arg1;
- (void)updateMicTalkingUsersInfoInSEIAnchorInfo:(id)arg1;
- (void)updateAudioRoomModeMicInfoInSEIAnchorInfo:(id)arg1;
- (void)updateRecordScreenInfoInSEIAnchorInfo:(id)arg1;
- (void)processReceivedGestureSeiMessage:(id)arg1;
- (BOOL)liveRoomPlayStream:(id)arg1;
- (unsigned long long)liveRoomSwitchStream:(id)arg1;
- (unsigned long long)liveRoomSwitchStream:(id)arg1 switchByUser:(BOOL)arg2 checkNetworkStatus:(BOOL)arg3;
- (void)checkAndMarkHasManuallySwitchedStream;
- (id)getRecentClarityChooseFromCache;
- (void)clearRecentClarityChooseFromCache;
- (void)onSynchronizedSEIAnchorStatus:(unsigned long long)arg1;
- (BOOL)shouldForceLandscapeResMode;
- (BOOL)isLiveCaptureRenderRotateTransiting;
- (id)asynSaveCurrentFrameToPath:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)reportCurrentP2pStat:(id)arg1 initTime:(unsigned long long)arg2;
- (void)onReportP2pStat:(id)arg1 initTime:(unsigned long long)arg2;
- (void)onResetP2pStat;
- (void)onReportLag:(unsigned int)arg1;
- (void)updatePlayLiveType:(unsigned int)arg1;
- (void)setLiveVrType:(unsigned int)arg1;
- (void)restartAudioDevice:(BOOL)arg1;
- (void)liveMetricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)effectMgr:(id)arg1 configSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 adjustSettings:(void *)arg2;
- (void)effectMgr:(id)arg1 deviceRunPreferByCPU:(BOOL *)arg2;
- (void)energyController:(id)arg1 didChangeEnergyMode:(long long)arg2;
- (void)updateLiveParamsForEnergyModeChanged:(long long)arg1;
- (void)updateWeEffectParamsForEnergyModeChanged:(long long)arg1;
- (void)updateBlurPowerModeAdjustParamLevelForEnergyModeChanged:(long long)arg1;
- (BOOL)isLivePictureInPictureEnabled;
- (void)CameraScanViewControllerDealloc;
- (void)updateOrientationMaskForAnchorPreLive:(unsigned long long)arg1;
- (void)fixOrientationMaskForAnchorPush;
- (void)forceChangeSupportedOrientationMaskForAnchor:(unsigned long long)arg1;
- (void)setCameraPreviewOrientation;
- (long long)getCameraPreviewOrientation;
- (BOOL)shouldForbidLandScapeForIphone;
- (void)updateMainRemoteViewForOrientationChanged;
- (void)updateMainLocalViewFrame;
- (BOOL)shouldSupportRotateOrientation;
- (BOOL)shouldSupportRotateOrientationIgnoreMinimizeMode:(BOOL)arg1;
- (double)getLiveCaptureResolutionPercentInOrientation:(long long)arg1;
- (long long)tryGetRotateOrientationForAnchorMainOrientationMask;
- (void)updateLiveModeSelectSubItem:(id)arg1;
- (id)selectSubItem;
- (void)setRemoteVideoFrameSize:(CGSize)arg1;
- (CGSize)localVideoFrameSize;
- (void)setLocalVideoFrameSize:(CGSize)arg1;
- (unsigned int)videoFPS;
- (void)setVideoFPS:(unsigned int)arg1;
- (unsigned int)renderFPS;
- (void)setRenderFPS:(unsigned int)arg1;
- (unsigned long long)currentLiveState;
- (void)setCurrentLiveState:(unsigned long long)arg1;
- (BOOL)secondaryDeviceCloseLiveSwitch;
- (void)setSecondaryDeviceCloseLiveSwitch:(BOOL)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)trtcParams;
- (void)setTrtcParams:(id)arg1;
- (id)trtcVideoParams;
- (void)setTrtcVideoParams:(id)arg1;
- (id)trtcAudioParams;
- (void)setTrtcAudioParams:(id)arg1;
- (id)trtcChannelParams;
- (void)setTrtcChannelParams:(id)arg1;
- (long long)trtcRoleType;
- (void)setTrtcRoleType:(long long)arg1;
- (long long)nextRoleType;
- (void)setNextRoleType:(long long)arg1;
- (void)setLiveView:(id)arg1;
- (unsigned int)mSEIMode;
- (void)setMSEIMode:(unsigned int)arg1;
- (BOOL)isInRoom;
- (void)setIsInRoom:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isDefaultCDNPlay;
- (void)setIsDefaultCDNPlay:(BOOL)arg1;
- (BOOL)isLiveAfterAbnormalExit;
- (void)setIsLiveAfterAbnormalExit:(BOOL)arg1;
- (BOOL)isLocalAudioStarted;
- (void)setIsLocalAudioStarted:(BOOL)arg1;
- (unsigned int)enableP2P;
- (void)setEnableP2P:(unsigned int)arg1;
- (void)setP2pManagerInstance:(id)arg1;
- (unsigned long long)frontCameraMirrorMode;
- (void)setFrontCameraMirrorMode:(unsigned long long)arg1;
- (BOOL)isFaceVerifying;
- (void)setIsFaceVerifying:(BOOL)arg1;
- (BOOL)isTakingLivePhoto;
- (void)setIsTakingLivePhoto:(BOOL)arg1;
- (BOOL)isUsedAfterLiveExited;
- (void)setIsUsedAfterLiveExited:(BOOL)arg1;
- (BOOL)willExit;
- (void)setWillExit:(BOOL)arg1;
- (BOOL)isExit;
- (void)setIsExit:(BOOL)arg1;
- (BOOL)isExitLiveByMorphTransition;
- (void)setIsExitLiveByMorphTransition:(BOOL)arg1;
- (BOOL)shouldLiveKeepAudioEnabledAfterMorphDismiss;
- (void)setShouldLiveKeepAudioEnabledAfterMorphDismiss:(BOOL)arg1;
- (BOOL)isLivePaused;
- (BOOL)isLiveUnablePlay;
- (BOOL)isLivePausedByPIP;
- (BOOL)isLivePausedForClosePIP;
- (BOOL)isLivePausedForEnterBackground;
- (BOOL)isLivePausedForPaidLiveTrialTimeup;
- (BOOL)isLivePausedForPaidLiveScreenCapturing;
- (BOOL)isLivePausedByMinimizeWindow;
- (BOOL)isLivePausedForOuter;
- (BOOL)isLivePausedForSysIntterupt;
- (void)setIsLivePausedForSysIntterupt:(BOOL)arg1;
- (BOOL)isLivePausedByHomepagePlayer;
- (BOOL)isLiveMuteForIntterupt;
- (void)setIsLiveMuteForIntterupt:(BOOL)arg1;
- (BOOL)isLiveMuteForSysIntterupt;
- (void)setIsLiveMuteForSysIntterupt:(BOOL)arg1;
- (BOOL)isLiveMuteForOuter;
- (void)setIsLiveMuteForOuter:(BOOL)arg1;
- (BOOL)isLiveMuteForAdVideo;
- (void)setIsLiveMuteForAdVideo:(BOOL)arg1;
- (BOOL)isLiveMuteForLeaveToAppGame;
- (void)setIsLiveMuteForLeaveToAppGame:(BOOL)arg1;
- (BOOL)isLiveMuteForErrorPage;
- (void)setIsLiveMuteForErrorPage:(BOOL)arg1;
- (BOOL)isReleaseMonoService;
- (void)setIsReleaseMonoService:(BOOL)arg1;
- (long long)livePlayStatusForAudience;
- (long long)livePauseStatus;
- (void)setLivePauseStatus:(long long)arg1;
- (unsigned long long)livePauseTime;
- (void)setLivePauseTime:(unsigned long long)arg1;
- (unsigned long long)liveStartPlayTimeMs;
- (void)setLiveStartPlayTimeMs:(unsigned long long)arg1;
- (unsigned long long)liveRecvIframeTimeMs;
- (void)setLiveRecvIframeTimeMs:(unsigned long long)arg1;
- (BOOL)isAnchorOpenAfterCrash;
- (void)setIsAnchorOpenAfterCrash:(BOOL)arg1;
- (unsigned long long)audienceConnectMicStreamMode;
- (void)setAudienceConnectMicStreamMode:(unsigned long long)arg1;
- (BOOL)isAudioConnectedMic;
- (BOOL)isVideoConnectedMic;
- (BOOL)isUsingCamera;
- (void)setIsUsingCamera:(BOOL)arg1;
- (BOOL)isCurrentUsingCamera;
- (void)setIsCurrentUsingCamera:(BOOL)arg1;
- (BOOL)isOnlineStateButtonDisabled;
- (BOOL)isAllowLiveReward;
- (void)setIsAllowLiveReward:(BOOL)arg1;
- (BOOL)isAllowFreeTalk;
- (void)setIsAllowFreeTalk:(BOOL)arg1;
- (BOOL)isAllowConnectMic;
- (void)setIsAllowConnectMic:(BOOL)arg1;
- (BOOL)isAllowPaidConnectMic;
- (void)setIsAllowPaidConnectMic:(BOOL)arg1;
- (BOOL)isFocusOnInNormalConnectMicPrelive;
- (void)setIsFocusOnInNormalConnectMicPrelive:(BOOL)arg1;
- (id)purchaseMicSettingBeforeLive;
- (void)setPurchaseMicSettingBeforeLive:(id)arg1;
- (BOOL)isPreBanComment;
- (void)setIsPreBanComment:(BOOL)arg1;
- (BOOL)isPreBanLike;
- (void)setIsPreBanLike:(BOOL)arg1;
- (BOOL)isPreOpenGloryList;
- (void)setIsPreOpenGloryList:(BOOL)arg1;
- (BOOL)isBanLikeStatusChanged;
- (void)setIsBanLikeStatusChanged:(BOOL)arg1;
- (BOOL)isMicMuted;
- (void)setIsMicMuted:(BOOL)arg1;
- (BOOL)isPreHiddenAudienceName;
- (void)setIsPreHiddenAudienceName:(BOOL)arg1;
- (BOOL)isEnableLiveSongs;
- (void)setIsEnableLiveSongs:(BOOL)arg1;
- (BOOL)isPreOpenSkinSeg;
- (void)setIsPreOpenSkinSeg:(BOOL)arg1;
- (BOOL)isAllowSettingBGMusic;
- (void)setIsAllowSettingBGMusic:(BOOL)arg1;
- (BOOL)isPreEnableGiftWall;
- (void)setIsPreEnableGiftWall:(BOOL)arg1;
- (BOOL)isPreEnableAnchorRealtimeDataPanel;
- (void)setIsPreEnableAnchorRealtimeDataPanel:(BOOL)arg1;
- (id)specialGiftSetting;
- (void)setSpecialGiftSetting:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (BOOL)isPreAllowProductQuestion;
- (void)setIsPreAllowProductQuestion:(BOOL)arg1;
- (unsigned long long)videoEncoderParamMode;
- (BOOL)hasShownVideoZoomGuideView;
- (void)setHasShownVideoZoomGuideView:(BOOL)arg1;
- (BOOL)isApplyOrConnectingMicWithOtherAnchor;
- (unsigned int)onlineUserCount;
- (unsigned int)maxOnlineUserCount;
- (void)setMaxOnlineUserCount:(unsigned int)arg1;
- (unsigned int)liveNewFansCount;
- (void)setLiveNewFansCount:(unsigned int)arg1;
- (BOOL)isRulePoped;
- (void)setIsRulePoped:(BOOL)arg1;
- (unsigned int)applyConnectMicCount;
- (void)setApplyConnectMicCount:(unsigned int)arg1;
- (unsigned int)connectMicSuccCount;
- (void)setConnectMicSuccCount:(unsigned int)arg1;
- (void)setOperationReportInfo:(id)arg1;
- (id)liveError;
- (void)setLiveError:(id)arg1;
- (long long)currTransitionState;
- (void)setCurrTransitionState:(long long)arg1;
- (id)currentWeAppId;
- (void)setCurrentWeAppId:(id)arg1;
- (id)currentPrehotWeAppIds;
- (void)setCurrentPrehotWeAppIds:(id)arg1;
- (id)conflictWording;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (unsigned long long)userTapOpenLiveTimestamp;
- (void)setUserTapOpenLiveTimestamp:(unsigned long long)arg1;
- (unsigned long long)beginEnterLiveTimestamp;
- (void)setBeginEnterLiveTimestamp:(unsigned long long)arg1;
- (unsigned long long)startCdnPlayTimestamp;
- (void)setStartCdnPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)cdnPlayerConnectTimestamp;
- (void)setCdnPlayerConnectTimestamp:(unsigned long long)arg1;
- (unsigned long long)realCdnPlayOkTimestamp;
- (void)setRealCdnPlayOkTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstShowCdnPlayerViewTimestamp;
- (void)setFirstShowCdnPlayerViewTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstJoinLiveResponseTimestamp;
- (void)setFirstJoinLiveResponseTimestamp:(unsigned long long)arg1;
- (BOOL)useCachedPlayingDataItemWhenEnterLive;
- (void)setUseCachedPlayingDataItemWhenEnterLive:(BOOL)arg1;
- (unsigned int)audienceDelayTime;
- (void)setAudienceDelayTime:(unsigned int)arg1;
- (unsigned int)mCdnH265BackCfg;
- (void)setMCdnH265BackCfg:(unsigned int)arg1;
- (unsigned int)cdnQualitySvrcfg;
- (void)setCdnQualitySvrcfg:(unsigned int)arg1;
- (BOOL)useABRCfg;
- (void)setUseABRCfg:(BOOL)arg1;
- (unsigned int)lastCdnQuality;
- (void)setLastCdnQuality:(unsigned int)arg1;
- (unsigned int)lastVideoStreamCdnQuality;
- (void)setLastVideoStreamCdnQuality:(unsigned int)arg1;
- (unsigned int)lastCdnQualitySwitchTime;
- (void)setLastCdnQualitySwitchTime:(unsigned int)arg1;
- (long long)cdnQualitySwitchCount;
- (void)setCdnQualitySwitchCount:(long long)arg1;
- (long long)cdnQualityReduceCount;
- (void)setCdnQualityReduceCount:(long long)arg1;
- (unsigned int)isEnterroomFisrtTime;
- (void)setIsEnterroomFisrtTime:(unsigned int)arg1;
- (unsigned int)supportHEVCDec;
- (void)setSupportHEVCDec:(unsigned int)arg1;
- (BOOL)isInBackgroundFlag;
- (void)setIsInBackgroundFlag:(BOOL)arg1;
- (BOOL)isLiveQosReportEnabled;
- (void)setIsLiveQosReportEnabled:(BOOL)arg1;
- (BOOL)isLiveQosControlEnabled;
- (void)setIsLiveQosControlEnabled:(BOOL)arg1;
- (BOOL)isLivePlayInfoReportEnabled;
- (void)setIsLivePlayInfoReportEnabled:(BOOL)arg1;
- (BOOL)isLivePlayInfoControlEnabled;
- (void)setIsLivePlayInfoControlEnabled:(BOOL)arg1;
- (BOOL)hasSwitchedStreamByQosControl;
- (void)setHasSwitchedStreamByQosControl:(BOOL)arg1;
- (id)beautyLogic;
- (void)setBeautyLogic:(id)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (BOOL)isFrontCameraMirrored;
- (void)setIsFrontCameraMirrored:(BOOL)arg1;
- (id)lagHistoryQueue;
- (void)setLagHistoryQueue:(id)arg1;
- (BOOL)isHEVCEncEnable;
- (void)setIsHEVCEncEnable:(BOOL)arg1;
- (BOOL)isHEVCEncUsing;
- (void)setIsHEVCEncUsing:(BOOL)arg1;
- (id)seiMicTalkingUsersList;
- (void)setSeiMicTalkingUsersList:(id)arg1;
- (id)enterLiveLoadingText;
- (void)setEnterLiveLoadingText:(id)arg1;
- (BOOL)useCustomVideoEncodeResolution;
- (void)setUseCustomVideoEncodeResolution:(BOOL)arg1;
- (CGSize)customVideoEncodeResolution;
- (void)setCustomVideoEncodeResolution:(CGSize)arg1;
- (id)metricsMonitor;
- (void)setMetricsMonitor:(id)arg1;
- (id)energyController;
- (void)setEnergyController:(id)arg1;
- (id)lastSeiMsg;
- (void)setLastSeiMsg:(id)arg1;
- (id)anchorSeiMsgData;
- (void)setAnchorSeiMsgData:(id)arg1;
- (BOOL)isAntiAddictPause;
- (void)setIsAntiAddictPause:(BOOL)arg1;
- (void)setChannelParamsDesc:(id)arg1;
- (BOOL)isAllLiveAngleSupportRotate;
- (void)setIsAllLiveAngleSupportRotate:(BOOL)arg1;
- (BOOL)ignoreCacheClarity;
- (void)setIgnoreCacheClarity:(BOOL)arg1;
- (BOOL)localSwitchCdnOrTrtc;
- (void)setLocalSwitchCdnOrTrtc:(BOOL)arg1;
- (unsigned int)stopLocalConnectMicTime;
- (void)setStopLocalConnectMicTime:(unsigned int)arg1;
- (id)audioModeCdnStreamInfo;
- (void)setAudioModeCdnStreamInfo:(id)arg1;
- (id)lastCdnStreamInfo;
- (void)setLastCdnStreamInfo:(id)arg1;
- (id)pendingWeAppId;
- (void)setPendingWeAppId:(id)arg1;
- (id)recentWeAppId;
- (void)setRecentWeAppId:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (unsigned int)liveVrType;
- (unsigned int)livePushMode;
- (void)setLivePushMode:(unsigned int)arg1;
- (unsigned int)lastQosReportTime;
- (void)setLastQosReportTime:(unsigned int)arg1;
- (unsigned int)mQosReportInterval;
- (void)setMQosReportInterval:(unsigned int)arg1;
- (id)lastServerIP;
- (void)setLastServerIP:(id)arg1;
- (void)setWeappResLogic:(id)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id)giftAttackRenderLogic;
- (void)setGiftAttackRenderLogic:(id)arg1;
- (id)batchRewardAnimationWeVisionRenderer;
- (void)setBatchRewardAnimationWeVisionRenderer:(id)arg1;
- (id)faceDetectLogic;
- (void)setFaceDetectLogic:(id)arg1;
- (void)setFaceLogic:(id)arg1;
- (id)cdnAudienceWeEffectManager;
- (void)setCdnAudienceWeEffectManager:(id)arg1;
- (id)trtcRenderingNotificationContext;
- (void)setTrtcRenderingNotificationContext:(id)arg1;
- (BOOL)isLiveAnchorPausedForOuter;
- (void)setIsLiveAnchorPausedForOuter:(BOOL)arg1;
- (unsigned long long)currentResourceID;
- (void)setCurrentResourceID:(unsigned long long)arg1;
- (void)setCurrentResourceIdDict:(id)arg1;
- (id)interactionGiftRenderLogic;
- (void)setInteractionGiftRenderLogic:(id)arg1;
- (void)setBlurBtnPownerModeMonitorLogic:(id)arg1;
- (void)setMetricsBusinessMonitorLogic:(id)arg1;
- (int)enableHostDenoise;
- (void)setEnableHostDenoise:(int)arg1;
- (int)enableHostClarity;
- (void)setEnableHostClarity:(int)arg1;
- (id)flvNetWorkInfo;
- (void)setFlvNetWorkInfo:(id)arg1;
- (id)stateInfoSession;
- (void)setStateInfoSession:(id)arg1;
- (long long)cacheCdnPixelBufferOptions;
- (void)setCacheCdnPixelBufferOptions:(long long)arg1;
- (long long)currAudioRoute;
- (void)setCurrAudioRoute:(long long)arg1;
- (void)setDebug_enableLikeAnimation:(BOOL)arg1;
- (void)setDebug_enableCommentNotifyAnimation:(BOOL)arg1;
- (void)setDebug_enableGiftNotificationAnimation:(BOOL)arg1;
- (void)setDebug_enableGiftPagAnimation:(BOOL)arg1;
- (void)setDebug_enableBannerAnimation:(BOOL)arg1;
- (BOOL)previewLocalCameraOnForMicAudience;
- (void)setPreviewLocalCameraOnForMicAudience:(BOOL)arg1;
- (BOOL)isRecordLive;
- (void)setIsRecordLive:(BOOL)arg1;
- (long long)currExitState;
- (void)setCurrExitState:(long long)arg1;
- (id)customPIPHandler;
- (void)setCustomPIPHandler:(id)arg1;
- (unsigned long long)anchorMainPreLiveOrientationMask;
- (void)setAnchorMainPreLiveOrientationMask:(unsigned long long)arg1;
- (unsigned long long)anchorMainOrientationMask;
- (void)setAnchorMainOrientationMask:(unsigned long long)arg1;
- (long long)anchorMainDisplayMode;
- (void)setAnchorMainDisplayMode:(long long)arg1;
- (id)checkExpireTimer;
- (void)setCheckExpireTimer:(id)arg1;
- (unsigned int)lastTransEventTime;
- (void)setLastTransEventTime:(unsigned int)arg1;
- (BOOL)hasSetLivePushMode;
- (void)setHasSetLivePushMode:(BOOL)arg1;
- (BOOL)hasCreatedAudioEffectMgrBeforeEnterRoom;
- (void)setHasCreatedAudioEffectMgrBeforeEnterRoom:(BOOL)arg1;
- (void)setRemoteUserVideoInfoDict:(id)arg1;
- (int)mMicAbility;
- (void)setMMicAbility:(int)arg1;
- (BOOL)isVideoParamSetOK;
- (void)setIsVideoParamSetOK:(BOOL)arg1;
- (BOOL)isAudioParamSetOK;
- (void)setIsAudioParamSetOK:(BOOL)arg1;
- (unsigned long long)mCloudAppid;
- (void)setMCloudAppid:(unsigned long long)arg1;
- (unsigned long long)mCloudBizid;
- (void)setMCloudBizid:(unsigned long long)arg1;
- (unsigned int)mCDNSwitchCnt;
- (void)setMCDNSwitchCnt:(unsigned int)arg1;
- (long long)mCDNSwitchMode;
- (void)setMCDNSwitchMode:(long long)arg1;
- (unsigned int)enterRoomTime;
- (void)setEnterRoomTime:(unsigned int)arg1;
- (unsigned int)cdnStartPlayTime;
- (void)setCdnStartPlayTime:(unsigned int)arg1;
- (id)connectMicUserVideoView;
- (void)setConnectMicUserVideoView:(id)arg1;
- (BOOL)isLocalAudioMuted;
- (void)setIsLocalAudioMuted:(BOOL)arg1;
- (unsigned int)lastQualityChangeTime;
- (void)setLastQualityChangeTime:(unsigned int)arg1;
- (unsigned long long)anchorSEISeq;
- (void)setAnchorSEISeq:(unsigned long long)arg1;
- (BOOL)isPlayerReportExtended;
- (void)setIsPlayerReportExtended:(BOOL)arg1;
- (unsigned long long)lastSEIReportTime;
- (void)setLastSEIReportTime:(unsigned long long)arg1;
- (unsigned int)mSEIReportInterval;
- (void)setMSEIReportInterval:(unsigned int)arg1;
- (unsigned int)mReTryBackupUrlCnt;
- (void)setMReTryBackupUrlCnt:(unsigned int)arg1;
- (void)setLastRecordLiveAudioSessionParams:(id)arg1;
- (int)anchorUserTalkingCount;
- (void)setAnchorUserTalkingCount:(int)arg1;
- (BOOL)hasStartedSyncAnchorSEIUserStatus;
- (void)setHasStartedSyncAnchorSEIUserStatus:(BOOL)arg1;
- (BOOL)hasSetPureAudioModeForAudience;
- (void)setHasSetPureAudioModeForAudience:(BOOL)arg1;
- (BOOL)isAudienceInSwitchRoleProcess;
- (void)setIsAudienceInSwitchRoleProcess:(BOOL)arg1;
- (int)mCaptureFps;
- (void)setMCaptureFps:(int)arg1;
- (long long)mCaptureResEnum;
- (void)setMCaptureResEnum:(long long)arg1;
- (BOOL)enableSwitchStream;
- (void)setEnableSwitchStream:(BOOL)arg1;
- (BOOL)forceHEVCMixing;
- (void)setForceHEVCMixing:(BOOL)arg1;
- (BOOL)isAllowFp16;
- (void)setIsAllowFp16:(BOOL)arg1;
- (double)lastSEILogTime;
- (void)setLastSEILogTime:(double)arg1;
- (BOOL)cdnPlayerItemHasEverStartedPlay;
- (void)setCdnPlayerItemHasEverStartedPlay:(BOOL)arg1;
- (BOOL)shouldHideLoadingForUsingCachedCdnPlayerItem;
- (void)setShouldHideLoadingForUsingCachedCdnPlayerItem:(BOOL)arg1;
- (id)multiAngleChannelInfoDict;
- (void)setMultiAngleChannelInfoDict:(id)arg1;
- (double)lastMultiAnglePanGestureTranslationX;
- (void)setLastMultiAnglePanGestureTranslationX:(double)arg1;
- (double)lastMultiAnglePanGestureMovedDistanceX;
- (void)setLastMultiAnglePanGestureMovedDistanceX:(double)arg1;
- (CGPoint)multiAnglePanGestureBeganLocation;
- (void)setMultiAnglePanGestureBeganLocation:(CGPoint)arg1;
- (BOOL)shouldUpdateChannelInfoDictAfterSwitchChannel;
- (void)setShouldUpdateChannelInfoDictAfterSwitchChannel:(BOOL)arg1;
- (BOOL)shouldStartPlayForResume;
- (void)setShouldStartPlayForResume:(BOOL)arg1;
- (id)displayMonitor;
- (void)setDisplayMonitor:(id)arg1;
- (id)anchoTimeJsonContent;
- (void)setAnchoTimeJsonContent:(id)arg1;
- (id)anchorTTimer;
- (void)setAnchorTTimer:(id)arg1;
- (long long)currentResourceObjectId;
- (void)setCurrentResourceObjectId:(long long)arg1;
- (id)wevisionWidgetManageLogic;
- (void)setWevisionWidgetManageLogic:(id)arg1;
- (id)magicRewardMemoryManager;
- (void)setMagicRewardMemoryManager:(id)arg1;
- (id)magicEngineEnergyManager;
- (void)setMagicEngineEnergyManager:(id)arg1;
- (long long)cdnAudienceWeEffectScene;
- (void)setCdnAudienceWeEffectScene:(long long)arg1;
- (id)remoteTrtcCustomRenderManager;
- (void)setRemoteTrtcCustomRenderManager:(id)arg1;
- (id)remoteTrtcCustomComposeManager;
- (void)setRemoteTrtcCustomComposeManager:(id)arg1;
- (id)faceDecodeLogic;
- (void)setFaceDecodeLogic:(id)arg1;
- (id)magicEnginePerformanceStatisticManager;
- (void)setMagicEnginePerformanceStatisticManager:(id)arg1;
- (id)remoteTrtcCustomRenderWrapperDict;
- (void)setRemoteTrtcCustomRenderWrapperDict:(id)arg1;
- (BOOL)isAudioRouteSetted;
- (void)setIsAudioRouteSetted:(BOOL)arg1;
- (BOOL)isCdnProcessByWeeffect;
- (void)setIsCdnProcessByWeeffect:(BOOL)arg1;
- (id)livePAGStatistics;
- (void)setLivePAGStatistics:(id)arg1;
- (id)faceDetectStatisticLogic;
- (void)setFaceDetectStatisticLogic:(id)arg1;
- (BOOL)isLiveAudioAuthorityUnActive;
- (void)setIsLiveAudioAuthorityUnActive:(BOOL)arg1;
- (BOOL)enableBackgroundDecoding;
- (void)setEnableBackgroundDecoding:(BOOL)arg1;
- (id)barrageMaskRenderView;
- (void)setBarrageMaskRenderView:(id)arg1;
- (id)prepareAdapter;
- (void)setPrepareAdapter:(id)arg1;
- (id)pushAdapter;
- (void)setPushAdapter:(id)arg1;
- (id)currentChannelInfo;
- (id)nextChannelInfo;
- (void)setNextChannelInfo:(id)arg1;
- (BOOL)hasEverShownMultiAngle;
- (void)setHasEverShownMultiAngle:(BOOL)arg1;
- (id)cdnStreamInfoDict;
- (void)setCdnStreamInfoDict:(id)arg1;
- (id)displayedCdnStreamQualityTagList;
- (void)setDisplayedCdnStreamQualityTagList:(id)arg1;
- (id)allCdnStreamQualityTagList;
- (void)setAllCdnStreamQualityTagList:(id)arg1;
- (id)qualityTagCacheBuf;
- (void)setQualityTagCacheBuf:(id)arg1;
- (id)cdnStreamErrorReportInfo;
- (void)setCdnStreamErrorReportInfo:(id)arg1;
- (unsigned int)streamAbnormalFlag;
- (void)setStreamAbnormalFlag:(unsigned int)arg1;
- (id)seiReportInfoList;
- (void)setSeiReportInfoList:(id)arg1;
- (unsigned long long)audienceLiveState;
- (void)setAudienceLiveState:(unsigned long long)arg1;
- (BOOL)notifyLiveClosed;
- (void)setNotifyLiveClosed:(BOOL)arg1;
- (BOOL)notifyExitLive;
- (void)setNotifyExitLive:(BOOL)arg1;
- (void).cxx_destruct;
@end

