@interface WCFinderTLNavTabsViewConfig : NSObject
{
    NSString * _title; // +0x8
    NSString * _accessibilityLabel; // +0x10
    long long _category; // +0x18
    long long _imageStyle; // +0x20
    NSString * _selectedIconName; // +0x28
    NSString * _normalIconName; // +0x30
    long long _refreshStyle; // +0x38
    long long _tabType; // +0x40
}
- (id)initWithTitle:(id)arg1 accessibilityLabel:(id)arg2 tabType:(long long)arg3;
- (id)configTagWithImageStyle:(long long)arg1 normalIconName:(id)arg2 selectedIconName:(id)arg3;
- (id)configTagWithImageStyle:(long long)arg1 refreshStyle:(long long)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (long long)category;
- (long long)imageStyle;
- (void)setImageStyle:(long long)arg1;
- (id)selectedIconName;
- (void)setSelectedIconName:(id)arg1;
- (id)normalIconName;
- (void)setNormalIconName:(id)arg1;
- (long long)refreshStyle;
- (void)setRefreshStyle:(long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (void).cxx_destruct;
@end
