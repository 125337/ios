@interface EdgeComputingUtils : MMObject
+ (id)sharedSerialQueue;
+ (id)sharedConcurrentQueue;
+ (BOOL)isDebugMode;
+ (BOOL)isDebug;
+ (BOOL)isOpenEdgeComputing;
+ (unsigned long long)getTimeZoneRawOffset;
+ (id)getDefaultMMKV;
+ (id)getCacheMMKV;
+ (id)getInstantCacheMMKV;
+ (id)getConfigMMKV;
+ (id)getBreakerMMKV;
+ (id)getRunRecordMMKV;
+ (id)getRealtimeReportMMKV;
@end
