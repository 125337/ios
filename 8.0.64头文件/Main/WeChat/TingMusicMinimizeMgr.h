@interface TingMusicMinimizeMgr : TingPlayAppMinimieBase
{
    TingMinimizeMgr * _minimizeMgr; // +0x8
}
- (id)initWithTaskName:(id)arg1 moduleScene:(int)arg2;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (id)minimizeTaskData;
- (BOOL)canAddMinimizeTask;
- (void)initUITask;
- (void)onTerminateMinimizeTask;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
- (id)minimizeMgr;
- (void)setMinimizeMgr:(id)arg1;
- (void).cxx_destruct;
@end
