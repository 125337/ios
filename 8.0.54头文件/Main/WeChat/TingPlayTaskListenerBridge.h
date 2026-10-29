@interface TingPlayTaskListenerBridge : NSObject <TingPlayerStateClient, TingPlayTaskStateListener, TingAudioFocus>
{
    id <TingPlayerStateClient><TingPlayTaskStateListener><TingAudioFocus> _delegate; // +0x8
}
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
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(BOOL)arg3;
- (void)onInactivated:(id)arg1 update:(BOOL)arg2;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)setAudioFocusCallback:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

