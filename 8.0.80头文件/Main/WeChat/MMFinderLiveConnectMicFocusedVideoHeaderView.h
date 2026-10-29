@interface MMFinderLiveConnectMicFocusedVideoHeaderView : UIView <MMFinderLiveLikeAudienceDataMgrExt>
{
    BOOL _showSoundIndicator; // +0x8
    BOOL _isConnectMicLikeEnabled; // +0x9
    id <MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate> _delegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    UIImageView * _connectMicIconView; // +0x20
    UILabel * _nicknameLabel; // +0x28
    UIView * _heatValueLabelContainerView; // +0x30
    UILabel * _heatValueLabel; // +0x38
    UIView * _audioModeIconContainerView; // +0x40
    UIImageView * _audioModeIconView; // +0x48
    MMUIButton * _micMutedButton; // +0x50
    PAGView * _soundIndicatorView; // +0x58
    MMLiveLikeButton * _likeButtonView; // +0x60
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x68
}
+ (double)minHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowSoundIndicator:(BOOL)arg1;
- (BOOL)containsVisibleComponents;
- (void)updateWithConnectMicUser:(id)arg1 taskId:(id)arg2;
- (void)updateForAnchorOfTaskId:(id)arg1;
- (void)updateAudioModeIconAppearance;
- (void)updateMicMutedButtonAppearance;
- (void)updateLiveHeatValue;
- (unsigned long long)currentHeatValue;
- (void)updateNickname;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (void)onClickMicMutedButton;
- (void)initAudioModeIcon;
- (void)initMicMutedButton;
- (void)updateSoundIndicatorVisibility;
- (id)liveTask;
- (BOOL)isFeedStreamTask;
- (void)initLikeButton;
- (void)configLikeButton;
- (void)onLikeButtonTapped;
- (void)playLikeButtonTapAnimation;
- (void)onLiveLikeAudienceIsLikeEnabledChangedWithTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showSoundIndicator;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)connectMicIconView;
- (void)setConnectMicIconView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)heatValueLabelContainerView;
- (void)setHeatValueLabelContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (id)audioModeIconContainerView;
- (void)setAudioModeIconContainerView:(id)arg1;
- (id)audioModeIconView;
- (void)setAudioModeIconView:(id)arg1;
- (id)micMutedButton;
- (void)setMicMutedButton:(id)arg1;
- (id)soundIndicatorView;
- (void)setSoundIndicatorView:(id)arg1;
- (id)likeButtonView;
- (void)setLikeButtonView:(id)arg1;
- (id)connectMicUserInfo;
- (void)setConnectMicUserInfo:(id)arg1;
- (BOOL)isConnectMicLikeEnabled;
- (void)setIsConnectMicLikeEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
