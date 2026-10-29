@interface TingPlayAppMinimizeHelperImpl : NSObject <MinimizeTaskContainerInfoDelegate, TingPlayAppMinimizeTaskDelegate, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, TingPlayAppMinimizeDelegate, TingMinimizeModule, TingPlayAppAudioFocusDelegate, TingPlayerMinimizeHelperDelegate>
{
    BOOL _shouldStopPlayerOnBackground; // +0x8
    BOOL _shouldDeactivateOtherMinimizeOnBackground; // +0x9
    BOOL _shouldPreemptOnPlayingInfoChanged; // +0xa
    BOOL _isProxyMinimizeMode; // +0xb
    BOOL _isForeground; // +0xc
    int _moduleScene; // +0x10
    id <ITingPlayAppConfig> _playAppConfig; // +0x18
    UnitRCWeakPtr * _playApp; // +0x20
    TingPlayAppMinimizeTask * _task; // +0x28
    NSString * _taskBizName; // +0x30
    id /* block */ _shouldTurnMinimizeActiveBlock; // +0x38
}
- (void)initUITask;
- (id)initWithPlayAppConfig:(id)arg1 playApp:(id)arg2;
- (void)dealloc;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (void)updatePlayingInfo:(id)arg1;
- (void)tingPlayAppAudioFocus:(id)arg1 hasFocus:(BOOL)arg2;
- (void)setMinimizeTaskFold:(BOOL)arg1 animated:(BOOL)arg2 interrupted:(BOOL)arg3;
- (void)onMinimizeTaskInitInMainThread;
- (BOOL)onForegroundStateChangedInMainThread:(BOOL)arg1;
- (BOOL)shouldTurnMinimizeActive;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)onDestroy;
- (void)removeMinimize;
- (id)playApp;
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
- (id)customMinimizeStateInfoDelegate;
- (void)onNextBtnClicked:(id)arg1;
- (id)copyContainerView;
- (id)minimizeTaskDataForPlayApp;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (void)setPlayApp:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (BOOL)shouldStopPlayerOnBackground;
- (void)setShouldStopPlayerOnBackground:(BOOL)arg1;
- (BOOL)shouldDeactivateOtherMinimizeOnBackground;
- (void)setShouldDeactivateOtherMinimizeOnBackground:(BOOL)arg1;
- (BOOL)shouldPreemptOnPlayingInfoChanged;
- (void)setShouldPreemptOnPlayingInfoChanged:(BOOL)arg1;
- (id /* block */)shouldTurnMinimizeActiveBlock;
- (void)setShouldTurnMinimizeActiveBlock:(id /* block */)arg1;
- (BOOL)isProxyMinimizeMode;
- (void)setIsProxyMinimizeMode:(BOOL)arg1;
- (int)moduleScene;
- (void)setModuleScene:(int)arg1;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
