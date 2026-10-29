@interface WWKFDBContactTable : NSObject <WCTTableCoding>
{
    BOOL _needLocation; // +0x8
    unsigned int _source; // +0xc
    NSString * _userName; // +0x10
    NSString * _appId; // +0x18
    WWKFDBContactInfo * _dbContactInfo; // +0x20
    DBContactOpenIM * _dbContactOpenIM; // +0x28
    unsigned long long _settingFlag; // +0x30
    NSString * _headImageStatus; // +0x38
    NSString * _locationType; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appId;
+ (const void *)dbContactInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_dbContactInfo;
+ (const void *)dbContactOpenIM;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_dbContactOpenIM;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_source;
+ (const void *)settingFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_settingFlag;
+ (const void *)headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_headImageStatus;
+ (const void *)needLocation;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_needLocation;
+ (const void *)locationType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_locationType;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)dbContactInfo;
- (void)setDbContactInfo:(id)arg1;
- (id)dbContactOpenIM;
- (void)setDbContactOpenIM:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned long long)settingFlag;
- (void)setSettingFlag:(unsigned long long)arg1;
- (id)headImageStatus;
- (void)setHeadImageStatus:(id)arg1;
- (BOOL)needLocation;
- (void)setNeedLocation:(BOOL)arg1;
- (id)locationType;
- (void)setLocationType:(id)arg1;
- (void).cxx_destruct;
@end

