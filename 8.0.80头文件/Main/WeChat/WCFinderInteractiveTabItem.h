@interface WCFinderInteractiveTabItem : NSObject
{
    int _searchTabType; // +0x8
    long long _tabType; // +0x10
    NSString * _title; // +0x18
    NSString * _iconName; // +0x20
    NSString * _selectedIconName; // +0x28
    NSString * _accessibilityLabel; // +0x30
    unsigned long long _pageId; // +0x38
    NSString * _reportPageName; // +0x40
}
+ (id)makeItemWithType:(long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)selectedIconName;
- (void)setSelectedIconName:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (id)reportPageName;
- (void)setReportPageName:(id)arg1;
- (int)searchTabType;
- (void)setSearchTabType:(int)arg1;
- (void).cxx_destruct;
@end
