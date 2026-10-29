@interface WCAppAuthAppMetaInfo : MMObject <PBCoding>
{
    unsigned int _appType; // +0x8
    NSString * _appId; // +0x10
    NSString * _appName; // +0x18
    NSString * _appTypeDesc; // +0x20
    NSString * _appIconUrl; // +0x28
    NSString * _wordingInScope; // +0x30
}
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appTypeDesc;
+ (void)PBArrayAdd_appType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appTypeDesc;
- (void)setAppTypeDesc:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)wordingInScope;
- (void)setWordingInScope:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

