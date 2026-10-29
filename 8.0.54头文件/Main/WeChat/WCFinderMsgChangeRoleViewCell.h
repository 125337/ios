@interface WCFinderMsgChangeRoleViewCell : UITableViewCell
{
    WCFinderMsgChangeRoleViewItem * _item; // +0x8
    WCFinderHeadImageView * _avatarImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _selectedView; // +0x20
    UIView * _addIconView; // +0x28
    UIImageView * _addIconImageView; // +0x30
    UILabel * _usernameLabel; // +0x38
    UIView * _lineView; // +0x40
    UILabel * _globalSelectedLabel; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)hideLiveView:(BOOL)arg1;
- (void)prepareForReuse;
- (void)dealloc;
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
- (id)usernameLabel;
- (void)setUsernameLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)globalSelectedLabel;
- (void)setGlobalSelectedLabel:(id)arg1;
- (void).cxx_destruct;
@end

