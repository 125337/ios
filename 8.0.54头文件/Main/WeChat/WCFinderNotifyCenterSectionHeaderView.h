@interface WCFinderNotifyCenterSectionHeaderView : UITableViewHeaderFooterView
{
    NSString * _title; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
+ (double)descriptionTableViewCellHeight;
+ (double)descriptionTableViewCellHeight:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)titleLabel;
- (void)setupUI;
- (void)setTitle:(id)arg1;
- (void)updateTitle:(id)arg1 style:(unsigned long long)arg2;
- (id)title;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

