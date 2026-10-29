@interface MMFinderLiveConnectMicVideoOperationView : UIView <WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicBaseUserInfoViewDelegate, MMLiveRewardGiftNotificationContainerViewDelegate, MMFinderLiveConnectMicUserPkHeatViewDelegate, MMFinderLiveLikeAudienceDataMgrExt, MMFinderLiveConnectMicOperationViewBase>
{
    BOOL _isGlobalSmallMode; // +0x8
    BOOL _isInFullScreenPKStyle; // +0x9
    BOOL _configureLiveDirtyHandle; // +0xa
    BOOL _isMicModeGiftNotificationViewShowing; // +0xb
    BOOL _isInVictoryAnimation; // +0xc
    BOOL _isInWinningStreakAnimation; // +0xd
    BOOL _isHiddenSmallWidgets; // +0xe
    BOOL _isGiftStarBadgeShowing; // +0xf
    BOOL _isConnectMicLikeAvailable; // +0x10
    BOOL _isConnectMicLikeEnabled; // +0x11
    BOOL _isConnectMicDoubleClickLikeEnabled; // +0x12
    BOOL _isConnectMicLikeButtonEnabled; // +0x13
    BOOL _hasPendingLikeExposure; // +0x14
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x18
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x20
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x28
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x30
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x38
    unsigned long long _currentMicLayoutMode; // +0x40
    MMLiveConnectMicHitTestAdjustView * _bottomContainerView; // +0x48
    CAGradientLayer * _bottomContainerBackgroundLayer; // +0x50
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0x58
    MMLiveConnectMicHitTestAdjustView * _audioUserContainerView; // +0x60
    MMFinderLiveConnectMicVideoUserInfoView * _videoUserInfoView; // +0x68
    MMFinderLiveConnectMicAudioUserInfoView * _audioUserInfoView; // +0x70
    UIView * _pureAudioModeTipView; // +0x78
    UILabel * _pureAudioModeTipLabel; // +0x80
    UIView * _audioModeIconContainerView; // +0x88
    UIImageView * _audioModeIconView; // +0x90
    PAGView * _pureAudioModeVolumeAnimationView; // +0x98
    MMUIButton * _muteMicButton; // +0xa0
    UIView * _heatValueLabelContainerView; // +0xa8
    UILabel * _heatValueLabel; // +0xb0
    double _extraTopInset; // +0xb8
    double _extraLeftTopInset; // +0xc0
    double _extraBottomInset; // +0xc8
    double _contentAlpha; // +0xd0
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0xd8
    MMFinderLiveConnectMicUserAnchorPkNotificationView * _pkAnchorNotificationView; // +0xe0
    MMFinderLiveConnectMicUserPkHeatView * _heatValueView; // +0xe8
    PAGView * _victoryAnimationView; // +0xf0
    UIView * _winningStreakContainerView; // +0xf8
    PAGView * _winningStreakAnimationView; // +0x100
    UILabel * _winningStreakCountLabel; // +0x108
    MMFinderLiveConnectMicSeatNameLabel * _seatNameLabel; // +0x110
    MMLiveStrokeLabel * _superfanExtraPkCreditLabel; // +0x118
    MMFinderLiveCommonOnlineMemberSheet * _onlineMemberSheet; // +0x120
    MMFinderLiveGiftStarMicBadgeOverlayView * _giftStarBadgeOverlayView; // +0x128
    NSString * _giftStarBadgeShownSessionKey; // +0x130
    MMLiveViewHiddenStatusContainer * _giftStarHiddenStatusContainer; // +0x138
    UIView * _multipleTapGestureContainerView; // +0x140
    MMLiveLikeAnimationUtil * _audienceSelflikeAnimationUtil; // +0x148
    MMLiveLikeAnimationUtil * _audienceOtherLikeAnimationUtil; // +0x150
    MMLiveLikeAnimationUtil * _doubleClickedlikeAnimationUtil; // +0x158
    MMAudienceLiveLikePlayUtil * _audienceLikePlayUtil; // +0x160
    UITapGestureRecognizer * _singleTapGesture; // +0x168
    MMLiveMultipleTapGestureRecognizer * _multipleTapGesture; // +0x170
    MMLiveLikeButton * _likeButton; // +0x178
    UIView * _likeAnimationWrapper; // +0x180
    long long _likeCount; // +0x188
    unsigned long long _lastExposureReportedMicBaseMode; // +0x190
    unsigned long long _lastExposureReportedMicLayoutMode; // +0x198
    CGSize _lastViewSize; // +0x1a0
    CGRect _displayNormalizedFrame; // +0x1b0
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)prepareForReuse;
- (id)initWithTaskId:(id)arg1;
- (BOOL)isCurrentAnchor;
- (void)configVideoUserInfoViewWithRightAreaWidth:(double)arg1 andResetSubviewsSize:(BOOL)arg2;
- (void)adjustVideoUserInfoViewFrame;
- (void)adjustVideoUserInfoViewFrameInFullScreenPKStyle;
- (void)configAudioUserInfoViewAndResetSubviewsSize:(BOOL)arg1;
- (void)setupBackgroundTapGestureRecognizer;
- (void)configPureAudioModeTipView;
- (void)layoutPureAudioModeTipView;
- (void)showSuperfanExtraPkCreditLabelWithDiffCount:(unsigned long long)arg1;
- (void)hideSuperfanExtraPkCreditLabel;
- (void)layoutSuperfanExtraPkCreditLabel;
- (CGSize)victoryDrawAnimationViewSize;
- (double)winningStreakCountLabelFont;
- (void)configPkComponent;
- (void)setIsInVictoryAnimation:(BOOL)arg1;
- (void)setIsInWinningStreakAnimation:(BOOL)arg1;
- (void)layoutPkComponent;
- (void)layoutHeatValueView;
- (BOOL)pkHeatValueViewShowInLeft;
- (BOOL)isWaitPk:(id)arg1;
- (double)getVideoUserInfoTop;
- (void)layoutVictoryAnimationView;
- (id)currentPkUser;
- (id)currentPkTeam;
- (void)updatePkState;
- (void)updateGiftStarBadgeOverlay;
- (void)showGiftStarBadgeOverlayWithLevel:(unsigned int)arg1 iconUrl:(id)arg2;
- (id)giftStarBadgeClearScreenViews;
- (void)applyGiftStarBadgeClearScreen;
- (void)reapplyGiftStarBadgeClearScreen;
- (void)restoreViewsAfterGiftStarBadge;
- (void)layoutGiftStarBadgeOverlay;
- (void)updatePkData;
- (void)clearPkAnimation;
- (void)layoutSubviews;
- (void)layoutUIAndResetSubviewsSize:(BOOL)arg1;
- (id)currentHeatValueView;
- (void)layoutMicHeatValueLabel;
- (void)updateAnchorPkNotificationView;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(BOOL)arg2 isInFullScreenPKStyle:(BOOL)arg3 configureLiveDirtyHandle:(BOOL)arg4 hideSmallWidgets:(BOOL)arg5 micLayoutMode:(unsigned long long)arg6;
- (void)configConnectMicOperationView:(BOOL)arg1;
- (void)insertToPIPRenderLayerIfNeeded;
- (void)clearAndHide;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)_updateCurrentAnchorStatusUI;
- (void)updateAnchorVolumeAnimationViewAppearance:(BOOL)arg1;
- (void)muteMicButtonDidClick;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateExtraLeftTopInset:(double)arg1;
- (CGRect)getPureAudioTipViewFrame;
- (CGPoint)originForWidgetContainer;
- (void)updateExtraBottomInset:(double)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)configSeatNameLabelWithLiveTask:(id)arg1;
- (void)layoutSeatNameLabel;
- (void)updateLiveHeatValue;
- (void)configMicHeatValueLabelWithLiveTask:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)onBackgroundViewTapped:(id)arg1;
- (void)updateUI;
- (id)getUserInfoView;
- (unsigned long long)viewType;
- (id)temporarilyHideNonEssentialViews;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (id)liveTask;
- (BOOL)isFeedStreamTask;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)insertAudioMicOperationViewToPIPRenderLayer;
- (BOOL)removeAudioMicOperationViewFromPIPRenderLayer;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewNeedUpdateLayout:(id)arg1;
- (void)onPkHeatViewTapped:(id)arg1;
- (BOOL)isDoubleSidePK:(id)arg1;
- (void)updateSeatName;
- (id)likeMgr;
- (BOOL)connectMicLikeSwitchValueWithMainSwitchValue:(BOOL)arg1;
- (void)configLikeRelatedUtils;
- (void)realConfigLikeRelatedUtilsWithLiveTask:(id)arg1;
- (void)reportConnectMicLikeExposureIfLayoutChanged;
- (void)forceFlushPendingLikeExposure;
- (void)realConfigLikeRelatedUtilsWithLiveFeedStreamTask:(id)arg1;
- (void)configLikeAnimationUtils;
- (void)updateConnectMicDoubleClickLikeEnabled:(BOOL)arg1;
- (void)updateLikeButtonUserInteractionEnabled;
- (double)likeButtonCenterY;
- (void)layoutLikeRelatedUI;
- (long long)currentLikeButtonBusinessType;
- (double)currentLikeButtonSideLength;
- (CGPoint)getLikeButtonRelativeCenter;
- (void)onBackgroundViewDoubleTapped:(CGPoint)arg1;
- (void)onLiveLikeAudienceDisplayLikeCountUpdate:(unsigned long long)arg1 othersDisplayLikeCount:(unsigned long long)arg2 taskId:(id)arg3 micId:(id)arg4;
- (void)onLiveLikeAudienceLikeContactListUpdate:(id)arg1 taskId:(id)arg2 micId:(id)arg3;
- (void)onLiveLikeAudienceIsLikeEnabledChangedWithTaskId:(id)arg1;
- (long long)layoutOrientation;
- (id)connectMicUserInfo;
- (void)setConnectMicUserInfo:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)giftNotificationContainerView;
- (void)setGiftNotificationContainerView:(id)arg1;
- (id)lotteryPacketDisplayLogic;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
- (CGRect)displayNormalizedFrame;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (unsigned long long)currentMicLayoutMode;
- (void)setCurrentMicLayoutMode:(unsigned long long)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)bottomContainerBackgroundLayer;
- (void)setBottomContainerBackgroundLayer:(id)arg1;
- (id)redPacketAnimationView;
- (void)setRedPacketAnimationView:(id)arg1;
- (id)audioUserContainerView;
- (void)setAudioUserContainerView:(id)arg1;
- (id)videoUserInfoView;
- (void)setVideoUserInfoView:(id)arg1;
- (id)audioUserInfoView;
- (void)setAudioUserInfoView:(id)arg1;
- (id)pureAudioModeTipView;
- (void)setPureAudioModeTipView:(id)arg1;
- (id)pureAudioModeTipLabel;
- (void)setPureAudioModeTipLabel:(id)arg1;
- (id)audioModeIconContainerView;
- (void)setAudioModeIconContainerView:(id)arg1;
- (id)audioModeIconView;
- (void)setAudioModeIconView:(id)arg1;
- (id)pureAudioModeVolumeAnimationView;
- (void)setPureAudioModeVolumeAnimationView:(id)arg1;
- (id)muteMicButton;
- (void)setMuteMicButton:(id)arg1;
- (id)heatValueLabelContainerView;
- (void)setHeatValueLabelContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (double)extraTopInset;
- (void)setExtraTopInset:(double)arg1;
- (double)extraLeftTopInset;
- (void)setExtraLeftTopInset:(double)arg1;
- (double)extraBottomInset;
- (void)setExtraBottomInset:(double)arg1;
- (CGSize)lastViewSize;
- (void)setLastViewSize:(CGSize)arg1;
- (BOOL)isGlobalSmallMode;
- (void)setIsGlobalSmallMode:(BOOL)arg1;
- (BOOL)isInFullScreenPKStyle;
- (void)setIsInFullScreenPKStyle:(BOOL)arg1;
- (double)contentAlpha;
- (void)setContentAlpha:(double)arg1;
- (BOOL)configureLiveDirtyHandle;
- (void)setConfigureLiveDirtyHandle:(BOOL)arg1;
- (BOOL)isMicModeGiftNotificationViewShowing;
- (void)setIsMicModeGiftNotificationViewShowing:(BOOL)arg1;
- (id)hiddenStatusContainer;
- (void)setHiddenStatusContainer:(id)arg1;
- (id)pkAnchorNotificationView;
- (void)setPkAnchorNotificationView:(id)arg1;
- (id)heatValueView;
- (void)setHeatValueView:(id)arg1;
- (id)victoryAnimationView;
- (void)setVictoryAnimationView:(id)arg1;
- (id)winningStreakContainerView;
- (void)setWinningStreakContainerView:(id)arg1;
- (id)winningStreakAnimationView;
- (void)setWinningStreakAnimationView:(id)arg1;
- (id)winningStreakCountLabel;
- (void)setWinningStreakCountLabel:(id)arg1;
- (BOOL)isInVictoryAnimation;
- (BOOL)isInWinningStreakAnimation;
- (id)seatNameLabel;
- (void)setSeatNameLabel:(id)arg1;
- (id)superfanExtraPkCreditLabel;
- (void)setSuperfanExtraPkCreditLabel:(id)arg1;
- (id)onlineMemberSheet;
- (void)setOnlineMemberSheet:(id)arg1;
- (BOOL)isHiddenSmallWidgets;
- (void)setIsHiddenSmallWidgets:(BOOL)arg1;
- (id)giftStarBadgeOverlayView;
- (void)setGiftStarBadgeOverlayView:(id)arg1;
- (id)giftStarBadgeShownSessionKey;
- (void)setGiftStarBadgeShownSessionKey:(id)arg1;
- (BOOL)isGiftStarBadgeShowing;
- (void)setIsGiftStarBadgeShowing:(BOOL)arg1;
- (id)giftStarHiddenStatusContainer;
- (void)setGiftStarHiddenStatusContainer:(id)arg1;
- (id)multipleTapGestureContainerView;
- (void)setMultipleTapGestureContainerView:(id)arg1;
- (id)audienceSelflikeAnimationUtil;
- (void)setAudienceSelflikeAnimationUtil:(id)arg1;
- (id)audienceOtherLikeAnimationUtil;
- (void)setAudienceOtherLikeAnimationUtil:(id)arg1;
- (id)doubleClickedlikeAnimationUtil;
- (void)setDoubleClickedlikeAnimationUtil:(id)arg1;
- (id)audienceLikePlayUtil;
- (void)setAudienceLikePlayUtil:(id)arg1;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (id)multipleTapGesture;
- (void)setMultipleTapGesture:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)likeAnimationWrapper;
- (void)setLikeAnimationWrapper:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (BOOL)isConnectMicLikeAvailable;
- (void)setIsConnectMicLikeAvailable:(BOOL)arg1;
- (BOOL)isConnectMicLikeEnabled;
- (void)setIsConnectMicLikeEnabled:(BOOL)arg1;
- (BOOL)isConnectMicDoubleClickLikeEnabled;
- (void)setIsConnectMicDoubleClickLikeEnabled:(BOOL)arg1;
- (BOOL)isConnectMicLikeButtonEnabled;
- (void)setIsConnectMicLikeButtonEnabled:(BOOL)arg1;
- (unsigned long long)lastExposureReportedMicBaseMode;
- (void)setLastExposureReportedMicBaseMode:(unsigned long long)arg1;
- (unsigned long long)lastExposureReportedMicLayoutMode;
- (void)setLastExposureReportedMicLayoutMode:(unsigned long long)arg1;
- (BOOL)hasPendingLikeExposure;
- (void)setHasPendingLikeExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
