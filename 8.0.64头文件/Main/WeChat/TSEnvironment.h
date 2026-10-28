@interface TSEnvironment : NSObject
+ (BOOL)isBeingDebugged;
+ (id)loadedImageNames;
+ (int)rootFlag;
+ (id)bundleIdentifier;
+ (int)buildNumber;
+ (void)checkIfWDAIsRunningWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
+ (BOOL)WDAIsRunning;
+ (unsigned long long)chargingState;
+ (id)IDFA;
+ (id)IMEI;
+ (id)vendorIdentifier;
+ (id)model;
+ (float)systemVersion;
+ (id)systemVersionString;
+ (id)bundleAppVersion;
+ (double)systemBootTime;
@end
