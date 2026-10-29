@interface TingPlayAppNotificationBridge : UnitRCObjcBaseClass <TingApiPlayerListener, TingApiPlayTaskListener, TingPlayerStateClient, TingPlayTaskStateListener, TingLyricDataServiceListener, TingPlayerCoreExtension>
{
    BOOL _isFullPlayTask; // +0x8
    UnitRCWeakPtr * _playApp; // +0x10
    TingPlayerContext * _playingContext; // +0x18
}
- (void)setupWithPlayApp:(id)arg1;
- (void)bindPlatformPlayerDelegate;
- (void)performOnMainThread:(id /* block */)arg1;
- (id)currentPlayApp;
- (id)currentItem;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)_onPlayerEvent:(int)arg1 item:(id)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1 source:(id)arg2 context:(id)arg3 reason:(int)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)handlePlayingContextChanged:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)_notifyPlayTaskStatusChanged:(int)arg1 item:(id)arg2 event:(int)arg3 context:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onServiceChanged:(id)arg1;
- (void)onLyricTextChange:(id)arg1 lyricItem:(id)arg2;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)tingPlayerCore:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (id)playApp;
- (void)setPlayApp:(id)arg1;
- (id)playingContext;
- (void)setPlayingContext:(id)arg1;
- (BOOL)isFullPlayTask;
- (void)setIsFullPlayTask:(BOOL)arg1;
- (void).cxx_destruct;
@end
