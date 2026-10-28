@interface FTSSearchCell : MMTableViewCell
{
    UIImageView * _searchIcon; // +0x8
    AttributeLabel * _searchLabel; // +0x10
    NSString * _showPrefix; // +0x18
    NSString * _showSuffix; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateStatus:(BOOL)arg1;
- (void)updateSearchTip:(id)arg1 suffix:(id)arg2;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
