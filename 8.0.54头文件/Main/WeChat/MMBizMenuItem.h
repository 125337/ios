@interface MMBizMenuItem : NSObject
{
    NSString * _menuId; // +0x8
    unsigned int _menuType; // +0x10
    unsigned int _menuActionType; // +0x14
    NSString * _name; // +0x18
    NSString * _key; // +0x20
    NSString * _value; // +0x28
    NSString * _nativeUrl; // +0x30
    NSArray * _arrSubMenu; // +0x38
    unsigned long long _showIconType; // +0x40
    NSDictionary * _menuEcsData; // +0x48
}
- (id)init;
- (void)parseFromJsonDictionary:(id)arg1;
- (id)menuId;
- (void)setMenuId:(id)arg1;
- (unsigned int)menuType;
- (void)setMenuType:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)nativeUrl;
- (void)setNativeUrl:(id)arg1;
- (id)arrSubMenu;
- (void)setArrSubMenu:(id)arg1;
- (unsigned int)menuActionType;
- (void)setMenuActionType:(unsigned int)arg1;
- (unsigned long long)showIconType;
- (void)setShowIconType:(unsigned long long)arg1;
- (id)menuEcsData;
- (void)setMenuEcsData:(id)arg1;
- (void).cxx_destruct;
@end

