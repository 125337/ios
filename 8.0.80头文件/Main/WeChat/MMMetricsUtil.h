@interface MMMetricsUtil : NSObject
+ (double)currentTimeSince1970;
+ (id)currentThreadStack:(BOOL)arg1 skipFrames:(unsigned int)arg2;
+ (id)dumpThreadInfos:(double)arg1 minCPUUsageToDump:(double)arg2 outAppCPUUsage:(float *)arg3;
+ (float)averageAppCPUUsageByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (float)averageDeviceCPUUsageByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (id)averageGPUUtilizationByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (unsigned long long)averageFootprintMemoryByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (id)totalDeviceNetworkUsageByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (BOOL)isMatchByRatio:(double)arg1;
@end
