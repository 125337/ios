@interface WCFinderAccountSelectedInWXTableViewCell : UITableViewCell
{
    WCFinderHeadImageView * _avatarImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _fansLabel; // +0x18
    UIImageView * _selectedView; // +0x20
    UIView * _addIconView; // +0x28
    UIImageView * _addIconImageView; // +0x30
    UIView * _selectBGView; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)updateWithContact:(id)arg1 fansCount:(unsigned long long)arg2 isSelected:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)fansLabel;
- (void)setFansLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (id)addIconImageView;
- (void)setAddIconImageView:(id)arg1;
- (id)selectBGView;
- (void)setSelectBGView:(id)arg1;
- (void).cxx_destruct;
@end
