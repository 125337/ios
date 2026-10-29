@interface WCFinderMusicianCardCollectionViewCell : UICollectionViewCell
{
    WCFinderHeadImageView * _avatarImageView; // +0x8
    UILabel * _nicknameLabel; // +0x10
    UILabel * _descLabel; // +0x18
    WCFinderAuthInfoIconView * _authIconView; // +0x20
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (id)authIconView;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)descLabel;
- (void)updateWithSingerInfo:(id)arg1;
- (void)adjustAllSubviews;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void).cxx_destruct;
@end
