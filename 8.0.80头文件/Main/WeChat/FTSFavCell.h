@interface FTSFavCell : MMTableViewCell
{
    FTSFavSearchResultItem * _searchItem; // +0x8
    NSMutableArray * _arrKeyword; // +0x10
    NSString * _searchText; // +0x18
    AttributeLabel * _titleLabel; // +0x20
    AttributeLabel * _descLabel; // +0x28
    AttributeLabel * _detailLabel; // +0x30
    UIView * _thumbImageView; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateFavSearchItem:(id)arg1 arrKeyword:(id)arg2 searchText:(id)arg3;
- (void)updateStatus:(BOOL)arg1;
- (void)setLineSpaceForLabel:(id)arg1;
- (void).cxx_destruct;
@end
