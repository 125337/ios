@interface TingMinimizeMgr : NSObject <ITingPlayCenterMgrExt, ITingRouterExt, IMinimizeTaskDelegateInterface, MinimizeTaskContainerInfoDelegate, TingMinimizeTaskDelegate, TingItemDataServiceExtension, TingPlayerMinimizeHelperDelegate>
{
    BOOL _disableMinimizeTask; // +0x8
    TingTapePlayingInfo * _playingInfo; // +0x10
    TingMinimizeBaseTask * _task; // +0x18
    NSMutableDictionary * _dictNextLaunchOptions; // +0x20
}
+ (BOOL)dissambeVersionIsTingViewControllerTop;
+ (BOOL)isTingViewControllerTop:(id)arg1;
+ (BOOL)shouldTingAppPresentWithMiniAnimation;
+ (BOOL)shouldTingAppPopWithMiniAnimation;
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
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (id)nextLaunchOptionForClientId:(id)arg1;
- (void)onAddMinimizeTaskAnimiated:(BOOL)arg1 voiceTic:(BOOL)arg2 fold:(BOOL)arg3;
- (void)onRemoveMinimizeTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (void)onFoldMinimizeTask;
- (void)onTerminateMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)willOpenMinimizeTask;
- (id)minimizeTaskData;
- (BOOL)canAddMinimizeTask;
- (BOOL)isPlayerInForground;
- (BOOL)isPlayerModuleActive;
- (id)player;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(BOOL)arg2;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void)setDisableMinimizeTask:(BOOL)arg1;
- (id)dictNextLaunchOptions;
- (void)setDictNextLaunchOptions:(id)arg1;
- (void).cxx_destruct;
@end

