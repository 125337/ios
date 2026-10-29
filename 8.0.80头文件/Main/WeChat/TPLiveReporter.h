@interface TPLiveReporter : TPBaseReporter
{
    BOOL _playDone; // +0x8
    BOOL _buffering; // +0x9
    TPPlayerLogContext * _log; // +0x10
    TPLiveReportParamRecord * _reportParamRecord; // +0x18
    TPWorkerQueue * _reportQueue; // +0x20
    TPTimer * _livePeroidTimer; // +0x28
}
- (id)init;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)eventHandlerTable;
- (id)invocationWithMethod:(SEL)arg1;
- (void)onPrepareDone:(id)arg1;
- (void)onPlayerStart:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onBufferStart:(id)arg1;
- (void)onBufferEnd:(id)arg1;
- (void)onProcessUpdate:(id)arg1;
- (void)onCdnUrlUpdate:(id)arg1;
- (void)onProtocolUpdate:(id)arg1;
- (void)onAppForeGround:(id)arg1;
- (void)onAppBackGround:(id)arg1;
- (void)onLivePeroidReport;
- (void)startLivePeroidTimer;
- (void)stopPeroidTimer;
- (void)reportPlayerEndEvent:(long long)arg1 withErrCode:(long long)arg2 flowParams:(id)arg3 statParams:(id)arg4;
- (void)reportLiveEndFlowEvent:(id)arg1 withStatParams:(id)arg2;
- (void)reportLiveEndEvent:(long long)arg1 withErrCode:(long long)arg2 withFlowParams:(id)arg3;
- (void)fillGeneralPlayFlowParams:(id)arg1 withFlowParams:(id)arg2;
- (void)fillPlayerEndConfigParams:(id)arg1 withFlowParams:(id)arg2;
- (id)makeLiveFlowParams:(id)arg1 withStatParams:(id)arg2;
- (id)makeLiveEndParams:(long long)arg1 withErrCode:(long long)arg2 withFlowParams:(id)arg3;
- (void)fillPeriodRsvExtDicAndExtDic:(id)arg1 withRsvExtDic:(id)arg2 withExtDic:(id)arg3;
- (id)getTPGeneralPlayFlowParams:(id)arg1;
- (id)getTPDynamicStatisticParams:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (id)reportParamRecord;
- (void)setReportParamRecord:(id)arg1;
- (BOOL)isPlayDone;
- (void)setPlayDone:(BOOL)arg1;
- (BOOL)isBuffering;
- (void)setBuffering:(BOOL)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (id)livePeroidTimer;
- (void)setLivePeroidTimer:(id)arg1;
- (void).cxx_destruct;
@end
