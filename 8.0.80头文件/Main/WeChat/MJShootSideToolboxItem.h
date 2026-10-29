@interface MJShootSideToolboxItem : NSObject
{
    unsigned long long _itemType; // +0x8
    NSString * _iconName; // +0x10
    NSString * _title; // +0x18
    NSString * _currentDesc; // +0x20
    NSString * _accessibilityLabel; // +0x28
}
- (id)initWithItemType:(unsigned long long)arg1 iconName:(id)arg2 title:(id)arg3 currentDesc:(id)arg4 accessibilityLabel:(id)arg5;
- (unsigned long long)itemType;
- (id)iconName;
- (id)title;
- (id)currentDesc;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end
