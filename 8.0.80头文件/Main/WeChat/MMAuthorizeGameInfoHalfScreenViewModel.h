@interface MMAuthorizeGameInfoHalfScreenViewModel : NSObject
{
    unsigned long long _indexOfOuterTableView; // +0x8
    NSString * _title; // +0x10
    NSArray * _itemStatusList; // +0x18
    unsigned long long _selectedIndex; // +0x20
}
- (unsigned long long)indexOfOuterTableView;
- (void)setIndexOfOuterTableView:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)itemStatusList;
- (void)setItemStatusList:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
