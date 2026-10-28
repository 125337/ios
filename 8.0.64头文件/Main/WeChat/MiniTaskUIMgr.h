@interface MiniTaskUIMgr : MMUserService <IMiniMizeUserdRecordUpdateExt, MMUIViewControllerExt, IMMFontMgrExt, MMServiceProtocol>
{
    BOOL _canUseDynamicBackground; // +0x8
    BOOL _lastMiniTaskEntryState; // +0x9
    BOOL _doSarcasmOnceWhenEnterTaskList; // +0xa
    unsigned int _lastMiniEntryCountingTimeStamp; // +0xc
    unsigned int _flirtMiniEntryCount; // +0x10
    unsigned int _lastAddRecordTimestampForSwipeEdu; // +0x14
    MemoryMappedKV * _mappedKV; // +0x18
    MiniTaskViewController * _miniTaskVC; // +0x20
    MiniTaskNavigationController * _curForegroundContainerNavController; // +0x28
    MinimizeTaskData * _curForegroundTaskData; // +0x30
    WADynamicBackgroundGLViewController * _dynamicBGVC; // +0x38
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)checkMiniTaskEntryShowStateHasChanged;
- (BOOL)shouldShowMiniTaskEntry;
- (BOOL)shouldHighlightMiniTaskEntry;
- (BOOL)shouldShakeMiniTaskEntry;
- (void)setHasShakeMiniTaskEntry;
- (BOOL)canEducateStarEntry;
- (void)setCanEducateStarEntry:(BOOL)arg1;
- (BOOL)shouldEducateStarEntry;
- (void)setHasEducateStarEntry:(BOOL)arg1;
- (void)resetMiniTaskEntryCountingSeesion;
- (void)doFlirtMiniTaskEntryWithNoTask;
- (unsigned int)fetchMiniTaskVCPushAnimationType;
- (BOOL)checkShouldShowMiniTaskSwipeEducation;
- (void)doShowMiniTaskSwipeEducation;
- (void)doAbortShowMiniTaskSwipeEducation;
- (void)doResetShowMiniTaskSwipeEducationRecords;
- (BOOL)hasEverEnterMiniVC;
- (void)onEnterMiniVC;
- (void)doResetEnterMiniVCRecord;
- (id)taskDataForDirectLaunch;
- (BOOL)launchMiniTaskWithData:(id)arg1 transitionContext:(id)arg2 presentingNavController:(id)arg3;
- (void)recordRecentLaunchTask:(id)arg1;
- (void)resetRecentLaunchTask;
- (void)recordRecentAppendTask;
- (void)updateHistoryTaskLastEntryTime;
- (void)setMiniTaskViewController:(id)arg1;
- (void)initMiniTaskViewController;
- (id)getMiniTaskViewController;
- (BOOL)isMiniTaskViewControllerShowing;
- (id)getCurrentContextId;
- (void)clearMiniTaskViewController;
- (id)getCurForegroundTaskData;
- (id)getCurForegroundContainerNavController;
- (BOOL)recalCanUseDynamicBackground;
- (void)createDynamicBackgroundGLViewController;
- (id)getDynamicBackgroundGLViewController;
- (id)mappedKV;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onFontSizeChange;
- (void)setMappedKV:(id)arg1;
- (id)miniTaskVC;
- (void)setMiniTaskVC:(id)arg1;
- (id)curForegroundContainerNavController;
- (void)setCurForegroundContainerNavController:(id)arg1;
- (id)curForegroundTaskData;
- (void)setCurForegroundTaskData:(id)arg1;
- (id)dynamicBGVC;
- (void)setDynamicBGVC:(id)arg1;
- (BOOL)canUseDynamicBackground;
- (void)setCanUseDynamicBackground:(BOOL)arg1;
- (BOOL)lastMiniTaskEntryState;
- (void)setLastMiniTaskEntryState:(BOOL)arg1;
- (unsigned int)lastMiniEntryCountingTimeStamp;
- (void)setLastMiniEntryCountingTimeStamp:(unsigned int)arg1;
- (unsigned int)flirtMiniEntryCount;
- (void)setFlirtMiniEntryCount:(unsigned int)arg1;
- (BOOL)doSarcasmOnceWhenEnterTaskList;
- (void)setDoSarcasmOnceWhenEnterTaskList:(BOOL)arg1;
- (unsigned int)lastAddRecordTimestampForSwipeEdu;
- (void)setLastAddRecordTimestampForSwipeEdu:(unsigned int)arg1;
- (void).cxx_destruct;
@end
