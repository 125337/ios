@interface WCFinderFavoriteCollectionFlowConfigurationView : UIView <UIContentView>
{
    WCFinderFavoriteCollectionFlowConfiguration * _appliedConfiguration; // +0x8
    UIImageView * _coverImageView; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _avatarImageView; // +0x28
    UILabel * _nicknameLabel; // +0x30
    WCFinderAuthInfoIconView * _authInfoView; // +0x38
    UILongPressGestureRecognizer * _longPressGesture; // +0x40
}
+ (double)heightWithConfiguration:(id)arg1 proposeSize:(CGSize)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)longPressGestureEventHanlder:(id)arg1;
- (void)onDelete;
- (id)coverImageView;
- (id)iconImageView;
- (id)titleLabel;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)authInfoView;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthInfoView:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end
