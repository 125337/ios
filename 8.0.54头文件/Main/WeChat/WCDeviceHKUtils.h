@interface WCDeviceHKUtils : NSObject
+ (id)pathForHKSourceWhiteCache;
+ (id)getHKSourcePropertyPT;
+ (id)getHKSourcePropertyLD;
+ (BOOL)isOpenWatchDataUpload;
+ (id)getNeedAuthTypes;
+ (id)loadHKSourceWhiteCache;
+ (BOOL)saveHKSourceWhiteCache:(id)arg1;
+ (void)requestAuthorizationWithTypes:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestAllAuthIfNeed:(id /* block */)arg1;
+ (BOOL)didShowAuthStepCount;
+ (BOOL)didShowAuthWorkout;
+ (BOOL)didShowAuthActivitySummary;
+ (id)getWorkoutActivityTypes;
@end

