@interface WAReportPrefetchGetCodePkgHitItem : WAReportBaseItem
{
    unsigned int _isFirstHit; // +0x8
    unsigned int _reportId; // +0xc
    unsigned int _packageType; // +0x10
    NSString * _moduleName; // +0x18
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)isFirstHit;
- (void)setIsFirstHit:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (void).cxx_destruct;
@end

