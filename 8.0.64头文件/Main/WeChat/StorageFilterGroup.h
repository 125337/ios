@interface StorageFilterGroup : NSObject
{
    NSString * _title; // +0x8
    NSMutableArray * _filters; // +0x10
    long long _selected; // +0x18
    long long _groupId; // +0x20
    NSMutableArray * _rowHeight; // +0x28
}
+ (id)makeFromSort:(id)arg1;
+ (id)makeFromFilterGroups:(id)arg1 filters:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (long long)selected;
- (void)setSelected:(long long)arg1;
- (long long)groupId;
- (void)setGroupId:(long long)arg1;
- (id)rowHeight;
- (void)setRowHeight:(id)arg1;
- (void).cxx_destruct;
@end
