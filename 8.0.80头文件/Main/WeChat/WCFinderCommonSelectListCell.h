@interface WCFinderCommonSelectListCell : UITableViewCell
{
    UILabel * _sortLabel; // +0x8
    UILabel * _selectedDescLabel; // +0x10
    UIImageView * _selectedView; // +0x18
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1 isSelected:(BOOL)arg2;
- (id)sortLabel;
- (void)setSortLabel:(id)arg1;
- (id)selectedDescLabel;
- (void)setSelectedDescLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (void).cxx_destruct;
@end
