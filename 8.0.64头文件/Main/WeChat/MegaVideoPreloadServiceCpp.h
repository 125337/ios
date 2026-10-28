@interface MegaVideoPreloadServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoPreloadService>
+ (id)getInstance;
+ (BOOL)hasCache:(id)arg1;
- (void)preload:(id)arg1 commentScene:(int)arg2 downloadType:(int)arg3;
- (void)stopPreload;
- (void)onPreloadStatusChange:(long long)arg1 success:(BOOL)arg2;
@end
