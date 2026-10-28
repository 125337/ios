@interface WXVoIPSystemUtil : NSObject
+ (id)getSystemVersion;
+ (BOOL)isVersionGreaterThan:(id)arg1;
+ (BOOL)isVersionLessThan:(id)arg1;
+ (BOOL)isVersionNoGreaterThan:(id)arg1;
+ (BOOL)isVersionNoLessThan:(id)arg1;
+ (float)getAppMemoryUsage;
+ (id)deviceModelVersion;
+ (BOOL)isLowPerformanceDevice;
@end
