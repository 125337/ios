@interface SystemAuthBizInfo : NSObject
{
     scene; // +0x8
}
+ (void)overSeaUserSwitchCheck;
- (unsigned long long)scene;
- (id)initWithScene:(unsigned long long)arg1;
- (id)title;
- (BOOL)isAuthorizedFor:(unsigned int)arg1;
- (void)setAuthStateFor:(unsigned int)arg1 isOn:(BOOL)arg2;
- (unsigned long long)bitStorageFor:(unsigned int)arg1;
- (id)localizedSimpleDescriptionFor:(unsigned int)arg1;
- (id)localizedSettingDescriptionFor:(unsigned int)arg1;
- (BOOL)entranceEnabled;
- (BOOL)isIngnoreScene;
- (id)init;
@end
