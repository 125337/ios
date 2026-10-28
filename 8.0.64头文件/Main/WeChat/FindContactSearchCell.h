@interface FindContactSearchCell : MMTableViewCell
{
    NSString * _searchText; // +0x8
    NSString * _displayName; // +0x10
    NSString * _detail; // +0x18
    UIImage * _headImage; // +0x20
    MMHeadImageView * _headImageView; // +0x28
    UIImageView * _imageView; // +0x30
    AttributeLabel * _displayNameLabel; // +0x38
    AttributeLabel * _detailLabel; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateStatus:(BOOL)arg1;
- (void)updateWithImage:(id)arg1 displayName:(id)arg2 detail:(id)arg3 searchText:(id)arg4;
- (void)updateSearchCellWithSearchText:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (void).cxx_destruct;
@end
