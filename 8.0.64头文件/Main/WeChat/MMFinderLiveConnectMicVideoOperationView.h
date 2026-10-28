@interface MMFinderLiveConnectMicVideoOperationView : UIView <WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicBaseUserInfoViewDelegate, MMLiveRewardGiftNotificationContainerViewDelegate, MMFinderLiveConnectMicUserPkHeatViewDelegate, MMFinderLiveConnectMicPaidConnectMicEvents, MMFinderLiveConnectMicOperationViewBase>
{
    BOOL _isGlobalSmallMode; // +0x8
    BOOL _isInFullScreenPKStyle; // +0x9
    BOOL _configureLiveDirtyHandle; // +0xa
    BOOL _isMicModeGiftNotificationViewShowing; // +0xb
    BOOL _isInVictoryAnimation; // +0xc
    BOOL _isInWinningStreakAnimation; // +0xd
    BOOL _isHiddenSmallWidgets; // +0xe
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x10
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x18
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x20
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x28
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x30
    UIView * _bottomContainerView; // +0x38
    CAGradientLayer * _bottomContainerBackgroundLayer; // +0x40
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0x48
    UIView * _audioUserContainerView; // +0x50
    MMFinderLiveConnectMicVideoUserInfoView * _videoUserInfoView; // +0x58
    MMFinderLiveConnectMicAudioUserInfoView * _audioUserInfoView; // +0x60
    UIView * _pureAudioModeTipView; // +0x68
    UILabel * _pureAudioModeTipLabel; // +0x70
    UIView * _audioModeIconContainerView; // +0x78
    UIImageView * _audioModeIconView; // +0x80
    PAGView * _pureAudioModeVolumeAnimationView; // +0x88
    MMUIButton * _muteMicButton; // +0x90
    UIView * _heatValueLabelContainerView; // +0x98
    UILabel * _heatValueLabel; // +0xa0
    double _extraTopInset; // +0xa8
    double _extraLeftTopInset; // +0xb0
    double _extraBottomInset; // +0xb8
    double _contentAlpha; // +0xc0
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0xc8
    MMFinderLiveClockCountdownView * _paidMicCountdownView; // +0xd0
    MMFinderLiveConnectMicUserAnchorPkNotificationView * _pkAnchorNotificationView; // +0xd8
    MMFinderLiveConnectMicUserPkHeatView * _heatValueView; // +0xe0
    PAGView * _victoryAnimationView; // +0xe8
    UIView * _winningStreakContainerView; // +0xf0
    PAGView * _winningStreakAnimationView; // +0xf8
    UILabel * _winningStreakCountLabel; // +0x100
    MMFinderLiveConnectMicSeatNameLabel * _seatNameLabel; // +0x108
    MMLiveStrokeLabel * _superfanExtraPkCreditLabel; // +0x110
    MMFinderLiveCommonOnlineMemberSheet * _onlineMemberSheet; // +0x118
    CGSize _lastViewSize; // +0x120
    CGRect _displayNormalizedFrame; // +0x130
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)prepareForReuse;
- (id)initWithTaskId:(id)arg1;
- (BOOL)isCurrentAnchor;
- (id)refViewForDisplayPaidMicKeepAliveTips;
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
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
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
- (void)updatePkData;
- (void)clearPkAnimation;
- (void)layoutSubviews;
- (void)layoutUIAndResetSubviewsSize:(BOOL)arg1;
- (id)currentHeatValueView;
- (void)layoutMicHeatValueLabel;
- (void)updateAnchorPkNotificationView;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(BOOL)arg2 isInFullScreenPKStyle:(BOOL)arg3 configureLiveDirtyHandle:(BOOL)arg4 hideSmallWidgets:(BOOL)arg5;
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
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
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
- (id)paidMicCountdownView;
- (void)setPaidMicCountdownView:(id)arg1;
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
- (void).cxx_destruct;
@end
