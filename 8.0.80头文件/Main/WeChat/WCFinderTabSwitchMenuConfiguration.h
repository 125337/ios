@interface WCFinderTabSwitchMenuConfiguration : NSObject
{
    NSArray * _items; // +0x8
    long long _indicatorDisplayMode; // +0x10
    NSObject * _selectedIdentifier; // +0x18
    double _menuWidth; // +0x20
    double _itemCornerRadius; // +0x28
    double _menuContainerCornerRadius; // +0x30
    long long _textAlignment; // +0x38
}
- (id)init;
- (id)items;
- (void)setItems:(id)arg1;
- (long long)indicatorDisplayMode;
- (void)setIndicatorDisplayMode:(long long)arg1;
- (id)selectedIdentifier;
- (void)setSelectedIdentifier:(id)arg1;
- (double)menuWidth;
- (void)setMenuWidth:(double)arg1;
- (double)itemCornerRadius;
- (void)setItemCornerRadius:(double)arg1;
- (double)menuContainerCornerRadius;
- (void)setMenuContainerCornerRadius:(double)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (void).cxx_destruct;
@end
