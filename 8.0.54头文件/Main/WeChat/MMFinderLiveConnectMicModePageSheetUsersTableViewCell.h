@interface MMFinderLiveConnectMicModePageSheetUsersTableViewCell : UITableViewCell
{
    UILabel * _bulletLabel; // +0x8
    UILabel * _displayNameLabel; // +0x10
    UILabel * _subtitleLabel; // +0x18
    UIImageView * _checkIconView; // +0x20
    UIView * _separatorBar; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (BOOL)showBullet;
- (void)setShowBullet:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)bulletLabel;
- (void)setBulletLabel:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)checkIconView;
- (void)setCheckIconView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end

