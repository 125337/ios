@interface GCLiteAppConfigDbModel : NSObject <WCTTableCoding>
{
    BOOL _hasLiteConf; // +0x8
    unsigned int _expireDuration; // +0xc
    unsigned int _refreshDuration; // +0x10
    NSString * _url; // +0x18
    NSString * _appid; // +0x20
    NSString * _path; // +0x28
    NSString * _pkgId; // +0x30
    double _updateTime; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_url;
+ (const void *)hasLiteConf;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_hasLiteConf;
+ (const void *)appid;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appid;
+ (const void *)path;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_path;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_pkgId;
+ (const void *)expireDuration;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_expireDuration;
+ (const void *)refreshDuration;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_refreshDuration;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (BOOL)isExpired;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)hasLiteConf;
- (void)setHasLiteConf:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (unsigned int)expireDuration;
- (void)setExpireDuration:(unsigned int)arg1;
- (unsigned int)refreshDuration;
- (void)setRefreshDuration:(unsigned int)arg1;
- (double)updateTime;
- (void)setUpdateTime:(double)arg1;
- (void).cxx_destruct;
@end

