@interface WAAppTaskMinimizationData : MMObject <MinimizeTaskPlayCtrlDelegate, PBCoding>
{
    BOOL _isGameAPP; // +0x8
    BOOL _favDisableForward; // +0x9
    unsigned int _favVersion; // +0xc
    unsigned int _favScene; // +0x10
    unsigned int _favSubType; // +0x14
    NSString * _username; // +0x18
    unsigned long long _debugMode; // +0x20
    NSString * _appEntryPage; // +0x28
    NSString * _appID; // +0x30
    NSString * _favIconUrl; // +0x38
    NSString * _favTitle; // +0x40
    NSString * _favThumbUrl; // +0x48
    NSString * _favMessageExtraData; // +0x50
    NSString * _favDesc; // +0x58
    NSString * _favSourceDisplayName; // +0x60
    NSString * _favDefaultLink; // +0x68
    NSString * _favPagePath; // +0x70
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_isGameAPP;
+ (void)PBArrayAdd_appEntryPage;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_favIconUrl;
+ (void)PBArrayAdd_favTitle;
+ (void)PBArrayAdd_favThumbUrl;
+ (void)PBArrayAdd_favVersion;
+ (void)PBArrayAdd_favDisableForward;
+ (void)PBArrayAdd_favScene;
+ (void)PBArrayAdd_favMessageExtraData;
+ (void)PBArrayAdd_favSubType;
+ (void)PBArrayAdd_favDesc;
+ (void)PBArrayAdd_favSourceDisplayName;
+ (void)PBArrayAdd_favDefaultLink;
+ (void)PBArrayAdd_favPagePath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)onContentViewClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)removeWindowMinimizeTask;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (BOOL)isGameAPP;
- (void)setIsGameAPP:(BOOL)arg1;
- (id)appEntryPage;
- (void)setAppEntryPage:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)favIconUrl;
- (void)setFavIconUrl:(id)arg1;
- (id)favTitle;
- (void)setFavTitle:(id)arg1;
- (id)favThumbUrl;
- (void)setFavThumbUrl:(id)arg1;
- (unsigned int)favVersion;
- (void)setFavVersion:(unsigned int)arg1;
- (BOOL)favDisableForward;
- (void)setFavDisableForward:(BOOL)arg1;
- (unsigned int)favScene;
- (void)setFavScene:(unsigned int)arg1;
- (id)favMessageExtraData;
- (void)setFavMessageExtraData:(id)arg1;
- (unsigned int)favSubType;
- (void)setFavSubType:(unsigned int)arg1;
- (id)favDesc;
- (void)setFavDesc:(id)arg1;
- (id)favSourceDisplayName;
- (void)setFavSourceDisplayName:(id)arg1;
- (id)favDefaultLink;
- (void)setFavDefaultLink:(id)arg1;
- (id)favPagePath;
- (void)setFavPagePath:(id)arg1;
- (void).cxx_destruct;
@end
