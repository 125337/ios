@interface WAGamePerformanceProxy : NSObject <IWAGamePerformanceService>
+ (void)reportGamePerformanceItem:(id)arg1;
+ (long long)getGPUUtilizationDevice;
+ (long long)getCPUUtilizationDevice;
+ (long long)getCPUUtilization;
@end
