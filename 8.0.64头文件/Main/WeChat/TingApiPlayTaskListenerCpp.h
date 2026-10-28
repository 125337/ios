@interface TingApiPlayTaskListenerCpp : UnitRCObjcBaseProxyClass <TingApiPlayTaskListener>
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1 source:(id)arg2 context:(id)arg3 reason:(int)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
@end
