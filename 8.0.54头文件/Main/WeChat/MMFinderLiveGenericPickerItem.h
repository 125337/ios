@interface MMFinderLiveGenericPickerItem : NSObject
{
    NSString * _name; // +0x8
    NSString * _iconName; // +0x10
    UIColor * _iconColor; // +0x18
    id _userInfo; // +0x20
}
+ (id)itemWithName:(id)arg1 icon:(id)arg2 iconColor:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

