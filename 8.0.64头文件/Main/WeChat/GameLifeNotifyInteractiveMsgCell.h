@interface GameLifeNotifyInteractiveMsgCell : MMTableViewCell
{
    BOOL _addSeperator; // +0x8
    int _showType; // +0xc
    UIView * _separator; // +0x10
    MMBadgeView * _badgeView; // +0x18
    UILabel * _desc; // +0x20
    unsigned int _unReadCount; // +0x28
    GameCenterBaseMsg * _msg; // +0x30
    UIImageView * _avatarView; // +0x38
    UIView * _titleView; // +0x40
    UIImageView * _arrowView; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 addSeperator:(BOOL)arg3 msgShowType:(int)arg4;
- (void)setupView;
- (void)layoutSubviews;
- (void)updateCellDataWithBaseMsg:(id)arg1 unReadCount:(unsigned int)arg2;
- (BOOL)isInteractCell;
- (void)layoutBadgeView;
- (void)updateBadgeView;
- (void)updateDescText;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
