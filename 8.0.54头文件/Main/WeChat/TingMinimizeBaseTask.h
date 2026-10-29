@interface TingMinimizeBaseTask : NSObject
{
    BOOL _bActive; // +0x8
    BOOL _bFold; // +0x9
    BOOL _disableOpenMinimizeTask; // +0xa
    id <TingMinimizeTaskDelegate> _delegate; // +0x10
    TingTapePlayingInfo * _playingInfo; // +0x18
    TingMinimizeStayStatics * _statics; // +0x20
}
- (void)reportTaskFoldStateChangedForReason:(long long)arg1;
- (void)reportTaskCloseEventForReason:(long long)arg1;
- (void)reportTaskCloseEventForReason:(long long)arg1 outterPremptReason:(id)arg2;
- (void)reportTaskActiveEvent;
- (void)reportTaskViewClickEvent:(long long)arg1;
- (void)reportTaskViewExpEvent;
- (id)baseReportParams;
- (void)dealloc;
- (BOOL)hasMinimizeTask;
- (BOOL)disableMinimizeTask;
- (void)addMinimizeTaskAnimiated:(BOOL)arg1;
- (void)addMinimizeTaskAnimiated:(BOOL)arg1 voiceTic:(BOOL)arg2 fold:(BOOL)arg3;
- (void)removeMinimizeTaskAnimiated:(BOOL)arg1 onlyFade:(BOOL)arg2;
- (BOOL)isTingViewControllerTop:(id)arg1;
- (BOOL)canAddMinimization;
- (BOOL)isModuleActive;
- (id)currentPlayer;
- (BOOL)isFold;
- (void)updatePlayingInfo:(id)arg1;
- (void)onMinimizeTaskActive;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1 premptReason:(id)arg2;
- (void)onMinimizeTaskFoldedStateChanged:(BOOL)arg1 reason:(long long)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(BOOL)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(BOOL)arg2 voiceTic:(BOOL)arg3;
- (void)tryShowTaskAnimated:(BOOL)arg1 voiceTic:(BOOL)arg2;
- (void)hideTaskAnimated:(BOOL)arg1;
- (BOOL)isTaskActive;
- (id)copyContainerView;
- (void)openTask;
- (id)taskContainerView;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (BOOL)canMinimizeBecomeActive:(id)arg1;
- (void)foldTask;
- (void)startAutoFoldTask;
- (void)cancelAutoFoldTask;
- (BOOL)handleOpenTask:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bActive;
- (void)setBActive:(BOOL)arg1;
- (BOOL)bFold;
- (void)setBFold:(BOOL)arg1;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (BOOL)disableOpenMinimizeTask;
- (void)setDisableOpenMinimizeTask:(BOOL)arg1;
- (id)statics;
- (void)setStatics:(id)arg1;
- (void).cxx_destruct;
@end

