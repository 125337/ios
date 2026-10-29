@interface WCFinderSelectPostIdentifierItemView : UITableViewCell
{
    BOOL _showDisable; // +0x8
    WCFinderSelectPostIdentifierItem * _item; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _selectedView; // +0x28
    UIView * _addIconView; // +0x30
    UIImageView * _addIconImageView; // +0x38
    UILabel * _checkLabel; // +0x40
    UILabel * _usernameLabel; // +0x48
    UIView * _mentionView; // +0x50
    UILabel * _mentionLabel; // +0x58
    UIView * _lineView; // +0x60
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)hideLiveView:(BOOL)arg1;
- (void)prepareForReuse;
- (BOOL)reloadMentionCountWithUsername:(id)arg1;
- (void)updateMentionCount:(unsigned long long)arg1 showNormalRedDot:(BOOL)arg2;
- (void)setShowDisable:(BOOL)arg1;
- (void)update:(id)arg1;
- (void)layoutSubviews;
- (id)item;
- (void)setItem:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (id)addIconImageView;
- (void)setAddIconImageView:(id)arg1;
- (id)checkLabel;
- (void)setCheckLabel:(id)arg1;
- (BOOL)showDisable;
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)mentionView;
- (void)setMentionView:(id)arg1;
- (id)mentionLabel;
- (void)setMentionLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
