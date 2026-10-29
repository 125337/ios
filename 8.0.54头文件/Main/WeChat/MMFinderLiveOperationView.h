@interface MMFinderLiveOperationView : MMLiveOperationView <UICollectionViewDelegate, UICollectionViewDataSource, MMFinderLiveReplayKitManagerDelegate, MMFinderLiveCreateLotteryViewModelDelegate, MMLiveKtvResourceStateExt, MMFinderLiveKTVStateExt, MMFinderLiveInstantDiscountHandlerDelegate, PAGViewListener, MMFinderLiveCouponCardsMaskViewDelegate, MMFinderLiveCouponCardViewModelDelegate, MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate, WCFinderHeadImageViewDelegate, MMLiveTaskMgrExt, MMFinderLiveRewardSendingExt, MMFinderLiveRedPacketViewModelObserver, MMLiveAnchorSEISynchronizeExt, MMLivePauseViewDelegate, MMFinderLiveTaskExt, MMFinderLiveDropGiftViewDelegate, MMFinderLiveDropGiftViewModelDelegate, MMLiveMorphTransitionExt, MMFinderLiveShopSettingsViewDelegate, MMFinderLiveShopSettingsViewExt, MMLivePivotCollecitonViewZoomAnimatorExt, PAGViewListener, MMFinderLiveFansGroupGiftCustomizationPanelExt, MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate, TXPIPManagerExt, ClickStatSwizzleExt, UIScrollViewDelegate, MMFinderLiveScreenshotPosterHintViewDelegate, MMFinderLiveNotifyGiftNotificationViewDelegate, MMMenuControllerExt, PAGRenderStatisticsExt, MMLivePromoteOperationPanelDelegate, MMFinderLiveStickerEditorChromeFadingExt, MMLiveViewExt, MMFinderLiveKTVLogicExt, MMFinderLiveTrumpetSelectSheetDelegate, WCCoinBuyCoinLogicDelegate, MMLiveBuyTicketsViewDelegate, MMFinderLiveAudioRoomInfoLogicDelegate, MMFinderLivePaymentPolicyIntroViewDelegate, MMFinderLivePaymentRetryViewBarDelegate, MMWebImageViewDelegate, MMLiveLikeDataMgrExt, WCFinderLiveExt, MMFinderLiveMusicSettingOperationDelegate, MMFinderLiveMusicSettingInteractiveDelegate, MMFinderLiveMusicSettingReportDelegate, MMFinderLiveLotteryPacketDisplayLogicExt, FinderLivePromoteUpdateExt, MMFinderLivePromoteManageReportDelegate, MMFinderLivePromoteManagePanelDelegate, MMFinderLiveGloryIntroSheetDelegate, MMFinderLiveAdGuideFollowSheetDelegate, MMFinderLiveOnlineStateViewDataSource, MMLiveGameJoinTeamViewDelegate, MMLiveGameJoinTeamSettingViewDelegate, MMFinderGameLiveWelfareInfoViewModelDelegate, MMLiveGamePlayTogetherOperationPanelDelegate, MMLiveGamePlayTogetherOperationPanelDataSource, MMLiveHotAnimationViewPresenter, MMFinderLivePayMgrExt, WCFinderAdCountdownBannerViewDelegate, MMLiveCameraOperationPanelDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveFilterOperationPanelDelegate, MMLiveMakeupOperationPanelDelegate, MMFinderLiveGesturePageSheetDelegate, MMLiveBeautyEffectsBaseOperationPanelDelegate, MMLiveRewardRecipientSelectionLogicDelegate, MMLiveRewardGiftAttackContactSelectionLogicDelegate, MMLiveRewardGiftSelectionViewDelegate, MMFinderLiveWishListDetailForAudiencePanelDelegate, MMFinderLiveGiftGoalLogicExt, MMFinderLiveGiftResourceMgrExt, CAAnimationDelegate, MMFinderLiveGiftGoalViewDelegate, MMLiveConnectMicExt, UIGestureRecognizerDelegate>
{
    BOOL _isInLive; // +0x8
    BOOL _canShowRedPacketView; // +0x9
    BOOL _isShowGoToGameAppAlert; // +0xa
    BOOL _isPendingShowGameTipsView; // +0xb
    BOOL _isMuteAudioForIntterupted; // +0xc
    BOOL _canShowAnniversayDayView; // +0xd
    BOOL _isInTalkingMode; // +0xe
    BOOL _isInMicTalkingModeSwitchAnimation; // +0xf
    BOOL _markDirty; // +0x10
    BOOL _isMenuHandlingHide; // +0x11
    BOOL _isVisible; // +0x12
    BOOL _showingAd; // +0x13
    BOOL _isAnchorRealtimeDataPanelInitating; // +0x14
    BOOL _isAnchorRealtimeDataPanelShow; // +0x15
    BOOL _isProductSizeAssistantPanelInitating; // +0x16
    BOOL _isEnterLiveWithError; // +0x17
    BOOL _isAssumingAudienceCommentEnabled; // +0x18
    BOOL _reportOrientationButtonExpose; // +0x19
    BOOL _shouldShowRedPacketPanel; // +0x1a
    BOOL _useCenterStyleAudioOnlyIndicator; // +0x1b
    BOOL _isFinderLiveLogoShowForClear; // +0x1c
    BOOL _canShowFinderLiveLogoWatermark; // +0x1d
    BOOL _canShowCarouselView; // +0x1e
    BOOL _isShownAdvertisementCountdownView; // +0x1f
    BOOL _showingHalfScreenNotice; // +0x20
    BOOL _isTestLiveMode; // +0x21
    BOOL _isTestLiveModeChanging; // +0x22
    BOOL _showingInputView; // +0x23
    BOOL _isClearScreen; // +0x24
    BOOL _changeResource; // +0x25
    BOOL _openFluorescenceSwitch; // +0x26
    BOOL _showingFluorescenceAnimationView; // +0x27
    BOOL _clearState; // +0x28
    BOOL _showingTicketView; // +0x29
    BOOL _buying; // +0x2a
    BOOL _isInClearScreenWhenEnterZoomMode; // +0x2b
    BOOL _showingMultiAnglePubbleTipView; // +0x2c
    BOOL _isShareFromGuide; // +0x2d
    BOOL _showingBubbleView; // +0x2e
    BOOL _votePopupViewVisible; // +0x2f
    BOOL _liveHasSongList; // +0x30
    BOOL _enableOrderSong; // +0x31
    BOOL _forceHideLittleLottery; // +0x32
    BOOL _hasLoadPanel; // +0x33
    BOOL _lotteryDetailCardViewVisible; // +0x34
    BOOL _showingShopPubbleTipView; // +0x35
    BOOL _hasShowGameNewFansPromoteTips; // +0x36
    BOOL _isPaidForNextRound; // +0x37
    BOOL _showingHotCommentAnimationView; // +0x38
    BOOL _showingVRLivePubbleTipView; // +0x39
    BOOL _canShowGiftPanel; // +0x3a
    float _fluorescenceTimeout; // +0x3c
    unsigned int _quickSendGiftCount; // +0x40
    id <MMFinderLiveOperationViewDelegate> _operationDelegate; // +0x48
    MMFinderLiveOnlineStateView * onlineStateView; // +0x50
    NSMutableArray * _topBannerViews; // +0x58
    NSMutableArray * _displayingWidgetViews; // +0x60
    long long _likeCount; // +0x68
    MMFinderLiveHeaderView * _liveHeaderView; // +0x70
    UIView * _backTapView; // +0x78
    MMLiveLikeButton * _likeButton; // +0x80
    MMLiveStarterWeakNetTipView * _weakNetTipView; // +0x88
    id <MMFinderLiveRewardSendingLogicForOperationDelegate> _rewardSendingOperationDelegate; // +0x90
    MMFinderLiveConnectMicUserView * _connectMicUserView; // +0x98
    WCLiveBottomTextButton * _connectMicButton; // +0xa0
    MMFinderLiveConnectMicAllUserInfoView * _connectMicAllUserInfoView; // +0xa8
    MMFinderLiveMicTalkingOperationView * _micTalkingOperationView; // +0xb0
    MMFinderLiveMicTalkingUsersView * _micTalkingUsersView; // +0xb8
    WCLiveBottomTextButton * _switchAudioRoomModeButton; // +0xc0
    WCLiveBottomTextButton * _liveGameButton; // +0xc8
    MMFinderLivePromotePubbleContainerView * _promotePubbleView; // +0xd0
    MMFinderLivePromoteDisplayLogic * _promoteDisplayLogic; // +0xd8
    MMFinderLiveOperationViewModel * _operationViewModel; // +0xe0
    MMLivePauseView * _pauseView; // +0xe8
    MMFinderLiveMinifyRoomControlBanner * _minifyRoomBanner; // +0xf0
    double _anniversayDayViewAlpha; // +0xf8
    id /* block */ _hitTestWithEventAction; // +0x100
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x108
    WCFinderLiveAudienceLogReporter * _audienceReporter; // +0x110
    WCFinderLiveAssistantLogReporter * _assistantReporter; // +0x118
    MMWebImageView * _finderLiveLogoWatermark; // +0x120
    MMViewLayoutManager * _layoutManager; // +0x128
    MMFinderLiveWidgetContainerView * _widgetContainerView; // +0x130
    MMFinderLiveConnectMicFocusedVideoHeaderView * _focusedVideoAudienceHeaderView; // +0x138
    MMFinderLiveNotifyGiftNotificationDisplayLogic * _notifyGiftLogic; // +0x140
    MMFinderLiveKTVMusicContainerView * _ktvMusicContainerView; // +0x148
    LiteAppStore * _gemeLiteAppStore; // +0x150
    MMLiteAppViewController * _landscapeLiteAppCardVC; // +0x158
    MMLiteAppView * _anchorRealtimeDataPanel; // +0x160
    MMUIView * _realtimeDataPanelBgView; // +0x168
    double _realtimeDataPanelBgViewMinHeight; // +0x170
    MMLiteAppView * _productSizeAssistantPanel; // +0x178
    MMUIView * _productSizeAssistantPanelBgView; // +0x180
    NSError * _enterLiveError; // +0x188
    long long _currentOrientation; // +0x190
    UITapGestureRecognizer * _tapGesture; // +0x198
    double _viewTopAtPanBegin; // +0x1a0
    UIScrollView * _topLeftBannerScrollView; // +0x1a8
    UIView * _topLeftBannerContainerView; // +0x1b0
    CAGradientLayer * _bannerRightGradientLayer; // +0x1b8
    MMFinderLiveRedPacketView * _redPacketView; // +0x1c0
    MMFinderLiveRedPacketViewModel * _redPacketViewModel; // +0x1c8
    WCFinderLiveRedPacketPanel * _redPacketPanel; // +0x1d0
    double _rightWidgetsLeft; // +0x1d8
    double _rightWidgetsWidth; // +0x1e0
    MMFinderLiveCommentInputEmoticonView * _inputEmoticonView; // +0x1e8
    MMLivePromoteOperationPanel * _liveToolsOperationPanel; // +0x1f0
    MMLivePromoteOperationPanelCell * _screenSharingPanelCell; // +0x1f8
    MMLivePromoteOperationPanelCell * _promotePanelCell; // +0x200
    MMLivePromoteOperationPanelCell * _votingPanelCell; // +0x208
    MMLivePromoteOperationPanelCell * _game3DPanelCell; // +0x210
    NSString * _muteAudioTip; // +0x218
    UIView * _muteAudioTipView; // +0x220
    UIImageView * _muteAudioIcon; // +0x228
    UILabel * _muteAudioTipLabel; // +0x230
    MMLiveAudioOnlyIndicatorView * _audioOnlyIndicatorView; // +0x238
    double _pureAudioModeTipViewAlpha; // +0x240
    UIView * _localAudioModeShowVideoBackgroundView; // +0x248
    UIButton * _localAudioModeShowVideoButton; // +0x250
    MMLiveFollowConfirmPageSheetView * _followConfirmPageSheetView; // +0x258
    MMLiveSquareGuideView * _squareGuideView; // +0x260
    MMFinderLiveDropGiftView * _dropGiftView; // +0x268
    MMFinderLiveDetailCardBaseView * _dropGiftDetailCardView; // +0x270
    MMFinderLiveDropGiftViewModel * _dropGiftViewModel; // +0x278
    NSString * _currPackageId; // +0x280
    PAGView * _dropGiftPagView; // +0x288
    long long _bCanShowDropGiftPagViewFlag; // +0x290
    MMFinderLiveAnniversaryDecorationView * _decorationView; // +0x298
    MMFinderLiveAnniversaryDecorationViewModel * _decorationViewModel; // +0x2a0
    MMFinderLiveWishBannerView * _liveWishBannerView; // +0x2a8
    UIView * _brandLogoWatermark; // +0x2b0
    MMFinderLiveImageCarouselView * _carouselView; // +0x2b8
    NSArray * _liveLogoViewModelArr; // +0x2c0
    MMFinderLiveAdvertisementCountdownView * _advertisementCountdownView; // +0x2c8
    long long _lastLayoutOrientation; // +0x2d0
    double _lastLiveViewMinTopMargin; // +0x2d8
    UIView * _moreLiveTipsView; // +0x2e0
    MMUILabel * _moreLiveTipsLabel; // +0x2e8
    UIImageView * _moreLiveTipsArrow; // +0x2f0
    MMFinderLiveNotifyGiftNotificationView * _notifyGiftView; // +0x2f8
    MMFinderLiveScreenshotPosterHintView * _screenshotPosterHintView; // +0x300
    id /* block */ _chargeCompletionBlock; // +0x308
    UIView * _stickerEditingActivatorContainerView; // +0x310
    UICollectionView * _statusContainer; // +0x318
    MMFinderLiveNewAnchorTaskEntranceView * _anchorTaskEntranceView; // +0x320
    MMFinderLiveSharePubbleTipView * _taskGuideView; // +0x328
    NSMutableArray * _statusItemArr; // +0x330
    MMTimer * _statusCarouselTimer; // +0x338
    MMLiveHalfScreenNoticeView * _noticeView; // +0x340
    FinderLiveMsgBoxInfo * _msgBox; // +0x348
    MMFinderLiveTestLiveTipsBar * _testLiveTipsBar; // +0x350
    double _fluorescenceProgressWidth; // +0x358
    CALayer * _likeButtonGradientLayer; // +0x360
    PAGView * _fluorescenceAnimationView; // +0x368
    PAGFile * _fluorescenceAnimationPAGFile; // +0x370
    MMLiveLikeButtonAnimationView * _likeButtonAnimationView; // +0x378
    NSObject<OS_dispatch_source> * _timer; // +0x380
    UIColor * _topCorlor; // +0x388
    UIColor * _bottomColor; // +0x390
    FinderLiveCheerInfo * _cheerInfo; // +0x398
    FinderLiveAppMsgUpdateCheerAnimation * _cheerAnimation; // +0x3a0
    FinderLiveCheerAnimationInfo * _selectCheerAnimationInfo; // +0x3a8
    MMLiveResourceFetcherLegacyApiAdapter * _animationDownLoadManager; // +0x3b0
    NSString * _downLoadFinishUrl; // +0x3b8
    FinderLiveCheerAnimationInfo_Resource * _selectResource; // +0x3c0
    MMLiveStorageCleanupPinningToken * _fluroescenceResourcesPinningToken; // +0x3c8
    UIView<MMFinderLiveConcertMiniTicketViewBase> * _miniatureTicketView; // +0x3d0
    MMLiveBuyTicketsView * _buyTicketsView; // +0x3d8
    ConcertTicketInfo * _ticket; // +0x3e0
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x3e8
    MMFinderLiveAudioRoomInfoView * _audioRoomInfoView; // +0x3f0
    UIPinchGestureRecognizer * _pinchGestureForZoom; // +0x3f8
    UITapGestureRecognizer * _tapGestureForZoom; // +0x400
    UIPanGestureRecognizer * _panGestureForZoom; // +0x408
    UIView * _videoZoomGuideView; // +0x410
    WCLiveBottomTextButton * _multiAngleButton; // +0x418
    MMFinderLiveAngleViewModel * _angleViewModel; // +0x420
    MMFinderLiveMultiAngleView * _multiAngleView; // +0x428
    MMFinderLiveSharePubbleTipView * _enterMultiAngleLivePubbleTipView; // +0x430
    UIPanGestureRecognizer * _panGestureForMultiAngle; // +0x438
    UIPageControl * _playerPageControl; // +0x440
    MMFinderReserveLiveNoticeTipsBubbleView * _noticeBubbleView; // +0x448
    MMFinderLiveCreateNoticeHintView * _createNoticeHintView; // +0x450
    MMFinderLiveCouponCardsMaskView * _couponsCardsMaskView; // +0x458
    MMFinderLiveCouponsWidgetView * _couponsWidget; // +0x460
    NSArray * _couponCardViewModels; // +0x468
    FinderLiveGetFinderCouponWidgetsResponse * _couponsWidgetInfo; // +0x470
    WCLiveBottomTextButton * _bottomShareButton; // +0x478
    NSMutableSet * _autoOpenHistory; // +0x480
    MMFinderLiveInstantDiscountHandler * _handler; // +0x488
    NSMutableSet * _guideHistory; // +0x490
    MMFinderLiveSharePubbleTipView * _shareGuideView; // +0x498
    FinderLiveShopVipInfo * _lastShopVIPInfo; // +0x4a0
    WCLiveBottomTextButton * _bubbleButton; // +0x4a8
    MMFinderLiveMemberTipsBubble * _memberLiveTipsBubble; // +0x4b0
    WCLiveBottomTextButton * _folderButton; // +0x4b8
    NSMutableSet * _folderButtonTypeSet; // +0x4c0
    MMScrollActionSheetDelegateHelper * _folderActionSheetDelegateHelper; // +0x4c8
    NSArray * _bottomButtonPriorityArray; // +0x4d0
    NSMutableDictionary * _buttonActionMap; // +0x4d8
    double _widthWhenShowingFolderSheet; // +0x4e0
    MMFinderLiveMilestoneLotteryBannerView * _milestoneLotteryBannerView; // +0x4e8
    MMFinderLiveMilestoneLotteryViewModel * _milestoneLotteryVM; // +0x4f0
    MMFinderLiveMilestoneLotteryDetailView * _attendLotteryDetailView; // +0x4f8
    MMFinderLiveMilestoneLotteryDetailResultView * _lotteryResultView; // +0x500
    PAGView * _milestoneLotteryBigPacketPAGAnimationView; // +0x508
    MMFinderLiveOperationViewMilestoneLotteryPAGDelegateHelper * _pagHelper; // +0x510
    LOTAnimationView * _milestoneLotteryBigPacketLOTAnimationView; // +0x518
    FinderLiveMilestoneLotteryInfo * _pendingAutoShowLotteryInfo; // +0x520
    MMLiveVoteFloatingView * _voteFloatingView; // +0x528
    MMLiveVoteFloatingViewDisplayLogic * _voteFloatingViewDisplayLogic; // +0x530
    WCLiveBottomTextButton * _bottomVoteButton; // +0x538
    MMLiveVotePopupView * _votePopupView; // +0x540
    MMFinderLiveBoxPageSheetView * _boxGuideView; // +0x548
    MMFinderLivePaymentRetryViewBar * _tryViewLiveBar; // +0x550
    MMFinderLivePaymentTipsBubble * _chargeableLiveTipsBubble; // +0x558
    UIView * _trialTimeOutMaskView; // +0x560
    MMWebImageView * _trialTimeoutMaskCoverView; // +0x568
    UIView * _trialTimeoutMaskContentView; // +0x570
    unsigned long long _chargeableLiveUIState; // +0x578
    unsigned long long _lastPurchaseInitiateTime; // +0x580
    WCLiveBottomTextButton * _anchorLikeButton; // +0x588
    MMLiveLikeButton * _anchorClapButton; // +0x590
    MMNormalTipsView * _likeTipsView; // +0x598
    UIView * _likeAnimationWrapper; // +0x5a0
    MMWebImageView * _buttonImageView; // +0x5a8
    MMFinderLiveRealNameFriendLikeBubbleView * _friendLikeBubbleView; // +0x5b0
    MMFinderLiveFansGroupJoinPanel * _joinFansGroupPanel; // +0x5b8
    MMFinderLiveNewFansGroupJoinPanel * _joinFansGroupPanelNew; // +0x5c0
    MMFinderLiveFansGroupPayPanel * _payFansGroupPanel; // +0x5c8
    MMFinderLiveFansGroupDetailPanel * _fansGroupDetailPanel; // +0x5d0
    MMFinderLiveFansGroupMemberListPanel * _memberListPanel; // +0x5d8
    WCLiveBottomTextButton * _ktvSongButton; // +0x5e0
    NSString * _ktvThemeResourceFetchSessionToken; // +0x5e8
    MMFinderLiveSharePubbleTipView * _ktvGuideView; // +0x5f0
    FinderLiveGuideInfoItem * _ktvSingerGuideInfoItem; // +0x5f8
    MMFinderLiveSharePubbleTipView * _audiencePkStartTipsView; // +0x600
    MMFinderLiveMicInviteAudienceBubbleView * _connectMicInviteAudienceBubbleView; // +0x608
    WCLiveBottomTextButton * _musicSettingButton; // +0x610
    MMFinderLiveMusicSettingOperationPanel * _musicSettingOprationPanel; // +0x618
    MMFinderLiveMusicSettingInteractiveView * _musicSettingInteractiveView; // +0x620
    MMLiveMusicOperationPanel * _musicOperationChoosingPanel; // +0x628
    MMLiveMusicPlayLogic * _musicPlayLogic; // +0x630
    MMRollableLabelView * _songLabelView; // +0x638
    MMFinderLiveSongSettingOperationPanel * _songSettingOperationPanel; // +0x640
    NSString * _currentSingingSongName; // +0x648
    WCLiveBottomTextButton * _anchorSongButton; // +0x650
    WCLiveBottomTextButton * _liveLotteryButton; // +0x658
    LOTAnimationView * _largeLotteryPacketView; // +0x660
    MMLiveLotteryDetailCardView * _lotteryDetailCardView; // +0x668
    MMFinderLiveCreateLotteryViewModel * _createLotteryViewModel; // +0x670
    MMFinderLiveLotteryStartLogic * _lotteryStartLogic; // +0x678
    WCLiveBottomTextButton * _liveShoppingButton; // +0x680
    MMFinderLivePromoteManageLogic * _promoteManageLogic; // +0x688
    MMFinderLiveSharePubbleTipView * _shopPubbleTipView; // +0x690
    FinderLiveAppMsgPromoteStatusInfo * _promoteStatusInfo; // +0x698
    MMLiveRoomPromotingBanner * _promotingBanner; // +0x6a0
    MMLiveBaseOnlineStateBar * _onlineStateBar; // +0x6a8
    MMLiveAchorTimeLabel * _anchorTimeLabel; // +0x6b0
    MMLiveAchorWeakNetTipView * _anchorWeakTipView; // +0x6b8
    UIView * _bottomBtnContainerView; // +0x6c0
    MMFinderLiveSharePubbleTipView * _promoteTipsPubbleView; // +0x6c8
    NSSet * _settingSheetValidRedDotPaths; // +0x6d0
    MMFinderLiveAdGuideFollowSheet * _adGuideFollowSheet; // +0x6d8
    MMNormalTipsView * _gameTipsView; // +0x6e0
    MMNormalTipsView * _gamePromoteTips; // +0x6e8
    MMNormalTipsView * _gameNewFansPromoteTips; // +0x6f0
    MMLiveGameJoinTeamView * _gameJoinTeamView; // +0x6f8
    MMLiveGameInviteJoinTeamView * _gameInviteJoinTeamView; // +0x700
    MMLiveGameJoinTeamSettingView * _gameJoinTeamSettingView; // +0x708
    MMLiveGamePlayTogetherOperationPanel * _playTogetherPanel; // +0x710
    MMLiteAppViewController * _gemeLiteAppVC; // +0x718
    MMFinderGameLiveWelfareTaskInfoView * _welfareTaskInfoView; // +0x720
    unsigned long long _currentServerTs; // +0x728
    NSArray * _gameFrameSetConfigs; // +0x730
    NSMutableDictionary * _gameFrameSetViews; // +0x738
    PAGView * _hotCommentAnimationView; // +0x740
    MMFinderLiveBannerView * _bannerView; // +0x748
    MMFinderLiveBannerView * _squareBanner; // +0x750
    MMLiveAdCountdownBannerView * _adCountdownBanner; // +0x758
    WCLiveBottomTextButton * _cameraOperationButton; // +0x760
    MMLiveBeautyOperationContainerView * _beautyContainerView; // +0x768
    MMLiveCameraOperationPageSheet * _cameraOperationPanel; // +0x770
    MMLiveMakeupOperationPanel * _makeupOperationPanel; // +0x778
    MMLiveFilterOperationPanel * _filterOperationPanel; // +0x780
    MMLiveDecorationOperationPanel * _decorOperationPanel; // +0x788
    MMLiveVisionEffectsOperationPanel * _visionEffectsOperationPanel; // +0x790
    UIPanGestureRecognizer * _panGesture; // +0x798
    UIPinchGestureRecognizer * _pinGesture; // +0x7a0
    MMUILabel * _exitVRLiveLabel; // +0x7a8
    WCLiveBottomTextButton * _enterVrButton; // +0x7b0
    MMFinderLiveSharePubbleTipView * _enterVRLivePubbleTipView; // +0x7b8
    WCLiveBottomTextButton * _selectGiftButton; // +0x7c0
    MMLiveRewardGiftSendingMoreButton * _quickSendGiftButton; // +0x7c8
    MMLiveRewardGiftSelectionView * _giftSelectionView; // +0x7d0
    MMLiveRewardGiftRecievingAnimationView * _giftRecievingAnimationView; // +0x7d8
    MMLiveRewardGiftSendingMoreBubbleView * _sendingMoreBubbleView; // +0x7e0
    MMLiveRewardRecipientSelectionView * _rewardRecipientSelectionView; // +0x7e8
    MMLiveRecommendGiftTipsView * _recommendGiftTipsView; // +0x7f0
    MMFinderLiveRecommendUserSendGiftInfo * _pendingRecommendUserSendGiftInfo; // +0x7f8
    MMFinderLivePackageGiftRecommendInfo * _pendingPackageGiftRecommendInfo; // +0x800
    MMFinderLiveGiftGoalView * _giftGoalView; // +0x808
    MMFinderLiveGiftSendMoreBubbleArbitrator * _sendMoreBubbleArbitrator; // +0x810
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _quickSendGiftLogicDelegate; // +0x818
    WCLiveBottomTextButton * _freeGiftButton; // +0x820
    UILabel * _freeGiftButtonDescLabel; // +0x828
    MMFinderLiveConnectMicPKForegroundGiftLogic * _foregroundGiftLogic; // +0x830
    MMLoadingView * _loadingView; // +0x838
    unsigned long long _currLayoutOrientation; // +0x840
    MMUIButton * _orientationButton; // +0x848
    MMFinderLiveReplayKitViewModel * _replayKitViewModel; // +0x850
    long long _rotation; // +0x858
    WCLiveBottomTextButton * _liveRedPacketButton; // +0x860
    WCLiveBottomTextButton * _liveScreenSharingButton; // +0x868
    WCLiveBottomTextButton * _liveToolsButton; // +0x870
    WCLiveBottomTextButton * _livePromoteExtendButton; // +0x878
    NSMutableArray * _bottomBtnList; // +0x880
    CGPoint _hitPoint; // +0x888
    CGSize _lastLayoutSize; // +0x898
    UIEdgeInsets _lastLayoutSafeArea; // +0x8a8
}
+ (id)defaultBottomButtonPriorityArrayForAudience;
+ (double)getBottomBtnSpaceForLive:(id)arg1;
+ (double)getBottomBtnSideLen;
+ (double)moreLiveTipsViewTopPadding;
+ (double)moreLiveTipsExtraTopMargin;
- (void)checkAndAddGesturesForZoom;
- (void)handlePinchGestureForZoom:(id)arg1;
- (void)handleTapGestureForZoom:(id)arg1;
- (void)handlePanGestureForZoom:(id)arg1;
- (void)tryExitVideoZoomDisplayMode;
- (void)tryCreateVideoZoomGuideView;
- (BOOL)isVideoZoomAvailableByTask:(id)arg1;
- (void)tryShowVideoZoomGuideView;
- (void)layoutVideoZoomGuideViewForAudience;
- (void)tryShowVideoZoomGuideViewWithDelay:(double)arg1;
- (void)tryShowVideoZoomGuideViewAfterDelayForAnchor;
- (void)tryShowVideoZoomGuideViewAfterDelayForAudience;
- (void)tryShowVideoZoomGuideViewAfterDelay;
- (void)tryHideAndRemoveVideoZoomGuideView;
- (void)handlePanelSelectVote;
- (void)createVoteFloatingViewIfNeeded;
- (void)createLiveVoteButtonIfNeeded;
- (void)updateBottomVoteButtonHidden;
- (void)onClickedVoteFloatingView;
- (void)popupVoteView;
- (void)setVoteFloatingViewForFocusingAnchor:(BOOL)arg1;
- (BOOL)votePopupViewVisible;
- (void)onVotingInfoUpdate:(id)arg1 fromMsg:(BOOL)arg2;
- (id)voteVM;
- (void)_showOperationViewContents;
- (void)_hideOperationViewContents;
- (void)votePopupViewReadyToPopup:(id)arg1;
- (void)votePopupViewDidTapManageVoteButton:(id)arg1;
- (void)_doCancelCurrentVoting;
- (void)votePopupViewWillClose:(id)arg1;
- (void)onAnchorCreateVoteSuccess:(id)arg1;
- (void)onToggleFloatingViewHidden:(BOOL)arg1;
- (BOOL)isPlayingVrLive;
- (void)createEnterVrButtonIfNeeded;
- (void)createExitVRLiveLabelIfNeeded;
- (void)updateExitVRLiveLabel:(BOOL)arg1;
- (void)hideExitVRLiveLabelWithTimeout;
- (void)enterVrButtonClick;
- (void)enterVrClick;
- (void)updateModelWithOperation:(BOOL)arg1;
- (void)exitVRLiveClick;
- (void)updateGestureRecognizer:(BOOL)arg1;
- (void)setupVR;
- (void)showEnterVRLivePubbleTipViewIfNeeded;
- (void)layoutEnterVRLivePubbleTipView;
- (void)createEnterVRLivePubbleTipView;
- (void)hideEnterVRLivePubbleTipView;
- (BOOL)isCanShowVrOperationGuide;
- (BOOL)isCanShowEnterVRLivePubbleTipView;
- (void)saveLocationState;
- (void)startLoading;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (double)getPanelLeftMargin;
- (double)getPanelRightMargin;
- (double)getLandscapeEdgePadding;
- (void)setupPanelViewLayout:(id)arg1;
- (void)updateTestModeShowingInputView:(BOOL)arg1;
- (void)updateTestModeCurrentClearState:(BOOL)arg1;
- (void)updateTestLiveModeClearScreenUI:(BOOL)arg1;
- (void)updateCurrentTestMode:(BOOL)arg1;
- (void)showTestLiveMode;
- (void)layoutTestModeUI;
- (void)hideTestLiveMode;
- (void)createTestLiveMode;
- (void)closeTestLiveClick;
- (BOOL)canShowTestLiveMode;
- (id)getCacheTestLiveModeList;
- (void)cacheTestLiveModeInfo;
- (float)statusContainerPreferWidth;
- (float)statusContainerPreferHeight;
- (BOOL)updateStatusContainerHeight:(float)arg1;
- (void)insertStatusBannerItem:(id)arg1;
- (void)removeStatusBannerItemWithType:(unsigned int)arg1;
- (void)updateAnchorTaskTitle:(id)arg1;
- (void)createStatusContainerIfNeeded;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)stopStatusCarousel;
- (void)startStatusCarousel;
- (void)scrollToNextStatusItem;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)adjustIndexPath;
- (BOOL)isIndexValid:(unsigned long long)arg1;
- (void)updateAnchorRealtimeDataPanelWithJumpInfo:(id)arg1;
- (void)createAnchorRealtimeDataPanel;
- (BOOL)isAnchorRealtimeDataPanelShow;
- (void)updateNewAnchorTaskPanelWithInfo:(id)arg1;
- (void)createNewAnchorTaskEntranceViewIfNeededWithTitle:(id)arg1;
- (void)dismissTaskGuideView;
- (void)showTaskGuideViewWithTitle:(id)arg1 dependentView:(id)arg2 topArea:(BOOL)arg3 targetType:(unsigned int)arg4;
- (void)onNewAnchorQuestUpdated:(id)arg1 taskId:(id)arg2;
- (void)onNewAnchorTaskGuideWithTaskId:(id)arg1 targetItem:(id)arg2;
- (void)handleShopVIPInfo:(id)arg1;
- (id)currentShopVIPWidget;
- (void)removeCurrentShopVIPWidget;
- (void)showShopVIPWidgetWith:(id)arg1;
- (void)bindViewModelToReward:(id)arg1;
- (void)updateLiveGiftButtonEnabled;
- (void)updateLiveRewardEnabled;
- (void)updateLiveQuickSendGiftButtonEnabled;
- (void)updateLiveRecommendUserSendGiftInfo;
- (void)updateLivePackageGiftRecommendInfo:(id)arg1;
- (void)updateLiveExposedGiftItemAfterFetchBalance;
- (void)updateLiveExposedGiftItem;
- (void)createRewardGiftRecievingAnimationViewIfNeeded;
- (void)updateGiftRecievingAnimationViewHidden;
- (void)updateGiftViewsForCurrentCommentContentState;
- (void)createRewardRecipientSelectionViewIfNeeded;
- (void)createSendingMoreBubbleViewIfNeeded;
- (void)createQuickSendGiftButtonIfNotExists;
- (void)createGiftSelectButtonIfNotExists;
- (void)createFreeGiftButtonIfNotExists;
- (void)updateFreeGiftPackageInfo:(id)arg1;
- (void)insertLocalFreeGift:(id)arg1;
- (void)openGiftSelectionViewWithSelectedFreeGift:(id)arg1;
- (void)handleSendFreeGiftFailed:(id)arg1 giftIdsToReadd:(id)arg2;
- (void)handleSendFreeGiftSuccess:(id)arg1 count:(unsigned long long)arg2;
- (BOOL)isFreeGiftAlreadyUsed:(id)arg1;
- (void)reloadFreeGiftButton;
- (void)onSendFreeGiftButtonClicked;
- (void)onSelectGiftButtonClicked;
- (void)showRewardGiftSelectionViewWithRecipentContact:(id)arg1 preferredGiftId:(id)arg2 sendingHint:(id)arg3;
- (void)openRewardRecipientSelectionView;
- (void)openRewardGiftSelectionView;
- (void)openRewardGiftSelectionView:(BOOL)arg1;
- (void)openRewardGiftSelectionView:(BOOL)arg1 withPreferredGiftId:(id)arg2 sendingHint:(id)arg3;
- (void)openRewardGiftSelectionView:(BOOL)arg1 packageSelectGiftItem:(id)arg2;
- (void)openRewardGiftSelectionView:(BOOL)arg1 packageSelectGiftItem:(id)arg2 shouldAutoSelectGiftItem:(BOOL)arg3;
- (void)openRewardGiftSelectionViewWithSubTitle:(id)arg1 rewardExtInfo:(id)arg2 onRewardClickCallback:(id /* block */)arg3 onComboUpdatedCalback:(id /* block */)arg4 onComboLongPressFinished:(id /* block */)arg5 onComboFinishCompletion:(id /* block */)arg6 onCancelSelection:(id /* block */)arg7;
- (void)sendRewardGiftToAnchor:(id)arg1 withScene:(int)arg2 targetSendMoreBubbleHost:(unsigned long long)arg3 completeBlock:(id /* block */)arg4;
- (void)sendRewardGift:(id)arg1 withScene:(int)arg2 targetSendMoreBubbleHost:(unsigned long long)arg3 completeBlock:(id /* block */)arg4;
- (void)sendRewardGift:(id)arg1 withScene:(int)arg2 targetSendMoreBubbleHost:(unsigned long long)arg3 wecoinBalance:(unsigned long long)arg4 completeBlock:(id /* block */)arg5;
- (BOOL)checkAndShowGiftUnlockTipIfNeed:(id)arg1;
- (void)onSelectRewardRecipientContact:(id)arg1;
- (void)onSelectRewardRecipientContactFinished;
- (void)onSelectLiveRewardGiftAttackContact:(id)arg1 pageSheetView:(id)arg2;
- (void)onSelectLiveRewardGiftAttackContactFinished:(id)arg1;
- (void)onSelectRewardRecipientContact;
- (void)onSelectRewardGiftAttackContact;
- (void)onRewardGiftSelectionViewWillClose:(BOOL)arg1;
- (id)handleFreeGiftWithCurrentPackageItems:(id)arg1;
- (void)onGotoBuyGiftPackets;
- (void)onJumpWebView:(id)arg1 jumpParams:(id)arg2 jumpInfo:(id)arg3 fromVc:(id)arg4;
- (BOOL)onShowUnlockTipIfNeeded:(id)arg1 giftItem:(id)arg2;
- (id)getExtraActionResultDictForReportWithSelectionView:(id)arg1;
- (void)onSendAnchorWishGiftWithGiftItem:(id)arg1 giftItem:(id)arg2;
- (void)showRecommendGiftTipsViewWithPackageGiftInfo:(id)arg1 animated:(BOOL)arg2;
- (void)showRecommendGiftTipsViewWithRecommendGiftInfo:(id)arg1 animated:(BOOL)arg2;
- (void)showRecommendGiftTipsViewWithScene:(unsigned long long)arg1 giftItem:(id)arg2 wording:(id)arg3 animated:(BOOL)arg4;
- (void)layoutRecommendGiftTipsView;
- (void)dismissRecommendGiftTipsView:(BOOL)arg1;
- (void)checkPendingRecommendGiftTipsView;
- (BOOL)isNewUserPromotionRecommendGiftTipsDisplayed;
- (BOOL)isNewPackageGiftRecommendGiftTipsDisplayed;
- (BOOL)isExpirePackageGiftRecommendGiftTipsDisplayed;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onGiftGoalUpdatedForGiftGoalLogic:(id)arg1;
- (void)onGiftGoalViewPreemptionsChangedFrom:(unsigned long long)arg1 logic:(id)arg2;
- (void)onConnectMicDidStartPK:(id)arg1;
- (void)onConnectMicDidEndPK:(id)arg1;
- (void)onConnectMicPKUserForegroundPercentageUpdated:(id)arg1 foregroundPercent:(unsigned int)arg2 foregroundGiftId:(id)arg3 username:(id)arg4;
- (void)createForegroundGiftLogicIfNeeded;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onGiftGoalViewInitiateSendRequested:(id)arg1;
- (void)onGiftGoalViewCloseRequested:(id)arg1 explicitly:(BOOL)arg2;
- (void)onGiftGoalViewLayoutRequested:(id)arg1;
- (void)onGiftGoalViewFulfilled:(id)arg1;
- (void)dismissGiftGoalView:(id)arg1;
- (CGSize)sizeGiftGoalView:(id)arg1;
- (void)arrangeGiftGoalView:(id)arg1;
- (void)testGiftAttackScheduleGiftBatch;
- (void)checkReplayKit;
- (void)updateReplaykit:(BOOL)arg1;
- (void)applicationWillTerminate;
- (void)replayKitStartLive;
- (void)replayKitStartLiveInit;
- (void)liveEnterBackgroundCheck;
- (void)onSystemVolumeDidChange;
- (void)updateResumedLive;
- (void)recordLiveInitAudioAndVideo:(unsigned long long)arg1;
- (void)updateCategroyWithUsingEar:(BOOL)arg1;
- (void)replayKitStopLive;
- (void)clearReplayKitLive;
- (void)startAllSocket;
- (void)stopAllSocket;
- (void)stopServiceSocket;
- (void)checkClientSocket;
- (BOOL)isAnchorRecordLive;
- (BOOL)broadcastRecording;
- (void)checkRecordScreen;
- (BOOL)canRecordScreen;
- (void)onPauseRecordLive;
- (void)onResumeRecordLive;
- (id)currentReplayKitManager;
- (void)createRecordTipView;
- (void)layoutRecordTipView;
- (void)checkServiceSocket;
- (void)handelNormalModeWithMsgType:(unsigned long long)arg1 isPrivacy:(BOOL)arg2 pixelBuffer:(__CVBuffer *)arg3 audioData:(id)arg4 videoFrame:(id)arg5;
- (void)updateSizeOfSampleBuffer:(CGSize)arg1 isPrivacy:(BOOL)arg2;
- (BOOL)enableMixExternalAudioWithLiveId:(unsigned long long)arg1 enablePublish:(BOOL)arg2 playout:(BOOL)arg3;
- (void)setVideoEncoderParamWithWidth:(double)arg1 height:(double)arg2 withLiveId:(unsigned long long)arg3 isPrivacy:(BOOL)arg4;
- (CGSize)getResolutionSize:(long long)arg1 resolutionMode:(long long)arg2;
- (id)getPushLivetsk;
- (BOOL)enterPrivacyMode;
- (BOOL)isBackground;
- (id)currentServiceSocketManager;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)reportRecordLiveMem;
- (void)reportRecordLiveSingleMem:(id)arg1;
- (void)reportRecordScreenAlterWithType:(unsigned long long)arg1;
- (void)reportRecordLiveWithType:(unsigned long long)arg1;
- (void)updateGameUserInfo;
- (void)onServiceSocketSendVideWithMsgType:(unsigned long long)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)sendVideWithMsgType:(unsigned long long)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)onServiceSocketSendAudioWithMsgType:(unsigned long long)arg1 audioData:(id)arg2;
- (void)onServiceSocketSendH264VideWithMsgType:(unsigned long long)arg1 videoFrame:(id)arg2;
- (void)onServiceSocketGetFrameIdWithMsgType:(unsigned long long)arg1 videoFrameId:(long long)arg2;
- (void)onServiceSocketGetDecoderFrameIdWithMsgType:(unsigned long long)arg1 videoFrameId:(long long)arg2;
- (void)onServiceSocketEventWithType:(long long)arg1 error:(id)arg2;
- (void)onServiceSockeSocketMemWithMem:(long long)arg1;
- (void)onServiceSockeReportStr:(id)arg1;
- (void)createreplayKitViewModel;
- (void)onUpdateRecordLive:(BOOL)arg1;
- (void)updateVideoType;
- (void)orientChange:(id)arg1;
- (__CVBuffer *)getPrivacyPushPixelBuffer;
- (void)bindViewModelToPromotion:(id)arg1;
- (void)updateLiveShoppingButtonEnabled;
- (void)createLiveShoppingButtonIfNeeded;
- (void)shoppingButtonSetImage;
- (id)promotePubbleView;
- (void)dismissAllPromotePubbleViews:(BOOL)arg1;
- (void)updateOperationVMOnPromotePubbleDisplay:(id)arg1;
- (void)updateOperationVMOnPromotePubbleDismiss:(id)arg1;
- (void)showPromoteManagePanel:(id)arg1;
- (void)showPromoteLiveNotice:(id)arg1;
- (void)createPromoteManageLogic;
- (void)onLiveShoppingButtonClicked;
- (void)onFinderLivePromoteMsgInfoUpdate:(id)arg1;
- (void)onFinderLivePromoteExtInfoUpdate:(id)arg1;
- (void)createPromoteDisplayLogic;
- (double)getPromotePubbleBottomPosY;
- (double)promotePubbleLeft:(id)arg1;
- (CGPoint)getLiveShoppingButtonRelativeCenterPoint;
- (CGPoint)getLiveLocalLinkButtonRelativeCenterPoint;
- (CGPoint)getLiveShoppingButtonRelativeOrigin;
- (void)updatePromotePubbleHidden;
- (void)onPromoteAddedReport:(long long)arg1 businessId:(id)arg2;
- (void)onPromotePushedReport:(long long)arg1 reportData:(id)arg2;
- (void)onPromoteCanceledReport:(long long)arg1 reportData:(id)arg2;
- (void)onPromoteManagePanelContentAction:(id)arg1 dismissAction:(id /* block */)arg2;
- (void)showdLiveNoticeDetailView:(id)arg1;
- (id)getAnchorContact;
- (void)onFinderLive:(id)arg1 updatePromoteStatusInfo:(id)arg2;
- (void)showShopPubbleTipViewIfNeeded;
- (BOOL)canShowShopPubbleTipView;
- (void)layoutShopPubbleTipView;
- (void)createShopPubbleTipView;
- (void)hideShopPubbleTipView;
- (void)bindViewModelToPayment:(id)arg1;
- (void)updateUIStateForChargeableLive;
- (void)updateTrialTimeExpandUIStateForChargeableLive;
- (void)hideTryViewLiveBar;
- (void)onChargeableLiveUIStateChangedToPaid;
- (void)onChargeableLiveUIStateChangedToNotPaid;
- (void)onChargeableLiveUIStateChangedToTrialTimeout;
- (void)onChargeableLiveUIStateChangedToTrialTimeExtend;
- (void)stopTrialCountdownOnExit;
- (void)layoutTrialTimeoutMaskView;
- (void)createTryViewLiveBarIfNeeded;
- (void)showChargeableLiveTipsBubble:(id)arg1;
- (void)layoutTryViewLiveBar;
- (void)layoutChargeableLiveTipsBubble;
- (void)createTrialTimeOutMaskViewIfNeed;
- (BOOL)isDisplayOperationWidgetsForAudience;
- (void)handleForEnableDisplayBottomWidgets;
- (void)checkAndUpdateAudienceBottomButtonsAlpha;
- (void)saveCurrentRemainTime;
- (BOOL)isChargeableTipsPubbleCoverBottomBtnContainer;
- (void)onTrialTimeoutMaskViewTapped;
- (void)onMMFinderLivePaymentPolicyIntroViewCancelButtonClicked;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onFinderLiveTaskTrialCountLimitReached:(id)arg1;
- (void)onPurchaseInitiating;
- (void)finderLivePayment_onLoadImageOK:(id)arg1;
- (BOOL)insertTrialTimeoutMaskCoverViewToPIPRenderLayer;
- (void)bindViewModelToMusic:(id)arg1;
- (void)updateMusicSettingButtonEnabled;
- (void)createMusicSettingButton;
- (void)createMusicSettingOprationPanelIfNeeded;
- (void)createSongLabelViewIfNeeded;
- (void)showMusicSettingInteractiveGuideView;
- (void)hideMusicSettingInteractiveGuideView;
- (void)onMusicSettingButtonClicked;
- (void)onSongButtonClicked;
- (void)setCacheMusicItemForId:(id)arg1 item:(id)arg2;
- (void)showMusicSettingGuideIfNeed;
- (long long)onMusicSettingInteractiveTap:(long long)arg1;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)showMusicSettingOperationPanelWithReportDelegate:(id)arg1;
- (void)showSongListOperationPanelWithReportDelegate:(id)arg1;
- (id)getMusicButtonRedDotPath;
- (void)configMusicChoosingPanelCell;
- (void)showChoosingPanelWithReportDelegate:(id)arg1;
- (void)operationPanel:(id)arg1 didCloseWithSelection:(unsigned long long)arg2;
- (BOOL)canShowAnchorSongBottomButton;
- (void)updateOrderSongWithInfo:(id)arg1;
- (void)refreshOrderSongUsingCurrentAnchorStatus;
- (BOOL)shouldShowSongRollableLabelView;
- (BOOL)shouldHandleCustomLink;
- (void)updateSongLabelViewHidden;
- (void)onCurrentSingingSongChanges:(id)arg1;
- (void)updateSongLabelViewWithSongName:(id)arg1;
- (void)handleSongCommentItemClickLink:(id)arg1;
- (void)openSongSettingsOperationPanel;
- (void)openSongSettingsOperationPanelWithTargetVisibleSongName:(id)arg1;
- (void)onAudienceOrderSong:(id)arg1;
- (void)createMultiAngleButtonIfNeeded;
- (void)createMultiAngleView;
- (void)createMultiViewModel;
- (void)showMultiAngleButtonClick;
- (void)hideMultiAngleView;
- (void)updateMultiAnglePubbleTipView;
- (BOOL)isOperationInPublic;
- (void)showEnterMultiAnglePubbleTipViewIfNeeded;
- (void)layoutEnterMultiAnglePubbleTipView;
- (void)createMultiAngleLivePubbleTipView;
- (void)hideEnterMultiAnglePubbleTipView;
- (BOOL)isCanShowLiveMultiAnglePubbleTipView;
- (void)saveMultiAngleLocationState;
- (void)checkAndAddPanGestureForMultiAngle;
- (void)handlePanGestureForMultiAngle:(id)arg1;
- (void)bindViewModelToMultiAngle:(id)arg1;
- (void)createPlayerPageControlIfNeeded;
- (void)layoutPlayerPageControl;
- (void)layoutPlayerPageControlWithFlag:(BOOL)arg1;
- (void)onMultiAngleCountUpdated:(unsigned long long)arg1 andCurrentIndex:(unsigned long long)arg2;
- (void)updatePlayerViewPageControlWithCount:(unsigned long long)arg1 andCurrentIndex:(unsigned long long)arg2;
- (void)updatePlayerPageControlAppearance;
- (void)updatePlayerViewPageControlCurrentIndex:(unsigned long long)arg1 andProgress:(double)arg2;
- (void)checkAndDelayHidePlayerPageControl;
- (void)delayHidePlayerPageControl;
- (void)updateCanShowMultiPlayerPageControl;
- (void)updateCanShowMultiPlayerPageControlAndLayout;
- (void)updatePlayerViewPageControlAlpha;
- (void)updatePlayerViewPageControlAlphaWithProgress:(double)arg1 forceShow:(BOOL)arg2;
- (void)checkAndStartMultiAngleSwitchAnimationWithDuration:(double)arg1 currentProgress:(double)arg2 switchToNext:(BOOL)arg3;
- (void)startMultiAngleSwitchSecondAnimationWithDuration:(double)arg1 switchToNext:(BOOL)arg2;
- (id)getCacheLiveMultiAngleList;
- (void)cacheLiveMultiAngleInfo;
- (void)updateMultiAngleRequestId:(unsigned long long)arg1;
- (void)createMilestoneLotteryVM;
- (void)showMilestoneLotteryBanner;
- (void)updateMilestoneLotteryWithMetaInfo:(id)arg1;
- (void)updateOngoingLotteryWithInfo:(id)arg1;
- (void)updateMilestoneLotteryBanner;
- (void)milestoneLotteryBannerDidTap;
- (void)openMilestoneLotteryDetailCard;
- (UIEdgeInsets)getBannerMaskEdgeInsetsAtStartingPointWithMilestoneLottery;
- (void)showPendingLotteryResultIfNeeded;
- (void)_playLotteryAnimationAndShowResultWithInfo:(id)arg1 force:(BOOL)arg2;
- (id)getAudienceLogForLotteryViewModel:(id)arg1;
- (void)lotteryViewModel:(id)arg1 requestShowMilestoneLotteryResultForLottery:(id)arg2;
- (void)_doShowLotteryResultViewWithLotteryId:(id)arg1;
- (void)lotteryViewModel:(id)arg1 requestGotoWebUrl:(id)arg2 lotteryId:(id)arg3;
- (void)lotteryViewModel:(id)arg1 requestShowCommentInputWithWording:(id)arg2;
- (void)lotteryViewModel:(id)arg1 requestGotoWeappWithCouponInfo:(id)arg2;
- (void)lotteryViewModel:(id)arg1 requestInsertLocalReceivedFreeGift:(id)arg2;
- (BOOL)lotteryViewModel:(id)arg1 queryIfFreeGiftAlreadyUsedWithGiftId:(id)arg2;
- (void)lotteryViewModel:(id)arg1 requestPlayReceiveGiftAnimationWithView:(id)arg2;
- (void)_doGotoWeappWithCouponInfo:(id)arg1;
- (void)lotteryViewModel:(id)arg1 requestOpenGiftSelectionViewWithSelectedGift:(id)arg2;
- (void)lotteryViewModel:(id)arg1 requestGotoProfileWithUsername:(id)arg2 isBiz:(BOOL)arg3;
- (void)handleVisibilityChangedForMilestoneLottery:(BOOL)arg1 invokeType:(unsigned long long)arg2;
- (void)handleAppBecomeActiveForMilestoneLottery;
- (void)handleAppResignActiveForMilestoneLottery;
- (void)handleOrientationUpdatedForMilestoneLottery;
- (void)playLotteryOpenAnimationWithCompletion:(id /* block */)arg1;
- (BOOL)isUsePAG;
- (id)pathForMilestoneLotteryPacketAnimation;
- (BOOL)showMemberLiveTipsBubbleOnEnterLiveIfNeeded;
- (void)showMemberLiveTipsBubble:(id)arg1 useSuperfanIcon:(BOOL)arg2;
- (void)layoutMemberLiveTipsBubble;
- (void)bindViewModelToLottery:(id)arg1;
- (void)updateLiveLotteryButtonEnabled;
- (void)createLiveLotteryButtonIfNeeded;
- (BOOL)lotteryDetailCardViewVisible;
- (void)onLiveLotteryButtonClicked;
- (void)createLotteryClick;
- (void)anchorCreateLotteryClick:(BOOL)arg1;
- (void)startLotteryViewControllerClose;
- (void)startLotteryClick:(id)arg1;
- (void)lotteryBodyClick:(id)arg1;
- (void)onLiveLotteryRecordClick;
- (void)deleteLotteryClick:(id)arg1 session:(long long)arg2;
- (void)onGetFinderLiveUpdateLotteryPanelWithTaskId:(id)arg1;
- (void)reloadPanelData;
- (void)onLiveModLottery:(id)arg1 opType:(unsigned int)arg2;
- (void)showCreateLotteryView;
- (void)hideCreateLotteryView;
- (void)createLotteryWidgetsIfNeeded;
- (void)layoutLotteryWidgets;
- (void)createLargeLotteryPacketViewIfNeeded;
- (void)setLittleLotteryPacketViewForFocusingAnchor:(BOOL)arg1;
- (void)createLotteryPacketDisplayLogic;
- (void)createLotteryDetailCardViewIfNeeded;
- (void)createLotteryDisplayLogic;
- (void)willUpdatePanelData:(id)arg1;
- (BOOL)lotteryPackageViewDidShown;
- (BOOL)shouldUseProductImage;
- (void)loadProductImage;
- (void)littleLotteryPacketViewDidRefreshHidden:(BOOL)arg1;
- (void)littleLotteryPacketViewDidRefreshHidden:(BOOL)arg1 loadImageIfNeeded:(BOOL)arg2 image:(id)arg3;
- (BOOL)isCanShowAnchorCloseFunctionTipWithType:(int)arg1;
- (void)showAnchorCloseFunction:(id)arg1;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (void)setUpCreateLotteryViewModel;
- (void)onFinderLiveLotteryPacketDisplayLogicDidChangeLittlePacketShow:(id)arg1;
- (void)onFinderLiveLotteryPacketDisplayLogicDidChangeLittlePacketSuperview:(id)arg1;
- (void)openLotteryDetailCard;
- (void)updateAudienceLocalBubbleWithModel:(id)arg1;
- (void)onShowBubbleAction;
- (void)onAudienceLocalBubbleContentAction:(id)arg1;
- (void)onHideBubbleButton;
- (void)onShowBubbleButton:(BOOL)arg1;
- (void)showBubbleButton:(BOOL)arg1 image:(id)arg2;
- (BOOL)canShowBubbleButton:(BOOL)arg1;
- (void)layoutBubbleButton;
- (id)onPromoteBubbleActionExtraInfo;
- (long long)getReportActionType:(id)arg1;
- (void)createBubbleButtonIfNeeded;
- (void)reportLivePromoteComponentWithType:(unsigned long long)arg1 model:(id)arg2;
- (id)createPromoteActionReportItem:(unsigned long long)arg1 model:(id)arg2;
- (void)reportForPromoteActions:(id)arg1 withLiveTask:(id)arg2;
- (void)showNoticeBubbleWithNoticeInfo:(id)arg1;
- (void)dismissNoticeBubbleAnimated:(BOOL)arg1;
- (void)showQuickNoticeCreationHintWithGuideInfo:(id)arg1;
- (BOOL)showQuitLiveNoticeGuideViewIfCan;
- (void)layoutNoticeBubbleView;
- (void)operateNotice:(id)arg1 fromBubble:(BOOL)arg2;
- (id)buildCommonReportDictWithNotice:(id)arg1 actionType:(unsigned long long)arg2;
- (void)onCreateQuickNoticeRequestedByHintView:(id)arg1;
- (void)onCreateNoticeHintViewDismissed:(id)arg1;
- (void)bindViewModelToLike:(id)arg1;
- (void)updateLiveLikeButtonEnabled;
- (void)updateAnchorClapButtonEnabled;
- (void)updateIsShakeForLike;
- (void)updateMaxLikeCountOnce;
- (void)reportCustomEvent:(unsigned long long)arg1 andEvent:(id)arg2;
- (void)createLikeButtonIfNotExists;
- (void)postOneLike;
- (void)createAnchorLikeButtonIfNotExists;
- (void)updateAnchorLikeButtonPositionY;
- (void)createLikeAnimationWrapperIfNotExists;
- (void)updateLikeCountForLiveInfoUpdate;
- (void)setupAnchorLikePlayUtil;
- (void)setupAudienceLikePlayUtil;
- (void)recordSelfLike;
- (void)updateLikeButtonIcon:(id)arg1;
- (void)enterClapMode:(long long)arg1;
- (void)showCheerClapModeUI;
- (void)dismissCheerClapModeUI;
- (void)_onAnchorClapButtonClick;
- (void)showLikeTipsViewIfNeed:(int)arg1;
- (void)layoutBottomAudienceLikeButton;
- (CGPoint)getAudienceLikeButtonRelativeCenter;
- (CGPoint)getAnchorLikeButtonRelativeCenter;
- (void)updateLikeButtonAlpha;
- (void)_layoutLikeTipsView:(BOOL)arg1;
- (void)dismissLikeTipsView:(BOOL)arg1;
- (void)updateLiveAdInfo;
- (void)addCheerIconsForAllRole:(id)arg1;
- (void)addAdCheerIconsForAllRole:(id)arg1;
- (void)executeUpdateWithCheerInfo;
- (void)updateWithCheerInfo:(id)arg1;
- (void)updateLikeButtonWithUrl:(id)arg1;
- (void)updateWithCheerAnimationInfo:(id)arg1;
- (BOOL)isCurrentEnableShowLikeAnimation;
- (void)updateAudienceLikeAnimationHidden;
- (void)updateAnchorLikeAnimationHidden;
- (void)onGetFinderLiveCheerEnterClapModeWithLevel:(unsigned int)arg1;
- (void)onGetFinderLiveShowCheerClapModeHint:(unsigned int)arg1;
- (void)updateLikeCountDisplayForAudience;
- (void)updateLikeCountDisplayForAnchorOrAssistant;
- (void)updateAudienceLikeButtonDescriptionVisiblityState;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(id)arg2 forRole:(long long)arg3;
- (void)onLikeContactListUpdate:(id)arg1;
- (void)finderLiveLike_onLoadImageOK:(id)arg1;
- (void)OnNoop;
- (long long)transferClapModeLiveToClapVoiceType:(unsigned int)arg1;
- (void)dismissFriendLikeBubble;
- (void)layoutFriendLikeBubbleView;
- (void)layoutBubbleViewAboveLikeButton:(id)arg1;
- (void)showFriendLikeBubbleView;
- (void)showFriendLikeGuidePage:(long long)arg1 sendReason:(unsigned long long)arg2;
- (void)updateFriendLikeBubbleState:(BOOL)arg1;
- (void)bindViewModelToKTV:(id)arg1;
- (void)updateLiveKTVSongButtonEnabled;
- (void)createKTVSongButtonIfNeeded;
- (void)onKTVSongButtonClicked;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (BOOL)hasShowAudienceRequestGuide;
- (void)prepareAudienceRequestGuide;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)showKtvRequestGuideAfterConnectingMic:(id)arg1;
- (void)showKtvSingerGuide;
- (void)showKtvGuideWithTitle:(id)arg1 dependentView:(id)arg2 topArea:(BOOL)arg3;
- (void)showKtvGuideWithTitle:(id)arg1 dependentView:(id)arg2 topArea:(BOOL)arg3 maxWidth:(double)arg4;
- (void)dismissktvGuideView;
- (void)handleInstantDiscountActivityInfo:(id)arg1;
- (void)onShouldFinishInstantDiscountHandler:(id)arg1;
- (void)bindViewModelToHeaders:(id)arg1;
- (void)updateOnlineUserCount;
- (void)updateOnlineViewCount;
- (void)updateOnlineStateBar;
- (void)updateRewardTotalAmountInHeat;
- (void)updateHeatValue;
- (void)updateShouldShowHeatValue;
- (void)updateShowNewRewardCountAndHeatValueStyle;
- (void)createAnchorTimeLabelIfNeeded;
- (void)layoutAnchorTimeLabel;
- (void)createPromotingBannerIfNeeded;
- (void)updateLivePromotingBanner;
- (void)createOnlineStateBarIfNeeded;
- (void)showOnlineStateView;
- (void)updatePaidUserCount;
- (void)layoutOnlineStateBar;
- (void)createHeaderViewIfNeeded;
- (void)clearAndReloadHeaderViewRedDot;
- (id)getRedDotShowInfoForHeaderView:(id)arg1;
- (void)layoutHeaderView;
- (void)updateAnchorWeakTipView:(unsigned long long)arg1 isShow:(BOOL)arg2;
- (void)createAnchorWeakTipViewIfNeeded;
- (void)layoutAnchorWeakTipView;
- (void)createOnlineStateViewIfNeeded;
- (BOOL)shouldShowHeatInOnlineStateBar;
- (BOOL)isShouldShowRewardAmountInOnlineStateView;
- (BOOL)isShouldShowHeatValueInOnlineStateView;
- (id)onlineStateBarTitle;
- (void)handleLayoutOrientationUpdatedForHeader;
- (void)checkAndUpdateClarityButtonHiddenInHeader;
- (BOOL)showClarityButtonIfNeeded;
- (BOOL)showCastingButtonIfNeeded;
- (void)onChooseClarityItemChanged;
- (void)layoutPromoteTipsPubbleView;
- (void)showHeaderActionButtonTipsWith:(id)arg1;
- (void)hideHeaderActionPubbleTipsView;
- (void)handleHeaderActionButtonClick;
- (BOOL)checkAndShowConfirmBeforeClose;
- (void)realClose;
- (BOOL)checkAndShowConfirmBeforeMinimize;
- (void)realMinimize;
- (BOOL)showGuideFollowSheetIfNeed;
- (BOOL)showLiveEligibilityIfNeed;
- (void)handleClickHeadImageOrLabelWith:(id)arg1;
- (void)onMMFinderLiveAdGuideFollowSheetFollow:(id)arg1 info:(id)arg2 isAnchor:(BOOL)arg3;
- (void)onMMLiveOnlineUserSelected:(id)arg1 userInfo:(id)arg2;
- (void)onMMLiveOnlineGlorySelfSelected;
- (void)onMMLiveOnlineGloryTipsSelected;
- (void)onMMLiveIntroductionBtnClicked;
- (void)onMMLiveInviteFriendsBtnClicked;
- (void)onMMLiveSingBtnClicked;
- (void)onMMLiveSelectGiftButtonClicked;
- (BOOL)isDataSourceTestLiveMode;
- (unsigned long long)dataSourcePaidUserCount;
- (void)onShowLiveHalfScreenNotification:(id)arg1;
- (void)createNoticeView;
- (void)handleGuideInfo:(id)arg1;
- (void)handleGuideInfoItem:(id)arg1;
- (BOOL)handleShareGuideInfo:(id)arg1;
- (BOOL)handleRandomMicGuideInfo:(id)arg1;
- (BOOL)handleNoticeGuideInfo:(id)arg1;
- (BOOL)handleKtvSingerShareLiveGuideInfo:(id)arg1;
- (BOOL)handleAudienceShareLiveGuideInfo:(id)arg1;
- (BOOL)handleAudienceAddSongGuideInfo:(id)arg1;
- (void)dismissShareGuideView;
- (void)createLiveGameButton;
- (void)onClickLiveGameAngleBtn;
- (void)anchorEnterGame3DEntrance;
- (void)internalEnterGame3DEntranceWith:(id)arg1;
- (void)bindViewModelToGame:(id)arg1;
- (void)updateOnThreeDimensionalTipsInfoChanged;
- (BOOL)shouldShowGameButton;
- (BOOL)shouldShowGameLiveAngelBtn;
- (void)updateLiveGameButtonEnabled;
- (void)updateLiveTipsViewDisplay;
- (void)updateLiveGameButtonButtonHighLighted;
- (BOOL)cannotShowGamePromoteTips;
- (void)updateLiveGameButtonTipsBubble;
- (BOOL)couldOperatePlayToghther;
- (void)onLiveGameButtonClicked;
- (void)continuePlayTogetherLiteAppWithExtraInfo:(id)arg1;
- (void)onOnepnPlayTogetherLiteApp:(int)arg1 extraInfo:(id)arg2;
- (void)continuePlayTogetherAfterPreCheck;
- (void)continueJoinTeamAfterPreCheck;
- (void)showGameJoinTeamSettingView;
- (void)showGameInvitaionView:(id)arg1;
- (void)showGameJoinTeamGuideIfNeed;
- (void)__internalShowGameJoinTeamGuide;
- (void)showGameTipsView;
- (void)checkPendingGameTipsView;
- (void)_showGameTipsView:(BOOL)arg1;
- (void)layoutTipsView:(id)arg1;
- (void)layoutGameTipsView;
- (void)dismissGameTipsView:(BOOL)arg1;
- (void)createGameWelfareTaskViewIfNeeded;
- (void)createAndLayoutGameFrameSetViewsIfNeed;
- (void)innerCreateOrUpdateGameFrameSetViewsIfNeed;
- (void)layoutGameFrameSetViews;
- (void)removeGameFrameSetViews;
- (void)updateGameFrameSetView:(id)arg1;
- (void)startPayForJoinGame;
- (void)gameWelfareTaskInfoViewDidRefreshHidden:(BOOL)arg1;
- (void)onPurchaseGameTeamupWithError:(id)arg1 taskId:(id)arg2;
- (void)gameLiveWelfareInfoView:(id)arg1 showView:(BOOL)arg2;
- (void)onMMLiveGameJoinTeamViewShow;
- (void)_internalTeamUpButtonAction:(id)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(BOOL)arg3 paidForNextRound:(BOOL)arg4;
- (void)_internalTeamUpButtonAction:(id)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(BOOL)arg3 paidForNextRound:(BOOL)arg4 params:(id)arg5 instanceId:(unsigned long long)arg6 callbackId:(int)arg7 finderJumpInfo:(id)arg8;
- (void)onMMLiveGameJoinTeamViewTeamUpStartButtonClicked:(id)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(BOOL)arg3 paidForNextRound:(BOOL)arg4;
- (void)onJoinTeamSettingJoinFansSuccess;
- (void)onMMLiveGameJoinTeamViewTeamUpBookButtonClicked:(id)arg1;
- (void)onMMLiveGameJoinTeamViewBottomDescClick:(id)arg1;
- (void)onMMLiveGameJoinTeamSettingViewChooseJoinTeamMode:(unsigned int)arg1 curPayment:(unsigned int)arg2;
- (id)presentJoinTeamSettingItem;
- (double)baseViewHeight;
- (void)onMMLiveGamePlayTogetherOperationPanelShow:(id)arg1;
- (void)onMMLiveGamePlayTogetherOperationPanelDismiss;
- (void)onMMLiveGamePlayTogetherTeamCornerJump:(id)arg1;
- (void)onMMLiveGamePlayTogetherTeamUpBookButtonClicked:(id)arg1;
- (void)onMMLiveGamePlayOpeationPanelTeamUpStartButtonClicked:(id)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(BOOL)arg3 paidForNextRound:(BOOL)arg4;
- (void)onClickJoinTeamSettingEntry:(id)arg1;
- (void)onClickJoinTeamEntry:(id)arg1;
- (void)_internalReqTypeTeamUpCheckWith:(id /* block */)arg1;
- (void)_internalJoinTeamAction;
- (void)dismissAndCleanGamePromoteTips;
- (BOOL)hasVisibleGameFrameSetView;
- (void)showPromoteTipsWithWording:(id)arg1 tapAction:(id /* block */)arg2;
- (void)updateGameAnimationViewFrame;
- (void)updateGameAnimationViewFrameOnOrientationChange;
- (void)handleHotAnimationVMChange;
- (void)createHotCommentAnimationView;
- (void)updateHotAnimationViewLayout;
- (BOOL)handleLiteAppDispatchWithActionName:(id)arg1 params:(id)arg2 instanceId:(unsigned long long)arg3 callbackId:(int)arg4 finderJumpInfo:(id)arg5;
- (void)onGameSetTeamConditon:(id)arg1 finderJumpInfo:(id)arg2;
- (void)onGameJoinByTeamCondition:(id)arg1 finderJumpInfo:(id)arg2 instanceId:(unsigned long long)arg3 callbackId:(int)arg4;
- (BOOL)isFansGift:(id)arg1 gameTeamInfo:(id)arg2;
- (void)closeGameLiteApp:(long long)arg1 finderJumpInfo:(id)arg2;
- (void)onGameTeamSendGift:(id)arg1 finderJumpInfo:(id)arg2 instanceId:(unsigned long long)arg3 callbackId:(int)arg4;
- (void)onGameTeamClosePlayTogetherActionSheet:(id)arg1 finderJumpInfo:(id)arg2;
- (BOOL)userNewLiteApp;
- (void)onPlayTogetherWithLiteApp:(int)arg1 extraInfo:(id)arg2;
- (void)onPlayTogetherWithLiteApp:(int)arg1 currentLiveTask:(id)arg2 extraInfo:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dismissAndCleanGameLiteAppPanel;
- (void)updateNewFansPromote;
- (void)showNewFansPromoteTapAction:(id /* block */)arg1;
- (void)layoutGameNewFansTipsView;
- (void)dismissAndCleanGameNewFansPromoteTips;
- (void)updateFluorescenceAnimationViewFrame;
- (void)onShowCheerAnimation:(id)arg1;
- (void)downLoadCheerResource:(id)arg1;
- (void)preloadResource:(id)arg1;
- (void)updateCheerAnimationConfig:(id)arg1;
- (void)startCheerAnimation;
- (void)downloadResourceWithResource:(id)arg1 start:(BOOL)arg2;
- (void)newConfigFluorescenceAnimationView;
- (void)updateLikButtonAnimationViewClearState:(BOOL)arg1;
- (void)updateFluorescenceAnimationViewAlphaWithHighlighted:(BOOL)arg1;
- (void)configLikebuttonWithOpenFluorescence:(BOOL)arg1 topColor:(id)arg2 bottomColor:(id)arg3;
- (BOOL)canUseFluorescence;
- (void)showFluorescenceAnimationView;
- (void)refreshProgress:(double)arg1;
- (void)refreshUIWithStart;
- (void)refreshUIWithEnd;
- (void)startCountDown:(long long)arg1 startBlock:(id /* block */)arg2 progressBlock:(id /* block */)arg3 endBlock:(id /* block */)arg4;
- (void)cancelTimer;
- (void)fluorescenceUpdateCurrentOrientation;
- (void)hideFluorescenceAnimationView;
- (void)createFluorescenceAnimationView;
- (void)createLikeButtonAnimationView;
- (void)handleFlashSaleInfo:(id)arg1;
- (id)currentWidgetForFlashSaleInfo:(id)arg1;
- (void)updateCurrentFlashSaleInfo:(id)arg1;
- (void)replaceCurrentFlashSaleInfoWith:(id)arg1;
- (void)addCurrentFlashSaleInfo:(id)arg1;
- (void)showCardFor:(id)arg1 finderWindowProductInfo:(id)arg2 shouldAddWidgetWhenClose:(BOOL)arg3;
- (void)showWidgetFor:(id)arg1 finderWindowProductInfo:(id)arg2;
- (void)cancelCurrentFlashSaleInfo:(id)arg1;
- (void)startAnchorFlashSaleCountDown:(id /* block */)arg1;
- (id)currentFlashSaleInfo;
- (void)setCurrentFlashSaleInfo:(id)arg1;
- (id)currentMiniAppFlashSaleInfo;
- (void)setCurrentMiniAppFlashSaleInfo:(id)arg1;
- (void)openFansGroupMemberListPanel;
- (void)openJoinFansGroupPanel:(id)arg1 openScene:(unsigned long long)arg2;
- (void)innerOpenJoinFansGroupPanel:(id)arg1 openScene:(unsigned long long)arg2;
- (void)innerOpenJoinFansGroupPanel:(id)arg1 openScene:(unsigned long long)arg2 defaultSelectSuperfanIfCan:(BOOL)arg3;
- (void)openPayFansGroupPanel:(id)arg1 openScene:(unsigned long long)arg2;
- (void)onJoinFansGroupSuccessWithOpenScene:(unsigned long long)arg1;
- (void)openFansGroupDetailPanelWithOpenScene:(unsigned long long)arg1 afterJoin:(BOOL)arg2;
- (void)openFansGroupDetailPanelAfterPayJoinWithOpenScene:(unsigned long long)arg1;
- (void)closeFansGroupPanels;
- (void)closeFansGroupPanelsForOrientationChanged;
- (void)onCustomizationPanelOpening:(id)arg1;
- (void)onCustomizationPanelClosed:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onCouponCardButtonClicked:(id)arg1 completion:(id /* block */)arg2;
- (void)onCouponCardsMaskViewCloseButtonClicked;
- (void)handleCouponsWidgetInfo:(id)arg1;
- (void)updateCouponCardViewModels;
- (void)removeCurrentCouponsWidgetIfNeededWithCompletion:(id /* block */)arg1;
- (void)updateCouponsWidget;
- (BOOL)shouldReplaceWithOldInfo:(id)arg1 newInfo:(id)arg2;
- (void)replaceCouponsWidget;
- (void)addCouponsWidget;
- (void)onCouponsWidgetClicked;
- (void)onCouponLocalSatisfiedForAudience:(id)arg1;
- (void)bindViewModelToConnectMic:(id)arg1;
- (void)updateLiveConnectMicButtonEnabled;
- (void)onFinderLiveTaskLiveMicExtFlagChanged:(id)arg1;
- (void)updateLiveMicTalkingButtonEnabled;
- (void)updateLiveMicTalkingEnabled;
- (void)updateForConnectMicStateChanged;
- (void)createConnectMicButtonIfNeeded;
- (void)onConnectMicButtonClicked;
- (void)createMicTalkingOperationViewIfNeeded;
- (void)layoutMicTalkingOperationView;
- (void)createMicTalkingUsersViewIfNeeded;
- (void)layoutMicTalkingUsersView;
- (void)layoutConnectMicVideoOperationView;
- (void)createConnectMicVideoOperationViewIfNeeded;
- (void)removeConnectMicAllUserInfoView;
- (void)addConnectMicAllUserInfoView;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)resetConnectMicVideoOperationViewFrame;
- (void)onConnectMicAllUserInfoViewLayoutChanged;
- (void)createConnectMicUserViewIfNeeded;
- (void)layoutConnectMicUserView;
- (void)resetConnectMicUserViewPosition;
- (void)updateMicTalkingViewsAlphaForAudience;
- (void)handleMicPKSuperfanCountChanged:(unsigned long long)arg1;
- (void)updateUserPkState;
- (void)onMMFinderLiveMicTalkingOperationViewClose;
- (void)onMMFinderLiveMicTalkingOperationViewTalkButtonStateChanged:(BOOL)arg1;
- (id)onMMFinderLiveConnectMicAllUserInfoViewGetLotteryPacketDisplayLogic;
- (CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(CGRect)arg1;
- (void)onLiveViewCdnPlayerViewFrameChanged:(id)arg1 newCdnPlayerViewFrame:(CGRect)arg2;
- (void)layoutAudiencePkStartTipsView;
- (void)showAudiencePkStartTipsView;
- (void)hideAudiencePkStartTipsView;
- (void)showMicInviteAudienceBubbleViewForDuration:(double)arg1;
- (void)layoutConcertViews;
- (void)layoutBuyTicketsView;
- (void)showBuyTicketsView;
- (void)fetchWecoinBalance:(id)arg1;
- (void)onCoinButtonClicked;
- (void)payTicketClick:(id)arg1;
- (void)hideBuyTicketsView;
- (void)showMiniatureTicketWithModel:(id)arg1 style:(unsigned long long)arg2;
- (BOOL)isCanShowSmallTicket;
- (id)getCacheLiveConcertList;
- (void)cacheLiveConcertInfo;
- (void)layoutMiniatureTicketView:(id)arg1;
- (double)presentBottomForBottomComponents;
- (void)handleLiveRoomShared:(id)arg1;
- (void)addGroupsSharedWithLogicController:(id)arg1;
- (id)convertToBoxId:(id)arg1;
- (id)getLastChatRoomContact:(id)arg1;
- (void)showBoxShareGuideView;
- (void)showBoxPageSheet;
- (void)showBoxPageSheetAllowCommentBoxId:(BOOL)arg1;
- (BOOL)needShowBoxPageSheet;
- (void)showBoxTipsView:(id)arg1;
- (id)getCurrentChatRoomBoxId;
- (BOOL)shouldDisplayShareButtonOnBottom;
- (void)createBottomShareButtonIfNeeded;
- (void)reloadBottomShareButtonRedDot;
- (void)onBottomShareButtonClicked;
- (void)reportLiveAudienceShareButtonClick;
- (void)reportLiveAudienceShareButtonExpose;
- (void)reportAudienceShareButton:(BOOL)arg1;
- (id)currentBottomButtonDisplayInfo;
- (void)dismissFolderSheet;
- (void)updateBottomButtonPriority:(id)arg1;
- (void)foldBottomButtonWithCount:(unsigned long long)arg1;
- (void)createFolderButtonIfNeeded;
- (void)onFolderButtonClicked;
- (void)addBottomButtonToFolder:(id)arg1;
- (void)removeBottomButtonFromFolder:(id)arg1;
- (void)clearBottomButtonFolder;
- (CGRect)getBottomButtonDisplayRectWithOriginalButton:(id)arg1;
- (void)showFolderActionSheet;
- (void)handleButtonEventWithButtonType:(id)arg1;
- (void)setupBottomButtonQueryBlock;
- (id)actionSheetItemWithButtonType:(int)arg1;
- (int)getTypeFromButton:(id)arg1;
- (id)getButtonWithType:(int)arg1;
- (void)bindViewModelToBeauty:(id)arg1;
- (void)updateCameraOperationButtonEnabled;
- (void)createCameraOperationButton;
- (void)onCameraOperationButtonClicked;
- (void)createCameraOperationPanelIfNeeded;
- (void)createBeautyOperationContainerViewIfNeeded;
- (void)createFilterOperationPanelIfNeeded;
- (void)createMakeupOperationPanelIfNeeded;
- (void)createDecorOperationPanelIfNeeded;
- (void)createVisionEffectsOperationPanelIfNeeded;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
- (void)onMMLiveCameraOperationPanelExposedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelClickedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelWillShow:(id)arg1;
- (void)showCameraConfirmActionSheetForEnabingCamera:(BOOL)arg1;
- (void)switchToPureAudioMode:(BOOL)arg1;
- (void)initiateAudioOnlyBackgroundImageChange;
- (void)reloadCamOperationButtonRedDot;
- (void)showStickerActionSheet;
- (void)onMMLiveBeautyOperationContainerViewClose:(BOOL)arg1;
- (void)onMMLiveFilterOperationPanelClose:(BOOL)arg1;
- (void)onMMLiveMakeupOperationPanelClose:(BOOL)arg1;
- (void)onFinderLiveGesturePageSheetClosing:(id)arg1;
- (void)onMMLiveBeautyEffectsOperationPanelClose:(id)arg1 directly:(BOOL)arg2;
- (void)createAdCountdownViewIfNeeded;
- (void)showBannerView:(id)arg1;
- (void)showSquareBannerIfNeed:(id)arg1;
- (void)dismissSquareBanner;
- (void)layoutSquareBanner;
- (void)showCarouselBannerView:(id)arg1;
- (void)jumpBannerView:(id)arg1 completeAction:(id /* block */)arg2;
- (void)deleteCurrentBannerItem;
- (void)dislikeBannerItem:(id)arg1 source:(long long)arg2;
- (void)dismissBannerView:(id /* block */)arg1;
- (void)layoutBannerView;
- (double)adCountdownBannerBottom;
- (BOOL)shouldShowAdsConfirmView;
- (void)tryPrefetchFastLoadBannerWebPage:(id)arg1;
- (BOOL)showMinifyRoomControlBannerIfNeed:(id)arg1;
- (void)dismissMinifyRoomBanner;
- (void)layoutMinifyRoomBanner;
- (void)createMinifyRoomBannerIfNeeded;
- (id)genMinifyRoomBanner;
- (void)setupMinifyRoomBannerLayout;
- (BOOL)canShowMinifyRoomControlBanner;
- (id)webPageSheetParamsWithBannerInfo:(id)arg1;
- (void)adBannerViewClickFeedbackAction;
- (void)resumeAdsCountdown;
- (void)pauseAdsCountdown;
- (void)onFinderLive:(id)arg1 receiveBannerData:(id)arg2;
- (void)onFinderLive:(id)arg1 receiveNotifyBanner:(id)arg2 displayAsReward:(BOOL)arg3 seq:(unsigned long long)arg4;
- (void)createAudioRoomInfoViewIfNeeded;
- (void)layoutAudioRoomInfoView;
- (void)updateAudioRoomModeAnchorVolumeAnimationViewAppearance:(BOOL)arg1 withLiveTask:(id)arg2;
- (void)updateAudioRoomInfoViewWithConnectMicUsersInfo:(id)arg1;
- (void)createSwitchAudioRoomModeButtonIfNeeded;
- (void)onSwitchAudioRoomModeButtonClicked;
- (void)onMMFinderLiveAudioRoomKTVSingerTappedBlock:(id)arg1 highlight:(id)arg2;
- (BOOL)onMMFinderLiveAudioRoomCheckLivePauseViewShow;
- (id)initWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2 audienceReporter:(id)arg3 anchorReporter:(id)arg4 assistantReporter:(id)arg5;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (void)createOperationSubviews;
- (void)onLiveViewLayoutChanged;
- (void)layoutUI;
- (void)createWidgetContainerViewIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (void)createTopLeftBannerScrollViewIfNeeded;
- (void)addTopLeftBannerView:(id)arg1;
- (void)layoutTopLeftBannerScrollView;
- (void)layoutTopLeftBannerViews;
- (void)updateTopLeftBannerScrollState;
- (UIEdgeInsets)getBannerMaskEdgeInsetsAtStartingPoint;
- (id)bannerRightGradientLayer;
- (CGSize)preferredWidgetViewEnterSize;
- (CGSize)preferredWidgetViewNormalSize;
- (void)layoutWidgetContainerView;
- (void)createBackTapViewIfNeeded;
- (void)createInputEmoticonViewIfNeeded;
- (void)createCommentViewIfNeeded;
- (void)createNotifyGiftNotificationViewIfNeeded;
- (void)updateGiftNotificationBottom:(double)arg1;
- (void)layoutNotifyGiftView;
- (void)createStickerEditingActivatorContainerView;
- (id)layoutManager;
- (void)updateMicTalkingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateAudioMutedForInterrupt:(BOOL)arg1 tipContent:(id)arg2;
- (void)createMuteAudioTipViewIfNeeded;
- (void)layoutMuteAudioTipView;
- (void)updateMuteAudioTipContent;
- (void)updateMuteAudioTipViewFrame;
- (void)createPureAudioModeTipViewIfNeeded;
- (void)updateAudioOnlyIndicatorViewHidden:(BOOL)arg1;
- (void)layoutPureAudioModeTipView;
- (void)createLocalAudioModeShowVideoButtonIfNeeded;
- (void)onLocalAudioModeShowVideoButtonClicked;
- (void)createAndSetupBottomButtonContainerIfNeeded;
- (void)setNeedsLayoutBottomButtons;
- (void)layoutBottomButtons;
- (void)layoutBottomButtonForCurrentCommentContentState;
- (void)updateBottomBtnContainerViewAlpha;
- (void)createLiveScreenSharingButtonIfNeeded;
- (void)createLiveToolsButtonIfNeeded;
- (void)updateLiveToolsButtonHiddenWithRefreshUI:(BOOL)arg1;
- (void)createLivePromoteExtendButtonIfNeeded;
- (void)updateLivePromoteExtendButtonHiddenWithRefreshUI:(BOOL)arg1;
- (void)updatePromoteExtendButtonHidden:(BOOL)arg1;
- (void)onLivePromoteExtendButtonClicked;
- (void)onLiveNoticeButtonClicked;
- (void)createDropGiftDetailCardViewIfNeeded;
- (void)createLiveWishBannerViewIfNeeded;
- (BOOL)isShowingLiveWishBanner;
- (void)onLiveWishBannerViewClicked;
- (void)createMoreLiveTipsView;
- (id)minimizeSrcView;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (void)setOperationViewModel:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (void)updateJoinLiveContext;
- (void)updateGetLiveMsgLiveExtFlag;
- (void)updateLiveInfoExtFlag;
- (void)updateEditTopicStatus;
- (void)clearOrRecoverScreen;
- (void)updateClearScreenUI;
- (void)updateLiveRedPacketButtonEnabled;
- (BOOL)mergeEntranceForLotteryAndRedPacketIfNeed;
- (void)setShouldShowRedPacketPanel:(BOOL)arg1;
- (void)updateLiveScreenSharingButtonEnabled;
- (void)updateLiveWishBanner;
- (void)reportBottomButtonExposeIfNeed;
- (BOOL)enableSubviewIndexing;
- (long long)subviewBottomMostIndex;
- (long long)subviewDefaultIndex;
- (long long)subviewDefaultFrontIndex;
- (long long)subviewTopMostIndex;
- (void)createPauseViewIfNeeded;
- (void)showPauseView:(id)arg1;
- (void)hidePauseView;
- (void)updatePauseViewWithAccumulatedTime:(long long)arg1;
- (void)updatePauseViewWithButtonAccumulatedTime:(long long)arg1;
- (void)updatePauseViewForMiniGame;
- (void)layoutPauseViewForMiniGame;
- (void)pauseView:(id)arg1 resumeButtonDidClick:(id)arg2;
- (void)pauseViewCountdownEnded:(id)arg1;
- (void)pauseButtonCountdownEnded:(id)arg1;
- (void)pauseViewPushWebViewController:(id)arg1 url:(id)arg2;
- (void)pauseViewStopPauseTimer:(id)arg1;
- (void)showFollowConfirmView:(id /* block */)arg1 isSubscription:(BOOL)arg2 isFollow:(BOOL)arg3 isActionSheetItem:(BOOL)arg4;
- (void)exitAndClearLive;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)arg1;
- (void)createLiveRedPacketButton;
- (void)createRedPacketViewIfNeeded;
- (void)showTrailerBannerView;
- (void)createAdvertisementCountdownViewIfNeeded;
- (void)layoutAdvertisementCountdownView;
- (void)showAdvertisementCountdownView:(unsigned int)arg1 countdownCompletion:(id /* block */)arg2;
- (void)hideAdvertisementCountdownView;
- (void)setCanShowRedPacketView:(BOOL)arg1;
- (void)refreshRedPacketViewAlpha;
- (void)showRedPacketPanel;
- (void)hideRedPacketPanel;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (void)onShowFunctionNotification:(id)arg1;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4;
- (void)onReceiveRecommendProductNotify:(id)arg1;
- (void)onGetFinderLiveGameDataBannerData:(id)arg1 taskId:(id)arg2;
- (void)showPromoteTipsWith:(id)arg1;
- (void)onGetFinderLiveQuickReplyListWithTaskId:(id)arg1 quickReplyWordingInfo:(id)arg2;
- (void)onGetFinderLiveAudiencePromotionMiniappInfoWithTaskId:(id)arg1 promotionEntrance:(id)arg2;
- (void)onGetMilestoneLotteryMetaInfoWithTaskId:(id)arg1 lotteryMetaInfo:(id)arg2;
- (void)onGetMilestoneLotteryInfoWithTaskId:(id)arg1 lotteryInfo:(id)arg2;
- (void)showToolsPanelAndGame3DEntrance;
- (void)promoteOperationPanel:(id)arg1 cellDidClick:(id)arg2;
- (void)topBannerView:(id)arg1 didChangeHidden:(BOOL)arg2;
- (void)layoutTopBannerViewsAnimated:(BOOL)arg1;
- (double)bottomOfTopBannerViews;
- (double)topOfTopBannerViews;
- (BOOL)hasTopBannerViewDisplayed;
- (void)layoutFocusedVideoAudienceHeader;
- (void)redPacketViewDidRefreshHidden:(BOOL)arg1;
- (void)layoutDisplayingWidgetViewsAnimated:(BOOL)arg1;
- (void)createDropGiftViewIfNeeded;
- (void)layoutDropGiftView;
- (void)createDropPagView;
- (void)updateCurrentDisplayingCouponInfo:(id)arg1;
- (void)updateSyncPromoteResp:(id)arg1;
- (void)updateSyncPromoteWithSeqResp:(id)arg1;
- (void)updateSyncDecorationInfoResp:(id)arg1;
- (void)updateSyncActivityCommentResp:(id)arg1;
- (void)updateSyncFinderLiveLogo:(id)arg1;
- (void)updateSyncFinderLiveSyncVideoAdInfo:(id)arg1;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onEnterLive;
- (void)onLiveUpdated;
- (void)onExitLive;
- (void)onAnchorPayGameSettedValueChanged;
- (void)onAnchorStartLiveFinished;
- (void)extraOperationInfoUpdated;
- (void)onAnchorHeadImageClicked;
- (void)muteMicButtonDidClick:(id)arg1;
- (void)onLiveScreenSharingButtonClicked;
- (void)onCreateVoteButtonClicked;
- (void)onLiveToolsButtonClicked;
- (BOOL)toolsPanelCanShowScreenShare;
- (BOOL)toolsPanelCanShowVote;
- (BOOL)toolsPanelCanShowPromote;
- (void)showLiveToolsPanel;
- (void)hideLiveToolsPanel;
- (void)onSendEvent:(id)arg1;
- (void)onClickMoreLiveTips;
- (void)onClickedGuidePubble:(id)arg1;
- (void)hideAllContents;
- (BOOL)isPureAudioModeTipViewShowInMicUI;
- (void)updateViewsWhenPureAudioModeChanged;
- (void)updateViewsWhenLocalAudioModeChangedFromEnterLive:(BOOL)arg1;
- (void)updateViewsWhenLocalAudioModeChanged;
- (void)updateViewsAfterMicMutedStateChanged;
- (void)updateAnchorVolumeAnimationViewAppearance:(BOOL)arg1;
- (void)updateOrdinaryLiveModeAnchorVolumeAnimationViewAppearance:(BOOL)arg1 withLiveTask:(id)arg2;
- (void)updateTopLeftWidgetsPosition;
- (void)updatePureAudioModeViewAlphaForAudience;
- (void)showFollowButton;
- (void)hideFollowingButton;
- (id)getBottomButtonList;
- (void)forceHideWatermarkLogo;
- (void)forceShowWatermarkLogo;
- (void)configureOperationViewForFocusingMicUser:(id)arg1;
- (void)configureOperationViewForNonFocusMicMode;
- (void)createFocusedMicUserHeaderView;
- (void)updateFocusedVideoAudienceHeaderViewUI;
- (void)onAllowLiveRoomInteractiveHomePageTransitionUpdated;
- (id)getTopVC;
- (id)getLiveStateText;
- (void)notifyLiveStateTextChanged;
- (void)showCurrentLotteryCardIfNeeded;
- (void)updateCommentEnableForLiveInfoUpdate;
- (void)checkAndCloseHalfScreenView;
- (double)bottomForBottomComponents;
- (double)bottomButtonsTop;
- (double)staticBottomForBottomComponents;
- (double)staticBottomButtonsTop;
- (double)currentCommentContentViewTop;
- (void)updateCommentViewHidden:(BOOL)arg1;
- (void)updateSubviewHiddenStatusAfterEnterLive;
- (void)showFirstOpenDropGiftDescription;
- (void)updateInteractMoteLiveTransitionTips;
- (void)visibilityChanged:(BOOL)arg1;
- (void)visibilityChanged:(BOOL)arg1 invokeType:(unsigned long long)arg2;
- (void)onViewWillAppear;
- (void)updateOperationUIVisibility;
- (void)updateRestrictVideoRectMode;
- (void)forceLayoutForOrientationChanged;
- (void)showContentsOnZoomInForAudience;
- (void)showAllContentsForAudience;
- (void)showAllContentsForAudienceAnimated;
- (void)innerShowOperationContentsForAudience;
- (void)topshowAllContentsForAnchorAnimated;
- (void)topHideAllContentsForAnchorAnimated;
- (void)hideAllContentsForAudience;
- (void)hideAllContentsForAudienceAnimated;
- (void)innerHideOperationContentsForAudience;
- (void)showAllContentsForAnchor;
- (void)showAllContentsForAnchorAnimated;
- (void)innerShowOperationContentsForAnchor;
- (void)hideAllContentsForAnchor;
- (void)hideAllContentsForAnchorAnimated;
- (void)innerHideOperationContentsForAnchor;
- (void)innerShowAllContentsForAudience:(unsigned long long)arg1;
- (void)innerHideAllContentsForAudience:(unsigned long long)arg1;
- (double)getFinalAlphaForOperationWidgetWithInitialAlpha:(double)arg1;
- (double)getCurrentAlphaForOperationWidget:(id)arg1 withInitialAlpha:(double)arg2;
- (void)innerShowAllContentsForAnchor:(unsigned long long)arg1;
- (void)showControlButtonsForAnchor;
- (void)innerHideAllContentsForAnchor:(unsigned long long)arg1;
- (void)hideControlButtonsForAnchor;
- (void)showControlButtonsForAudience;
- (void)hideControlButtonsForAudience;
- (void)updateBottomButtonsAlpha:(double)arg1;
- (void)switchRedPacketViewToSenderMicSessionId:(id)arg1;
- (void)onWillExitLiveWithLiveTask:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(BOOL)arg2;
- (void)onLiveKTVModeChanged:(BOOL)arg1 taskId:(id)arg2;
- (double)getRightWidgetsLeft;
- (double)getVisibleHeight;
- (void)onLandscapeBarrageDisplayChanged:(BOOL)arg1;
- (void)onBarrageInputModeChanged:(BOOL)arg1;
- (void)updateNotifyGiftLogicEnableDisplay;
- (void)onLandscapeBarrageSettingPanelDisplayChanged:(BOOL)arg1;
- (BOOL)getFinderLiveLogoWatermarkCanShow;
- (BOOL)getFinderLiveCarouselCanShow;
- (BOOL)useComposedMicModeChangeMsg;
- (void)layoutCommentButtonInOperationView:(id)arg1 commentButtonMaxWidth:(double)arg2 commentButtonLeft:(double)arg3 realCanShowTalkButton:(BOOL)arg4;
- (double)getCommentButtonTopPosition;
- (double)getCommentButtonLeft;
- (void)layoutBarrageSettingButtonInOperationView:(id)arg1;
- (void)onLandscapeBarrageSettingButtonDisplayChanged:(BOOL)arg1;
- (void)insertTopCommentContentViewToOperationViewHierarchy:(id)arg1;
- (void)insertBarrageContentViewToOperationViewHierarchy:(id)arg1;
- (void)updateButtonHiddenForInputViewShowChange:(BOOL)arg1;
- (void)onCommentViewDidTaped:(CGPoint)arg1;
- (void)onBackViewDidTaped:(id)arg1;
- (void)onBackViewDidChange;
- (void)handleUnMuteAudioForIntterupted;
- (void)checkAndShowAllContents;
- (void)checkAndHideAllContents;
- (void)onBackViewDidTaped;
- (double)getTopCommentOriginYForCommentView:(id)arg1;
- (id)getBottomButtonsBGColor;
- (double)getStaticTopWidgetsBottom;
- (double)getTopWidgetsBottom;
- (double)getBottomWidgetsBottom;
- (double)bottomWidgetsTop;
- (double)bottomWidgetsTopForComment:(BOOL)arg1;
- (double)getCommentTableLandscapeBottom;
- (BOOL)getIsShoppingAvailable;
- (double)getCommentTableTop;
- (void)notifyBottomButtonsLayoutChanged;
- (id)getLiveCommentViewCustomHitViews;
- (void)onJoinFansClubWithGiftItemonJoinFansClubWithGiftItem:(id)arg1;
- (void)onJoinFansClubWithGiftItem:(id)arg1 openScene:(unsigned long long)arg2;
- (void)onNeedJoinSuperFanClubFromGiftSelectionWithGiftItem:(id)arg1;
- (void)setIsInLive:(BOOL)arg1;
- (id)currentLiveTask;
- (id)currentTaskId;
- (id)topBannerViews;
- (id)displayingWidgetViews;
- (id)finderCommentView;
- (id)dropGiftView;
- (void)joinLiveFollowLottery;
- (id)createDropGiftWithoutFullPageAnimation;
- (void)playDropGiftWithoutFullPageAnimation:(id)arg1;
- (void)playDropGiftWithFullPageAnimation:(id)arg1;
- (void)createDropPagViewPathAnimation;
- (void)layoutAndPlayDropPagView;
- (double)dropGiftViewAnimatedCenterY;
- (id)decorationView;
- (void)setRewardSendingOperationDelegate:(id)arg1;
- (id)moreLiveTipsView;
- (id)moreLiveTipsLabel;
- (id)moreLiveTipsArrow;
- (BOOL)isCommentButtonNeedHidden;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)createLogoWatermarkViewsIfNeeded;
- (void)updateFinderLiveLogoWatermarkCanShow:(BOOL)arg1;
- (void)updateCarouselViewCanShow:(BOOL)arg1;
- (void)layoutShadowView;
- (void)updateTopShadowViewDisplay;
- (void)showShopSettingView;
- (void)onShopSettingViewHideFor:(long long)arg1;
- (void)onLiveRedPacketButtonClicked;
- (void)sendRedPacket;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1 taskId:(id)arg2;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)finderLive_onLoadImageOK:(id)arg1;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(BOOL)arg2;
- (void)recalculateLiveViewMinTopMargin;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)onSendingGiftBatchFinish:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4 extInfo:(id)arg5;
- (void)onSendingFreeGiftFailed:(id)arg1 giftIdsToReadd:(id)arg2;
- (void)onSendingFreeGiftSuccess:(id)arg1 count:(unsigned long long)arg2;
- (void)onSendDeliveryProcess:(id)arg1 error:(id)arg2 isLocalSuccess:(BOOL)arg3;
- (void)onDropGiftViewDisplayStatusChange:(id)arg1 needShow:(BOOL)arg2;
- (id)openMiniProgramNavgationContoller;
- (id)createButtonWithIconName:(id)arg1 buttonSize:(CGSize)arg2 withIconSize:(CGSize)arg3 atPositon:(CGPoint)arg4 withButtonAction:(SEL)arg5 withButtonLabel:(id)arg6 isCircle:(BOOL)arg7;
- (void)updateCurrentOrientation;
- (void)updateCurrentLayoutOrientation;
- (void)checkCurrentOrientation;
- (void)reloadBottomButtonsRedDotOnVisibilityChanged:(BOOL)arg1;
- (void)reloadBottomButtonsRedDot;
- (void)reloadRedPacketPanelCell:(id)arg1 withPath:(id)arg2;
- (void)reloaLiveToolsdPanelCell:(id)arg1 withPath:(id)arg2;
- (void)reloadLiveToolsPanelCellRedDot;
- (void)reloadRedPacketPanelCellRedDot;
- (void)reloadLotteryAndRedPacketButtonRedDot;
- (void)setupBottomButtonsRedDotForAnchor;
- (void)onBottomButtonClicked:(id)arg1;
- (BOOL)shouldHandleBottomButtonRedDotForPath:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isViewAboveGiftView:(id)arg1;
- (BOOL)isFollowState;
- (void)refreshWidgetsForFontSizeChange;
- (void)morphTransitionEnded;
- (void)onAnimationEnd:(id)arg1;
- (void)updateBeforeZoomIn;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomOut;
- (void)createAnniversaryDecorationViewIfNeeded;
- (void)layoutLogoWatermarkAndCarousel;
- (void)startCarouselTaskAnimated:(BOOL)arg1;
- (void)refreshAnniversaryDecorationViewAlpha:(double)arg1;
- (void)showWeakNetTipViewWithType:(unsigned long long)arg1;
- (id)weakNetTipView;
- (void)updateOrientationButton;
- (void)createOrientationButtonIfNeeded;
- (void)layoutOrientationButton;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)onOrientationButtonClicked;
- (void)updateOrientationButtonAlpha;
- (void)setContentsNotAboutConcertControlHiddenAnimated:(BOOL)arg1;
- (void)onFinderLiveTask:(id)arg1 enablePrivateCommentChange:(BOOL)arg2;
- (id)finderLiveViewController;
- (double)getContentWidgetsTopInPortrait;
- (void)onFinderLiveConnectMicFocusedVideoAudienceHeaderViewTappedWithConnectMicUser:(id)arg1;
- (void)onFinderLiveConnectMicFocusedVideoAudienceHeaderViewMicMutedButtonTappedWithConnectMicUser:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)onScreenshotCommitVetoRequestedForScreenshotPosterLogic:(id)arg1 vetoFlag:(BOOL *)arg2;
- (void)onScreenshotAssociatedImageRequestedForScreenshotPosterLogic:(id)arg1 asyncBeginBlock:(id /* block */)arg2 asyncEndBlock:(id /* block */)arg3;
- (void)onScreenshotReadyForScreenshotPosterLogic:(id)arg1;
- (void)onScreenshotInvalidatedForScreenshotPosterLogic:(id)arg1;
- (void)dismissScreenshotPosterHintView;
- (void)onScreenshotPosterHintViewTapped:(id)arg1;
- (void)onNotifyGiftNotificationView:(id)arg1 didClickNotifyBanner:(id)arg2 rewardInfo:(id)arg3;
- (void)onMenuControllerWillHide;
- (void)onMenuControllerDidHide;
- (void)showDelayedPopupsForSpringFestivalIfNeeded;
- (void)onPagPerfTargetViewStateChange:(BOOL)arg1 perfMode:(long long)arg2 statistics:(id)arg3;
- (void)logGameDataBannerInfo:(id)arg1;
- (void)updateGameDataBannerInfoWith:(id)arg1;
- (void)updateDataBannerWithJumpInfo:(id)arg1;
- (void)updateLandscapeLiteAppCardInfoWith:(id)arg1;
- (void)createLandscapeLiteAppCardView;
- (void)createLandscapeLiteAppCardWithLiteApp:(id)arg1;
- (void)layoutLiteAppCardView:(BOOL)arg1;
- (void)layoutLiteAppCardView:(BOOL)arg1 isInit:(BOOL)arg2;
- (void)updateProductSizeAssistantPanelWithJumpInfo:(id)arg1 productInfo:(id)arg2;
- (void)dismissProductSizeAssistantPanel;
- (void)createProductSizeAssistantPanel;
- (void)onTapProductSizeAssistantPanel;
- (void)layoutProductSizeAssistantPanel;
- (void)onLivePromoteOperationReport:(long long)arg1 promoteActionType:(long long)arg2 reportData:(id)arg3;
- (long long)getPromoteUserType;
- (void)showBuyCoinConfirmViewWithRechargeScene:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (void)buyCoinWithRechargeScene:(unsigned int)arg1 completionBlock:(id /* block */)arg2;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)onStickerEditorChromeFadingBeginningWithBottomBarCleared:(BOOL)arg1;
- (void)onStickerEditorChromeFadingEndingRequested;
- (void)onFinderLiveTrumpetSelectDidDone:(BOOL)arg1;
- (void)updateLiveShowingAdState:(BOOL)arg1;
- (BOOL)isShowingPauseView;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)onlineStateView;
- (void)setOnlineStateView:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (BOOL)isInLive;
- (id)liveHeaderView;
- (void)setLiveHeaderView:(id)arg1;
- (id)backTapView;
- (void)setBackTapView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (void)setWeakNetTipView:(id)arg1;
- (id)rewardSendingOperationDelegate;
- (id)connectMicUserView;
- (void)setConnectMicUserView:(id)arg1;
- (id)connectMicButton;
- (void)setConnectMicButton:(id)arg1;
- (id)connectMicAllUserInfoView;
- (void)setConnectMicAllUserInfoView:(id)arg1;
- (id)micTalkingOperationView;
- (void)setMicTalkingOperationView:(id)arg1;
- (id)micTalkingUsersView;
- (void)setMicTalkingUsersView:(id)arg1;
- (id)switchAudioRoomModeButton;
- (void)setSwitchAudioRoomModeButton:(id)arg1;
- (id)liveGameButton;
- (void)setLiveGameButton:(id)arg1;
- (id)promotePubbleView;
- (id)promoteDisplayLogic;
- (void)setPromoteDisplayLogic:(id)arg1;
- (id)operationViewModel;
- (id)pauseView;
- (void)setPauseView:(id)arg1;
- (BOOL)canShowRedPacketView;
- (BOOL)isShowGoToGameAppAlert;
- (void)setIsShowGoToGameAppAlert:(BOOL)arg1;
- (BOOL)isPendingShowGameTipsView;
- (void)setIsPendingShowGameTipsView:(BOOL)arg1;
- (BOOL)isMuteAudioForIntterupted;
- (void)setIsMuteAudioForIntterupted:(BOOL)arg1;
- (id)minifyRoomBanner;
- (void)setMinifyRoomBanner:(id)arg1;
- (BOOL)canShowAnniversayDayView;
- (void)setCanShowAnniversayDayView:(BOOL)arg1;
- (double)anniversayDayViewAlpha;
- (void)setAnniversayDayViewAlpha:(double)arg1;
- (id /* block */)hitTestWithEventAction;
- (void)setHitTestWithEventAction:(id /* block */)arg1;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (id)audienceReporter;
- (void)setAudienceReporter:(id)arg1;
- (id)assistantReporter;
- (void)setAssistantReporter:(id)arg1;
- (BOOL)isInTalkingMode;
- (void)setIsInTalkingMode:(BOOL)arg1;
- (BOOL)isInMicTalkingModeSwitchAnimation;
- (void)setIsInMicTalkingModeSwitchAnimation:(BOOL)arg1;
- (id)finderLiveLogoWatermark;
- (void)setFinderLiveLogoWatermark:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (id)widgetContainerView;
- (void)setWidgetContainerView:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (BOOL)markDirty;
- (void)setMarkDirty:(BOOL)arg1;
- (BOOL)isMenuHandlingHide;
- (void)setIsMenuHandlingHide:(BOOL)arg1;
- (id)focusedVideoAudienceHeaderView;
- (void)setFocusedVideoAudienceHeaderView:(id)arg1;
- (id)notifyGiftLogic;
- (void)setNotifyGiftLogic:(id)arg1;
- (id)ktvMusicContainerView;
- (id)gemeLiteAppStore;
- (void)setGemeLiteAppStore:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)showingAd;
- (void)setShowingAd:(BOOL)arg1;
- (id)landscapeLiteAppCardVC;
- (void)setLandscapeLiteAppCardVC:(id)arg1;
- (id)anchorRealtimeDataPanel;
- (void)setAnchorRealtimeDataPanel:(id)arg1;
- (id)realtimeDataPanelBgView;
- (void)setRealtimeDataPanelBgView:(id)arg1;
- (double)realtimeDataPanelBgViewMinHeight;
- (void)setRealtimeDataPanelBgViewMinHeight:(double)arg1;
- (BOOL)isAnchorRealtimeDataPanelInitating;
- (void)setIsAnchorRealtimeDataPanelInitating:(BOOL)arg1;
- (BOOL)isAnchorRealtimeDataPanelShow;
- (id)productSizeAssistantPanel;
- (void)setProductSizeAssistantPanel:(id)arg1;
- (id)productSizeAssistantPanelBgView;
- (void)setProductSizeAssistantPanelBgView:(id)arg1;
- (BOOL)isProductSizeAssistantPanelInitating;
- (void)setIsProductSizeAssistantPanelInitating:(BOOL)arg1;
- (BOOL)isEnterLiveWithError;
- (void)setIsEnterLiveWithError:(BOOL)arg1;
- (id)enterLiveError;
- (void)setEnterLiveError:(id)arg1;
- (BOOL)isAssumingAudienceCommentEnabled;
- (void)setIsAssumingAudienceCommentEnabled:(BOOL)arg1;
- (BOOL)reportOrientationButtonExpose;
- (void)setReportOrientationButtonExpose:(BOOL)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (id)topLeftBannerScrollView;
- (void)setTopLeftBannerScrollView:(id)arg1;
- (id)topLeftBannerContainerView;
- (void)setTopLeftBannerContainerView:(id)arg1;
- (void)setBannerRightGradientLayer:(id)arg1;
- (id)redPacketView;
- (void)setRedPacketView:(id)arg1;
- (id)redPacketViewModel;
- (void)setRedPacketViewModel:(id)arg1;
- (BOOL)shouldShowRedPacketPanel;
- (id)redPacketPanel;
- (void)setRedPacketPanel:(id)arg1;
- (double)rightWidgetsLeft;
- (void)setRightWidgetsLeft:(double)arg1;
- (double)rightWidgetsWidth;
- (void)setRightWidgetsWidth:(double)arg1;
- (id)inputEmoticonView;
- (void)setInputEmoticonView:(id)arg1;
- (id)liveToolsOperationPanel;
- (void)setLiveToolsOperationPanel:(id)arg1;
- (id)screenSharingPanelCell;
- (void)setScreenSharingPanelCell:(id)arg1;
- (id)promotePanelCell;
- (void)setPromotePanelCell:(id)arg1;
- (id)votingPanelCell;
- (void)setVotingPanelCell:(id)arg1;
- (id)game3DPanelCell;
- (void)setGame3DPanelCell:(id)arg1;
- (id)muteAudioTip;
- (void)setMuteAudioTip:(id)arg1;
- (id)muteAudioTipView;
- (void)setMuteAudioTipView:(id)arg1;
- (id)muteAudioIcon;
- (void)setMuteAudioIcon:(id)arg1;
- (id)muteAudioTipLabel;
- (void)setMuteAudioTipLabel:(id)arg1;
- (BOOL)useCenterStyleAudioOnlyIndicator;
- (void)setUseCenterStyleAudioOnlyIndicator:(BOOL)arg1;
- (id)audioOnlyIndicatorView;
- (void)setAudioOnlyIndicatorView:(id)arg1;
- (double)pureAudioModeTipViewAlpha;
- (void)setPureAudioModeTipViewAlpha:(double)arg1;
- (id)localAudioModeShowVideoBackgroundView;
- (void)setLocalAudioModeShowVideoBackgroundView:(id)arg1;
- (id)localAudioModeShowVideoButton;
- (void)setLocalAudioModeShowVideoButton:(id)arg1;
- (id)followConfirmPageSheetView;
- (void)setFollowConfirmPageSheetView:(id)arg1;
- (id)squareGuideView;
- (void)setSquareGuideView:(id)arg1;
- (void)setDropGiftView:(id)arg1;
- (id)dropGiftDetailCardView;
- (void)setDropGiftDetailCardView:(id)arg1;
- (id)dropGiftViewModel;
- (void)setDropGiftViewModel:(id)arg1;
- (id)currPackageId;
- (void)setCurrPackageId:(id)arg1;
- (id)dropGiftPagView;
- (void)setDropGiftPagView:(id)arg1;
- (long long)bCanShowDropGiftPagViewFlag;
- (void)setBCanShowDropGiftPagViewFlag:(long long)arg1;
- (void)setDecorationView:(id)arg1;
- (id)decorationViewModel;
- (void)setDecorationViewModel:(id)arg1;
- (id)liveWishBannerView;
- (void)setLiveWishBannerView:(id)arg1;
- (id)brandLogoWatermark;
- (void)setBrandLogoWatermark:(id)arg1;
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (id)liveLogoViewModelArr;
- (void)setLiveLogoViewModelArr:(id)arg1;
- (BOOL)isFinderLiveLogoShowForClear;
- (void)setIsFinderLiveLogoShowForClear:(BOOL)arg1;
- (BOOL)canShowFinderLiveLogoWatermark;
- (void)setCanShowFinderLiveLogoWatermark:(BOOL)arg1;
- (BOOL)canShowCarouselView;
- (void)setCanShowCarouselView:(BOOL)arg1;
- (id)advertisementCountdownView;
- (void)setAdvertisementCountdownView:(id)arg1;
- (BOOL)isShownAdvertisementCountdownView;
- (void)setIsShownAdvertisementCountdownView:(BOOL)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (UIEdgeInsets)lastLayoutSafeArea;
- (void)setLastLayoutSafeArea:(UIEdgeInsets)arg1;
- (long long)lastLayoutOrientation;
- (void)setLastLayoutOrientation:(long long)arg1;
- (double)lastLiveViewMinTopMargin;
- (void)setLastLiveViewMinTopMargin:(double)arg1;
- (void)setMoreLiveTipsView:(id)arg1;
- (void)setMoreLiveTipsLabel:(id)arg1;
- (void)setMoreLiveTipsArrow:(id)arg1;
- (id)notifyGiftView;
- (void)setNotifyGiftView:(id)arg1;
- (id)screenshotPosterHintView;
- (void)setScreenshotPosterHintView:(id)arg1;
- (id /* block */)chargeCompletionBlock;
- (void)setChargeCompletionBlock:(id /* block */)arg1;
- (id)stickerEditingActivatorContainerView;
- (void)setStickerEditingActivatorContainerView:(id)arg1;
- (id)statusContainer;
- (void)setStatusContainer:(id)arg1;
- (id)anchorTaskEntranceView;
- (void)setAnchorTaskEntranceView:(id)arg1;
- (id)taskGuideView;
- (void)setTaskGuideView:(id)arg1;
- (id)statusItemArr;
- (void)setStatusItemArr:(id)arg1;
- (id)statusCarouselTimer;
- (void)setStatusCarouselTimer:(id)arg1;
- (BOOL)showingHalfScreenNotice;
- (void)setShowingHalfScreenNotice:(BOOL)arg1;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)msgBox;
- (void)setMsgBox:(id)arg1;
- (BOOL)isTestLiveMode;
- (void)setIsTestLiveMode:(BOOL)arg1;
- (BOOL)isTestLiveModeChanging;
- (void)setIsTestLiveModeChanging:(BOOL)arg1;
- (id)testLiveTipsBar;
- (void)setTestLiveTipsBar:(id)arg1;
- (BOOL)showingInputView;
- (void)setShowingInputView:(BOOL)arg1;
- (BOOL)isClearScreen;
- (void)setIsClearScreen:(BOOL)arg1;
- (BOOL)changeResource;
- (void)setChangeResource:(BOOL)arg1;
- (double)fluorescenceProgressWidth;
- (void)setFluorescenceProgressWidth:(double)arg1;
- (float)fluorescenceTimeout;
- (void)setFluorescenceTimeout:(float)arg1;
- (BOOL)openFluorescenceSwitch;
- (void)setOpenFluorescenceSwitch:(BOOL)arg1;
- (id)likeButtonGradientLayer;
- (void)setLikeButtonGradientLayer:(id)arg1;
- (BOOL)showingFluorescenceAnimationView;
- (void)setShowingFluorescenceAnimationView:(BOOL)arg1;
- (BOOL)clearState;
- (void)setClearState:(BOOL)arg1;
- (id)fluorescenceAnimationView;
- (void)setFluorescenceAnimationView:(id)arg1;
- (id)fluorescenceAnimationPAGFile;
- (void)setFluorescenceAnimationPAGFile:(id)arg1;
- (id)likeButtonAnimationView;
- (void)setLikeButtonAnimationView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)topCorlor;
- (void)setTopCorlor:(id)arg1;
- (id)bottomColor;
- (void)setBottomColor:(id)arg1;
- (id)cheerInfo;
- (void)setCheerInfo:(id)arg1;
- (id)cheerAnimation;
- (void)setCheerAnimation:(id)arg1;
- (id)selectCheerAnimationInfo;
- (void)setSelectCheerAnimationInfo:(id)arg1;
- (id)animationDownLoadManager;
- (void)setAnimationDownLoadManager:(id)arg1;
- (id)downLoadFinishUrl;
- (void)setDownLoadFinishUrl:(id)arg1;
- (id)selectResource;
- (void)setSelectResource:(id)arg1;
- (id)fluroescenceResourcesPinningToken;
- (void)setFluroescenceResourcesPinningToken:(id)arg1;
- (id)miniatureTicketView;
- (void)setMiniatureTicketView:(id)arg1;
- (id)buyTicketsView;
- (void)setBuyTicketsView:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)ticketHandle;
- (void)setTicketHandle:(id)arg1;
- (BOOL)showingTicketView;
- (void)setShowingTicketView:(BOOL)arg1;
- (BOOL)buying;
- (void)setBuying:(BOOL)arg1;
- (id)audioRoomInfoView;
- (void)setAudioRoomInfoView:(id)arg1;
- (id)pinchGestureForZoom;
- (void)setPinchGestureForZoom:(id)arg1;
- (id)tapGestureForZoom;
- (void)setTapGestureForZoom:(id)arg1;
- (id)panGestureForZoom;
- (void)setPanGestureForZoom:(id)arg1;
- (id)videoZoomGuideView;
- (void)setVideoZoomGuideView:(id)arg1;
- (BOOL)isInClearScreenWhenEnterZoomMode;
- (void)setIsInClearScreenWhenEnterZoomMode:(BOOL)arg1;
- (id)multiAngleButton;
- (void)setMultiAngleButton:(id)arg1;
- (id)angleViewModel;
- (void)setAngleViewModel:(id)arg1;
- (id)multiAngleView;
- (void)setMultiAngleView:(id)arg1;
- (id)enterMultiAngleLivePubbleTipView;
- (void)setEnterMultiAngleLivePubbleTipView:(id)arg1;
- (BOOL)showingMultiAnglePubbleTipView;
- (void)setShowingMultiAnglePubbleTipView:(BOOL)arg1;
- (id)panGestureForMultiAngle;
- (void)setPanGestureForMultiAngle:(id)arg1;
- (id)playerPageControl;
- (void)setPlayerPageControl:(id)arg1;
- (id)noticeBubbleView;
- (void)setNoticeBubbleView:(id)arg1;
- (id)createNoticeHintView;
- (void)setCreateNoticeHintView:(id)arg1;
- (id)couponsCardsMaskView;
- (void)setCouponsCardsMaskView:(id)arg1;
- (id)couponsWidget;
- (void)setCouponsWidget:(id)arg1;
- (id)couponCardViewModels;
- (void)setCouponCardViewModels:(id)arg1;
- (id)couponsWidgetInfo;
- (void)setCouponsWidgetInfo:(id)arg1;
- (id)bottomShareButton;
- (void)setBottomShareButton:(id)arg1;
- (id)autoOpenHistory;
- (void)setAutoOpenHistory:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)guideHistory;
- (void)setGuideHistory:(id)arg1;
- (id)shareGuideView;
- (void)setShareGuideView:(id)arg1;
- (BOOL)isShareFromGuide;
- (void)setIsShareFromGuide:(BOOL)arg1;
- (id)lastShopVIPInfo;
- (void)setLastShopVIPInfo:(id)arg1;
- (id)bubbleButton;
- (void)setBubbleButton:(id)arg1;
- (BOOL)showingBubbleView;
- (void)setShowingBubbleView:(BOOL)arg1;
- (id)memberLiveTipsBubble;
- (void)setMemberLiveTipsBubble:(id)arg1;
- (id)folderButton;
- (void)setFolderButton:(id)arg1;
- (id)folderButtonTypeSet;
- (void)setFolderButtonTypeSet:(id)arg1;
- (id)folderActionSheetDelegateHelper;
- (void)setFolderActionSheetDelegateHelper:(id)arg1;
- (id)bottomButtonPriorityArray;
- (void)setBottomButtonPriorityArray:(id)arg1;
- (id)buttonActionMap;
- (void)setButtonActionMap:(id)arg1;
- (double)widthWhenShowingFolderSheet;
- (void)setWidthWhenShowingFolderSheet:(double)arg1;
- (id)milestoneLotteryBannerView;
- (void)setMilestoneLotteryBannerView:(id)arg1;
- (id)milestoneLotteryVM;
- (void)setMilestoneLotteryVM:(id)arg1;
- (id)attendLotteryDetailView;
- (void)setAttendLotteryDetailView:(id)arg1;
- (id)lotteryResultView;
- (void)setLotteryResultView:(id)arg1;
- (id)milestoneLotteryBigPacketPAGAnimationView;
- (void)setMilestoneLotteryBigPacketPAGAnimationView:(id)arg1;
- (id)pagHelper;
- (void)setPagHelper:(id)arg1;
- (id)milestoneLotteryBigPacketLOTAnimationView;
- (void)setMilestoneLotteryBigPacketLOTAnimationView:(id)arg1;
- (id)pendingAutoShowLotteryInfo;
- (void)setPendingAutoShowLotteryInfo:(id)arg1;
- (id)voteFloatingView;
- (void)setVoteFloatingView:(id)arg1;
- (id)voteFloatingViewDisplayLogic;
- (void)setVoteFloatingViewDisplayLogic:(id)arg1;
- (id)bottomVoteButton;
- (void)setBottomVoteButton:(id)arg1;
- (id)votePopupView;
- (void)setVotePopupView:(id)arg1;
- (BOOL)votePopupViewVisible;
- (id)boxGuideView;
- (void)setBoxGuideView:(id)arg1;
- (id)tryViewLiveBar;
- (void)setTryViewLiveBar:(id)arg1;
- (id)chargeableLiveTipsBubble;
- (void)setChargeableLiveTipsBubble:(id)arg1;
- (id)trialTimeOutMaskView;
- (void)setTrialTimeOutMaskView:(id)arg1;
- (id)trialTimeoutMaskCoverView;
- (void)setTrialTimeoutMaskCoverView:(id)arg1;
- (id)trialTimeoutMaskContentView;
- (void)setTrialTimeoutMaskContentView:(id)arg1;
- (unsigned long long)chargeableLiveUIState;
- (void)setChargeableLiveUIState:(unsigned long long)arg1;
- (unsigned long long)lastPurchaseInitiateTime;
- (void)setLastPurchaseInitiateTime:(unsigned long long)arg1;
- (id)anchorLikeButton;
- (void)setAnchorLikeButton:(id)arg1;
- (id)anchorClapButton;
- (void)setAnchorClapButton:(id)arg1;
- (id)likeTipsView;
- (void)setLikeTipsView:(id)arg1;
- (id)likeAnimationWrapper;
- (void)setLikeAnimationWrapper:(id)arg1;
- (id)buttonImageView;
- (void)setButtonImageView:(id)arg1;
- (id)friendLikeBubbleView;
- (void)setFriendLikeBubbleView:(id)arg1;
- (id)joinFansGroupPanel;
- (void)setJoinFansGroupPanel:(id)arg1;
- (id)joinFansGroupPanelNew;
- (void)setJoinFansGroupPanelNew:(id)arg1;
- (id)payFansGroupPanel;
- (void)setPayFansGroupPanel:(id)arg1;
- (id)fansGroupDetailPanel;
- (void)setFansGroupDetailPanel:(id)arg1;
- (id)memberListPanel;
- (void)setMemberListPanel:(id)arg1;
- (id)ktvSongButton;
- (void)setKtvSongButton:(id)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (id)ktvGuideView;
- (void)setKtvGuideView:(id)arg1;
- (id)ktvSingerGuideInfoItem;
- (void)setKtvSingerGuideInfoItem:(id)arg1;
- (id)audiencePkStartTipsView;
- (void)setAudiencePkStartTipsView:(id)arg1;
- (id)connectMicInviteAudienceBubbleView;
- (void)setConnectMicInviteAudienceBubbleView:(id)arg1;
- (id)musicSettingButton;
- (void)setMusicSettingButton:(id)arg1;
- (id)musicSettingOprationPanel;
- (void)setMusicSettingOprationPanel:(id)arg1;
- (id)musicSettingInteractiveView;
- (void)setMusicSettingInteractiveView:(id)arg1;
- (id)musicOperationChoosingPanel;
- (void)setMusicOperationChoosingPanel:(id)arg1;
- (id)musicPlayLogic;
- (void)setMusicPlayLogic:(id)arg1;
- (id)songLabelView;
- (void)setSongLabelView:(id)arg1;
- (id)songSettingOperationPanel;
- (void)setSongSettingOperationPanel:(id)arg1;
- (id)currentSingingSongName;
- (void)setCurrentSingingSongName:(id)arg1;
- (BOOL)liveHasSongList;
- (void)setLiveHasSongList:(BOOL)arg1;
- (BOOL)enableOrderSong;
- (void)setEnableOrderSong:(BOOL)arg1;
- (id)anchorSongButton;
- (void)setAnchorSongButton:(id)arg1;
- (id)liveLotteryButton;
- (void)setLiveLotteryButton:(id)arg1;
- (id)largeLotteryPacketView;
- (void)setLargeLotteryPacketView:(id)arg1;
- (id)lotteryDetailCardView;
- (void)setLotteryDetailCardView:(id)arg1;
- (id)createLotteryViewModel;
- (void)setCreateLotteryViewModel:(id)arg1;
- (BOOL)forceHideLittleLottery;
- (void)setForceHideLittleLottery:(BOOL)arg1;
- (BOOL)hasLoadPanel;
- (void)setHasLoadPanel:(BOOL)arg1;
- (BOOL)lotteryDetailCardViewVisible;
- (id)lotteryStartLogic;
- (void)setLotteryStartLogic:(id)arg1;
- (id)liveShoppingButton;
- (void)setLiveShoppingButton:(id)arg1;
- (id)promoteManageLogic;
- (void)setPromoteManageLogic:(id)arg1;
- (id)shopPubbleTipView;
- (void)setShopPubbleTipView:(id)arg1;
- (BOOL)showingShopPubbleTipView;
- (void)setShowingShopPubbleTipView:(BOOL)arg1;
- (id)promoteStatusInfo;
- (void)setPromoteStatusInfo:(id)arg1;
- (id)promotingBanner;
- (void)setPromotingBanner:(id)arg1;
- (id)onlineStateBar;
- (void)setOnlineStateBar:(id)arg1;
- (id)anchorTimeLabel;
- (void)setAnchorTimeLabel:(id)arg1;
- (id)anchorWeakTipView;
- (void)setAnchorWeakTipView:(id)arg1;
- (id)bottomBtnContainerView;
- (void)setBottomBtnContainerView:(id)arg1;
- (id)promoteTipsPubbleView;
- (void)setPromoteTipsPubbleView:(id)arg1;
- (id)settingSheetValidRedDotPaths;
- (void)setSettingSheetValidRedDotPaths:(id)arg1;
- (id)adGuideFollowSheet;
- (void)setAdGuideFollowSheet:(id)arg1;
- (id)gameTipsView;
- (void)setGameTipsView:(id)arg1;
- (id)gamePromoteTips;
- (void)setGamePromoteTips:(id)arg1;
- (BOOL)hasShowGameNewFansPromoteTips;
- (void)setHasShowGameNewFansPromoteTips:(BOOL)arg1;
- (id)gameNewFansPromoteTips;
- (void)setGameNewFansPromoteTips:(id)arg1;
- (id)gameJoinTeamView;
- (void)setGameJoinTeamView:(id)arg1;
- (id)gameInviteJoinTeamView;
- (void)setGameInviteJoinTeamView:(id)arg1;
- (id)gameJoinTeamSettingView;
- (void)setGameJoinTeamSettingView:(id)arg1;
- (id)playTogetherPanel;
- (void)setPlayTogetherPanel:(id)arg1;
- (id)gemeLiteAppVC;
- (void)setGemeLiteAppVC:(id)arg1;
- (BOOL)isPaidForNextRound;
- (void)setIsPaidForNextRound:(BOOL)arg1;
- (id)welfareTaskInfoView;
- (void)setWelfareTaskInfoView:(id)arg1;
- (unsigned long long)currentServerTs;
- (void)setCurrentServerTs:(unsigned long long)arg1;
- (id)gameFrameSetConfigs;
- (void)setGameFrameSetConfigs:(id)arg1;
- (id)gameFrameSetViews;
- (void)setGameFrameSetViews:(id)arg1;
- (BOOL)showingHotCommentAnimationView;
- (void)setShowingHotCommentAnimationView:(BOOL)arg1;
- (id)hotCommentAnimationView;
- (void)setHotCommentAnimationView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)squareBanner;
- (void)setSquareBanner:(id)arg1;
- (id)adCountdownBanner;
- (void)setAdCountdownBanner:(id)arg1;
- (id)cameraOperationButton;
- (void)setCameraOperationButton:(id)arg1;
- (id)beautyContainerView;
- (void)setBeautyContainerView:(id)arg1;
- (id)cameraOperationPanel;
- (void)setCameraOperationPanel:(id)arg1;
- (id)makeupOperationPanel;
- (void)setMakeupOperationPanel:(id)arg1;
- (id)filterOperationPanel;
- (void)setFilterOperationPanel:(id)arg1;
- (id)decorOperationPanel;
- (void)setDecorOperationPanel:(id)arg1;
- (id)visionEffectsOperationPanel;
- (void)setVisionEffectsOperationPanel:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)pinGesture;
- (void)setPinGesture:(id)arg1;
- (id)exitVRLiveLabel;
- (void)setExitVRLiveLabel:(id)arg1;
- (id)enterVrButton;
- (void)setEnterVrButton:(id)arg1;
- (id)enterVRLivePubbleTipView;
- (void)setEnterVRLivePubbleTipView:(id)arg1;
- (BOOL)showingVRLivePubbleTipView;
- (void)setShowingVRLivePubbleTipView:(BOOL)arg1;
- (id)selectGiftButton;
- (void)setSelectGiftButton:(id)arg1;
- (id)quickSendGiftButton;
- (void)setQuickSendGiftButton:(id)arg1;
- (id)giftSelectionView;
- (void)setGiftSelectionView:(id)arg1;
- (id)giftRecievingAnimationView;
- (void)setGiftRecievingAnimationView:(id)arg1;
- (id)sendingMoreBubbleView;
- (void)setSendingMoreBubbleView:(id)arg1;
- (id)rewardRecipientSelectionView;
- (void)setRewardRecipientSelectionView:(id)arg1;
- (id)recommendGiftTipsView;
- (void)setRecommendGiftTipsView:(id)arg1;
- (id)pendingRecommendUserSendGiftInfo;
- (void)setPendingRecommendUserSendGiftInfo:(id)arg1;
- (id)pendingPackageGiftRecommendInfo;
- (void)setPendingPackageGiftRecommendInfo:(id)arg1;
- (BOOL)canShowGiftPanel;
- (void)setCanShowGiftPanel:(BOOL)arg1;
- (id)giftGoalView;
- (void)setGiftGoalView:(id)arg1;
- (id)sendMoreBubbleArbitrator;
- (void)setSendMoreBubbleArbitrator:(id)arg1;
- (unsigned int)quickSendGiftCount;
- (void)setQuickSendGiftCount:(unsigned int)arg1;
- (id)quickSendGiftLogicDelegate;
- (void)setQuickSendGiftLogicDelegate:(id)arg1;
- (id)freeGiftButton;
- (void)setFreeGiftButton:(id)arg1;
- (id)freeGiftButtonDescLabel;
- (void)setFreeGiftButtonDescLabel:(id)arg1;
- (id)foregroundGiftLogic;
- (void)setForegroundGiftLogic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)currLayoutOrientation;
- (void)setCurrLayoutOrientation:(unsigned long long)arg1;
- (id)orientationButton;
- (void)setOrientationButton:(id)arg1;
- (id)replayKitViewModel;
- (void)setReplayKitViewModel:(id)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (id)liveRedPacketButton;
- (void)setLiveRedPacketButton:(id)arg1;
- (id)liveScreenSharingButton;
- (void)setLiveScreenSharingButton:(id)arg1;
- (id)liveToolsButton;
- (void)setLiveToolsButton:(id)arg1;
- (id)livePromoteExtendButton;
- (void)setLivePromoteExtendButton:(id)arg1;
- (id)bottomBtnList;
- (void)setBottomBtnList:(id)arg1;
- (void).cxx_destruct;
@end

