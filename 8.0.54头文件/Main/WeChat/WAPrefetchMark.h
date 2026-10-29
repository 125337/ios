@interface WAPrefetchMark : NSObject <PBCoding>
{
    unsigned int _reportKey; // +0x8
    unsigned int _packageType; // +0xc
    NSString * _username; // +0x10
    unsigned long long _appVersion; // +0x18
    NSString * _moduleName; // +0x20
    NSString * _appid; // +0x28
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_reportKey;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_appid;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithInfoData:(id)arg1;
- (id)uniqueKey;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)appVersion;
- (void)setAppVersion:(unsigned long long)arg1;
- (unsigned int)reportKey;
- (void)setReportKey:(unsigned int)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (void).cxx_destruct;
@end

