@interface WCFinderUniversalPlayerUtil : NSObject
+ (void)asyncGetMediaWrapWithJSON:(id)arg1 scene:(int)arg2 complectionBlock:(id /* block */)arg3 errorCallBcakBlock:(id /* block */)arg4;
+ (id)requestIDWithInfo:(id)arg1;
+ (void)preloadMediaWithJSON:(id)arg1 scene:(int)arg2;
+ (long long)refreshInterval;
+ (void)setRefreshInterval:(long long)arg1;
@end

