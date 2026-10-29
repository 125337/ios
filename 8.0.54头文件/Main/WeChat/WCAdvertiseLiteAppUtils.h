@interface WCAdvertiseLiteAppUtils : NSObject
+ (BOOL)isLiteAppValid:(id)arg1;
+ (void)checkAdLiteAppPackageUpdate:(id)arg1;
+ (void)checkAdLiteAppPackageUpdate:(id)arg1 forceUpdate:(BOOL)arg2;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNormal;
+ (long long)fetchTimelineAdLiteAppPkgUpdateIntervalNoPkg;
+ (BOOL)jumpLiteApp:(id)arg1 page:(id)arg2 query:(id)arg3;
+ (id)createLiteAppViewController:(id)arg1 page:(id)arg2 query:(id)arg3;
+ (void)asyncCreateLiteAppViewController:(id)arg1 completeBlock:(id /* block */)arg2;
+ (BOOL)checkAdLiteAppABTestOn:(id)arg1;
+ (void)reportIdKey:(id)arg1 reportStep:(unsigned int)arg2;
+ (id)getLiteAppPackageVersion:(id)arg1;
@end

