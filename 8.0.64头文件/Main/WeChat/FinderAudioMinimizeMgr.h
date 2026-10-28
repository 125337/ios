@interface FinderAudioMinimizeMgr : TingPlayAppMinimieBase
- (void)dealloc;
- (void)updatePlayingInfo:(id)arg1;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (BOOL)shouldTurnMinimizeActive;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
@end
