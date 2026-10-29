@interface MMFinderLiveTask : MMLiveTask <MMFinderLiveKTVSongOperationExt, MMFinderLiveTaskFunctionPlugin>
{
    WCFinderLiveEventsReporter * _eventsReporter; // +0x8
    BOOL _isEnableComment; // +0x10
    BOOL _isOnlineStateButtonDisabled; // +0x11
    BOOL _isAllowRotateInIphone; // +0x12
    BOOL _isLargeLive; // +0x13
    BOOL _hasNotifySelfAgree; // +0x14
    BOOL _disableForwardByPrivateAccount; // +0x15
    BOOL _hasCloseLiveByAnchor; // +0x16
    BOOL _isTemporayForcePortrait; // +0x17
    BOOL _lotteryRecordVisible; // +0x18
    BOOL _packageRecordVisible; // +0x19
    BOOL _isResumedLive; // +0x1a
    BOOL _enablePrivateComment; // +0x1b
    BOOL _serverAllowChatRoomBox; // +0x1c
    BOOL _serverAllowProductQuestionBox; // +0x1d
    BOOL _enableCheerClapMode; // +0x1e
    BOOL _isForceUseServerNickName; // +0x1f
    BOOL _isForceRoleType; // +0x20
    BOOL _isAssistantRole; // +0x21
    BOOL _hasFirstShownSelectVisibilityActionSheet; // +0x22
    BOOL _liveShareSettingChanged; // +0x23
    BOOL _isOnlineStateViewShownForAudience; // +0x24
    BOOL _trialTimeout; // +0x25
    BOOL _hasShownGiftWallIntro; // +0x26
    BOOL _hasLogPrintAllGifts; // +0x27
    BOOL _isApplyingMicAsAudience; // +0x28
    BOOL _isConnectMicWithEightAudienceEnabled; // +0x29
    BOOL _isConnectMicAudienceGrabOrLeadModeEnabled; // +0x2a
    BOOL _hasShopWindowInitiated; // +0x2b
    BOOL _isLeaveForAppGame; // +0x2c
    BOOL _isLeaveForCloudGame; // +0x2d
    BOOL _miniGameCreateLiveLaunchFlag; // +0x2e
    BOOL _hasPredictLag; // +0x2f
    BOOL _enableFloatBarrage; // +0x30
    BOOL _hasShowPromotePubble; // +0x31
    BOOL _allowLiveRoomInteractiveHomePageTransition; // +0x32
    BOOL _isFirstFrameRecieved; // +0x33
    BOOL _enableDescExtend; // +0x34
    BOOL _forbidDisplayBarrageContent; // +0x35
    BOOL _hasSetJoinLiveContext; // +0x36
    BOOL _hasReportedQosInfoAtStop; // +0x37
    BOOL _shouldSendMicSEIData; // +0x38
    BOOL _shouldReGenerateMicSEIData; // +0x39
    BOOL _shouldSendMicTalkingUsersSEIData; // +0x3a
    BOOL _hasUpdateCloudMixSelectorInQueue; // +0x3b
    BOOL _paidLiveTrialCountLimitChecked; // +0x3c
    BOOL _hasJoinLiveMicInfo; // +0x3d
    BOOL _hasChangeManual; // +0x3e
    BOOL _enableDisplayFollowBtn; // +0x3f
    BOOL _isForbidLandScape; // +0x40
    unsigned int _startScene; // +0x44
    int _commentScene; // +0x48
    unsigned int _userFlag; // +0x4c
    unsigned int _liveGlobalFlag; // +0x50
    unsigned int _liveStatus; // +0x54
    unsigned int _secondaryDeviceFlag; // +0x58
    unsigned int _preloadedMsgFlags; // +0x5c
    unsigned int _maxVisibilityChatroomCount; // +0x60
    unsigned int _maxVisibilityFriendContactCount; // +0x64
    int _liveMode; // +0x68
    int _wxaLiveScene; // +0x6c
    unsigned int _randomConnectMicWaitTime; // +0x70
    unsigned int _shoppingNotAvailableFlag; // +0x74
    unsigned int _gameLiveEntryOpensdkVersion; // +0x78
    unsigned int _gameAppVersionType; // +0x7c
    unsigned int _liveCoverImgModifyLimitCount; // +0x80
    unsigned int _liveCoverImgModifyRemainCount; // +0x84
    unsigned int _p2p_upload_switch; // +0x88
    unsigned int _p2p_download_switch; // +0x8c
    unsigned int _candidates; // +0x90
    unsigned int _standbys; // +0x94
    unsigned int _load; // +0x98
    unsigned int _xs_4xx_status; // +0x9c
    unsigned int _total_pieces; // +0xa0
    unsigned int _verify_pieces; // +0xa4
    unsigned int _invalid_pieces; // +0xa8
    unsigned int _tag_missed_invalid_pieces; // +0xac
    unsigned int _abnormal_ts_count; // +0xb0
    unsigned int _play_ori_by_no_sei; // +0xb4
    unsigned int _buffer_length; // +0xb8
    unsigned int _max_cdn_firstframe; // +0xbc
    unsigned int _max_p2p_firstframe; // +0xc0
    unsigned int _first_frame_t; // +0xc4
    unsigned int _active_punch_total; // +0xc8
    unsigned int _acitve_punch_succ; // +0xcc
    unsigned int _passive_punch_total; // +0xd0
    unsigned int _passive_punch_succ; // +0xd4
    unsigned int _punch_hole; // +0xd8
    unsigned int _played_bytes; // +0xdc
    unsigned int _fullstream_bytes; // +0xe0
    unsigned int _cdn_substream_bytes; // +0xe4
    unsigned int _fillup_bytes; // +0xe8
    unsigned int _xntp_bytes; // +0xec
    unsigned int _turn_bytes; // +0xf0
    unsigned int _punch_bytes; // +0xf4
    unsigned int _tlive_errmsg_early; // +0xf8
    unsigned int _tlive_errmsg_miss; // +0xfc
    unsigned int _tlive_errmsg_expire; // +0x100
    unsigned int _subscribe_failure_c; // +0x104
    unsigned int _subscribe_refused_c; // +0x108
    unsigned int _subscribe_request_c; // +0x10c
    unsigned int _subscribe_success_c; // +0x110
    unsigned int _subscribe_timeout_c; // +0x114
    unsigned int _toofar_subscribe_c; // +0x118
    unsigned int _too_depth_subscribe_c; // +0x11c
    unsigned int _checkout_subscribe_c; // +0x120
    unsigned int _init_sdk_time; // +0x124
    unsigned int _lastManualSwitchStreamTime; // +0x128
    unsigned int _lastAutoSwitchStreamTime; // +0x12c
    unsigned int _lastLagPredictionTime; // +0x130
    unsigned int _totalLagTime; // +0x134
    unsigned int _totalLagCount; // +0x138
    unsigned int _totalLagCountDuringCdnDownload; // +0x13c
    unsigned int _totalPredictLagCount; // +0x140
    unsigned int _totalLagCountAfterPredict; // +0x144
    unsigned int _totalLagCountCausedByNetworkCompetition; // +0x148
    unsigned int _liveEndCGIDelayMS; // +0x14c
    unsigned int _maxRedPacketChatroomCount; // +0x150
    int _recentNetType; // +0x154
    unsigned int _lastReportTimeStamp; // +0x158
    int _timer5SecExpireCnt; // +0x15c
    int _memFootprintExceedLimitCount; // +0x160
    unsigned int _timesOfSentBytesIsZero; // +0x164
    MMLiveTaskId * _taskId; // +0x168
    MMFinderLiveTaskPluginObj * plugin; // +0x170
    FinderContactLiveInfo * _anchorContactLiveInfo; // +0x178
    MMFinderLiveEventInfo * _liveEventInfo; // +0x180
    MMFinderLiveContentVM * _liveContentVM; // +0x188
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x190
    long long _liveLimitedLevel; // +0x198
    MMFinderLiveContext * _liveContext; // +0x1a0
    FinderLiveTabInfo * _currentTabInfo; // +0x1a8
    NSString * _joinLiveTips; // +0x1b0
    SpamRisk * _spamJumpInfo; // +0x1b8
    WCFinderRedDotTipsShowInfo * _redDotTipsShowInfo; // +0x1c0
    NSString * _verifyInfo; // +0x1c8
    MMFinderLiveFansGroupInfo * _fansGroupInfo; // +0x1d0
    NSArray * _currentSelfBadgeInfoArr; // +0x1d8
    NSArray * _currentAnchorBadgeInfoList; // +0x1e0
    FinderLiveModeInfo * _liveModeInfo; // +0x1e8
    NSArray * _liveAccountInfoList; // +0x1f0
    long long _currentLiveAliasRoleType; // +0x1f8
    WCFinderCreateLivePrepareResponseModel * _createLiveRespModel; // +0x200
    NSArray * _liveModeControlInfoArray; // +0x208
    NSData * _createLiveToken; // +0x210
    FinderLiveErrorPage * _createLiveErrorPage; // +0x218
    NSArray * _allVideoTagInfos; // +0x220
    NSArray * _allAudioTagInfos; // +0x228
    FinderLiveTagInfo * _currentVideoTagInfo; // +0x230
    FinderLiveTagInfo * _currentAudioTagInfo; // +0x238
    NSMutableArray * _allVisibilityFileLists; // +0x240
    long long _currVisibilityMode; // +0x248
    long long _currDisplayVisibilityMode; // +0x250
    WCLocationInfo * _liveLocation; // +0x258
    NSMutableArray * _visibilityFileIdLists; // +0x260
    NSString * _firstVisibleUsername; // +0x268
    NSMutableArray * _visibleChatroomIdList; // +0x270
    NSMutableArray * _visibleUsernameList; // +0x278
    WCFinderStarterLiveViewModel * _starterViewModel; // +0x280
    unsigned long long _livePaymentType; // +0x288
    NSString * _curRewardRecipientUserName; // +0x290
    long long _lastGiftPage; // +0x298
    PAGRenderStatistics * _mainGiftPAGRenderStatistics; // +0x2a0
    PAGRenderStatistics * _mainGiftRFXRenderStatistics; // +0x2a8
    NSArray * _selectedGiftAttackContactUserNames; // +0x2b0
    NSArray * _allMicTalkingUsersList; // +0x2b8
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x2c0
    unsigned long long _connectMicSettingFlag; // +0x2c8
    unsigned long long _preBanMicSettingFlag; // +0x2d0
    MMFinderLiveShopContext * _liveShopContext; // +0x2d8
    OrderedDictionary * _goodsViewModelOrderedDict; // +0x2e0
    FinderLiveFlashSaleInfo * _flashSaleInfo; // +0x2e8
    MMFinderLiveGoodsPromotionReplayFloatView * _promotionFloatView; // +0x2f0
    FinderLiveEcGetLiveConfigResponse * _electronicCommerceConfig; // +0x2f8
    NSArray * _liveNoticeList; // +0x300
    MMFinderLiveGameContext * _liveGameContext; // +0x308
    long long _gameLiveEntryScene; // +0x310
    NSMutableDictionary * _opensdkGameLiveExtInfo; // +0x318
    NSString * _gameAppId; // +0x320
    NSString * _gameAuthTicket; // +0x328
    NSDictionary * _gameLiveStartInfo; // +0x330
    FinderContactLiveInfo * _gameContactLiveInfo; // +0x338
    FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo * _gameLivePrepareInfo; // +0x340
    FinderJumpInfo * _game3DEntrance; // +0x348
    FinderJumpInfo * _liveEligibilityEntrance; // +0x350
    NSString * _gameDynamicCardVersion; // +0x358
    UIImage * _coverImageToPush; // +0x360
    unsigned long long _currentP2pBytes; // +0x368
    unsigned long long _currentCdnBytes; // +0x370
    NSString * _natType; // +0x378
    NSString * _isp; // +0x380
    NSString * _url; // +0x388
    NSString * _xs_full_url; // +0x390
    NSString * _uuid; // +0x398
    NSString * _pieceid; // +0x3a0
    NSString * _send; // +0x3a8
    NSString * _recv; // +0x3b0
    NSString * _p2pSdkVersion; // +0x3b8
    MMFinderLiveReplayStopgapLogic * _replayStopgapLogic; // +0x3c0
    WCFinderLiveSwitchStreamStatistic * _switchStreamStatistic; // +0x3c8
    NSMutableSet * _downloadingTaskIdsDuringLive; // +0x3d0
    double _lastMemoryUtilization; // +0x3d8
    MMFinderLiveLocalAudioModeTimeRecorder * _localAudioModeTimeRecorder; // +0x3e0
    MMLiveAudioRoomModeTimeRecorder * _audioRoomModeTimeRecorder; // +0x3e8
    MMFinderLiveOrientationReportRecoder * _orientationReportRecorder; // +0x3f0
    LiveWeappJumpInfo * _weappJumpInfo; // +0x3f8
    FinderLivePromotionEntrance * _promotionEntrance; // +0x400
    FinderJumpInfo * _creatorCenterEntrance; // +0x408
    FinderJumpInfo * _creatorCenterEntrance2; // +0x410
    FinderLiveFeedbackEntranceInfo * _feedbackEntranceInfo; // +0x418
    FinderJumpInfo * _opPromotionLiteAppInfo; // +0x420
    MMFinderLiveMusicSettingOperationPanel * _musicSettingOprationPanel; // +0x428
    SongListInfo * _songListInfo; // +0x430
    FinderLiveBoxId * _currentBoxId; // +0x438
    MMFinderLiveConcertInfo * _concertInfo; // +0x440
    MMFinderLiveLandscapeBarrageSettingInfo * _landscapeBarrageSetting; // +0x448
    FinderLiveBoxId * _currentChatRoomBoxId; // +0x450
    FinderLiveUserAttrUserSetting * _userSetting; // +0x458
    MMLiveAdsParams * _adsParams; // +0x460
    MMFinderLiveAudioModeBackgroundConfiguration * _audioModeBackgroundConfiguration; // +0x468
    NSMutableDictionary * _resourcePackageDict; // +0x470
    NSMutableArray * _audioCaptureStateArray; // +0x478
    MMFinderLiveGestureLogic * _gestureLogic; // +0x480
    MMFinderLiveStickerLogic * _stickerLogic; // +0x488
    long long _forbidPictureInPictureOptions; // +0x490
    MMFinderJoinLiveContext * _joinLiveContextWhenFailed; // +0x498
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0x4a0
    NSString * _descriptionPromptWording; // +0x4a8
    FinderLiveGuideInfo * _liveGuideInfo; // +0x4b0
    MMFinderLiveSFBarrageView * _barrageContentView; // +0x4b8
    id /* block */ _firstFrameRecievedBlock; // +0x4c0
    unsigned long long _recordScreenScene; // +0x4c8
    MMFinderLiveViewController * _finderLiveViewController; // +0x4d0
    LiveDescInfo * _liveDescInfo; // +0x4d8
    NSString * _gameClientParams; // +0x4e0
    long long _redPacketChatroomSelectionStyle; // +0x4e8
    NSArray * _preparedRedPacketBindingRoomIds; // +0x4f0
    NSArray * _redPacketBindingRoomIds; // +0x4f8
    NSString * _redPacketLiveBuffer; // +0x500
    FinderLiveBattleReportInfo * _battleReportInfo; // +0x508
    MMFinderLiveStickerCompositingLogic * _stickerCompositingLogic; // +0x510
    MMFinderLiveStickerCompositingLogic * _stickerTransmitCompositingLogic; // +0x518
    MMFinderLiveGiftCustomizationCommitLogic * _giftCustomizationCommitLogic; // +0x520
    MMFinderLiveGiftGoalLogic * _giftGoalLogic; // +0x528
    MMFinderLiveGiftNewCustomizationCommitLogic * _giftNewCustomizationCommitLogic; // +0x530
    NSArray * _floatMsgList; // +0x538
    MMLiveGiftResourcesEnsuranceHelper * _giftResourcesEnsuranceHelper; // +0x540
    unsigned long long _syncId; // +0x548
    MMFinderJoinLiveContext * _joinLiveContext; // +0x550
    FinderLiveQoSInfo * _currentQoSInfo; // +0x558
    NSMutableArray * _lastQoSInfoList; // +0x560
    NSMutableArray * _recentQoSInfoList; // +0x568
    NSMutableArray * _qosInfoListForReport; // +0x570
    MMTimer * _timer; // +0x578
    NSString * _lastMicSEIString; // +0x580
    unsigned long long _lastUpdateCloudMixTime; // +0x588
    unsigned long long _loadJoinLiveMicInfoFinishedTimestamp; // +0x590
    unsigned long long _closeLiveOrLiveEndTimestamp; // +0x598
    unsigned long long _limitAntiCheckDuration; // +0x5a0
    unsigned long long _lastP2pBytes; // +0x5a8
    unsigned long long _lastCdnBytes; // +0x5b0
    unsigned long long _lastXs4xxStatus; // +0x5b8
    unsigned long long _lastTotalPieces; // +0x5c0
    unsigned long long _lastVerifyPieces; // +0x5c8
    unsigned long long _lastInvalidPieces; // +0x5d0
    unsigned long long _lastTagMissedInvalidPieces; // +0x5d8
    unsigned long long _lastActive_punch_total; // +0x5e0
    unsigned long long _lastAcitve_punch_succ; // +0x5e8
    unsigned long long _lastPassive_punch_total; // +0x5f0
    unsigned long long _lastPassive_punch_succ; // +0x5f8
    unsigned long long _lastPunch_hole; // +0x600
    unsigned long long _lastPlayed_bytes; // +0x608
    unsigned long long _lastFullstream_bytes; // +0x610
    unsigned long long _lastCdn_substream_bytes; // +0x618
    unsigned long long _lastFillup_bytes; // +0x620
    unsigned long long _lastXntp_bytes; // +0x628
    unsigned long long _lastTurn_bytes; // +0x630
    unsigned long long _lastPunch_bytes; // +0x638
    _TtC6WeChat27MMFinderLiveTaskKaraQuality * _qualityKara; // +0x640
    _TtC6WeChat26MMFinderLiveTaskKaraEnergy * _energyKara; // +0x648
    MMFinderLiveScreenshotPosterLogic * _screenshotPosterLogic; // +0x650
    NSString * _ktvThemeResourceFetchSessionToken; // +0x658
    unsigned long long _currAnchorMainSupportOrientationMask; // +0x660
    unsigned long long _anchorMainSupportOrientationMaskForRotate; // +0x668
}
+ (BOOL)checkFinderDataItemIsValidForLive:(id)arg1;
+ (BOOL)isSecondaryDeviceFlagValid:(unsigned int)arg1;
+ (int)getPreLiveIDCdnQuality;
- (void)openWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 sceneNote:(id)arg3 appId:(id)arg4 fullBuyPath:(id)arg5 productExtData:(id)arg6 productPathCookies:(id)arg7 showNavigationBar:(BOOL)arg8 closeBlock:(id /* block */)arg9;
- (void)openPurchasePageForGoods:(id)arg1 usePushAnimation:(BOOL)arg2 useSheetMode:(BOOL)arg3 forbidPushAnimation:(BOOL)arg4 finderUsername:(id)arg5 sceneNote:(id)arg6 closeBlock:(id /* block */)arg7;
- (void)openPurchasePageForGoods:(id)arg1 usePushAnimation:(BOOL)arg2 sceneNote:(id)arg3 closeBlock:(id /* block */)arg4;
- (void)preloadWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 appId:(id)arg3 fullBuyPath:(id)arg4 productExtData:(id)arg5 productPathCookies:(id)arg6 shouldHotPreload:(BOOL)arg7 showNavigationBar:(BOOL)arg8;
- (void)preloadWeAppForShopProduct:(id)arg1 shouldHotPreload:(BOOL)arg2;
- (void)preloadWeAppForShopAssistant;
- (void)prefetchWeAppPkgForUserName:(id)arg1 inScene:(unsigned int)arg2;
- (void)prefetchWeAppPkgForUserName:(id)arg1 appId:(id)arg2 path:(id)arg3 inScene:(unsigned int)arg4;
- (unsigned int)getBackgroundWeAppTaskCount;
- (id)randomSceneNote:(id)arg1;
- (BOOL)isLiveShoppingAvailable;
- (BOOL)isLiveEnableReward;
- (BOOL)isLiveHasTickets;
- (BOOL)isAudienceLiveRewardEnable;
- (BOOL)isLiveGiftEffectOff;
- (void)setIsLiveGiftEffectOff:(BOOL)arg1;
- (BOOL)isLiveIdentitySwitchEnabled;
- (BOOL)isWatchLiveWithoutLoginEnabled;
- (BOOL)isLiveHandoffEnabled;
- (BOOL)isLiveAirPlayEnabled;
- (BOOL)isGameLivePlayTogetherEnable;
- (BOOL)isLivePictureInPictureEnabled;
- (BOOL)isLiveClearingGiftEffectEnabled;
- (BOOL)isLiveClaritySwitchEnabled;
- (BOOL)isLiveBanComment;
- (BOOL)isLiveBanLike;
- (BOOL)isLiveConnectMicEnabled;
- (BOOL)isLivePaidConnectMicEnabled;
- (BOOL)isLiveEnableAskProductQuestion;
- (id)paidConnectMicSetting;
- (BOOL)isLiveFreeTalkEnabled;
- (BOOL)disableConnectMicButShowOperationMenu;
- (BOOL)disableFreeTalkButShowOperationMenu;
- (BOOL)isGloryShowForAnchor;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)isLiveCutByAntispam;
- (BOOL)isLiveGameInTeamUp;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isShopMiddlePageOptimizationEnabled;
- (BOOL)isLiveShoppingEnabled;
- (BOOL)isShopAssistantSupportPrefetch;
- (BOOL)isLiveGiftSheetScrollDirectionVerticalEnabled;
- (BOOL)isMainThreadLag2023T4OptEnabled;
- (BOOL)isLiveMemory2023T4OptEnabled;
- (BOOL)isReduceBandwidthOptmizationEnabled;
- (BOOL)isLiveDisableShowBiz;
- (BOOL)isHiddenAudienceName;
- (BOOL)isLiveShareQRCodeEnable;
- (BOOL)disableRewardBySpam;
- (BOOL)disableConnectMicBySpam;
- (BOOL)disableCommentBySpam;
- (BOOL)disableMicIntercomBySpam;
- (BOOL)disableFloatMsg;
- (BOOL)disableLandscapeBarrage;
- (BOOL)enableShowProductQuestionSwitch;
- (BOOL)enableSwithRoleByInputView;
- (BOOL)enableSwithRoleByJoinliveMsg;
- (BOOL)isLiveLargeLive;
- (BOOL)isLiveRoomInteractiveHomePageTransitionEnable;
- (BOOL)isLiveMusicEnabled;
- (BOOL)isGame3DDirector;
- (BOOL)canShowLiveRoomInteractiveHomePageTransitionUI;
- (BOOL)isGiftNotifyBannerDisplayAsRewardInfo;
- (unsigned long long)currentConnectMicConditionType;
- (unsigned long long)currentConnectMicLayoutModeInAnchorStatus;
- (BOOL)focusModeOnInNormalConnectMic;
- (BOOL)isConnectMicCanAutoConnect;
- (void)updateConnectMicSettingFlagWithConditionType:(unsigned long long)arg1 layoutMode:(unsigned long long)arg2 andCanAutoConnect:(BOOL)arg3;
- (void)updateConnectMicSettingFlagWithConditionType:(unsigned long long)arg1;
- (void)updateConnectMicSettingFlagWithLayoutMode:(unsigned long long)arg1;
- (void)updateConnectMicSettingFlagWithCanAutoConnect:(BOOL)arg1;
- (id)eventsReporter;
- (void)showOverloadErrorPage:(id)arg1;
- (id)finderTaskID;
- (void)dealloc;
- (id)finderUserName;
- (id)finderDataItem;
- (void)handleRemoteSdkUserLeaveRoom;
- (void)initTaskFunctionPlugins;
- (void)updateTRTCCloudMixtureParams;
- (void)realUpdateTRTCCloudMixtureParams;
- (void)updateMicInfoInSEIAnchorInfo:(id)arg1;
- (void)updateMicTalkingUsersInfoInSEIAnchorInfo:(id)arg1;
- (void)updateAudioRoomModeMicInfoInSEIAnchorInfo:(id)arg1;
- (void)checkAndStartSyncConnectMicSEIForAnchor;
- (void)updateRecordScreenInfoInSEIAnchorInfo:(id)arg1;
- (void)processReceivedGestureSeiMessage:(id)arg1;
- (id)generateConnectMicSEIMsgDataFromList:(id)arg1;
- (id)initWithFinderUserName:(id)arg1;
- (id)initWithFinderContact:(id)arg1;
- (id)initWithFinderDataItem:(id)arg1;
- (id)initWithLiveContentVM:(id)arg1;
- (void)registerExtension;
- (unsigned int)getKtvScene;
- (BOOL)shouldShowKTVLeaveGuide;
- (void)initFrontCameraMirrorMode;
- (void)checkCachedValueAndUpdateFrontCameraMirrored;
- (void)updateFrontCameraMirroredCachedValue;
- (id)lastCameraModeCachedKey;
- (id)micMutedCachedKey;
- (id)pauseStatusCachedKey;
- (id)pauseTimeCachedKey;
- (id)lastFrontCameraNotMirroredCachedKey;
- (BOOL)isFinderLive;
- (unsigned long long)currentLiveScene;
- (BOOL)isWaGameLive;
- (long long)getBeautySceneType;
- (void)initFaceBeautyParam;
- (void)initDefaultData;
- (void)initAllowFreeTalkForLiveAfterAbnormalExitWithLastAnchorStatus:(unsigned long long)arg1;
- (long long)trtcRoleTypeFromMMLiveRoleType:(long long)arg1;
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (id)finderCommentFetchEngine;
- (BOOL)isSameToTask:(id)arg1;
- (BOOL)isLiveClosed;
- (void)handleLiveSdkInfoAllValueUpdated:(id)arg1;
- (void)updateLivePaymentTypeWithLiveInfo:(id)arg1;
- (void)updateFinderDataItem:(id)arg1;
- (void)updateFinderLiveShareItem:(id)arg1;
- (void)updateLiveExtFlag:(unsigned int)arg1;
- (void)updateLiveMicExtFlag:(unsigned long long)arg1;
- (void)updateExtShowFlag:(unsigned long long)arg1;
- (void)updateAskProductQuestionExtFlag:(unsigned long long)arg1;
- (void)updateExtFlagExt:(id)arg1;
- (void)updateFinderLiveModeInfo:(id)arg1;
- (BOOL)canShowGameAngleBtn;
- (BOOL)canShowGloryListInOnlineView;
- (BOOL)canAudienceOpenMicRank;
- (BOOL)canShowLocationInConnectMicScene;
- (BOOL)canShowAnchorLocationInConnectMicScene;
- (void)updateJoinLiveContext:(id)arg1;
- (void)updateFinderLiveLocationFromFinderLocation:(id)arg1;
- (void)updateLiveEventInfo:(id)arg1;
- (void)updateServerAllowChatRoomBox;
- (void)updateServerAllowProductQuestionBox;
- (void)updateEnablePrivateCommentWithForceNotify:(BOOL)arg1;
- (void)updateEnableDisplayFollowBtn;
- (void)updateEnableFloatBarrage;
- (void)updateEnableLandscapeBarrage;
- (void)updateIsLargeLive;
- (BOOL)isLiveEnableOperationForAudience;
- (BOOL)isChargeableLive;
- (void)updateMediaWithFinderObjectInfo:(id)arg1;
- (BOOL)checkServerAllowChatRoomBox;
- (BOOL)checkServerAllowProductQuestionBox;
- (id)anchorIdentityId;
- (unsigned int)liveStartTime;
- (void)setIsOnlineStateButtonDisabled:(BOOL)arg1;
- (BOOL)isOnlineStateButtonDisabled;
- (void)setSecondaryDeviceFlag:(unsigned int)arg1;
- (BOOL)disableForwardByPrivateAccount;
- (id)liveContextCreateIfNotFound;
- (id)liveShopContextCreateIfNotFound;
- (id)liveGameContextCreateIfNotFound;
- (id)currentLiveAccoutInfo;
- (id)getAccoutInfoForAliasRoleType:(unsigned int)arg1;
- (unsigned long long)objectID;
- (id)objectNonceID;
- (id)gameAppId;
- (BOOL)supportSwitchAccount;
- (id)createLiveViewWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)generateMainCdnPlayerItemAndUpdateView:(BOOL)arg1;
- (id)onMMLiveViewGetAvatarUrl;
- (BOOL)startPreviewCdnPlay;
- (void)stopPreviewCdnPlay;
- (void)prepareCdnPlayerItem:(id)arg1;
- (void)removeCdnPlayerItemForExitLive:(BOOL)arg1;
- (BOOL)canEnableLocalCapture;
- (BOOL)resolveConflictsWithLiveTask:(id)arg1 navigationController:(id)arg2 maximizeLiveBlock:(id /* block */)arg3 switchLiveBlock:(id /* block */)arg4;
- (void)copyContentVMPropertyFrom:(id)arg1;
- (BOOL)resolveExternalConflicts;
- (BOOL)judgeExternalConflicts;
- (BOOL)hasResolvedConflictsToTask:(id)arg1;
- (id)conflictWording;
- (void)updateMainRemoteViewFrame;
- (void)updateMainLocalViewFrame;
- (BOOL)isLiveVideoNeedFill;
- (id)getFloatMsgWithProductId:(id)arg1;
- (id)getFloatMsgWithType:(unsigned int)arg1;
- (void)onCommentRefreshConfigUpdated;
- (void)updateMaxCdnSupportFps;
- (id)reportSessionBuffer;
- (void)animateLiveRenderViewRotationWithCoordinator:(id)arg1 completion:(id /* block */)arg2 renderRecoverCompletion:(id /* block */)arg3;
- (BOOL)isAnchorMainLandscapeLive;
- (BOOL)isRecordLiveAnchorPushLandscape;
- (BOOL)isRecordLivePrivacyScene;
- (unsigned long long)anchorMainSupportOrientationMask;
- (unsigned long long)getAnchorMainSupportOrientationMask;
- (void)updateAnchorMainSupportOrientationMask;
- (BOOL)checkAnchorMainOrientationMaskSupportRotate:(long long)arg1;
- (void)recoverAnchorMainSupportOrientationMask:(BOOL)arg1;
- (BOOL)shouldForceLandscapeResMode;
- (BOOL)shouldForbidLandScapeForIphone;
- (void)updateIsForbidLandcape;
- (BOOL)getCurrentShouldForbidLandscape;
- (void)setIsTemporayForcePortrait:(BOOL)arg1;
- (void)setIsApplyingMicAsAudience:(BOOL)arg1;
- (BOOL)isVideoPusher;
- (void)setRemoteVideoFrameSize:(CGSize)arg1;
- (void)setLocalVideoFrameSize:(CGSize)arg1;
- (void)onStatistics:(id)arg1;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)checkAndUpdateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)arg1 andIsAudioMode:(BOOL)arg2;
- (void)updateAudioRoomScene:(unsigned long long)arg1 fromSEI:(BOOL)arg2;
- (id)generateSEILiveModeInfoString;
- (BOOL)muteLiveRemoteAudio;
- (BOOL)unMuteLiveRemoteAudio;
- (BOOL)enableBarrage;
- (BOOL)enableDisplayFloatBarrage;
- (BOOL)enableDisplayLandscapeBarrage;
- (void)onSynchronizedSEIAnchorStatus:(unsigned long long)arg1;
- (id)getLowerQualityCdnTransInfo;
- (id)getHigherQualityCdnStreamInfo;
- (BOOL)isAutoSwitchStreamEnabled;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (void)notifyStreamLoadingForFaceDetect;
- (void)onLiveCDNPlayerItem:(id)arg1 netStatus:(id)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRefresh:(__CVBuffer *)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (id)getRootLiveTask;
- (void)onLiveCDNPlayerItem:(id)arg1 weEffectProcessedRenderFrameRefresh:(id)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 videoDecodeTypeChanged:(unsigned long long)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 renderFpsUpdate:(int)arg2;
- (BOOL)isLiveCDNPlayerItemNeedStopRenderPixel:(id)arg1;
- (void)livePushAdapter:(id)arg1 didPushNetStatus:(id)arg2;
- (BOOL)recordRecentQosAndPredictLag:(id)arg1;
- (BOOL)checkIsQosIntervalOK;
- (id)getCurrentFinderLiveClientStatus;
- (void)fillSupportMaskInFinderLiveClientStatus:(id)arg1;
- (void)fillCdnPlayInfoInFinderLiveClientStatus:(id)arg1;
- (void)fillAbnormalInfoInFinderLiveClientStatus:(id)arg1;
- (id)getCurrentFinderLiveSeiStatInfo;
- (void)updateLiveParamsWithMediaSpec:(id)arg1;
- (void)checkAndUpdateVideoMuteImageForAudioMode;
- (void)checkAndLoadCoverImageToPush;
- (void)updateAnchorLiveRoomCoverImage;
- (void)updateAnchorLiveRoomCoverImageAsHeadURL;
- (void)updateAudienceLiveRoomCoverImage;
- (void)setCoverImageToPush:(id)arg1;
- (void)setAudioModeBackgroundConfiguration:(id)arg1;
- (BOOL)isCaptureRes1920x1440Enable;
- (BOOL)shouldShowGameRankEducationTips;
- (BOOL)showLiveGameBottomView;
- (BOOL)needStopRenderBufferInLiveRoom;
- (id)musicSettingOprationPanel;
- (int)commentScene;
- (CGSize)videoSize;
- (long long)cgiLiveScene;
- (id)anchorSdkUserId;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (BOOL)isInConnectedMicUI;
- (void)updateVideoEncoderParamModeAfterMicUsersChangedTo:(id)arg1;
- (id)cachedMicUsersList;
- (id)currentSingerContact;
- (BOOL)singerIsAnchorSelf;
- (BOOL)isActivityLiveTask;
- (BOOL)canDisplayAutoAppearPanel;
- (id)currentReplayUrl;
- (id)currentPromotionReplayUrl;
- (id)currentReplayHlsPemKey;
- (id)coverImageUri;
- (id)adCoverImageUri;
- (id)lastDefaultCover16vs9ImageUri;
- (id)lastDefaultCover4vs3ImageUri;
- (id)stickerCompositingLogic;
- (id)stickerTransmitCompositingLogic;
- (id)orientationReportRecorder;
- (void)checkAndUpdateAllowRotateStateInIphone;
- (void)setIsAllowRotateInIphone:(BOOL)arg1;
- (void)setIsLivePlayingViaCdn:(BOOL)arg1;
- (BOOL)canCreateLiveSongs;
- (id)feedbackEntranceInfo;
- (BOOL)isLiveMute;
- (id)anchorNickname;
- (id)replayStopgapLogic;
- (void)setLastCdnQuality:(unsigned int)arg1;
- (void)setLivePlayStatusForAudience:(long long)arg1;
- (BOOL)isMemberLive;
- (BOOL)isSuperfanLive;
- (id)landscapeBarrageSetting;
- (id)liveOperationView;
- (id)liveOperationViewModel;
- (id)giftNewCustomizationCommitLogic;
- (unsigned long long)connectMicSettingMask;
- (long long)maxSupportCdnFps;
- (int)currentVideoQualityLevel;
- (BOOL)hasRecentQoSInfo;
- (void)onVideoFpsChanged;
- (BOOL)showsRedPacket;
- (BOOL)isTryViewLive;
- (void)checkPaidLiveTrialCountLimitReached;
- (BOOL)enableSwitchStreamInSvrConfig;
- (id)cdnURLForCasting;
- (BOOL)isCastingAvailable;
- (BOOL)canStartCasting;
- (BOOL)checkPaymentStateForCasting;
- (void)updateBattleReportInfoWithBattleId:(id)arg1 andTimeLeft:(unsigned int)arg2;
- (void)clearBattleReportInfo;
- (BOOL)enableAutoStartPIPInBackground;
- (BOOL)startPIPMinimizeMode;
- (id)pipHandleLogic;
- (id)customPIPHandleLogic;
- (BOOL)useCustomPIP;
- (BOOL)isCurrentSingerDisableBeRewardedInMic;
- (id)curRewardRecipientUserName;
- (id)curRewardRecipientContact;
- (id)rewardRecipientContactList;
- (id)getRewardRecipientContactList:(BOOL)arg1 excludeSelf:(BOOL)arg2;
- (id)currentRoomRewardRecipientContactList;
- (id)rewardRecipientUserNameList;
- (id)rewardRecipientUserNameListForAllRecipient;
- (id)allRewardRecipientUserNameList;
- (BOOL)hasMultiRewardRecipients;
- (id)selfConnectMicUser;
- (id)getFinderContactWithSdkUserId:(id)arg1;
- (BOOL)isAnchorLiveStarterCornerScene;
- (BOOL)isConnectMicWithAnotherAnchor;
- (id)giftAttackContactList;
- (id)selectedGiftAttackContactUserNames;
- (id)selectedGiftAttackContactList;
- (void)fixOrientationMaskForAnchorPush;
- (void)updateOrientationMaskForAnchorPreLive:(unsigned long long)arg1;
- (void)forceChangeSupportedOrientationMaskForAnchor:(unsigned long long)arg1;
- (BOOL)isConnectMicAnotherAnchor:(id)arg1;
- (BOOL)isConnectMicAnotherRoomAudience:(id)arg1;
- (BOOL)isConnectMicAudience:(id)arg1;
- (id)getConnectMicAnotherAnchorUserInfo:(id)arg1;
- (id)getSelfSdkUserId;
- (id)directGetSelfSdkUserId;
- (void)updateIsAllowSettingBGMusic:(BOOL)arg1;
- (BOOL)enableMiniGameSettingBGM;
- (BOOL)enableSettingBGMusic;
- (BOOL)isGameLiveAnchor;
- (BOOL)isPCSecondaryDevice;
- (BOOL)isGameLiveSecondaryDevice;
- (BOOL)isPCLive;
- (id)currGameJoinTeamBtnWording;
- (id)gameJoinTeamBtnWordingWithTeamMode:(unsigned int)arg1;
- (unsigned int)finderLiveSourceType;
- (void)exitLiveRoom;
- (void)startReportTimer;
- (void)stopReportTimer;
- (void)clearReportTimer;
- (void)onTimerCallback;
- (void)checkTriggerAntiAddict;
- (void)enterAntiScene;
- (void)leaveAntiScene;
- (void)updateIsPureAudioMode:(BOOL)arg1 showTip:(BOOL)arg2 forceTipsWhenUnchanged:(BOOL)arg3;
- (void)doLivePlayReport:(BOOL)arg1;
- (void)reportEngineLog;
- (void)printFinderLiveQoSInfo:(id)arg1 qosExtInfo:(id)arg2;
- (id)getQosParamKey:(id)arg1;
- (id)getCurrentFinderName;
- (id)getCurrentFinderUsername;
- (void)didFirstCdnPlayOk;
- (void)didFirstJoinLiveOk;
- (void)checkDisplayNotifyBannerReward;
- (void)updateJoinLiveMicInfoFlag;
- (void)updateJoinLiveMicInfoFinishedTime;
- (void)updateFansGroupInfo:(id)arg1;
- (id)fansGroupInfo;
- (void)reportCdnUserEnterLiveLoadTimeLog;
- (void)liveCaptureAdapter:(id)arg1 didFinishCollectingCaptureMetrics:(id)arg2;
- (void)liveCaptureAdapter:(id)arg1 didRenderRotateTransitingChanged:(BOOL)arg2;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)onReportP2pStat:(id)arg1 initTime:(unsigned long long)arg2;
- (id)replaceWithP2pUrl:(id)arg1;
- (void)addAudioCaptureState:(unsigned int)arg1;
- (void)clearAudioCaptureState;
- (void)onResetP2pStat;
- (void)onReportLag:(unsigned int)arg1;
- (void)reportThatLiveRoomLagForJoinLiveQualityProphet;
- (id)audioCaptureStateArray;
- (void)updateFinderLiveDescription:(id)arg1 liveDescInfo:(id)arg2 enableDescExtend:(BOOL)arg3;
- (void)setLiveDescription:(id)arg1;
- (id)resourcePkgWithType:(unsigned long long)arg1;
- (id)liveDecorPkg;
- (id)visionEffectsPkg;
- (void)updateResourcePackageList:(id)arg1 fromCreateLive:(BOOL)arg2;
- (void)handleLiveDecorUpdateIfNeede:(BOOL)arg1;
- (void)checkPreloadLiveDecorIfNeeded;
- (void)handleLiveVisionEffectUpdateIfNeede:(BOOL)arg1;
- (void)checkPreloadVisionEffectsIfNeeded;
- (BOOL)showRewardAmountGlobal;
- (BOOL)enableStateButtonGlobal;
- (BOOL)showBothHeatAndRewardHeat;
- (BOOL)enableMicFocusing;
- (BOOL)enableTopComment;
- (BOOL)enableShareLive;
- (BOOL)enableLiveVote;
- (BOOL)enableLiveLottery;
- (BOOL)enableLiveLikeShowHeadImage;
- (BOOL)enableCommentInsertLocalMsg;
- (BOOL)enableScreenshotPoster;
- (BOOL)hideNickBySpamCheck;
- (void)currentStreamInfoGetIsH265:(BOOL *)arg1 videoQualityLevel:(int *)arg2;
- (void)reportKaraThatSwitchStreamWithTargetQuality:(unsigned int)arg1 smooth:(BOOL)arg2 manually:(BOOL)arg3;
- (void)reportKaraThatSwitchStreamWithStartQuality:(unsigned int)arg1 targetQuality:(unsigned int)arg2 smooth:(BOOL)arg3 manually:(BOOL)arg4;
- (void)cleanAdsStatus;
- (id)getCurrentStreamId;
- (BOOL)pauseAdsPlayerIfNeeded;
- (BOOL)resumeAdsPlayerIfNeeded;
- (BOOL)pauseAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)switchIsAudienceLocalAudioMode:(BOOL)arg1;
- (void)handleIsAudienceLocalAudioModeChangedTo:(BOOL)arg1;
- (void)notifyMinimizeModeChangedTo:(BOOL)arg1;
- (void)notifyHomePageBottomLiveViewAppearanceChangedTo:(BOOL)arg1;
- (void)initWeeffectManager;
- (id)realUserSetting;
- (void)updateUserSettingWith:(id)arg1;
- (BOOL)anchorVersionSupportNewMicBoard;
- (BOOL)enableMicAndPKBoard;
- (BOOL)enableMicAndPKBoardHeatValue;
- (id)currentLiveRoomButtonDisplayInfo;
- (void)updateHasShownVideoZoomGuideViewValue;
- (void)markHasShownVideoZoomGuideView;
- (void)onWeEffectLuaScriptJsonMessageReceived:(id)arg1 fromSourceId:(int)arg2;
- (id)mm2LiveTabName;
- (void)energyController:(id)arg1 instantMemoryFootprintPercentageDidChange:(double)arg2;
- (double)getFootprintPercentThreshold;
- (void)liveMetricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (BOOL)isGameLiveMode;
- (BOOL)isMiniGameLiveMode;
- (BOOL)isRecordLive;
- (void)setLiveModeControlInfoArray:(id)arg1;
- (void)updateLiveTagInfo:(id)arg1 isAllLiveMode:(BOOL)arg2 finderLiveMode:(unsigned long long)arg3;
- (void)updateLiveAllTagInfo:(id)arg1 isAllLiveMode:(BOOL)arg2 finderLiveMode:(unsigned long long)arg3;
- (id)getCurrentModeAllTagInfos;
- (id)getCurrentModeCurrentTagInfo;
- (id)getCurrentLiveModeControlInfo:(unsigned long long)arg1;
- (BOOL)needHideAudioLiveMode;
- (BOOL)needHideKTVLiveMode;
- (BOOL)canShowVisionEffectReddot;
- (id)finderOrNil;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isEnableComment;
- (void)setIsEnableComment:(BOOL)arg1;
- (BOOL)isAllowRotateInIphone;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)anchorContactLiveInfo;
- (void)setAnchorContactLiveInfo:(id)arg1;
- (id)liveEventInfo;
- (void)setLiveEventInfo:(id)arg1;
- (id)liveContentVM;
- (void)setLiveContentVM:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (unsigned int)startScene;
- (void)setStartScene:(unsigned int)arg1;
- (long long)liveLimitedLevel;
- (void)setLiveLimitedLevel:(long long)arg1;
- (void)setCommentScene:(int)arg1;
- (id)liveContext;
- (void)setLiveContext:(id)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (unsigned int)liveGlobalFlag;
- (void)setLiveGlobalFlag:(unsigned int)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (unsigned int)secondaryDeviceFlag;
- (id)currentTabInfo;
- (void)setCurrentTabInfo:(id)arg1;
- (BOOL)isLargeLive;
- (void)setIsLargeLive:(BOOL)arg1;
- (BOOL)hasNotifySelfAgree;
- (void)setHasNotifySelfAgree:(BOOL)arg1;
- (void)setDisableForwardByPrivateAccount:(BOOL)arg1;
- (id)joinLiveTips;
- (void)setJoinLiveTips:(id)arg1;
- (BOOL)hasCloseLiveByAnchor;
- (void)setHasCloseLiveByAnchor:(BOOL)arg1;
- (BOOL)isTemporayForcePortrait;
- (BOOL)lotteryRecordVisible;
- (void)setLotteryRecordVisible:(BOOL)arg1;
- (BOOL)packageRecordVisible;
- (void)setPackageRecordVisible:(BOOL)arg1;
- (id)spamJumpInfo;
- (void)setSpamJumpInfo:(id)arg1;
- (BOOL)isResumedLive;
- (void)setIsResumedLive:(BOOL)arg1;
- (id)redDotTipsShowInfo;
- (void)setRedDotTipsShowInfo:(id)arg1;
- (BOOL)enablePrivateComment;
- (void)setEnablePrivateComment:(BOOL)arg1;
- (BOOL)serverAllowChatRoomBox;
- (void)setServerAllowChatRoomBox:(BOOL)arg1;
- (BOOL)serverAllowProductQuestionBox;
- (void)setServerAllowProductQuestionBox:(BOOL)arg1;
- (BOOL)enableCheerClapMode;
- (void)setEnableCheerClapMode:(BOOL)arg1;
- (unsigned int)preloadedMsgFlags;
- (void)setPreloadedMsgFlags:(unsigned int)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (BOOL)isForceUseServerNickName;
- (void)setIsForceUseServerNickName:(BOOL)arg1;
- (void)setFansGroupInfo:(id)arg1;
- (id)currentSelfBadgeInfoArr;
- (void)setCurrentSelfBadgeInfoArr:(id)arg1;
- (id)currentAnchorBadgeInfoList;
- (void)setCurrentAnchorBadgeInfoList:(id)arg1;
- (id)liveModeInfo;
- (void)setLiveModeInfo:(id)arg1;
- (BOOL)isForceRoleType;
- (void)setIsForceRoleType:(BOOL)arg1;
- (id)liveAccountInfoList;
- (void)setLiveAccountInfoList:(id)arg1;
- (long long)currentLiveAliasRoleType;
- (void)setCurrentLiveAliasRoleType:(long long)arg1;
- (BOOL)isAssistantRole;
- (void)setIsAssistantRole:(BOOL)arg1;
- (id)createLiveRespModel;
- (void)setCreateLiveRespModel:(id)arg1;
- (id)liveModeControlInfoArray;
- (id)createLiveToken;
- (void)setCreateLiveToken:(id)arg1;
- (id)createLiveErrorPage;
- (void)setCreateLiveErrorPage:(id)arg1;
- (id)allVideoTagInfos;
- (void)setAllVideoTagInfos:(id)arg1;
- (id)allAudioTagInfos;
- (void)setAllAudioTagInfos:(id)arg1;
- (id)currentVideoTagInfo;
- (void)setCurrentVideoTagInfo:(id)arg1;
- (id)currentAudioTagInfo;
- (void)setCurrentAudioTagInfo:(id)arg1;
- (id)allVisibilityFileLists;
- (void)setAllVisibilityFileLists:(id)arg1;
- (unsigned int)maxVisibilityChatroomCount;
- (void)setMaxVisibilityChatroomCount:(unsigned int)arg1;
- (unsigned int)maxVisibilityFriendContactCount;
- (void)setMaxVisibilityFriendContactCount:(unsigned int)arg1;
- (long long)currVisibilityMode;
- (void)setCurrVisibilityMode:(long long)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (long long)currDisplayVisibilityMode;
- (void)setCurrDisplayVisibilityMode:(long long)arg1;
- (BOOL)hasFirstShownSelectVisibilityActionSheet;
- (void)setHasFirstShownSelectVisibilityActionSheet:(BOOL)arg1;
- (BOOL)liveShareSettingChanged;
- (void)setLiveShareSettingChanged:(BOOL)arg1;
- (BOOL)isOnlineStateViewShownForAudience;
- (void)setIsOnlineStateViewShownForAudience:(BOOL)arg1;
- (int)wxaLiveScene;
- (void)setWxaLiveScene:(int)arg1;
- (id)liveLocation;
- (void)setLiveLocation:(id)arg1;
- (id)visibilityFileIdLists;
- (void)setVisibilityFileIdLists:(id)arg1;
- (id)firstVisibleUsername;
- (void)setFirstVisibleUsername:(id)arg1;
- (id)visibleChatroomIdList;
- (void)setVisibleChatroomIdList:(id)arg1;
- (id)visibleUsernameList;
- (void)setVisibleUsernameList:(id)arg1;
- (id)starterViewModel;
- (void)setStarterViewModel:(id)arg1;
- (unsigned long long)livePaymentType;
- (void)setLivePaymentType:(unsigned long long)arg1;
- (BOOL)trialTimeout;
- (void)setTrialTimeout:(BOOL)arg1;
- (void)setCurRewardRecipientUserName:(id)arg1;
- (long long)lastGiftPage;
- (void)setLastGiftPage:(long long)arg1;
- (BOOL)hasShownGiftWallIntro;
- (void)setHasShownGiftWallIntro:(BOOL)arg1;
- (BOOL)hasLogPrintAllGifts;
- (void)setHasLogPrintAllGifts:(BOOL)arg1;
- (id)mainGiftPAGRenderStatistics;
- (void)setMainGiftPAGRenderStatistics:(id)arg1;
- (id)mainGiftRFXRenderStatistics;
- (void)setMainGiftRFXRenderStatistics:(id)arg1;
- (void)setSelectedGiftAttackContactUserNames:(id)arg1;
- (id)allMicTalkingUsersList;
- (void)setAllMicTalkingUsersList:(id)arg1;
- (BOOL)isApplyingMicAsAudience;
- (id)allConnectedMicUsersInfo;
- (unsigned long long)connectMicSettingFlag;
- (void)setConnectMicSettingFlag:(unsigned long long)arg1;
- (unsigned long long)preBanMicSettingFlag;
- (void)setPreBanMicSettingFlag:(unsigned long long)arg1;
- (unsigned int)randomConnectMicWaitTime;
- (void)setRandomConnectMicWaitTime:(unsigned int)arg1;
- (BOOL)isConnectMicWithEightAudienceEnabled;
- (void)setIsConnectMicWithEightAudienceEnabled:(BOOL)arg1;
- (BOOL)isConnectMicAudienceGrabOrLeadModeEnabled;
- (void)setIsConnectMicAudienceGrabOrLeadModeEnabled:(BOOL)arg1;
- (id)liveShopContext;
- (void)setLiveShopContext:(id)arg1;
- (unsigned int)shoppingNotAvailableFlag;
- (void)setShoppingNotAvailableFlag:(unsigned int)arg1;
- (BOOL)hasShopWindowInitiated;
- (void)setHasShopWindowInitiated:(BOOL)arg1;
- (id)goodsViewModelOrderedDict;
- (void)setGoodsViewModelOrderedDict:(id)arg1;
- (id)flashSaleInfo;
- (void)setFlashSaleInfo:(id)arg1;
- (id)promotionFloatView;
- (void)setPromotionFloatView:(id)arg1;
- (id)electronicCommerceConfig;
- (void)setElectronicCommerceConfig:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)liveGameContext;
- (void)setLiveGameContext:(id)arg1;
- (long long)gameLiveEntryScene;
- (void)setGameLiveEntryScene:(long long)arg1;
- (unsigned int)gameLiveEntryOpensdkVersion;
- (void)setGameLiveEntryOpensdkVersion:(unsigned int)arg1;
- (id)opensdkGameLiveExtInfo;
- (void)setOpensdkGameLiveExtInfo:(id)arg1;
- (void)setGameAppId:(id)arg1;
- (id)gameAuthTicket;
- (void)setGameAuthTicket:(id)arg1;
- (unsigned int)gameAppVersionType;
- (void)setGameAppVersionType:(unsigned int)arg1;
- (id)gameLiveStartInfo;
- (void)setGameLiveStartInfo:(id)arg1;
- (BOOL)isLeaveForAppGame;
- (void)setIsLeaveForAppGame:(BOOL)arg1;
- (BOOL)isLeaveForCloudGame;
- (void)setIsLeaveForCloudGame:(BOOL)arg1;
- (BOOL)miniGameCreateLiveLaunchFlag;
- (void)setMiniGameCreateLiveLaunchFlag:(BOOL)arg1;
- (id)gameContactLiveInfo;
- (void)setGameContactLiveInfo:(id)arg1;
- (id)gameLivePrepareInfo;
- (void)setGameLivePrepareInfo:(id)arg1;
- (id)game3DEntrance;
- (void)setGame3DEntrance:(id)arg1;
- (id)liveEligibilityEntrance;
- (void)setLiveEligibilityEntrance:(id)arg1;
- (id)gameDynamicCardVersion;
- (void)setGameDynamicCardVersion:(id)arg1;
- (id)coverImageToPush;
- (unsigned int)liveCoverImgModifyLimitCount;
- (void)setLiveCoverImgModifyLimitCount:(unsigned int)arg1;
- (unsigned int)liveCoverImgModifyRemainCount;
- (void)setLiveCoverImgModifyRemainCount:(unsigned int)arg1;
- (unsigned long long)currentP2pBytes;
- (void)setCurrentP2pBytes:(unsigned long long)arg1;
- (unsigned long long)currentCdnBytes;
- (void)setCurrentCdnBytes:(unsigned long long)arg1;
- (id)natType;
- (void)setNatType:(id)arg1;
- (unsigned int)p2p_upload_switch;
- (void)setP2p_upload_switch:(unsigned int)arg1;
- (unsigned int)p2p_download_switch;
- (void)setP2p_download_switch:(unsigned int)arg1;
- (unsigned int)candidates;
- (void)setCandidates:(unsigned int)arg1;
- (unsigned int)standbys;
- (void)setStandbys:(unsigned int)arg1;
- (unsigned int)load;
- (void)setLoad:(unsigned int)arg1;
- (id)isp;
- (void)setIsp:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)xs_full_url;
- (void)setXs_full_url:(id)arg1;
- (unsigned int)xs_4xx_status;
- (void)setXs_4xx_status:(unsigned int)arg1;
- (unsigned int)total_pieces;
- (void)setTotal_pieces:(unsigned int)arg1;
- (unsigned int)verify_pieces;
- (void)setVerify_pieces:(unsigned int)arg1;
- (unsigned int)invalid_pieces;
- (void)setInvalid_pieces:(unsigned int)arg1;
- (unsigned int)tag_missed_invalid_pieces;
- (void)setTag_missed_invalid_pieces:(unsigned int)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)pieceid;
- (void)setPieceid:(id)arg1;
- (id)send;
- (void)setSend:(id)arg1;
- (id)recv;
- (void)setRecv:(id)arg1;
- (unsigned int)abnormal_ts_count;
- (void)setAbnormal_ts_count:(unsigned int)arg1;
- (unsigned int)play_ori_by_no_sei;
- (void)setPlay_ori_by_no_sei:(unsigned int)arg1;
- (unsigned int)buffer_length;
- (void)setBuffer_length:(unsigned int)arg1;
- (unsigned int)max_cdn_firstframe;
- (void)setMax_cdn_firstframe:(unsigned int)arg1;
- (unsigned int)max_p2p_firstframe;
- (void)setMax_p2p_firstframe:(unsigned int)arg1;
- (unsigned int)first_frame_t;
- (void)setFirst_frame_t:(unsigned int)arg1;
- (unsigned int)active_punch_total;
- (void)setActive_punch_total:(unsigned int)arg1;
- (unsigned int)acitve_punch_succ;
- (void)setAcitve_punch_succ:(unsigned int)arg1;
- (unsigned int)passive_punch_total;
- (void)setPassive_punch_total:(unsigned int)arg1;
- (unsigned int)passive_punch_succ;
- (void)setPassive_punch_succ:(unsigned int)arg1;
- (unsigned int)punch_hole;
- (void)setPunch_hole:(unsigned int)arg1;
- (unsigned int)played_bytes;
- (void)setPlayed_bytes:(unsigned int)arg1;
- (unsigned int)fullstream_bytes;
- (void)setFullstream_bytes:(unsigned int)arg1;
- (unsigned int)cdn_substream_bytes;
- (void)setCdn_substream_bytes:(unsigned int)arg1;
- (unsigned int)fillup_bytes;
- (void)setFillup_bytes:(unsigned int)arg1;
- (unsigned int)xntp_bytes;
- (void)setXntp_bytes:(unsigned int)arg1;
- (unsigned int)turn_bytes;
- (void)setTurn_bytes:(unsigned int)arg1;
- (unsigned int)punch_bytes;
- (void)setPunch_bytes:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_early;
- (void)setTlive_errmsg_early:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_miss;
- (void)setTlive_errmsg_miss:(unsigned int)arg1;
- (unsigned int)tlive_errmsg_expire;
- (void)setTlive_errmsg_expire:(unsigned int)arg1;
- (unsigned int)subscribe_failure_c;
- (void)setSubscribe_failure_c:(unsigned int)arg1;
- (unsigned int)subscribe_refused_c;
- (void)setSubscribe_refused_c:(unsigned int)arg1;
- (unsigned int)subscribe_request_c;
- (void)setSubscribe_request_c:(unsigned int)arg1;
- (unsigned int)subscribe_success_c;
- (void)setSubscribe_success_c:(unsigned int)arg1;
- (unsigned int)subscribe_timeout_c;
- (void)setSubscribe_timeout_c:(unsigned int)arg1;
- (unsigned int)toofar_subscribe_c;
- (void)setToofar_subscribe_c:(unsigned int)arg1;
- (unsigned int)too_depth_subscribe_c;
- (void)setToo_depth_subscribe_c:(unsigned int)arg1;
- (unsigned int)checkout_subscribe_c;
- (void)setCheckout_subscribe_c:(unsigned int)arg1;
- (unsigned int)init_sdk_time;
- (void)setInit_sdk_time:(unsigned int)arg1;
- (id)p2pSdkVersion;
- (void)setP2pSdkVersion:(id)arg1;
- (void)setReplayStopgapLogic:(id)arg1;
- (unsigned int)lastManualSwitchStreamTime;
- (void)setLastManualSwitchStreamTime:(unsigned int)arg1;
- (unsigned int)lastAutoSwitchStreamTime;
- (void)setLastAutoSwitchStreamTime:(unsigned int)arg1;
- (unsigned int)lastLagPredictionTime;
- (void)setLastLagPredictionTime:(unsigned int)arg1;
- (unsigned int)totalLagTime;
- (void)setTotalLagTime:(unsigned int)arg1;
- (id)switchStreamStatistic;
- (void)setSwitchStreamStatistic:(id)arg1;
- (unsigned int)totalLagCount;
- (void)setTotalLagCount:(unsigned int)arg1;
- (unsigned int)totalLagCountDuringCdnDownload;
- (void)setTotalLagCountDuringCdnDownload:(unsigned int)arg1;
- (id)downloadingTaskIdsDuringLive;
- (void)setDownloadingTaskIdsDuringLive:(id)arg1;
- (BOOL)hasPredictLag;
- (void)setHasPredictLag:(BOOL)arg1;
- (unsigned int)totalPredictLagCount;
- (void)setTotalPredictLagCount:(unsigned int)arg1;
- (unsigned int)totalLagCountAfterPredict;
- (void)setTotalLagCountAfterPredict:(unsigned int)arg1;
- (unsigned int)totalLagCountCausedByNetworkCompetition;
- (void)setTotalLagCountCausedByNetworkCompetition:(unsigned int)arg1;
- (double)lastMemoryUtilization;
- (void)setLastMemoryUtilization:(double)arg1;
- (id)localAudioModeTimeRecorder;
- (void)setLocalAudioModeTimeRecorder:(id)arg1;
- (id)audioRoomModeTimeRecorder;
- (void)setAudioRoomModeTimeRecorder:(id)arg1;
- (void)setOrientationReportRecorder:(id)arg1;
- (id)weappJumpInfo;
- (void)setWeappJumpInfo:(id)arg1;
- (id)promotionEntrance;
- (void)setPromotionEntrance:(id)arg1;
- (id)creatorCenterEntrance;
- (void)setCreatorCenterEntrance:(id)arg1;
- (id)creatorCenterEntrance2;
- (void)setCreatorCenterEntrance2:(id)arg1;
- (void)setFeedbackEntranceInfo:(id)arg1;
- (id)opPromotionLiteAppInfo;
- (void)setOpPromotionLiteAppInfo:(id)arg1;
- (void)setMusicSettingOprationPanel:(id)arg1;
- (id)songListInfo;
- (void)setSongListInfo:(id)arg1;
- (id)currentBoxId;
- (void)setCurrentBoxId:(id)arg1;
- (id)concertInfo;
- (void)setConcertInfo:(id)arg1;
- (BOOL)enableFloatBarrage;
- (void)setEnableFloatBarrage:(BOOL)arg1;
- (void)setLandscapeBarrageSetting:(id)arg1;
- (id)currentChatRoomBoxId;
- (void)setCurrentChatRoomBoxId:(id)arg1;
- (id)userSetting;
- (void)setUserSetting:(id)arg1;
- (id)adsParams;
- (void)setAdsParams:(id)arg1;
- (id)audioModeBackgroundConfiguration;
- (id)resourcePackageDict;
- (void)setResourcePackageDict:(id)arg1;
- (unsigned int)liveEndCGIDelayMS;
- (void)setLiveEndCGIDelayMS:(unsigned int)arg1;
- (BOOL)hasShowPromotePubble;
- (void)setHasShowPromotePubble:(BOOL)arg1;
- (void)setAudioCaptureStateArray:(id)arg1;
- (id)gestureLogic;
- (void)setGestureLogic:(id)arg1;
- (BOOL)allowLiveRoomInteractiveHomePageTransition;
- (void)setAllowLiveRoomInteractiveHomePageTransition:(BOOL)arg1;
- (id)stickerLogic;
- (void)setStickerLogic:(id)arg1;
- (long long)forbidPictureInPictureOptions;
- (void)setForbidPictureInPictureOptions:(long long)arg1;
- (id)joinLiveContextWhenFailed;
- (void)setJoinLiveContextWhenFailed:(id)arg1;
- (id)beautyResourcesDescriptor;
- (void)setBeautyResourcesDescriptor:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (id)liveGuideInfo;
- (void)setLiveGuideInfo:(id)arg1;
- (id)barrageContentView;
- (void)setBarrageContentView:(id)arg1;
- (id /* block */)firstFrameRecievedBlock;
- (void)setFirstFrameRecievedBlock:(id /* block */)arg1;
- (BOOL)isFirstFrameRecieved;
- (void)setIsFirstFrameRecieved:(BOOL)arg1;
- (unsigned long long)recordScreenScene;
- (void)setRecordScreenScene:(unsigned long long)arg1;
- (id)finderLiveViewController;
- (void)setFinderLiveViewController:(id)arg1;
- (id)liveDescInfo;
- (void)setLiveDescInfo:(id)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (unsigned int)maxRedPacketChatroomCount;
- (void)setMaxRedPacketChatroomCount:(unsigned int)arg1;
- (long long)redPacketChatroomSelectionStyle;
- (void)setRedPacketChatroomSelectionStyle:(long long)arg1;
- (id)preparedRedPacketBindingRoomIds;
- (void)setPreparedRedPacketBindingRoomIds:(id)arg1;
- (id)redPacketBindingRoomIds;
- (void)setRedPacketBindingRoomIds:(id)arg1;
- (id)redPacketLiveBuffer;
- (void)setRedPacketLiveBuffer:(id)arg1;
- (id)battleReportInfo;
- (void)setBattleReportInfo:(id)arg1;
- (BOOL)forbidDisplayBarrageContent;
- (void)setForbidDisplayBarrageContent:(BOOL)arg1;
- (void)setStickerCompositingLogic:(id)arg1;
- (void)setStickerTransmitCompositingLogic:(id)arg1;
- (id)giftCustomizationCommitLogic;
- (void)setGiftCustomizationCommitLogic:(id)arg1;
- (id)giftGoalLogic;
- (void)setGiftGoalLogic:(id)arg1;
- (void)setGiftNewCustomizationCommitLogic:(id)arg1;
- (id)floatMsgList;
- (void)setFloatMsgList:(id)arg1;
- (id)giftResourcesEnsuranceHelper;
- (void)setGiftResourcesEnsuranceHelper:(id)arg1;
- (unsigned long long)syncId;
- (void)setSyncId:(unsigned long long)arg1;
- (id)joinLiveContext;
- (void)setJoinLiveContext:(id)arg1;
- (BOOL)hasSetJoinLiveContext;
- (void)setHasSetJoinLiveContext:(BOOL)arg1;
- (id)currentQoSInfo;
- (void)setCurrentQoSInfo:(id)arg1;
- (id)lastQoSInfoList;
- (void)setLastQoSInfoList:(id)arg1;
- (id)recentQoSInfoList;
- (void)setRecentQoSInfoList:(id)arg1;
- (int)recentNetType;
- (void)setRecentNetType:(int)arg1;
- (id)qosInfoListForReport;
- (void)setQosInfoListForReport:(id)arg1;
- (unsigned int)lastReportTimeStamp;
- (void)setLastReportTimeStamp:(unsigned int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)hasReportedQosInfoAtStop;
- (void)setHasReportedQosInfoAtStop:(BOOL)arg1;
- (BOOL)shouldSendMicSEIData;
- (void)setShouldSendMicSEIData:(BOOL)arg1;
- (BOOL)shouldReGenerateMicSEIData;
- (void)setShouldReGenerateMicSEIData:(BOOL)arg1;
- (BOOL)shouldSendMicTalkingUsersSEIData;
- (void)setShouldSendMicTalkingUsersSEIData:(BOOL)arg1;
- (id)lastMicSEIString;
- (void)setLastMicSEIString:(id)arg1;
- (unsigned long long)lastUpdateCloudMixTime;
- (void)setLastUpdateCloudMixTime:(unsigned long long)arg1;
- (BOOL)hasUpdateCloudMixSelectorInQueue;
- (void)setHasUpdateCloudMixSelectorInQueue:(BOOL)arg1;
- (int)timer5SecExpireCnt;
- (void)setTimer5SecExpireCnt:(int)arg1;
- (BOOL)paidLiveTrialCountLimitChecked;
- (void)setPaidLiveTrialCountLimitChecked:(BOOL)arg1;
- (unsigned long long)loadJoinLiveMicInfoFinishedTimestamp;
- (void)setLoadJoinLiveMicInfoFinishedTimestamp:(unsigned long long)arg1;
- (BOOL)hasJoinLiveMicInfo;
- (void)setHasJoinLiveMicInfo:(BOOL)arg1;
- (unsigned long long)closeLiveOrLiveEndTimestamp;
- (void)setCloseLiveOrLiveEndTimestamp:(unsigned long long)arg1;
- (unsigned long long)limitAntiCheckDuration;
- (void)setLimitAntiCheckDuration:(unsigned long long)arg1;
- (BOOL)hasChangeManual;
- (void)setHasChangeManual:(BOOL)arg1;
- (unsigned long long)lastP2pBytes;
- (void)setLastP2pBytes:(unsigned long long)arg1;
- (unsigned long long)lastCdnBytes;
- (void)setLastCdnBytes:(unsigned long long)arg1;
- (unsigned long long)lastXs4xxStatus;
- (void)setLastXs4xxStatus:(unsigned long long)arg1;
- (unsigned long long)lastTotalPieces;
- (void)setLastTotalPieces:(unsigned long long)arg1;
- (unsigned long long)lastVerifyPieces;
- (void)setLastVerifyPieces:(unsigned long long)arg1;
- (unsigned long long)lastInvalidPieces;
- (void)setLastInvalidPieces:(unsigned long long)arg1;
- (unsigned long long)lastTagMissedInvalidPieces;
- (void)setLastTagMissedInvalidPieces:(unsigned long long)arg1;
- (unsigned long long)lastActive_punch_total;
- (void)setLastActive_punch_total:(unsigned long long)arg1;
- (unsigned long long)lastAcitve_punch_succ;
- (void)setLastAcitve_punch_succ:(unsigned long long)arg1;
- (unsigned long long)lastPassive_punch_total;
- (void)setLastPassive_punch_total:(unsigned long long)arg1;
- (unsigned long long)lastPassive_punch_succ;
- (void)setLastPassive_punch_succ:(unsigned long long)arg1;
- (unsigned long long)lastPunch_hole;
- (void)setLastPunch_hole:(unsigned long long)arg1;
- (unsigned long long)lastPlayed_bytes;
- (void)setLastPlayed_bytes:(unsigned long long)arg1;
- (unsigned long long)lastFullstream_bytes;
- (void)setLastFullstream_bytes:(unsigned long long)arg1;
- (unsigned long long)lastCdn_substream_bytes;
- (void)setLastCdn_substream_bytes:(unsigned long long)arg1;
- (unsigned long long)lastFillup_bytes;
- (void)setLastFillup_bytes:(unsigned long long)arg1;
- (unsigned long long)lastXntp_bytes;
- (void)setLastXntp_bytes:(unsigned long long)arg1;
- (unsigned long long)lastTurn_bytes;
- (void)setLastTurn_bytes:(unsigned long long)arg1;
- (unsigned long long)lastPunch_bytes;
- (void)setLastPunch_bytes:(unsigned long long)arg1;
- (BOOL)enableDisplayFollowBtn;
- (void)setEnableDisplayFollowBtn:(BOOL)arg1;
- (id)qualityKara;
- (void)setQualityKara:(id)arg1;
- (id)energyKara;
- (void)setEnergyKara:(id)arg1;
- (id)screenshotPosterLogic;
- (void)setScreenshotPosterLogic:(id)arg1;
- (int)memFootprintExceedLimitCount;
- (void)setMemFootprintExceedLimitCount:(int)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (unsigned int)timesOfSentBytesIsZero;
- (void)setTimesOfSentBytesIsZero:(unsigned int)arg1;
- (BOOL)isForbidLandScape;
- (void)setIsForbidLandScape:(BOOL)arg1;
- (unsigned long long)currAnchorMainSupportOrientationMask;
- (void)setCurrAnchorMainSupportOrientationMask:(unsigned long long)arg1;
- (unsigned long long)anchorMainSupportOrientationMaskForRotate;
- (void)setAnchorMainSupportOrientationMaskForRotate:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

