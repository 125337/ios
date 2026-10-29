@interface EdgeComputingScriptConfigModel : MMObject <PBCoding, NSCopying>
{
    unsigned int _dataSourceType; // +0x8
    unsigned int _dataSourceID; // +0xc
    unsigned int _reportID; // +0x10
    unsigned int _isInstantReport; // +0x14
    unsigned int _reportMethod; // +0x18
    unsigned int _dbExpireTime; // +0x1c
    unsigned int _runPeriod; // +0x20
    unsigned int _isRepeat; // +0x24
    NSString * _configID; // +0x28
    NSArray * _fieldConfigModels; // +0x30
    NSString * _scriptURL; // +0x38
    NSString * _script; // +0x40
    NSString * _originalJson; // +0x48
    NSString * _scriptMD5; // +0x50
}
+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_dataSourceType;
+ (void)PBArrayAdd_dataSourceID;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_fieldConfigModels;
+ (void)PBArrayAdd_isInstantReport;
+ (void)PBArrayAdd_dbExpireTime;
+ (void)PBArrayAdd_script;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_runPeriod;
+ (void)PBArrayAdd_isRepeat;
+ (void)PBArrayAdd_scriptMD5;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_scriptURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (id)configID;
- (void)setConfigID:(id)arg1;
- (unsigned int)dataSourceType;
- (void)setDataSourceType:(unsigned int)arg1;
- (unsigned int)dataSourceID;
- (void)setDataSourceID:(unsigned int)arg1;
- (unsigned int)reportID;
- (void)setReportID:(unsigned int)arg1;
- (id)fieldConfigModels;
- (void)setFieldConfigModels:(id)arg1;
- (unsigned int)isInstantReport;
- (void)setIsInstantReport:(unsigned int)arg1;
- (unsigned int)reportMethod;
- (void)setReportMethod:(unsigned int)arg1;
- (unsigned int)dbExpireTime;
- (void)setDbExpireTime:(unsigned int)arg1;
- (id)scriptURL;
- (void)setScriptURL:(id)arg1;
- (id)script;
- (void)setScript:(id)arg1;
- (id)originalJson;
- (void)setOriginalJson:(id)arg1;
- (unsigned int)runPeriod;
- (void)setRunPeriod:(unsigned int)arg1;
- (unsigned int)isRepeat;
- (void)setIsRepeat:(unsigned int)arg1;
- (id)scriptMD5;
- (void)setScriptMD5:(id)arg1;
- (void).cxx_destruct;
@end
