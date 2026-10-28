@interface TingPlayAppMinimieBase : NSObject <MinimizeTaskContainerInfoDelegate, TingMinimizeTaskDelegate, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, TingMinimizeModule, TingPlayerMinimizeHelperDelegate>
{
    BOOL _isForeground; // +0x8
    int _moduleScene; // +0xc
    id <TingFlowPlayerProtocol> _player; // +0x10
    UnitRCWeakPtr * _weakApp; // +0x18
    TingMinimizeBaseTask * _task; // +0x20
    NSString * _taskBizName; // +0x28
}
- (void)initUITask;
- (id)initWithTaskName:(id)arg1 moduleScene:(int)arg2;
- (void)dealloc;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (void)updatePlayingInfo:(id)arg1;
- (void)setMinimizeTaskFold:(BOOL)arg1 animated:(BOOL)arg2 interrupted:(BOOL)arg3;
- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onPlayingInfoUpdate:(id)arg1;
- (id)player;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (id)nextLaunchOptionForClientId:(id)arg1;
- (void)onAddMinimizeTaskAnimiated:(BOOL)arg1 voiceTic:(BOOL)arg2 fold:(BOOL)arg3;
- (void)onRemoveMinimizeTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (void)onFoldMinimizeTask;
- (void)onTerminateMinimizeTask;
- (id)minimizeTaskData;
- (BOOL)isPlayerInForground;
- (BOOL)canAddMinimizeTask;
- (BOOL)isPlayerModuleActive;
- (void)willOpenMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)onOpenTask;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(BOOL)arg2;
- (void)onPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (void)onNextBtnClicked:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)weakApp;
- (void)setWeakApp:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (int)moduleScene;
- (void)setModuleScene:(int)arg1;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
