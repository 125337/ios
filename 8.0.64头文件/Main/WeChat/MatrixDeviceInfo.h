@interface MatrixDeviceInfo : NSObject
+ (BOOL)isiPad;
+ (id)SystemNameForDeviceType;
+ (id)getDeviceType;
+ (id)getSysInfoByName:(char *)arg1;
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)systemName;
+ (id)systemVersion;
+ (id)model;
+ (id)platform;
+ (int)cpuCount;
+ (int)cpuFrequency;
+ (unsigned long long)cpuCurrFrequency;
+ (float)cpuUsage;
+ (float)appCpuUsage;
+ (int)busFrequency;
+ (int)totalMemory;
+ (int)userMemory;
+ (int)cacheLine;
+ (int)L1ICacheSize;
+ (int)L1DCacheSize;
+ (int)L2CacheSize;
+ (int)L3CacheSize;
+ (BOOL)isBeingDebugged;
@end
