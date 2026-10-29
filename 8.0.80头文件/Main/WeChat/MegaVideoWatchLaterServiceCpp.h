@interface MegaVideoWatchLaterServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoWatchLaterService>
+ (id)sharedInstance;
- (void)fetchData:(BOOL)arg1 ignoreCache:(BOOL)arg2 cleanUpExisting:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)modifyFeedWatchLaterStatus:(id)arg1 params:(id)arg2 commentScene:(int)arg3 callback:(id /* block */)arg4;
- (void)localFeeds:(int)arg1 callback:(id /* block */)arg2;
- (id)localFeed:(id)arg1;
- (BOOL)isInLocalFeeds:(id)arg1;
- (void)clearAllLocalFeeds;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
@end
