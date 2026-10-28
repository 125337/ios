@interface WCFinderSearchHistoryMoreTableViewCell : UITableViewCell
{
    UILabel * _label; // +0x8
    UIImageView * _iconView; // +0x10
    unsigned long long _cellType; // +0x18
}
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)layoutSubviews;
- (void)updateCellType:(unsigned long long)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
