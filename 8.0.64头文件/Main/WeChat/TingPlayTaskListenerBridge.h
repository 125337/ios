@interface TingPlayTaskListenerBridge : NSObject <TingPlayerStateClient, TingPlayTaskStateListener, TingAudioFocus>
{
    id <TingPlayerStateClient><TingPlayTaskStateListener><TingAudioFocus> _delegate; // +0x8
}
- (void)onServiceChanged:(id)arg1;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1 source:(id)arg2 context:(id)arg3 reason:(int)arg4;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)setAudioFocusCallback:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
