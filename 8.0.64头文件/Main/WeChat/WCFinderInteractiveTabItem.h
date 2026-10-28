@interface WCFinderInteractiveTabItem : NSObject
{
    long long _tabType; // +0x8
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
    NSString * _selectedIconName; // +0x20
    NSString * _accessibilityLabel; // +0x28
    unsigned long long _pageId; // +0x30
    NSString * _reportPageName; // +0x38
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
- (void).cxx_destruct;
@end
