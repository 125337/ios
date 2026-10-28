@interface MMLiteAppMetricsInfo : NSObject
{
    long long _appPhysicalMemory; // +0x8
    long long _appAvailableMemory; // +0x10
    long long _appFootprintMemory; // +0x18
}
+ (id)LiteAppMetricsInfoWithAppPhysicalMemory:(long long)arg1 appAvailableMemory:(long long)arg2 appFootprintMemory:(long long)arg3;
- (id)initWithAppPhysicalMemory:(long long)arg1 appAvailableMemory:(long long)arg2 appFootprintMemory:(long long)arg3;
- (id)description;
- (long long)appPhysicalMemory;
- (long long)appAvailableMemory;
- (long long)appFootprintMemory;
@end
