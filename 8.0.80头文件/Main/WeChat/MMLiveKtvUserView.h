@interface MMLiveKtvUserView : MMFinderLiveKTVBaseView <WCFinderHeadImageViewDelegate, MMFinderLiveRedPacketViewModelObserver, MMFinderLiveKTVUIExt>
{
    BOOL _userTalking; // +0x8
    BOOL _isDoubleClickLikeEnabled; // +0x9
    BOOL _enableShowUserTalking; // +0xa
    FinderLiveContact * _userContact; // +0x10
    WCFinderContact * _finderContact; // +0x18
    MMFinderLiveConnectMicUser * _micUserInfo; // +0x20
    id <MMLiveKtvUserViewDelegate> _delegate; // +0x28
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x30
    unsigned long long _viewScene; // +0x38
    NSString * _userId; // +0x40
    UIView * _avatarContainerView; // +0x48
    WCFinderHeadImageView * _userAvatarView; // +0x50
    MMFinderLiveAudioRoomMicAudioAnimationView * _audioAnimationView; // +0x58
    UIColor * _audioWaveColor; // +0x60
    UILabel * _titleLabel; // +0x68
    MMUIButton * _micMutedButton; // +0x70
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x78
    UIView * _heatValueContainerView; // +0x80
    UILabel * _heatValueLabel; // +0x88
    unsigned long long _currHeatValue; // +0x90
    UIView * _redPacketContainerView; // +0x98
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0xa0
    MMLiveMultipleTapGestureRecognizer * _multipleTapGesture; // +0xa8
    UILongPressGestureRecognizer * _longPressGesture; // +0xb0
}
+ (double)preferExtraHeight:(BOOL)arg1;
+ (double)secondLineTopMarginNew:(BOOL)arg1;
- (id)initWithTaskId:(id)arg1 displayScenario:(unsigned long long)arg2;
- (void)registerExtensions;
- (void)setUserTalking:(BOOL)arg1;
- (void)setAudioWaveColor:(id)arg1;
- (id)getLiveTask;
- (BOOL)isAdminMode;
- (void)layoutSubviews;
- (void)layoutAvatarViews;
- (void)layoutTitleLabelAndMuteButton;
- (BOOL)isViewAtFirstLineVisible;
- (void)layoutHeatValueAndRedPacketView;
- (void)layoutGiftNotificationContainerView;
- (void)onAvatarTapped;
- (void)handleMultipleTapGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)onClickMicMutedButton;
- (void)onTapHeatValue;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)onLiveKTVUserHeatValueUpdate:(id)arg1 withMicUserInfo:(id)arg2 taskId:(id)arg3;
- (void)updateMicUserInfo:(id)arg1 userId:(id)arg2;
- (void)updateUserContact:(id)arg1 userId:(id)arg2;
- (void)updateUserFinderContact:(id)arg1 userId:(id)arg2;
- (void)clearStates;
- (void)updateFinderContact:(id)arg1;
- (id)getGiftNotificationContainerView;
- (id)currUserId;
- (void)updateMicMutedBtnHiddenWithRefreshUI;
- (void)updateUserTalkingShowEnabled:(BOOL)arg1;
- (void)checkUserIdWithUpdate:(id)arg1;
- (void)checkUserNameWithUpdate:(id)arg1;
- (void)refreshUI;
- (void)initializeComponents;
- (void)initAvatarViews;
- (void)initTitleLabel;
- (BOOL)shouldCreateMicMutedButton;
- (void)initMicMutedButton;
- (void)initHeatValueViews;
- (void)initRedPacketView;
- (void)initGiftNotificationContainerView;
- (BOOL)isAvatarRounded;
- (BOOL)shouldShowRedPacketView;
- (void)updateRedPacketViews;
- (void)updateHeatValueLabel;
- (BOOL)updateMicMutedButtonHidden;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)userTalking;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)micUserInfo;
- (void)setMicUserInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDoubleClickLikeEnabled;
- (void)setIsDoubleClickLikeEnabled:(BOOL)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg1;
- (id)audioAnimationView;
- (void)setAudioAnimationView:(id)arg1;
- (id)audioWaveColor;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)micMutedButton;
- (void)setMicMutedButton:(id)arg1;
- (id)giftNotificationContainerView;
- (void)setGiftNotificationContainerView:(id)arg1;
- (id)heatValueContainerView;
- (void)setHeatValueContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (unsigned long long)currHeatValue;
- (void)setCurrHeatValue:(unsigned long long)arg1;
- (id)redPacketContainerView;
- (void)setRedPacketContainerView:(id)arg1;
- (id)redPacketAnimationView;
- (void)setRedPacketAnimationView:(id)arg1;
- (BOOL)enableShowUserTalking;
- (void)setEnableShowUserTalking:(BOOL)arg1;
- (id)multipleTapGesture;
- (void)setMultipleTapGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end
