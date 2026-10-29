@interface TingMinimizeMgr : NSObject <ITingPlayCenterMgrExt, ITingRouterExt, MinimizeTaskContainerInfoDelegate, TingMinimizeTaskDelegate, TingItemDataServiceExtension, TingObjcInPageStateManagerListener, TingAudioRecorderListener, TingPlayerMinimizeHelperDelegate, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate>
{
    BOOL _disableMinimizeTask; // +0x8
    BOOL _audioRecorderStarted; // +0x9
    TingTapePlayingInfo * _playingInfo; // +0x10
    TingMinimizeBaseTask * _task; // +0x18
    NSMutableDictionary * _dictNextLaunchOptions; // +0x20
    MinimizeTaskStateView * _voicePeakPowerCallback; // +0x28
    double _lastPeakCallbackTime; // +0x30
}
+ (BOOL)dissambeVersionIsTingViewControllerTop;
+ (BOOL)isTingViewControllerTop:(id)arg1;
+ (BOOL)shouldTingAppPopAndAddMinimization;
+ (BOOL)canTingAppAddMinimization;
- (id)init;
- (void)dealloc;
- (void)registerObserver;
- (void)unregiesterObserver;
- (void)initMinimizeTask;
- (void)activeMinimizeTask;
- (void)deactiveMinimizeTask;
- (BOOL)hasActiveMinimieTask;
- (void)setMinimizeTaskFold:(BOOL)arg1 animated:(BOOL)arg2 interrupted:(BOOL)arg3;
- (void)setMinimizeDisable:(BOOL)arg1;
- (void)setNextLaunchOptions:(id)arg1 clientId:(id)arg2;
- (void)removeAllNextLaunchOptions;
- (void)updateMinimizeTaskStateWithContext:(id)arg1;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(BOOL)arg2;
- (id)copyContainerView;
- (void)restoreStateFromPlayingInfo:(id)arg1;
- (void)performActionWithAuthorization:(id /* block */)arg1;
- (void)updateTaskData;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (id)nextLaunchOptionForClientId:(id)arg1;
- (void)onAddMinimizeTaskAnimiated:(BOOL)arg1 voiceTic:(BOOL)arg2 fold:(BOOL)arg3;
- (void)onRemoveMinimizeTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (void)onFoldMinimizeTask;
- (void)onTerminateMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)willOpenMinimizeTask;
- (void)onOpenTask;
- (id)minimizeTaskData;
- (BOOL)canAddMinimizeTask;
- (BOOL)isPlayerInForground;
- (BOOL)isPlayerModuleActive;
- (id)player;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)createPlayerIfNeeded:(id)arg1;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(BOOL)arg2;
- (void)onPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (void)onNextBtnClicked:(id)arg1;
- (void)onInPageStateChanged:(BOOL)arg1;
- (void)triggerVibrationFeedback;
- (void)onBuffer:(id)arg1;
- (void)onAudioRecorderStarted;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void)setDisableMinimizeTask:(BOOL)arg1;
- (id)dictNextLaunchOptions;
- (void)setDictNextLaunchOptions:(id)arg1;
- (id)voicePeakPowerCallback;
- (void)setVoicePeakPowerCallback:(id)arg1;
- (double)lastPeakCallbackTime;
- (void)setLastPeakCallbackTime:(double)arg1;
- (BOOL)audioRecorderStarted;
- (void)setAudioRecorderStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
