@interface TingPlayAppCpp : UnitRCObjcBaseProxyClass <TingPlayApp>
+ (id)create:(int)arg1 appName:(id)arg2 player:(id)arg3 miniHelper:(id)arg4 nowplayingHelper:(id)arg5;
- (id)getPlayTask;
- (int)getAppId;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (unsigned long long)lastTerminateTimeStamp;
- (id)lastPlayedTape;
- (id)getPlatformPlayerObj;
- (void)onAppTerminate;
- (void)onServiceChanged:(id)arg1;
- (void)onPlayTaskServiceWillPop:(id)arg1;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(id)arg2;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskEvent:(int)arg1 currentState:(int)arg2 previousState:(int)arg3 message:(id)arg4;
@end

