@interface MMFinderLiveConnectedMicUserCardCollectionCellView : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>
{
    BOOL _forceDisableOperationButton; // +0x8
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _actionDelegate; // +0x10
    MMFinderLiveConnectMicUser * _connectMicUser; // +0x18
    UIView * _containerView; // +0x20
    WCFinderHeadImageView * _avatarView; // +0x28
    WCFinderAuthInfoIconView * _authIconView; // +0x30
    UILabel * _nickNameLabel; // +0x38
    MMLiveIconButton * _iconButton; // +0x40
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x48
    MMLiveCDNPlayerView * _playerView; // +0x50
    UIView * _recommendationReasonView; // +0x58
    UILabel * _recommendationReasonLabel; // +0x60
    unsigned long long _sectionType; // +0x68
}
+ (id)ReuseIdentifier;
+ (double)getHeightWithWidth:(double)arg1;
- (void)updateWithConnectMicUser:(id)arg1;
- (void)updateSectionType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetState;
- (void)layoutUI;
- (void)configContainerView;
- (void)configAvatarView;
- (void)configAuthIconView;
- (void)configNickNameLabel;
- (void)configIconButton;
- (void)updateIconButton;
- (void)configActivityIndicatorView;
- (void)configCDNPlayerView;
- (void)configRecommendationReasonView;
- (void)onTapiconButton;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)connectMicUser;
- (void)setConnectMicUser:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)recommendationReasonView;
- (void)setRecommendationReasonView:(id)arg1;
- (id)recommendationReasonLabel;
- (void)setRecommendationReasonLabel:(id)arg1;
- (BOOL)forceDisableOperationButton;
- (void)setForceDisableOperationButton:(BOOL)arg1;
- (unsigned long long)sectionType;
- (void)setSectionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
