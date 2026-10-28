@interface MMFinderLiveConnectMicTeamPkCell : UICollectionViewCell
{
    BOOL _disableChangeTeam; // +0x8
    id /* block */ _changeTeamBlock; // +0x10
    UIView * _containerView; // +0x18
    UILabel * _nickNameLabel; // +0x20
    UILabel * _teamLabel; // +0x28
    MMLiveIconButton * _actionButton; // +0x30
    WCFinderHeadImageView * _avatarImageView; // +0x38
    MMFinderLiveConnectMicPkUser * _micUser; // +0x40
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithMicUser:(id)arg1 team:(unsigned long long)arg2 disableChangeTeam:(BOOL)arg3 isApply:(BOOL)arg4;
- (void)initSubviews;
- (void)onChangeTeam;
- (void)layoutSubviews;
- (id /* block */)changeTeamBlock;
- (void)setChangeTeamBlock:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)teamLabel;
- (void)setTeamLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)micUser;
- (void)setMicUser:(id)arg1;
- (BOOL)disableChangeTeam;
- (void)setDisableChangeTeam:(BOOL)arg1;
- (void).cxx_destruct;
@end
