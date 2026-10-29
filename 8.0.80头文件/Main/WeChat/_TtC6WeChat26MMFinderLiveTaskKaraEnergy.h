@interface _TtC6WeChat26MMFinderLiveTaskKaraEnergy : NSObject <TXPIPManagerExt, _TtP6WeChat23MMFinderLiveTaskKaraExt_>
{
     currentLiveID; // +0x8
     eventCollection; // +0x18
     statusCollection; // +0x0
}
- (id)init;
- (void)dealloc;
- (BOOL)restartProphetWithLive:(id)arg1;
- (BOOL)startProphetWithLive:(id)arg1;
- (id)stepProphetWithLive:(id)arg1 metricsInfo:(id)arg2;
- (void)stopProphet;
- (void)stopProphetWithLive:(id)arg1;
- (BOOL)isProphetStarted;
- (BOOL)canProphetStep:(id)arg1;
- (void)collectEventWithLive:(id)arg1 oldPlayerStatus:(long long)arg2 newPlayerStatus:(long long)arg3;
- (void)collectStatusWithLive:(id)arg1 anchorStatus:(long long)arg2;
- (void)collectQoSWithLive:(id)arg1 QoS:(id)arg2 videoQualityLevel:(int)arg3 isH265:(BOOL)arg4 isEnhanceEnabled:(BOOL)arg5;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (void)onStartCustomPixelTransferChange;
- (void)giftDidPlay;
- (void).cxx_destruct;
@end
