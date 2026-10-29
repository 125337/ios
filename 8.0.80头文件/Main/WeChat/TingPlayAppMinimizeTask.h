@interface TingPlayAppMinimizeTask : NSObject <MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate>
{
    BOOL _bActive; // +0x8
    BOOL _bFold; // +0x9
    BOOL _bEngaging; // +0xa
    BOOL _disableOpenMinimizeTask; // +0xb
    BOOL _disableOpen; // +0xc
    id <ITingPlayAppConfig> _playAppConfig; // +0x10
    id <TingPlayAppMinimizeTaskDelegate> _delegate; // +0x18
    TingTapePlayingInfo * _playingInfo; // +0x20
    MinimizeTaskAudioPlayCtrlView * _contentView; // +0x28
    TingPlayAppMinimizeStayStatics * _statics; // +0x30
}
- (void)reportTaskFoldStateChangedForReason:(long long)arg1;
- (void)reportTaskCloseEventForReason:(long long)arg1;
- (void)reportTaskCloseEventForReason:(long long)arg1 outterPremptReason:(id)arg2;
- (void)reportTaskActiveEvent;
- (void)reportTaskViewClickEvent:(long long)arg1;
- (void)reportTaskViewExpEvent;
- (id)baseReportParams;
- (id)contentView;
- (id)taskContainerView;
- (id)contentDefaultImage;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onPlayOrPauseButtonClicked:(BOOL)arg1 playCtrl:(id)arg2;
- (void)onContentViewClicked:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)openTask;
- (void)dealloc;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (void)addMinimizeTaskAnimiated:(BOOL)arg1;
- (void)addMinimizeTaskAnimiated:(BOOL)arg1 voiceTic:(BOOL)arg2 fold:(BOOL)arg3;
- (void)removeMinimizeTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (void)callMinimizeTaskOpen;
- (BOOL)isTingViewControllerTop:(id)arg1;
- (BOOL)canAddMinimization;
- (BOOL)isModuleActive;
- (id)currentPlayApp;
- (BOOL)isFold;
- (void)updatePlayingInfo:(id)arg1;
- (void)restoreStateFromPlayingInfo:(id)arg1;
- (void)onMinimizeTaskActive;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1;
- (BOOL)shouldStopPlayWhenTaskEngagedForReason:(long long)arg1;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1 premptReason:(id)arg2;
- (void)onMinimizeTaskTerminate;
- (void)onMinimizeTaskFoldedStateChanged:(BOOL)arg1 reason:(long long)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(BOOL)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(BOOL)arg2 voiceTic:(BOOL)arg3;
- (void)tryShowTaskAnimated:(BOOL)arg1 voiceTic:(BOOL)arg2;
- (void)hideTaskAnimated:(BOOL)arg1;
- (BOOL)isTaskActive;
- (id)copyContainerView;
- (BOOL)canMinimizeBecomeActive:(id)arg1;
- (void)onStateViewPlayPauseBtnClick:(BOOL)arg1;
- (void)onStateViewNextBtnClick;
- (void)updateTaskDataBeforeMinimize:(id)arg1;
- (void)foldTask;
- (void)startAutoFoldTask;
- (void)cancelAutoFoldTask;
- (BOOL)handleOpenTask:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isMinimizationToFullScreenPlayerEnabled;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bActive;
- (void)setBActive:(BOOL)arg1;
- (BOOL)bFold;
- (void)setBFold:(BOOL)arg1;
- (BOOL)bEngaging;
- (void)setBEngaging:(BOOL)arg1;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (BOOL)disableOpenMinimizeTask;
- (void)setDisableOpenMinimizeTask:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)disableOpen;
- (void)setDisableOpen:(BOOL)arg1;
- (id)statics;
- (void)setStatics:(id)arg1;
- (void).cxx_destruct;
@end
