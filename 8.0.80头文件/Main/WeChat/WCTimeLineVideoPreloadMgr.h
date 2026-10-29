@interface WCTimeLineVideoPreloadMgr : NSObject
- (BOOL)canPreloadVideo;
- (void)startVideoPreload:(id)arg1;
- (void)stopVideoPreload:(id)arg1;
- (BOOL)isEnableVideoPreload;
- (BOOL)isPreloadNetMatch;
- (BOOL)isPreloadTimeMatch;
- (long long)predownNetType;
- (long long)preloadPercent:(double)arg1;
- (id)preloadDisableTime;
- (void)preCreatePlayerForItems:(id)arg1;
- (void)stopPreloadPlayers;
@end
