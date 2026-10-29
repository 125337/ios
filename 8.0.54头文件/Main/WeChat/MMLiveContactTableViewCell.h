@interface MMLiveContactTableViewCell : MMTableViewCell
{
    id <MMLiveContactTableViewCellDelegate> _cellDelegate; // +0x8
    double _seperatorStartX; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMUILabel * _displayNameLabel; // +0x20
    MMUIImageView * _arrowImageView; // +0x28
    MMLiveUserStateItem * _userItem; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWithUserItem:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (double)seperatorStartX;
- (void)setSeperatorStartX:(double)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)userItem;
- (void)setUserItem:(id)arg1;
- (void).cxx_destruct;
@end

