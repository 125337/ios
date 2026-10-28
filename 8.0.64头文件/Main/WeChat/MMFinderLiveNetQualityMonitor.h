@interface MMFinderLiveNetQualityMonitor : MMObject <CNetworkStatusExt, INetworkStatusMgrExt, MMLiveTaskMgrExt, ICdnComMgrExt>
{
    BOOL _testtingSpeed; // +0x8
    unsigned int _lastNetworkQualityEvaluateTime; // +0xc
    long long _lastNetworkQuality; // +0x10
    long long _lastTrtcLocalQuality; // +0x18
    unsigned long long _lastTrtcLocalQualityTimeInMs; // +0x20
    NSMutableDictionary * _factorDict; // +0x28
    unsigned long long _lastNetworkTypeChangedTimeMs; // +0x30
    MMLiveStarterTestSpeedManager * _testSpeedManager; // +0x38
    MMFinderLiveSpeedTestNotifyModel * _uploadPacket; // +0x40
}
- (id)init;
- (BOOL)isNetworkSwitchingToCellular;
- (id)currentCellularStateString;
- (BOOL)isWeakNetFromMars;
- (unsigned int)recentCgiFailsCount;
- (unsigned int)recentCgiDelayCount;
- (void)reportCgiNetworkError:(id)arg1 response:(id)arg2 bindCellular:(BOOL)arg3;
- (void)reportCgiDelayToGetResponse:(unsigned int)arg1 bindCellular:(BOOL)arg2;
- (void)reportPreviewLiveCDNPlayerItemPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)reportPreviewLiveCDNPlayerNetStatus:(id)arg1 withLiveId:(unsigned long long)arg2;
- (id)getNetworkFactorItemCreateIfNotExists:(long long)arg1;
- (void)recordRecentLagTimeStampInRoom:(unsigned long long)arg1;
- (void)recordRecentLagTimeStampInPreview:(unsigned long long)arg1;
- (void)recordRecentDisconnectTimeStampInRoom:(unsigned long long)arg1;
- (void)recordRecentDisconnectTimeStampInPreview:(unsigned long long)arg1;
- (unsigned int)getRecentLagCountFromTime:(unsigned long long)arg1;
- (unsigned int)getRecentDisconnectCountFromTime:(unsigned long long)arg1;
- (unsigned int)getRecentLiveTRTCConnectLostCountFromTime:(unsigned long long)arg1;
- (unsigned int)getRecentLiveCGINetworkFailsCountFromTime:(unsigned long long)arg1;
- (unsigned int)getRecentLiveCGIsDelayCountFromTime:(unsigned long long)arg1;
- (BOOL)enableBindCellular;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)handleNetworkStatusChanged;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (void)onLiveTask:(id)arg1 user:(id)arg2 eventName:(id)arg3 info:(id)arg4;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2 p2pStatus:(id)arg3;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)onLiveTaskConnectionLost:(id)arg1;
- (void)onLiveTaskConnectionRecovery:(id)arg1;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveTaskExitLive:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)evaluateLiveNetworkQuality;
- (long long)currentNetworkQuality;
- (id)currentCellularInterface;
- (BOOL)isOnDawangEnv;
- (id)testSpeedManager;
- (BOOL)startTestSpeedRequest:(id /* block */)arg1;
- (void)testSpeedMethod:(id)arg1 testSpeedBlock:(id /* block */)arg2;
- (long long)lastNetworkQuality;
- (void)setLastNetworkQuality:(long long)arg1;
- (unsigned int)lastNetworkQualityEvaluateTime;
- (void)setLastNetworkQualityEvaluateTime:(unsigned int)arg1;
- (long long)lastTrtcLocalQuality;
- (void)setLastTrtcLocalQuality:(long long)arg1;
- (unsigned long long)lastTrtcLocalQualityTimeInMs;
- (void)setLastTrtcLocalQualityTimeInMs:(unsigned long long)arg1;
- (id)factorDict;
- (void)setFactorDict:(id)arg1;
- (unsigned long long)lastNetworkTypeChangedTimeMs;
- (void)setLastNetworkTypeChangedTimeMs:(unsigned long long)arg1;
- (void)setTestSpeedManager:(id)arg1;
- (id)uploadPacket;
- (void)setUploadPacket:(id)arg1;
- (BOOL)testtingSpeed;
- (void)setTesttingSpeed:(BOOL)arg1;
- (void).cxx_destruct;
@end
