@interface WCFinderLongPressModel : NSObject
{
    unsigned long long _menuItemType; // +0x8
    id _target; // +0x10
    SEL _selector; // +0x18
    id /* block */ _handle; // +0x20
    id _userInfo; // +0x28
}
+ (id)menuItem:(unsigned long long)arg1 handle:(id /* block */)arg2;
- (id)initWithType:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (unsigned long long)menuItemType;
- (void)setMenuItemType:(unsigned long long)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id /* block */)handle;
- (void)setHandle:(id /* block */)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
