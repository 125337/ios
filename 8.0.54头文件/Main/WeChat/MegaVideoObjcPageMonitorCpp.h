@interface MegaVideoObjcPageMonitorCpp : UnitRCObjcBaseProxyClass <MegaVideoObjcPageMonitor>
+ (void)onStart;
+ (void)onGlobalAction:(int)arg1 pageId:(long long)arg2 pageType:(int)arg3 enterType:(int)arg4 extra:(id)arg5;
+ (void)onCommonAction:(id)arg1;
+ (long long)getStartTime;
+ (id)createInstance;
- (void)init:(id)arg1 startTime:(long long)arg2 pageId:(long long)arg3 pageType:(int)arg4 enterType:(int)arg5;
- (void)updateEnterType:(int)arg1;
- (void)updateMaxHorizontalScrollIndex:(int)arg1;
- (void)onPageStateChange:(int)arg1;
- (void)onAction:(int)arg1;
- (void)onViewAction:(int)arg1 viewId:(id)arg2;
- (void)onViewExpose:(id)arg1 exposeIndex:(int)arg2;
- (void)useCache:(id)arg1;
- (void)onCgiRequest:(id)arg1 requestType:(int)arg2;
- (void)onCgiBack:(id)arg1 success:(BOOL)arg2 cgiTimeCost:(int)arg3 requestType:(int)arg4;
@end

