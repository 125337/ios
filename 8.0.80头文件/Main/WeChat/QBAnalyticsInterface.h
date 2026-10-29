@interface QBAnalyticsInterface : NSObject
+ (void)initAnalytics;
+ (void)reportURL:(id)arg1;
+ (BOOL)doReport:(id)arg1 isSucceed:(BOOL)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
@end
