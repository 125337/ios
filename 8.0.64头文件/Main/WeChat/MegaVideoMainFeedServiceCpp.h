@interface MegaVideoMainFeedServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoMainFeedService>
+ (id)sharedInstance;
- (void)fetchData:(BOOL)arg1 ignoreCache:(BOOL)arg2 cleanUpExisting:(BOOL)arg3 callback:(id /* block */)arg4;
@end
