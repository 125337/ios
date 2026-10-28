@interface FTSMinimizeTaskCell : MMTableViewCell
{
    MinimizeTaskData * _searchItem; // +0x8
    NSMutableArray * _arrKeyword; // +0x10
    NSString * _searchText; // +0x18
    AttributeLabel * _titleLabel; // +0x20
    AttributeLabel * _descLabel; // +0x28
    AttributeLabel * _detailLabel; // +0x30
    UIView * _thumbImageView; // +0x38
    UIImageView * _iconImageView; // +0x40
    BOOL _isVideoPlay; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateSearchItem:(id)arg1 arrKeyword:(id)arg2 iconImage:(id)arg3 isVideoPlay:(BOOL)arg4 searchText:(id)arg5;
- (void)updateStatus:(BOOL)arg1;
- (void)setLineSpaceForLabel:(id)arg1;
- (id)genDisplayImageView;
- (id)getPlayVideoIConView;
- (void).cxx_destruct;
@end
