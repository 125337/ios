@interface MMDiskCommonUsageScanner : NSObject
{
    unsigned int _totalKiloSize; // +0x8
    unsigned int _totalDelKiloSize; // +0xc
    unsigned int _totalTime; // +0x10
    unsigned long long _totalSizeBytes; // +0x18
    unsigned long long _totalDelSizeBytes; // +0x20
}
+ (unsigned long long)fileTimeFromTimeType:(long long)arg1;
+ (unsigned long long)getMatchTime:(id)arg1 withConfig:(id)arg2;
+ (id)getNextFolderConfig:(id)arg1 usageConfig:(id)arg2;
+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
- (void)scanFolderBeginWithParentPath:(id)arg1 usageConfig:(id)arg2 depth:(unsigned long long)arg3;
- (void)startScanWithRootPath:(id)arg1 usageConfig:(id)arg2;
- (unsigned int)totalKiloSize;
- (void)setTotalKiloSize:(unsigned int)arg1;
- (unsigned int)totalDelKiloSize;
- (void)setTotalDelKiloSize:(unsigned int)arg1;
- (unsigned int)totalTime;
- (void)setTotalTime:(unsigned int)arg1;
- (unsigned long long)totalSizeBytes;
- (void)setTotalSizeBytes:(unsigned long long)arg1;
- (unsigned long long)totalDelSizeBytes;
- (void)setTotalDelSizeBytes:(unsigned long long)arg1;
@end

