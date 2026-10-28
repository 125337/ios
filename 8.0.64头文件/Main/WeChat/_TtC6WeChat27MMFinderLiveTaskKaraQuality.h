@interface _TtC6WeChat27MMFinderLiveTaskKaraQuality : NSObject <TXPIPManagerExt>
{
     currentLiveID; // +0x8
     switchInfo; // +0x18
     eventCollection; // +0x20
     statusCollection; // +0x0
}
- (id)init;
- (void)dealloc;
- (BOOL)restartProphetWithLive:(id)arg1;
- (BOOL)startProphetWithLive:(id)arg1;
- (long long)stepProphetWithLive:(id)arg1 state:(id)arg2;
- (void)stopProphet;
- (void)stopProphetWithLive:(id)arg1;
- (BOOL)isProphetStarted;
- (BOOL)canProphetStep:(id)arg1;
- (void)collectEventWithLive:(id)arg1 oldPlayerStatus:(long long)arg2 newPlayerStatus:(long long)arg3;
- (void)collectEventWithLive:(id)arg1 playerEvent:(long long)arg2 parameters:(id)arg3;
- (void)collectStatusWithLive:(id)arg1 anchorStatus:(long long)arg2;
- (void)collectStatusWithLive:(id)arg1 metricInfo:(id)arg2;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (void)onStartCustomPixelTransferChange;
- (void)reportThatStartSwitchWithLive:(id)arg1 startQuality:(long long)arg2 targetQuality:(long long)arg3 smooth:(BOOL)arg4 manually:(BOOL)arg5;
- (void)reportThatFinishSwitchWithLive:(id)arg1 success:(BOOL)arg2;
- (void).cxx_destruct;
@end
