@interface WAReportPackageReuseInfo : WAReportBaseItem
{
    unsigned int _packageType; // +0x8
    NSString * _packageMd5; // +0x10
    NSString * _moduleName; // +0x18
    unsigned long long _reuseType; // +0x20
    NSString * _reuseReason; // +0x28
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)packageMd5;
- (void)setPackageMd5:(id)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (unsigned long long)reuseType;
- (void)setReuseType:(unsigned long long)arg1;
- (id)reuseReason;
- (void)setReuseReason:(id)arg1;
- (void).cxx_destruct;
@end
