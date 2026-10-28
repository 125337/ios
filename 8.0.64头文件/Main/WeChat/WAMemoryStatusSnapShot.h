@interface WAMemoryStatusSnapShot : NSObject
{
    long long _totalPhysicalMemorySizeInBytes; // +0x8
    long long _roundedTotalPhysicalMemorySizeInBytes; // +0x10
    long long _footPrintMemorySizeInBytes; // +0x18
    long long _residentMemorySizeInBytes; // +0x20
    long long _freeMemorySizeInBytes; // +0x28
    double _footPrintPercent; // +0x30
    double _freePercent; // +0x38
}
- (long long)totalPhysicalMemorySizeInBytes;
- (void)setTotalPhysicalMemorySizeInBytes:(long long)arg1;
- (long long)roundedTotalPhysicalMemorySizeInBytes;
- (void)setRoundedTotalPhysicalMemorySizeInBytes:(long long)arg1;
- (long long)footPrintMemorySizeInBytes;
- (void)setFootPrintMemorySizeInBytes:(long long)arg1;
- (long long)residentMemorySizeInBytes;
- (void)setResidentMemorySizeInBytes:(long long)arg1;
- (long long)freeMemorySizeInBytes;
- (void)setFreeMemorySizeInBytes:(long long)arg1;
- (double)footPrintPercent;
- (void)setFootPrintPercent:(double)arg1;
- (double)freePercent;
- (void)setFreePercent:(double)arg1;
@end
