@interface WCFinderCommentSortCell : UITableViewCell
{
    UILabel * _sortLabel; // +0x8
    UIImageView * _selectedView; // +0x10
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 isSelected:(BOOL)arg2;
- (id)sortLabel;
- (void)setSortLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (void).cxx_destruct;
@end
