@interface MMFinderLiveShopShelfMetricsReporter : NSObject
+ (void)reportShelfOpenedWithImpl:(unsigned long long)arg1;
+ (void)reportShelfClosedWithImpl:(unsigned long long)arg1;
+ (void)reportAbtDecisionHitFlutter:(BOOL)arg1;
+ (void)reportDegradeWithKey:(unsigned long long)arg1;
+ (void)_reportKey:(unsigned long long)arg1 value:(unsigned int)arg2;
@end
