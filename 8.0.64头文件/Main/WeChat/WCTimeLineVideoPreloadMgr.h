@interface WCTimeLineVideoPreloadMgr : NSObject
- (void)startVideoPreload:(id)arg1;
- (void)stopVideoPreload:(id)arg1;
- (BOOL)isEnableVideoPreload;
- (BOOL)isPreloadNetMatch;
- (BOOL)isPreloadTimeMatch;
- (long long)predownNetType;
- (long long)preloadPercent:(double)arg1;
- (id)preloadDisableTime;
@end
