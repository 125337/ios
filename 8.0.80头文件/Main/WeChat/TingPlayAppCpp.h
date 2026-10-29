@interface TingPlayAppCpp : TingApiPlayAppCpp <TingPlayApp>
+ (id)createPlayApp:(id)arg1;
- (id)getPlayTask;
- (unsigned long long)lastTerminateTimeStamp;
- (id)lastPlayedTape;
- (id)getReportService;
- (id)getNowPlayingModule;
- (id)getMinimizeModule;
- (id)getAudioFocus;
- (void)setMinimizeModule:(id)arg1;
- (void)setNowPlayingModule:(id)arg1;
- (void)setAudioFocus:(id)arg1;
- (void)onServiceChanged:(id)arg1;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1 source:(id)arg2 context:(id)arg3 reason:(int)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
@end
