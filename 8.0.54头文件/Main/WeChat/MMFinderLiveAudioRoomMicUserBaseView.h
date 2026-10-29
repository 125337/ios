@interface MMFinderLiveAudioRoomMicUserBaseView : UIView <WCFinderHeadImageViewDelegate>
{
    BOOL _isAvatarRounded; // +0x8
    BOOL _userIsTalking; // +0x9
    BOOL _isAdminMode; // +0xa
    BOOL _forceHideTagViews; // +0xb
    BOOL _shouldShowLocation; // +0xc
    MMFinderLiveConnectMicUser * _micUserInfo; // +0x10
    MMFinderLiveConnectMicSeatInfo * _micSeatInfo; // +0x18
    unsigned long long _viewScene; // +0x20
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x28
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x30
    id <MMFinderLiveAudioRoomMicUserViewDelegate> _actionDelegate; // +0x38
    UIView * _avatarContainerView; // +0x40
    UIView * _seatBackgroundView; // +0x48
    UIImageView * _iconViewInSeatSlot; // +0x50
    WCFinderHeadImageView * _userAvatarView; // +0x58
    UILabel * _titleLabel; // +0x60
    UIView * _tagContainerView; // +0x68
    UIView * _locationContainerView; // +0x70
    UIView * _locationShadowView; // +0x78
    UIImageView * _locationIconView; // +0x80
    UILabel * _locationLabel; // +0x88
    UIView * _seatNameContainerView; // +0x90
    UILabel * _seatNameLabel; // +0x98
    unsigned long long _audioRoomScene; // +0xa0
    MMFinderLiveAudioRoomMicAudioAnimationView * _audioAnimationView; // +0xa8
    UIColor * _audioWaveColor; // +0xb0
    MMUIButton * _micMutedButton; // +0xb8
    UIView * _heatValueContainerView; // +0xc0
    UILabel * _heatValueLabel; // +0xc8
    UIView * _redPacketContainerView; // +0xd0
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0xd8
    UIView * _pkVictoryAnimationContainerView; // +0xe0
    PAGView * _pkVictoryAnimationView; // +0xe8
    UILabel * _pkWinningStreakCountLabel; // +0xf0
    NSString * _locationName; // +0xf8
    MMFinderLiveCommonOnlineMemberSheet * _onlineMemberSheet; // +0x100
}
- (id)initWithFrame:(CGRect)arg1 viewScene:(unsigned long long)arg2 actionDelegate:(id)arg3 taskId:(id)arg4;
- (id)initWithViewScene:(unsigned long long)arg1 actionDelegate:(id)arg2 taskId:(id)arg3;
- (id)getLiveTask;
- (id)getFinderLiveTask;
- (void)configViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (BOOL)shouldForceStopAudioWaveAnimation;
- (void)updateUserIsTalking:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configAvatarContainerView;
- (void)layoutAvatarContainerView;
- (void)updateSeatViewHidden;
- (void)configSeatSlotViews;
- (void)layoutSeatSlotViews;
- (void)configUserAvatarView;
- (void)layoutUserAvatarView;
- (void)layoutAudioAnimationView;
- (void)updateTitleLabelText;
- (void)configTitleLabelAndMicMutedButton;
- (void)layoutTitleLabelAndMicMutedButton;
- (void)createMicMutedButton;
- (void)onClickMicMutedButton;
- (id)tagLabelTextColor;
- (id)tagViewShadowColor;
- (id)tagViewBackgroundColor;
- (void)configTagViews;
- (void)configTagContainerView;
- (void)updateTagContainerViewHidden;
- (void)configLocationViews;
- (void)configSeatNameLabel;
- (void)layoutTagViews;
- (void)layoutTagContainerView;
- (void)layoutLocationViews;
- (void)updateLocationLabelHiddenAndText;
- (void)layoutSeatNameLabel;
- (void)updateSeatNameLabelHiddenAndText;
- (BOOL)shouldCreateRedPacketView;
- (void)onTapHeatValue;
- (void)configHeatValueAndRedPacketViews;
- (void)layoutHeatValueAndRedPacketViews;
- (void)configGiftNotificationContainerView;
- (void)layoutGiftNotificationContainerView;
- (void)configPkVictoryAnimationView;
- (void)layoutPkVictoryAnimationView;
- (void)updateViewWithUIChangeType:(unsigned long long)arg1;
- (void)updateViewAfterSeatNameChanged;
- (void)updateViewAfterTalkingStatusChanged;
- (void)updateViewAfterMicMutedStatusChanged;
- (void)updateViewAfterKtvSingerChanged;
- (void)updateAudioWaveColor:(id)arg1;
- (void)updatePkState;
- (void)updateHeatValueLabel;
- (void)updatePkVictoryAnimationView;
- (id)liveTask;
- (id)currentPkUser;
- (id)currentPkTeam;
- (void)updateForceHideTagViews:(BOOL)arg1;
- (void)updateShouldShowLocation:(BOOL)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (id)micUserInfo;
- (void)setMicUserInfo:(id)arg1;
- (id)micSeatInfo;
- (void)setMicSeatInfo:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (id)giftNotificationContainerView;
- (void)setGiftNotificationContainerView:(id)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)isAvatarRounded;
- (void)setIsAvatarRounded:(BOOL)arg1;
- (BOOL)userIsTalking;
- (void)setUserIsTalking:(BOOL)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)seatBackgroundView;
- (void)setSeatBackgroundView:(id)arg1;
- (id)iconViewInSeatSlot;
- (void)setIconViewInSeatSlot:(id)arg1;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tagContainerView;
- (void)setTagContainerView:(id)arg1;
- (id)locationContainerView;
- (void)setLocationContainerView:(id)arg1;
- (id)locationShadowView;
- (void)setLocationShadowView:(id)arg1;
- (id)locationIconView;
- (void)setLocationIconView:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)seatNameContainerView;
- (void)setSeatNameContainerView:(id)arg1;
- (id)seatNameLabel;
- (void)setSeatNameLabel:(id)arg1;
- (BOOL)isAdminMode;
- (void)setIsAdminMode:(BOOL)arg1;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (id)audioAnimationView;
- (void)setAudioAnimationView:(id)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (id)micMutedButton;
- (void)setMicMutedButton:(id)arg1;
- (id)heatValueContainerView;
- (void)setHeatValueContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (id)redPacketContainerView;
- (void)setRedPacketContainerView:(id)arg1;
- (id)redPacketAnimationView;
- (void)setRedPacketAnimationView:(id)arg1;
- (id)pkVictoryAnimationContainerView;
- (void)setPkVictoryAnimationContainerView:(id)arg1;
- (id)pkVictoryAnimationView;
- (void)setPkVictoryAnimationView:(id)arg1;
- (id)pkWinningStreakCountLabel;
- (void)setPkWinningStreakCountLabel:(id)arg1;
- (BOOL)forceHideTagViews;
- (void)setForceHideTagViews:(BOOL)arg1;
- (id)locationName;
- (void)setLocationName:(id)arg1;
- (BOOL)shouldShowLocation;
- (void)setShouldShowLocation:(BOOL)arg1;
- (id)onlineMemberSheet;
- (void)setOnlineMemberSheet:(id)arg1;
- (void).cxx_destruct;
@end

