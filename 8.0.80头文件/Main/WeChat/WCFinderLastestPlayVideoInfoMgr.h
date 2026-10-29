@interface WCFinderLastestPlayVideoInfoMgr : NSObject <CNetworkStatusExt>
{
    double _lastestDownloadSpeed; // +0x8
    NSMutableArray * _infoArray; // +0x10
    NSMutableArray * _statsInfoArray; // +0x18
    NSMutableArray * _finderDownloadSpeedArray; // +0x20
    NSMutableArray * _wechatDownloadSpeedArray; // +0x28
    MMTimer * _detectionSpeedTimer; // +0x30
    WCFinderPlayAPMMonitor * _apmMonitor; // +0x38
    WCFinderDaWangCardInfo * _daWangCardInfo; // +0x40
    NSMutableArray * _preloadInfoArray; // +0x48
    unsigned long long _detectionEmptyCount; // +0x50
    MMLRUCache * _lastestDownloadVideoFormatCache; // +0x58
    unsigned long long _detectionCount; // +0x60
    double _lastestFinderVideoDownloadSpeed; // +0x68
    double _speedReliableScale; // +0x70
    NSMutableArray * _lastBufferingArray; // +0x78
    WCFinderVideoBufferingUnit * _bufferingUnit; // +0x80
    unsigned long long _lastFinderDetectionEndTick; // +0x88
    unsigned long long _lastWechatDetectionEndTick; // +0x90
    unsigned long long _lastDetectionActionTimestamp; // +0x98
}
- (id)init;
- (void)_initiativeDetectionNetworkSpeed;
- (void)startTimer;
- (void)dealloc;
- (void)addObserverForForegroundNotification;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (id)infoArray;
- (id)statsInfoArray;
- (id)finderDownloadSpeedArray;
- (id)wechatDownloadSpeedArray;
- (id)preloadInfoArray;
- (void)addInfo:(id)arg1;
- (void)addPreloadInfo:(id)arg1 mediaWrap:(id)arg2;
- (void)addPlayInfoReport:(id)arg1 meidaWrap:(id)arg2 contentID:(id)arg3 mediaIndex:(unsigned long long)arg4;
- (id)downloadSeedFromMarsResult:(C2CDownloadResult)arg1;
- (id)getLastestPlayInfoArray;
- (unsigned int)getCurrentThermalState;
- (float)getSysCpuUsage;
- (BOOL)isBatteryChargeAndLevel:(float *)arg1;
- (id)getFinderReportAPMInfo;
- (BOOL)isNetworkFreeFlow;
- (BOOL)isRequestNetworkFreeFlow;
- (id)getFinderClientStatus;
- (id)getFinderClientStatusLite;
- (BOOL)_isFreeNetwork;
- (void)mergeCDNAndCGIConnectInfo:(id)arg1;
- (id)getFinderStatsDownloadStatus;
- (void)cleanFinderStatsDownloadWithArray:(id)arg1;
- (void)checkShouldRefreshPreloadInfo:(double)arg1;
- (BOOL)currentSpeedChangeToLarge:(double)arg1 otherSpeed:(double)arg2;
- (void)detectionSpeedAction;
- (void)updateFeedTid:(id)arg1 downloadSvrFormatFlag:(id)arg2;
- (id)getFeedDownloadSvrFormatFlagWithTid:(id)arg1;
- (void)updateFreeFlowStatus;
- (void)startBufferingWithTid:(id)arg1;
- (void)endBufferingWithTid:(id)arg1;
- (unsigned long long)calculateBufferingDurationInIntervalMS:(unsigned long long)arg1;
- (double)calculateNetworkSpeedInIntervalSecond:(unsigned long long)arg1;
- (double)calculateCGIConnectCostInRecentSecond:(int)arg1;
- (double)calculateCDNConnectCostInRecentSecond:(int)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (double)lastestDownloadSpeed;
- (void)setLastestDownloadSpeed:(double)arg1;
- (void)setInfoArray:(id)arg1;
- (void)setStatsInfoArray:(id)arg1;
- (void)setFinderDownloadSpeedArray:(id)arg1;
- (void)setWechatDownloadSpeedArray:(id)arg1;
- (id)detectionSpeedTimer;
- (void)setDetectionSpeedTimer:(id)arg1;
- (id)apmMonitor;
- (void)setApmMonitor:(id)arg1;
- (id)daWangCardInfo;
- (void)setDaWangCardInfo:(id)arg1;
- (void)setPreloadInfoArray:(id)arg1;
- (unsigned long long)detectionEmptyCount;
- (void)setDetectionEmptyCount:(unsigned long long)arg1;
- (id)lastestDownloadVideoFormatCache;
- (void)setLastestDownloadVideoFormatCache:(id)arg1;
- (unsigned long long)detectionCount;
- (void)setDetectionCount:(unsigned long long)arg1;
- (double)lastestFinderVideoDownloadSpeed;
- (void)setLastestFinderVideoDownloadSpeed:(double)arg1;
- (double)speedReliableScale;
- (void)setSpeedReliableScale:(double)arg1;
- (id)lastBufferingArray;
- (void)setLastBufferingArray:(id)arg1;
- (id)bufferingUnit;
- (void)setBufferingUnit:(id)arg1;
- (unsigned long long)lastFinderDetectionEndTick;
- (void)setLastFinderDetectionEndTick:(unsigned long long)arg1;
- (unsigned long long)lastWechatDetectionEndTick;
- (void)setLastWechatDetectionEndTick:(unsigned long long)arg1;
- (unsigned long long)lastDetectionActionTimestamp;
- (void)setLastDetectionActionTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
