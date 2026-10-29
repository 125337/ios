@interface TPReportController : NSObject <ITPExtendReportController, ITPPlayerEventReceiver>
{
    long long _controllerState; // +0x8
    id <ITPReporter> _reporter; // +0x10
    TPReporterInitParams * _reportInitparams; // +0x18
    TPWorkerQueue * _workQueue; // +0x20
    NSPointerArray * _reportChannelDelegates; // +0x28
    id <ITPPlayerInfoGetter> _playerInfoGetter; // +0x30
    id <ITPReportInfoGetter> _reportInfoGetter; // +0x38
    NSDictionary * _beforeReporterEventHanlerTable; // +0x40
    NSDictionary * _afterReporterEventHanlerTable; // +0x48
}
+ (id)playerToReportProcessorEventIdMap;
- (id)init;
- (void)dealloc;
- (void)setReportToBeaconNeeded:(BOOL)arg1;
- (void)addReportChannelDelegate:(id)arg1;
- (void)onEvent:(id)arg1;
- (void)handleEventAsync:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)dealSpecialEventBeforeReporterIfNeed:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)dealSpecialEventAfterReporterIfNeed:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)onSetDataSource:(id)arg1;
- (void)onGetConvertedDataSource:(id)arg1;
- (void)onPrepareStart:(id)arg1;
- (void)onPrepareEnd:(id)arg1;
- (void)onPlayError:(id)arg1;
- (void)onPlayEnd:(id)arg1;
- (void)onControllerRelease:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)createAndInitReporter:(unsigned long long)arg1;
- (id)invocationWithSel:(SEL)arg1;
- (void)setupBeforeReporterEventHandlerTable;
- (void)setupAfterReporterEventHandlerTable;
- (long long)controllerState;
- (void)setControllerState:(long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)reportInitparams;
- (void)setReportInitparams:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)reportChannelDelegates;
- (void)setReportChannelDelegates:(id)arg1;
- (id)playerInfoGetter;
- (void)setPlayerInfoGetter:(id)arg1;
- (id)reportInfoGetter;
- (void)setReportInfoGetter:(id)arg1;
- (id)beforeReporterEventHanlerTable;
- (void)setBeforeReporterEventHanlerTable:(id)arg1;
- (id)afterReporterEventHanlerTable;
- (void)setAfterReporterEventHanlerTable:(id)arg1;
- (void).cxx_destruct;
@end

