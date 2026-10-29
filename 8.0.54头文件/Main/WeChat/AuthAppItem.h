@interface AuthAppItem : NSObject <PBCoding>
{
    int _appSettingFlag; // +0x8
    NSString * _appID; // +0x10
    NSString * _appIconURL; // +0x18
    NSString * _appTypeList; // +0x20
    NSString * _appName; // +0x28
    NSString * _devInfo; // +0x30
    NSString * _authInfo; // +0x38
    NSString * _extInfo; // +0x40
}
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appIconURL;
+ (void)PBArrayAdd_appTypeList;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appSettingFlag;
+ (void)PBArrayAdd_devInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appIconURL;
- (void)setAppIconURL:(id)arg1;
- (id)appTypeList;
- (void)setAppTypeList:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (int)appSettingFlag;
- (void)setAppSettingFlag:(int)arg1;
- (id)devInfo;
- (void)setDevInfo:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

