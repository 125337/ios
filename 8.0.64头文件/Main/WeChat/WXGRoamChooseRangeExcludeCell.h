@interface WXGRoamChooseRangeExcludeCell : UITableViewCell
{
    UIButton * _leftButton; // +0x8
    UIButton * _rightButton; // +0x10
    UIImageView * _headIcon; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _seperator; // +0x28
    long long _cellRangeIndex; // +0x30
    unsigned long long _cellType; // +0x38
    id /* block */ _reloadBlock; // +0x40
}
+ (double)cellHeight;
+ (double)cellHeightUsers;
- (void)setCellWidth:(double)arg1 type:(unsigned long long)arg2 cellRangeIndex:(long long)arg3;
- (void)deleteCell;
- (void)onDetail;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)headIcon;
- (void)setHeadIcon:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (long long)cellRangeIndex;
- (void)setCellRangeIndex:(long long)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id /* block */)reloadBlock;
- (void)setReloadBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
