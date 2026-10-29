@interface MMFinderLiveTask : MMLiveTask <MMFinderLiveKTVSongOperationExt, MMFinderLiveTaskFunctionPlugin>
{
    WCFinderLiveEventsReporter * _eventsReporter; // +0x8
    BOOL _isEnableComment; // +0x10
    BOOL _isOnlineStateButtonDisabled; // +0x11
    BOOL _isLargeLive; // +0x12
    BOOL _hasNotifySelfAgree; // +0x13
    BOOL _disableShareToConversationByPermissionFlag; // +0x14
    BOOL _disableShareToMomentByPermissionFlag; // +0x15
    BOOL _disableShareToStateByPermissionFlag; // +0x16
    BOOL _hasCloseLiveByAnchor; // +0x17
    BOOL _isTemporayForcePortrait; // +0x18
    BOOL _lotteryRecordVisible; // +0x19
    BOOL _packageRecordVisible; // +0x1a
    BOOL _isResumedLive; // +0x1b
    BOOL _enablePrivateComment; // +0x1c
    BOOL _serverAllowChatRoomBox; // +0x1d
    BOOL _serverAllowProductQuestionBox; // +0x1e
    BOOL _serverAntispamBannedComment; // +0x1f
    BOOL _enableCheerClapMode; // +0x20
    BOOL _isForceUseServerNickName; // +0x21
    BOOL _isForceRoleType; // +0x22
    BOOL _isAssistantRole; // +0x23
    BOOL _isSyndicateParticipantRole; // +0x24
    BOOL _hasFirstShownSelectVisibilityActionSheet; // +0x25
    BOOL _liveShareSettingChanged; // +0x26
    BOOL _isOnlineStateViewShownForAudience; // +0x27
    BOOL _trialTimeout; // +0x28
    BOOL _hasShownGiftWallIntro; // +0x29
    BOOL _hasShownInteractionWishAnchorGuide; // +0x2a
    BOOL _hasShownGoldenRain; // +0x2b
    BOOL _hasLogPrintAllGifts; // +0x2c
    BOOL _isApplyingMicAsAudience; // +0x2d
    BOOL _isConnectMicWithEightAudienceEnabled; // +0x2e
    BOOL _isConnectMicAudienceGrabOrLeadModeEnabled; // +0x2f
    BOOL _isPadAudioRoomConnectMicEnabled; // +0x30
    BOOL _isPadOrdinaryLiveConnectMicEnabled; // +0x31
    BOOL _hasShopWindowInitiated; // +0x32
    BOOL _isLeaveForAppGame; // +0x33
    BOOL _isLeaveForCloudGame; // +0x34
    BOOL _miniGameCreateLiveLaunchFlag; // +0x35
    BOOL _hasPredictLag; // +0x36
    BOOL _enableFloatBarrage; // +0x37
    BOOL _hasShowPromotePubble; // +0x38
    BOOL _allowLiveRoomInteractiveHomePageTransition; // +0x39
    BOOL _isFirstFrameRecieved; // +0x3a
    BOOL _enableDescExtend; // +0x3b
    BOOL _canUseCreateLivePageSimpleMode; // +0x3c
    BOOL _enableShowGiveBlueGiftEntry; // +0x3d
    BOOL _temporaryDisableFullScreenSlideToClose; // +0x3e
    BOOL _forbidDisplayBarrageContent; // +0x3f
    BOOL _hasSetJoinLiveContext; // +0x40
    BOOL _hasReportedQosInfoAtStop; // +0x41
    BOOL _shouldSendMicSEIData; // +0x42
    BOOL _shouldReGenerateMicSEIData; // +0x43
    BOOL _hasUpdateCloudMixSelectorInQueue; // +0x44
    BOOL _paidLiveTrialCountLimitChecked; // +0x45
    BOOL _hasJoinLiveMicInfo; // +0x46
    BOOL _hasChangeManual; // +0x47
    BOOL _enableDisplayFollowBtn; // +0x48
    BOOL _isForbidLandScape; // +0x49
    unsigned int _startScene; // +0x4c
    int _commentScene; // +0x50
    unsigned int _userFlag; // +0x54
    unsigned int _liveGlobalFlag; // +0x58
    unsigned int _liveStatus; // +0x5c
    unsigned int _secondaryDeviceFlag; // +0x60
    unsigned int _preloadedMsgFlags; // +0x64
    unsigned int _maxVisibilityChatroomCount; // +0x68
    unsigned int _maxVisibilityFriendContactCount; // +0x6c
    int _liveMode; // +0x70
    int _wxaLiveScene; // +0x74
    unsigned int _randomConnectMicWaitTime; // +0x78
    unsigned int _shoppingNotAvailableFlag; // +0x7c
    unsigned int _gameLiveEntryOpensdkVersion; // +0x80
    unsigned int _gameAppVersionType; // +0x84
    unsigned int _liveCoverImgModifyLimitCount; // +0x88
    unsigned int _liveCoverImgModifyRemainCount; // +0x8c
    unsigned int _p2p_upload_switch; // +0x90
    unsigned int _p2p_download_switch; // +0x94
    unsigned int _candidates; // +0x98
    unsigned int _standbys; // +0x9c
    unsigned int _load; // +0xa0
    unsigned int _xs_4xx_status; // +0xa4
    unsigned int _total_pieces; // +0xa8
    unsigned int _verify_pieces; // +0xac
    unsigned int _invalid_pieces; // +0xb0
    unsigned int _tag_missed_invalid_pieces; // +0xb4
    unsigned int _abnormal_ts_count; // +0xb8
    unsigned int _play_ori_by_no_sei; // +0xbc
    unsigned int _buffer_length; // +0xc0
    unsigned int _max_cdn_firstframe; // +0xc4
    unsigned int _max_p2p_firstframe; // +0xc8
    unsigned int _first_frame_t; // +0xcc
    unsigned int _active_punch_total; // +0xd0
    unsigned int _acitve_punch_succ; // +0xd4
    unsigned int _passive_punch_total; // +0xd8
    unsigned int _passive_punch_succ; // +0xdc
    unsigned int _punch_hole; // +0xe0
    unsigned int _played_bytes; // +0xe4
    unsigned int _fullstream_bytes; // +0xe8
    unsigned int _cdn_substream_bytes; // +0xec
    unsigned int _fillup_bytes; // +0xf0
    unsigned int _xntp_bytes; // +0xf4
    unsigned int _turn_bytes; // +0xf8
    unsigned int _punch_bytes; // +0xfc
    unsigned int _tlive_errmsg_early; // +0x100
    unsigned int _tlive_errmsg_miss; // +0x104
    unsigned int _tlive_errmsg_expire; // +0x108
    unsigned int _subscribe_failure_c; // +0x10c
    unsigned int _subscribe_refused_c; // +0x110
    unsigned int _subscribe_request_c; // +0x114
    unsigned int _subscribe_success_c; // +0x118
    unsigned int _subscribe_timeout_c; // +0x11c
    unsigned int _toofar_subscribe_c; // +0x120
    unsigned int _too_depth_subscribe_c; // +0x124
    unsigned int _checkout_subscribe_c; // +0x128
    unsigned int _init_sdk_time; // +0x12c
    unsigned int _inner_punch_total; // +0x130
    unsigned int _inner_punch_succ; // +0x134
    unsigned int _lastManualSwitchStreamTime; // +0x138
    unsigned int _lastAutoSwitchStreamTime; // +0x13c
    unsigned int _lastLagPredictionTime; // +0x140
    unsigned int _totalLagTime; // +0x144
    unsigned int _totalLagCount; // +0x148
    unsigned int _totalLagCountDuringCdnDownload; // +0x14c
    unsigned int _totalCountOfNetworkQualityWorseThanPoor; // +0x150
    unsigned int _totalPredictLagCount; // +0x154
    unsigned int _totalLagCountAfterPredict; // +0x158
    unsigned int _totalLagCountCausedByNetworkCompetition; // +0x15c
    unsigned int _liveEndCGIDelayMS; // +0x160
    unsigned int _maxRedPacketChatroomCount; // +0x164
    int _recentNetType; // +0x168
    unsigned int _lastReportTimeStamp; // +0x16c
    int _timer5SecExpireCnt; // +0x170
    int _memFootprintExceedLimitCount; // +0x174
    unsigned int _timesOfSentBytesIsZero; // +0x178
    MMLiveTaskId * _taskId; // +0x180
    MMFinderLiveTaskPluginObj * plugin; // +0x188
    FinderContactLiveInfo * _anchorContactLiveInfo; // +0x190
    MMFinderLiveEventInfo * _liveEventInfo; // +0x198
    MMFinderLiveContentVM * _liveContentVM; // +0x1a0
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x1a8
    NSData * _inviteMicBuffer; // +0x1b0
    long long _liveLimitedLevel; // +0x1b8
    MMFinderLiveContext * _liveContext; // +0x1c0
    NSString * _realnameAuthUrl; // +0x1c8
    FinderLiveNetworkIdentityAuthParams * _networkIdentityAuthParams; // +0x1d0
    FinderLiveTabInfo * _currentTabInfo; // +0x1d8
    MMFinderLiveMicUserPagePreviewCache * _userPagePreviewCache; // +0x1e0
    MMFinderLiveContactCache * _liveContactCache; // +0x1e8
    MMLiveCommentTraceCollector * _commentTraceCollector; // +0x1f0
    NSString * _joinLiveTips; // +0x1f8
    SpamRisk * _spamJumpInfo; // +0x200
    WCFinderRedDotTipsShowInfo * _redDotTipsShowInfo; // +0x208
    NSString * _serverAntispamBannedCommentWording; // +0x210
    NSString * _verifyInfo; // +0x218
    MMFinderLiveFansGroupInfo * _fansGroupInfo; // +0x220
    NSArray * _currentSelfBadgeInfoArr; // +0x228
    NSArray * _currentAnchorBadgeInfoList; // +0x230
    FanClubPanelInfo * _lastKnownFanClubPanelInfo; // +0x238
    FinderLiveModeInfo * _liveModeInfo; // +0x240
    NSArray * _liveAccountInfoList; // +0x248
    long long _currentLiveAliasRoleType; // +0x250
    WCFinderCreateLivePrepareResponseModel * _createLiveRespModel; // +0x258
    NSArray * _liveModeControlInfoArray; // +0x260
    NSData * _createLiveToken; // +0x268
    FinderLiveErrorPage * _createLiveErrorPage; // +0x270
    NSArray * _sharedAllTagInfos; // +0x278
    NSArray * _allVideoTagInfos; // +0x280
    NSArray * _allAudioTagInfos; // +0x288
    NSArray * _allSyndicateTagInfos; // +0x290
    FinderLiveTagInfo * _sharedCurrentTagInfo; // +0x298
    FinderLiveTagInfo * _currentVideoTagInfo; // +0x2a0
    FinderLiveTagInfo * _currentAudioTagInfo; // +0x2a8
    FinderLiveTagInfo * _currentSyndicateTagInfo; // +0x2b0
    NSMutableArray * _allVisibilityFileLists; // +0x2b8
    long long _currVisibilityMode; // +0x2c0
    long long _currDisplayVisibilityMode; // +0x2c8
    FinderLivePromptInfo * _promptInfo; // +0x2d0
    WCLocationInfo * _liveLocation; // +0x2d8
    NSMutableArray * _visibilityFileIdLists; // +0x2e0
    NSString * _firstVisibleUsername; // +0x2e8
    NSMutableArray * _visibleChatroomIdList; // +0x2f0
    NSMutableArray * _visibleUsernameList; // +0x2f8
    WCFinderStarterLiveViewModel * _starterViewModel; // +0x300
    MMFinderLiveShareSettingInitParams * _settingInitParams; // +0x308
    unsigned long long _livePaymentType; // +0x310
    NSString * _curRewardRecipientUserName; // +0x318
    long long _lastGiftPage; // +0x320
    NSString * _lastGiftSendTabName; // +0x328
    double _lastGiftSendContentOffsetY; // +0x330
    double _lastGiftSendTime; // +0x338
    PAGRenderStatistics * _mainGiftPAGRenderStatistics; // +0x340
    PAGRenderStatistics * _mainGiftRFXRenderStatistics; // +0x348
    NSArray * _selectedGiftAttackContactUserNames; // +0x350
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x358
    unsigned long long _connectMicSettingFlag; // +0x360
    unsigned long long _preBanMicSettingFlag; // +0x368
    unsigned long long _pkSettingFlag; // +0x370
    MMFinderLiveShopContext * _liveShopContext; // +0x378
    FinderLiveFlashSaleInfo * _flashSaleInfo; // +0x380
    FinderLiveEcGetLiveConfigResponse * _electronicCommerceConfig; // +0x388
    NSArray * _liveNoticeList; // +0x390
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x398
    MMFinderLiveGameContext * _liveGameContext; // +0x3a0
    long long _gameLiveEntryScene; // +0x3a8
    NSMutableDictionary * _opensdkGameLiveExtInfo; // +0x3b0
    NSString * _gameAppId; // +0x3b8
    NSString * _gameAuthTicket; // +0x3c0
    NSDictionary * _gameLiveStartInfo; // +0x3c8
    FinderContactLiveInfo * _gameContactLiveInfo; // +0x3d0
    FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo * _gameLivePrepareInfo; // +0x3d8
    FinderJumpInfo * _game3DEntrance; // +0x3e0
    FinderJumpInfo * _liveEligibilityEntrance; // +0x3e8
    NSString * _gameDynamicCardVersion; // +0x3f0
    UIImage * _coverImageToPush; // +0x3f8
    unsigned long long _currentP2pBytes; // +0x400
    unsigned long long _currentCdnBytes; // +0x408
    NSString * _natType; // +0x410
    NSString * _isp; // +0x418
    NSString * _url; // +0x420
    NSString * _xs_full_url; // +0x428
    NSString * _uuid; // +0x430
    NSString * _pieceid; // +0x438
    NSString * _send; // +0x440
    NSString * _recv; // +0x448
    NSString * _p2pSdkVersion; // +0x450
    NSString * _trans_stream_name; // +0x458
    MMFinderLiveReplayStopgapLogic * _replayStopgapLogic; // +0x460
    WCFinderLiveSwitchStreamStatistic * _switchStreamStatistic; // +0x468
    NSMutableSet * _downloadingTaskIdsDuringLive; // +0x470
    NSString * _currentCellularTypeString; // +0x478
    unsigned long long _preferredNetworkChannel; // +0x480
    long long _switchToCellularScenes; // +0x488
    double _lastMemoryUtilization; // +0x490
    MMFinderLiveLocalAudioModeTimeRecorder * _localAudioModeTimeRecorder; // +0x498
    MMLiveAudioRoomModeTimeRecorder * _audioRoomModeTimeRecorder; // +0x4a0
    MMFinderLiveOrientationReportRecoder * _orientationReportRecorder; // +0x4a8
    LiveWeappJumpInfo * _weappJumpInfo; // +0x4b0
    FinderLivePromotionEntrance * _promotionEntrance; // +0x4b8
    FinderJumpInfo * _creatorCenterEntrance; // +0x4c0
    FinderJumpInfo * _creatorCenterEntrance2; // +0x4c8
    FinderJumpInfo * _popularActivityEntrance; // +0x4d0
    FinderLiveFeedbackEntranceInfo * _feedbackEntranceInfo; // +0x4d8
    FinderJumpInfo * _opPromotionLiteAppInfo; // +0x4e0
    MMFinderLiveMusicSettingOperationPanel * _musicSettingOprationPanel; // +0x4e8
    SongListInfo * _songListInfo; // +0x4f0
    NewSongListInfo * _songListInfoNew; // +0x4f8
    id /* block */ _getNewMusicPlayStatusBlock; // +0x500
    FinderLiveBoxId * _currentBoxId; // +0x508
    MMFinderLiveConcertInfo * _concertInfo; // +0x510
    MMFinderLiveLandscapeBarrageSettingInfo * _landscapeBarrageSetting; // +0x518
    FinderLiveBoxId * _currentChatRoomBoxId; // +0x520
    FinderLiveUserAttrUserSetting * _userSetting; // +0x528
    MMLiveAdsParams * _adsParams; // +0x530
    MMFinderLiveAudioModeBackgroundConfiguration * _audioModeBackgroundConfiguration; // +0x538
    NSMutableDictionary * _resourcePackageDict; // +0x540
    NSMutableArray * _audioCaptureStateArray; // +0x548
    MMFinderLiveGestureLogic * _gestureLogic; // +0x550
    MMFinderLiveStickerLogic * _stickerLogic; // +0x558
    long long _forbidPictureInPictureOptions; // +0x560
    MMFinderJoinLiveContext * _joinLiveContextWhenFailed; // +0x568
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0x570
    NSString * _descriptionPromptWording; // +0x578
    FinderLiveGuideInfo * _liveGuideInfo; // +0x580
    MMFinderLiveSFBarrageView * _barrageContentView; // +0x588
    id /* block */ _firstFrameRecievedBlock; // +0x590
    unsigned long long _recordScreenScene; // +0x598
    MMFinderLiveViewController * _finderLiveViewController; // +0x5a0
    LiveDescInfo * _liveDescInfo; // +0x5a8
    NSString * _gameClientParams; // +0x5b0
    long long _createLivePageMode; // +0x5b8
    PageModePoiTopicControlInfo * _pageModePoiTopicControlInfo; // +0x5c0
    unsigned long long _eventTopicId; // +0x5c8
    MMFinderLiveFullScreenSlideExitLogic * _fullScreenSlideExitLogic; // +0x5d0
    MMFinderLiveDoubleClickLikeGuideLogic * _fullScreenDoubleClickLikeGuideLogic; // +0x5d8
    long long _networkQuality; // +0x5e0
    long long _redPacketChatroomSelectionStyle; // +0x5e8
    NSArray * _preparedRedPacketBindingRoomIds; // +0x5f0
    NSArray * _redPacketBindingRoomIds; // +0x5f8
    NSString * _redPacketLiveBuffer; // +0x600
    FinderLiveBattleReportInfo * _battleReportInfo; // +0x608
    MMFinderLiveStickerCompositingLogic * _stickerCompositingLogic; // +0x610
    MMFinderLiveStickerCompositingLogic * _stickerTransmitCompositingLogic; // +0x618
    MMFinderLiveGiftCustomizationCommitLogic * _giftCustomizationCommitLogic; // +0x620
    MMFinderLiveGiftGoalLogic * _giftGoalLogic; // +0x628
    MMFinderLiveGiftNewCustomizationCommitLogic * _giftNewCustomizationCommitLogic; // +0x630
    NSArray * _floatMsgList; // +0x638
    MMLiveGiftResourcesEnsuranceHelper * _giftResourcesEnsuranceHelper; // +0x640
    unsigned long long _syncId; // +0x648
    MMLiveCatalogedMerchandiseLotteryLogic * _catalogedMerchandiseLotteryLogic; // +0x650
    MMLiveQcPollLogic * _qcPollLogic; // +0x658
    MMLiveSyndicateAvatarCompositionLogic * _syndicateAvatarCompositionLogic; // +0x660
    MMLiveSyndicateMembers * _syndicateMembers; // +0x668
    unsigned long long _syndicateSettlementMode; // +0x670
    MMFinderJoinLiveContext * _joinLiveContext; // +0x678
    FinderLiveQoSInfo * _currentQoSInfo; // +0x680
    NSMutableArray * _lastQoSInfoList; // +0x688
    NSMutableArray * _recentQoSInfoList; // +0x690
    NSMutableArray * _qosInfoListForReport; // +0x698
    MMTimer * _timer; // +0x6a0
    NSString * _lastMicSEIString; // +0x6a8
    unsigned long long _lastUpdateCloudMixTime; // +0x6b0
    unsigned long long _loadJoinLiveMicInfoFinishedTimestamp; // +0x6b8
    unsigned long long _closeLiveOrLiveEndTimestamp; // +0x6c0
    unsigned long long _limitAntiCheckDuration; // +0x6c8
    unsigned long long _lastP2pBytes; // +0x6d0
    unsigned long long _lastCdnBytes; // +0x6d8
    unsigned long long _lastXs4xxStatus; // +0x6e0
    unsigned long long _lastTotalPieces; // +0x6e8
    unsigned long long _lastVerifyPieces; // +0x6f0
    unsigned long long _lastInvalidPieces; // +0x6f8
    unsigned long long _lastTagMissedInvalidPieces; // +0x700
    unsigned long long _lastActive_punch_total; // +0x708
    unsigned long long _lastAcitve_punch_succ; // +0x710
    unsigned long long _lastPassive_punch_total; // +0x718
    unsigned long long _lastPassive_punch_succ; // +0x720
    unsigned long long _lastPunch_hole; // +0x728
    unsigned long long _lastPlayed_bytes; // +0x730
    unsigned long long _lastFullstream_bytes; // +0x738
    unsigned long long _lastCdn_substream_bytes; // +0x740
    unsigned long long _lastFillup_bytes; // +0x748
    unsigned long long _lastXntp_bytes; // +0x750
    unsigned long long _lastTurn_bytes; // +0x758
    unsigned long long _lastPunch_bytes; // +0x760
    unsigned long long _lastInner_punch_total; // +0x768
    unsigned long long _lastInner_punch_succ; // +0x770
    _TtC6WeChat27MMFinderLiveTaskKaraQuality * _qualityKara; // +0x778
    _TtC6WeChat26MMFinderLiveTaskKaraEnergy * _energyKara; // +0x780
    MMFinderLiveScreenshotPosterLogic * _screenshotPosterLogic; // +0x788
    NSString * _ktvThemeResourceFetchSessionToken; // +0x790
    unsigned long long _forceUsingCellularInTRTCUpdateTimeMs; // +0x798
    unsigned long long _forceUsingCellularInLivePlayerUpdateTimeMs; // +0x7a0
    unsigned long long _forceUsingCellularInCGIsUpdateTimeMs; // +0x7a8
    id <MMFinderLiveTaskCameraCastingDelegate> _castingDelegate; // +0x7b0
    NSDictionary * _pcCastingInfo; // +0x7b8
    unsigned long long _currAnchorMainSupportOrientationMask; // +0x7c0
    unsigned long long _anchorMainSupportOrientationMaskForRotate; // +0x7c8
}
+ (BOOL)checkFinderDataItemIsValidForLive:(id)arg1;
+ (BOOL)isSecondaryDeviceFlagValid:(unsigned int)arg1;
+ (int)getPreLiveIDCdnQuality;
- (void)openWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 sceneNote:(id)arg3 appId:(id)arg4 fullBuyPath:(id)arg5 productExtData:(id)arg6 productPathCookies:(id)arg7 showNavigationBar:(BOOL)arg8 closeBlock:(id /* block */)arg9;
- (void)openPurchasePageForGoods:(id)arg1 usePushAnimation:(BOOL)arg2 useSheetMode:(BOOL)arg3 forbidPushAnimation:(BOOL)arg4 finderUsername:(id)arg5 sceneNote:(id)arg6 closeBlock:(id /* block */)arg7;
- (void)openPurchasePageForGoods:(id)arg1 usePushAnimation:(BOOL)arg2 sceneNote:(id)arg3 closeBlock:(id /* block */)arg4;
- (void)preloadWeAppForShopProduct:(unsigned long long)arg1 sceneName:(id)arg2 appId:(id)arg3 fullBuyPath:(id)arg4 productExtData:(id)arg5 productPathCookies:(id)arg6 shouldHotPreload:(BOOL)arg7 showNavigationBar:(BOOL)arg8;
- (void)preloadWeAppForProduct:(id)arg1 withInfo:(id)arg2 sceneName:(id)arg3 shouldHotPreload:(BOOL)arg4;
- (void)preloadWeAppForShopAssistant;
- (void)prefetchWeAppPkgForUserName:(id)arg1 inScene:(unsigned int)arg2;
- (void)prefetchWeAppPkgForUserName:(id)arg1 appId:(id)arg2 path:(id)arg3 inScene:(unsigned int)arg4;
- (unsigned int)getBackgroundWeAppTaskCount;
- (id)randomSceneNote:(id)arg1;
- (BOOL)isAnchorInteractionBarEnabled;
- (BOOL)shouldShowAnchorShareButton;
- (BOOL)shouldShowAnchorRealnameLikeListButton;
- (BOOL)shouldShowAnchorThumbLikeListButton;
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
- (BOOL)isP2PLiveSwitchEnabled;
- (BOOL)isLiveBanComment;
- (BOOL)isLiveBanBigEmoticonComment;
- (BOOL)isLiveBanBigEmoticonPanel;
- (BOOL)isLiveBanEmojiRecommendPanel;
- (BOOL)isLiveBanLike;
- (BOOL)isLiveConnectMicEnabled;
- (BOOL)isPadConnectMicEnabledForCurrentLiveMode;
- (BOOL)isLiveConnectMicOnlyByWxaGameChallenge;
- (BOOL)isLiveEnableAskProductQuestion;
- (BOOL)disableConnectMicButShowOperationMenu;
- (BOOL)isCreationGiftShowForAnchor;
- (BOOL)isGloryShowForAnchor;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)isLiveCutByAntispam;
- (BOOL)isLiveGameInTeamUp;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isShopMiddlePageOptimizationEnabled;
- (BOOL)isLiveShoppingEnabled;
- (BOOL)isShopAssistantSupportPrefetch;
- (BOOL)isLiveGiftSheetScrollDirectionVerticalEnabled;
- (BOOL)isLiveAnchorWeakNetOptimizationEnabled;
- (BOOL)isLiveAudienceWeakNetOptimizationEnabled;
- (BOOL)isLiveAnchorWeakNetOptimizationOn;
- (void)setIsLiveAnchorWeakNetOptimizationOn:(BOOL)arg1;
- (BOOL)isLiveAudienceWeakNetOptimizationOn;
- (void)setIsLiveAudienceWeakNetOptimizationOn:(BOOL)arg1;
- (BOOL)isMainThreadLag2023T4OptEnabled;
- (BOOL)isLiveMemory2023T4OptEnabled;
- (BOOL)isReduceBandwidthOptmizationEnabled;
- (BOOL)isLiveDisableShowBiz;
- (BOOL)isAsyncCheckLiveMsg;
- (BOOL)isHiddenAudienceName;
- (BOOL)isLiveShareQRCodeEnable;
- (BOOL)disableRewardBySpam;
- (BOOL)disableConnectMicBySpam;
- (BOOL)disableCommentBySpam;
- (BOOL)disableBigEmoticonCommentBySpam;
- (BOOL)disableChangeEmoticonCommentBySpam;
- (BOOL)disableFloatMsg;
- (BOOL)disableLandscapeBarrage;
- (BOOL)enableShowProductQuestionSwitch;
- (BOOL)enableAiAssistantSwitch;
- (BOOL)enableAiAssistantSwitchMaster;
- (BOOL)enableBigEmoticonCommentSwitch;
- (BOOL)enableShowBigEmoticonPanelSwitch;
- (BOOL)enableShowEmojiRecommendPanelSwitch;
- (BOOL)enableSwithRoleByInputView;
- (BOOL)enableSendMetionMsg;
- (BOOL)enableSwithRoleByJoinliveMsg;
- (BOOL)isLiveLargeLive;
- (BOOL)isLiveRoomInteractiveHomePageTransitionEnable;
- (BOOL)isLiveNoticeEntranceCarouselEnabled;
- (BOOL)isLiveKTVPlayerMemberListEnabled;
- (BOOL)isLiveAiVoiceDialogEnabled;
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
- (void)cameraCastShutDown;
- (void)updateLiveCameraCastConnectStatus:(BOOL)arg1 castingInfo:(id)arg2;
- (void)updateCameraCastingInfo:(id)arg1;
- (id)finderTaskID;
- (void)dealloc;
- (id)finderUserName;
- (id)finderDataItem;
- (void)handleRemoteSdkUserLeaveRoom;
- (void)initTaskFunctionPlugins;
- (id)userPagePreviewCache;
- (id)liveContactCache;
- (id)commentTraceCollector;
- (id)commentTraceCollectorAutoCreateIfNotExist:(BOOL)arg1;
- (void)updateTRTCCloudMixtureParams;
- (void)realUpdateTRTCCloudMixtureParams;
- (void)updateMicInfoInSEIAnchorInfo:(id)arg1;
- (void)updateAudioRoomModeMicInfoInSEIAnchorInfo:(id)arg1;
- (void)checkAndStartSyncConnectMicSEIForAnchor;
- (void)updateRecordScreenInfoInSEIAnchorInfo:(id)arg1;
- (void)updateNewMusicPlayStatus:(id)arg1;
- (void)processReceivedGestureSeiMessage:(id)arg1;
- (id)generateConnectMicSEIMsgDataFromList:(id)arg1;
- (id)initWithFinderUserName:(id)arg1;
- (id)initWithFinderContact:(id)arg1;
- (id)initWithFinderDataItem:(id)arg1;
- (id)initWithLiveContentVM:(id)arg1;
- (void)clearInviteMicBuffer;
- (id)initBaseLiveWithFinderDataItem:(id)arg1;
- (id)initBaseLiveWithLiveContentVM:(id)arg1;
- (void)registerExtension;
- (unsigned int)getKtvScene;
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
- (void)initCameraCastingAdapter;
- (void)initDefaultData;
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
- (BOOL)isMiniGamePking;
- (BOOL)canShowGameAngleBtn;
- (BOOL)canAudienceOpenMicRank;
- (BOOL)canShowLocationInConnectMicScene;
- (BOOL)canShowAnchorLocationInConnectMicScene;
- (BOOL)canShowAudienceWatchTimeBorad;
- (BOOL)isExposeAudienceHeadImgEnable;
- (void)updateJoinLiveContext:(id)arg1;
- (void)updateFinderLiveLocationFromFinderLocation:(id)arg1;
- (void)updateLiveEventInfo:(id)arg1;
- (void)updateServerAllowChatRoomBox;
- (void)updateServerAllowProductQuestionBox;
- (void)updateEnablePrivateCommentWithForceNotify:(BOOL)arg1;
- (void)updateAntispamBannedComment:(BOOL)arg1 wording:(id)arg2;
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
- (BOOL)disableShareToConversationByPermissionFlag;
- (BOOL)disableShareToMomentByPermissionFlag;
- (BOOL)disableShareToStateByPermissionFlag;
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
- (void)updateKTVVolumeStrategyFlag;
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
- (id)getAnchorLiveRoomCoverImageURLInVideoMode;
- (void)updateAnchorLiveRoomCoverImageAsHeadURL;
- (void)updateAudienceLiveRoomCoverImage;
- (void)setCoverImageToPush:(id)arg1;
- (void)setAudioModeBackgroundConfiguration:(id)arg1;
- (BOOL)isCaptureRes1920x1440Enable;
- (BOOL)isCaptureRes2560x1440Enable;
- (BOOL)isCaptureRes2560x1440EnableTag;
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
- (BOOL)canUseVideoRatio10To21;
- (BOOL)canUseExtVideoRes;
- (BOOL)canUse2KResBitrate;
- (void)updateVideoEncoderParamModeAfterMicUsersChangedTo:(id)arg1;
- (id)cachedMicUsersList;
- (id)currentSingerContact;
- (BOOL)singerIsAnchorSelf;
- (BOOL)isActivityLiveTask;
- (BOOL)canDisplayAutoAppearPanel;
- (id)getCurrentUrl;
- (id)currentReplayUrl;
- (id)currentReplayHlsPemKey;
- (id)coverImageUri;
- (id)adCoverImageUri;
- (id)lastLiveCoverImgsForIsAudioMode:(BOOL)arg1 isKTVMode:(BOOL)arg2;
- (id)lastDefaultCoverImgInfoForIsAudioMode:(BOOL)arg1 isKTVMode:(BOOL)arg2;
- (id)stickerCompositingLogic;
- (id)stickerTransmitCompositingLogic;
- (id)orientationReportRecorder;
- (void)checkAndUpdateAllowRotateStateInIphone;
- (void)setIsLivePlayingViaCdn:(BOOL)arg1;
- (BOOL)canCreateLiveSongs;
- (BOOL)enableNewSongs;
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
- (BOOL)isNetworkSwitchingToCellular;
- (id)currentCellularTypeString;
- (BOOL)hasRecentQoSInfo;
- (void)onVideoFpsChanged;
- (id)fullScreenSlideExitLogic;
- (id)fullScreenDoubleClickLikeGuideLogic;
- (BOOL)enableP2P;
- (BOOL)useP2P;
- (BOOL)shouldUseP2P:(id)arg1;
- (BOOL)shouldDestroyP2PStreams;
- (BOOL)shouldDestroyP2PInstance;
- (BOOL)isLiveCreatedFromSquareChat;
- (id)currentSdkChannelParams;
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
- (BOOL)isSelfCurrentSinger;
- (BOOL)isCurrentSingerDisableBeRewardedInMic;
- (id)curRewardRecipientUserName;
- (BOOL)showSoleRewardRecipient;
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
- (void)liveCaptureAdapter:(id)arg1 didOutputEncodeVideoData:(id)arg2;
- (void)handleGesturesOperation:(id)arg1;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)setSensorControlFlag:(BOOL)arg1 keepLastSensor:(BOOL)arg2;
- (void)onReportP2pStat:(id)arg1 initTime:(unsigned long long)arg2 streamId:(id)arg3;
- (id)replaceWithP2pUrl:(id)arg1;
- (void)addAudioCaptureState:(unsigned int)arg1;
- (void)clearAudioCaptureState;
- (void)onResetP2pStat;
- (void)onReportLag:(unsigned int)arg1;
- (void)reportThatLiveRoomLagForJoinLiveQualityProphet;
- (void)fillReporterExtInfoIntoPushAdapter;
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
- (BOOL)isSyndicateLive;
- (void)setLiveModeControlInfoArray:(id)arg1;
- (void)updateLiveTagInfo:(id)arg1 isAllLiveMode:(BOOL)arg2 finderLiveMode:(int)arg3;
- (void)updateLiveAllTagInfo:(id)arg1;
- (id)getCurrentModeAllTagInfos;
- (id)getCurrentModeCurrentTagInfo;
- (id)getCurrentLiveModeControlInfo:(int)arg1;
- (id)tagInfoWithModeControlInfo:(id)arg1 lastTagInfo:(id *)arg2;
- (BOOL)needHideAudioLiveMode;
- (BOOL)needHideKTVLiveMode;
- (BOOL)isChatRoomLiveModeAvailable;
- (BOOL)needHideSyndicateLiveMode;
- (BOOL)canShowVisionEffectReddot;
- (id)finderOrNil;
- (void)setPreferredNetworkChannel:(unsigned long long)arg1;
- (void)testWiFiNetSpeedToResetPreferredNetworkChannel;
- (BOOL)dataSavingMode;
- (BOOL)forceUsingCellularInTRTC;
- (BOOL)forceUsingCellularInLivePlayer;
- (BOOL)forceUsingCellularInCGIs;
- (void)resetDefaultNetworkInterface;
- (void)switchNetworkInterfaceIfNeed;
- (void)switchTrtcNetworkInterfaceIfNeed;
- (void)switchCdnPlayerNetworkInterfaceIfNeed;
- (void)switchCgiNetworkInterfaceIfNeed;
- (void)showSwitchToCellularToastIfNeed:(long long)arg1 ipAddress:(id)arg2;
- (void)showRecoverToDefaultNetToastIfNeed:(long long)arg1;
- (id)currentPromoteMessageInfo;
- (BOOL)isPcCameraCasting;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isEnableComment;
- (void)setIsEnableComment:(BOOL)arg1;
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
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (unsigned int)startScene;
- (void)setStartScene:(unsigned int)arg1;
- (long long)liveLimitedLevel;
- (void)setLiveLimitedLevel:(long long)arg1;
- (void)setCommentScene:(int)arg1;
- (id)liveContext;
- (void)setLiveContext:(id)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (id)realnameAuthUrl;
- (void)setRealnameAuthUrl:(id)arg1;
- (id)networkIdentityAuthParams;
- (void)setNetworkIdentityAuthParams:(id)arg1;
- (unsigned int)liveGlobalFlag;
- (void)setLiveGlobalFlag:(unsigned int)arg1;
- (unsigned int)liveStatus;
- (void)setLiveStatus:(unsigned int)arg1;
- (unsigned int)secondaryDeviceFlag;
- (id)currentTabInfo;
- (void)setCurrentTabInfo:(id)arg1;
- (BOOL)isLargeLive;
- (void)setIsLargeLive:(BOOL)arg1;
- (void)setUserPagePreviewCache:(id)arg1;
- (void)setLiveContactCache:(id)arg1;
- (void)setCommentTraceCollector:(id)arg1;
- (BOOL)hasNotifySelfAgree;
- (void)setHasNotifySelfAgree:(BOOL)arg1;
- (void)setDisableShareToConversationByPermissionFlag:(BOOL)arg1;
- (void)setDisableShareToMomentByPermissionFlag:(BOOL)arg1;
- (void)setDisableShareToStateByPermissionFlag:(BOOL)arg1;
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
- (BOOL)serverAntispamBannedComment;
- (void)setServerAntispamBannedComment:(BOOL)arg1;
- (id)serverAntispamBannedCommentWording;
- (void)setServerAntispamBannedCommentWording:(id)arg1;
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
- (id)lastKnownFanClubPanelInfo;
- (void)setLastKnownFanClubPanelInfo:(id)arg1;
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
- (BOOL)isSyndicateParticipantRole;
- (void)setIsSyndicateParticipantRole:(BOOL)arg1;
- (id)createLiveRespModel;
- (void)setCreateLiveRespModel:(id)arg1;
- (id)liveModeControlInfoArray;
- (id)createLiveToken;
- (void)setCreateLiveToken:(id)arg1;
- (id)createLiveErrorPage;
- (void)setCreateLiveErrorPage:(id)arg1;
- (id)sharedAllTagInfos;
- (void)setSharedAllTagInfos:(id)arg1;
- (id)allVideoTagInfos;
- (void)setAllVideoTagInfos:(id)arg1;
- (id)allAudioTagInfos;
- (void)setAllAudioTagInfos:(id)arg1;
- (id)allSyndicateTagInfos;
- (void)setAllSyndicateTagInfos:(id)arg1;
- (id)sharedCurrentTagInfo;
- (void)setSharedCurrentTagInfo:(id)arg1;
- (id)currentVideoTagInfo;
- (void)setCurrentVideoTagInfo:(id)arg1;
- (id)currentAudioTagInfo;
- (void)setCurrentAudioTagInfo:(id)arg1;
- (id)currentSyndicateTagInfo;
- (void)setCurrentSyndicateTagInfo:(id)arg1;
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
- (id)promptInfo;
- (void)setPromptInfo:(id)arg1;
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
- (id)settingInitParams;
- (void)setSettingInitParams:(id)arg1;
- (unsigned long long)livePaymentType;
- (void)setLivePaymentType:(unsigned long long)arg1;
- (BOOL)trialTimeout;
- (void)setTrialTimeout:(BOOL)arg1;
- (void)setCurRewardRecipientUserName:(id)arg1;
- (BOOL)hasShownGiftWallIntro;
- (void)setHasShownGiftWallIntro:(BOOL)arg1;
- (BOOL)hasShownInteractionWishAnchorGuide;
- (void)setHasShownInteractionWishAnchorGuide:(BOOL)arg1;
- (BOOL)hasShownGoldenRain;
- (void)setHasShownGoldenRain:(BOOL)arg1;
- (long long)lastGiftPage;
- (void)setLastGiftPage:(long long)arg1;
- (id)lastGiftSendTabName;
- (void)setLastGiftSendTabName:(id)arg1;
- (double)lastGiftSendContentOffsetY;
- (void)setLastGiftSendContentOffsetY:(double)arg1;
- (double)lastGiftSendTime;
- (void)setLastGiftSendTime:(double)arg1;
- (BOOL)hasLogPrintAllGifts;
- (void)setHasLogPrintAllGifts:(BOOL)arg1;
- (id)mainGiftPAGRenderStatistics;
- (void)setMainGiftPAGRenderStatistics:(id)arg1;
- (id)mainGiftRFXRenderStatistics;
- (void)setMainGiftRFXRenderStatistics:(id)arg1;
- (void)setSelectedGiftAttackContactUserNames:(id)arg1;
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
- (unsigned long long)pkSettingFlag;
- (void)setPkSettingFlag:(unsigned long long)arg1;
- (BOOL)isPadAudioRoomConnectMicEnabled;
- (void)setIsPadAudioRoomConnectMicEnabled:(BOOL)arg1;
- (BOOL)isPadOrdinaryLiveConnectMicEnabled;
- (void)setIsPadOrdinaryLiveConnectMicEnabled:(BOOL)arg1;
- (id)liveShopContext;
- (void)setLiveShopContext:(id)arg1;
- (unsigned int)shoppingNotAvailableFlag;
- (void)setShoppingNotAvailableFlag:(unsigned int)arg1;
- (BOOL)hasShopWindowInitiated;
- (void)setHasShopWindowInitiated:(BOOL)arg1;
- (id)flashSaleInfo;
- (void)setFlashSaleInfo:(id)arg1;
- (id)electronicCommerceConfig;
- (void)setElectronicCommerceConfig:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
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
- (unsigned int)inner_punch_total;
- (void)setInner_punch_total:(unsigned int)arg1;
- (unsigned int)inner_punch_succ;
- (void)setInner_punch_succ:(unsigned int)arg1;
- (id)trans_stream_name;
- (void)setTrans_stream_name:(id)arg1;
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
- (unsigned int)totalCountOfNetworkQualityWorseThanPoor;
- (void)setTotalCountOfNetworkQualityWorseThanPoor:(unsigned int)arg1;
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
- (void)setCurrentCellularTypeString:(id)arg1;
- (unsigned long long)preferredNetworkChannel;
- (long long)switchToCellularScenes;
- (void)setSwitchToCellularScenes:(long long)arg1;
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
- (id)popularActivityEntrance;
- (void)setPopularActivityEntrance:(id)arg1;
- (void)setFeedbackEntranceInfo:(id)arg1;
- (id)opPromotionLiteAppInfo;
- (void)setOpPromotionLiteAppInfo:(id)arg1;
- (void)setMusicSettingOprationPanel:(id)arg1;
- (id)songListInfo;
- (void)setSongListInfo:(id)arg1;
- (id)songListInfoNew;
- (void)setSongListInfoNew:(id)arg1;
- (id /* block */)getNewMusicPlayStatusBlock;
- (void)setGetNewMusicPlayStatusBlock:(id /* block */)arg1;
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
- (long long)createLivePageMode;
- (void)setCreateLivePageMode:(long long)arg1;
- (BOOL)canUseCreateLivePageSimpleMode;
- (void)setCanUseCreateLivePageSimpleMode:(BOOL)arg1;
- (id)pageModePoiTopicControlInfo;
- (void)setPageModePoiTopicControlInfo:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (void)setFullScreenSlideExitLogic:(id)arg1;
- (void)setFullScreenDoubleClickLikeGuideLogic:(id)arg1;
- (BOOL)enableShowGiveBlueGiftEntry;
- (void)setEnableShowGiveBlueGiftEntry:(BOOL)arg1;
- (long long)networkQuality;
- (void)setNetworkQuality:(long long)arg1;
- (BOOL)temporaryDisableFullScreenSlideToClose;
- (void)setTemporaryDisableFullScreenSlideToClose:(BOOL)arg1;
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
- (id)catalogedMerchandiseLotteryLogic;
- (void)setCatalogedMerchandiseLotteryLogic:(id)arg1;
- (id)qcPollLogic;
- (void)setQcPollLogic:(id)arg1;
- (id)syndicateAvatarCompositionLogic;
- (void)setSyndicateAvatarCompositionLogic:(id)arg1;
- (id)syndicateMembers;
- (void)setSyndicateMembers:(id)arg1;
- (unsigned long long)syndicateSettlementMode;
- (void)setSyndicateSettlementMode:(unsigned long long)arg1;
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
- (unsigned long long)lastInner_punch_total;
- (void)setLastInner_punch_total:(unsigned long long)arg1;
- (unsigned long long)lastInner_punch_succ;
- (void)setLastInner_punch_succ:(unsigned long long)arg1;
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
- (unsigned long long)forceUsingCellularInTRTCUpdateTimeMs;
- (void)setForceUsingCellularInTRTCUpdateTimeMs:(unsigned long long)arg1;
- (unsigned long long)forceUsingCellularInLivePlayerUpdateTimeMs;
- (void)setForceUsingCellularInLivePlayerUpdateTimeMs:(unsigned long long)arg1;
- (unsigned long long)forceUsingCellularInCGIsUpdateTimeMs;
- (void)setForceUsingCellularInCGIsUpdateTimeMs:(unsigned long long)arg1;
- (id)castingDelegate;
- (void)setCastingDelegate:(id)arg1;
- (id)pcCastingInfo;
- (void)setPcCastingInfo:(id)arg1;
- (BOOL)isForbidLandScape;
- (void)setIsForbidLandScape:(BOOL)arg1;
- (unsigned long long)currAnchorMainSupportOrientationMask;
- (void)setCurrAnchorMainSupportOrientationMask:(unsigned long long)arg1;
- (unsigned long long)anchorMainSupportOrientationMaskForRotate;
- (void)setAnchorMainSupportOrientationMaskForRotate:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
