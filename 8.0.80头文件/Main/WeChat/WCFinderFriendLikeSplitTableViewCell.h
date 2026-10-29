@interface WCFinderFriendLikeSplitTableViewCell : UITableViewCell
{
    UILabel * _splitLabel; // +0x8
    UIView * _leftLine; // +0x10
    UIView * _rightLine; // +0x18
}
+ (double)splitTableViewCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUPUI;
- (void)layoutSubviews;
- (id)splitLabel;
- (void)setSplitLabel:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (void).cxx_destruct;
@end
