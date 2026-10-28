@interface TingApiPlayTaskListenerBridge : UnitRCObjcBaseClass <TingApiPlayTaskListener, TingApiPlayerListener>
{
    id <TingApiPlayTaskListenerBridgeDelegate> _delegate; // +0x8
    UnitRCWeakPtr * _playTask; // +0x10
    TingPlayerContext * _playingContext; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)setup:(id)arg1;
- (void)reset;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1 source:(id)arg2 context:(id)arg3 reason:(int)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playTask;
- (void)setPlayTask:(id)arg1;
- (id)playingContext;
- (void)setPlayingContext:(id)arg1;
- (void).cxx_destruct;
@end
