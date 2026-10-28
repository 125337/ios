@interface WAFlutterEngineProxy : NSObject <IWAFlutterEngineService>
+ (id)sharedService;
- (id)init;
- (id)ensureEngineGroup;
- (id)makeEngine:(id)arg1 routeJson:(id)arg2 isolatedFontCollection:(BOOL)arg3;
- (void)destroyEngine:(id)arg1;
- (void)increaseGroupUserCount;
- (void)decreaseGroupUserCount;
- (id)group;
@end
