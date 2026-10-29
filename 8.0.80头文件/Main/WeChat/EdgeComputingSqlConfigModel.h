@interface EdgeComputingSqlConfigModel : MMObject <PBCoding, NSCopying>
{
    unsigned int _reportID; // +0x8
    unsigned int _reportMethod; // +0xc
    NSString * _configID; // +0x10
    NSString * _sql; // +0x18
    NSString * _sqlURL; // +0x20
    NSString * _dbPath; // +0x28
    NSString * _originalJson; // +0x30
    NSString * _sqlMD5; // +0x38
}
+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_sql;
+ (void)PBArrayAdd_dbPath;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_sqlMD5;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_sqlURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (id)configID;
- (void)setConfigID:(id)arg1;
- (unsigned int)reportID;
- (void)setReportID:(unsigned int)arg1;
- (unsigned int)reportMethod;
- (void)setReportMethod:(unsigned int)arg1;
- (id)sql;
- (void)setSql:(id)arg1;
- (id)sqlURL;
- (void)setSqlURL:(id)arg1;
- (id)dbPath;
- (void)setDbPath:(id)arg1;
- (id)originalJson;
- (void)setOriginalJson:(id)arg1;
- (id)sqlMD5;
- (void)setSqlMD5:(id)arg1;
- (void).cxx_destruct;
@end
