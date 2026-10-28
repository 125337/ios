@interface WAPackageSweeperAppExpiredInfoDataScanResult : NSObject
{
    unsigned long long _totalExpiredPackageSize; // +0x8
    NSArray * _arrExpiredPackageFilePaths; // +0x10
    WAInfoData * _expiredFullInfoData; // +0x18
    NSMutableArray * _arrExpiredModuleInfoData; // +0x20
}
- (unsigned long long)totalExpiredPackageSize;
- (void)setTotalExpiredPackageSize:(unsigned long long)arg1;
- (id)arrExpiredPackageFilePaths;
- (void)setArrExpiredPackageFilePaths:(id)arg1;
- (id)expiredFullInfoData;
- (void)setExpiredFullInfoData:(id)arg1;
- (id)arrExpiredModuleInfoData;
- (void)setArrExpiredModuleInfoData:(id)arg1;
- (void).cxx_destruct;
@end
