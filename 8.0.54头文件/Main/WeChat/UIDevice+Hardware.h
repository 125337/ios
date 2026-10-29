@interface UIDevice (Hardware)
+ (id)getSysInfoByName:(char *)arg1;
+ (int)getSysInfo:(unsigned int)arg1;
- (id)platform;
- (int)cpuCount;
- (int)cpuFrequency;
- (int)busFrequency;
- (int)totalMemory;
- (int)userMemory;
- (int)cacheLine;
- (int)L1ICacheSize;
- (int)L1DCacheSize;
- (int)L2CacheSize;
- (int)L3CacheSize;
@end

