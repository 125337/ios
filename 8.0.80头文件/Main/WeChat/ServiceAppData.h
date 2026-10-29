@interface ServiceAppData : MMObject <PBCoding>
{
    NSString * _appID; // +0x8
    NSString * _appName; // +0x10
    NSString * _appNameEn; // +0x18
    NSString * _appNameTW; // +0x20
    NSString * _appNameHK; // +0x28
    NSString * _appIconUrlAttView; // +0x30
    NSString * _appIconUrlListView; // +0x38
    NSString * _appForwardUrl; // +0x40
    unsigned int _appType; // +0x48
    unsigned int _appInfoFlag; // +0x4c
    unsigned int _appJumpType; // +0x50
    unsigned int _appShowFlag; // +0x54
    BOOL _appNotShowNew; // +0x58
}
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appNameEn;
+ (void)PBArrayAdd_appNameTW;
+ (void)PBArrayAdd_appIconUrlAttView;
+ (void)PBArrayAdd_appForwardUrl;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_appInfoFlag;
+ (void)PBArrayAdd_appIconUrlListView;
+ (void)PBArrayAdd_appNotShowNew;
+ (void)PBArrayAdd_appJumpType;
+ (void)PBArrayAdd_appShowFlag;
+ (void)PBArrayAdd_appNameHK;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appNameEn;
- (void)setAppNameEn:(id)arg1;
- (id)appNameTW;
- (void)setAppNameTW:(id)arg1;
- (id)appNameHK;
- (void)setAppNameHK:(id)arg1;
- (id)appIconUrlAttView;
- (void)setAppIconUrlAttView:(id)arg1;
- (id)appIconUrlListView;
- (void)setAppIconUrlListView:(id)arg1;
- (id)appForwardUrl;
- (void)setAppForwardUrl:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)appInfoFlag;
- (void)setAppInfoFlag:(unsigned int)arg1;
- (BOOL)appNotShowNew;
- (void)setAppNotShowNew:(BOOL)arg1;
- (unsigned int)appJumpType;
- (void)setAppJumpType:(unsigned int)arg1;
- (unsigned int)appShowFlag;
- (void)setAppShowFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
