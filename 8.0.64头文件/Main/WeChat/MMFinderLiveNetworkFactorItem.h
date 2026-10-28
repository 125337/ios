@interface MMFinderLiveNetworkFactorItem : MMObject
{
    BOOL _isCellularValid; // +0x8
    BOOL _isWeakNetFromMars; // +0x9
    unsigned int _uiFlags; // +0xc
    unsigned int _uiNetworkStatusType; // +0x10
    unsigned int _lastRTTFromMars; // +0x14
    unsigned int _lastAvgMarsSpeed; // +0x18
    long long _factor; // +0x20
    unsigned long long _lastUpdateTimeMs; // +0x28
    NSString * _lastNetworkType; // +0x30
    NSMutableArray * _recentDisconnectInLiveRoomTs; // +0x38
    NSMutableArray * _recentLagInLiveRoomTs; // +0x40
    NSMutableArray * _recentDisconnectInPreviewTs; // +0x48
    NSMutableArray * _recentLagInPreviewTs; // +0x50
    NSMutableArray * _livePlayerNetStatusForNetworkQuality; // +0x58
    NSMutableArray * _livePlayerInPreviewNetStatusForNetworkQuality; // +0x60
    NSMutableArray * _liveTRTCNetStatusForNetworkQuality; // +0x68
    NSMutableArray * _recentLiveTRTCConnectLostTs; // +0x70
    NSMutableArray * _recentLiveCGINetworkFails; // +0x78
    NSMutableArray * _recentLiveCGIsDelay; // +0x80
    long long _localNetQuality; // +0x88
}
- (id)initWithFactor:(long long)arg1;
- (long long)factor;
- (void)setFactor:(long long)arg1;
- (unsigned long long)lastUpdateTimeMs;
- (void)setLastUpdateTimeMs:(unsigned long long)arg1;
- (unsigned int)uiFlags;
- (void)setUiFlags:(unsigned int)arg1;
- (id)lastNetworkType;
- (void)setLastNetworkType:(id)arg1;
- (BOOL)isCellularValid;
- (void)setIsCellularValid:(BOOL)arg1;
- (unsigned int)uiNetworkStatusType;
- (void)setUiNetworkStatusType:(unsigned int)arg1;
- (BOOL)isWeakNetFromMars;
- (void)setIsWeakNetFromMars:(BOOL)arg1;
- (unsigned int)lastRTTFromMars;
- (void)setLastRTTFromMars:(unsigned int)arg1;
- (unsigned int)lastAvgMarsSpeed;
- (void)setLastAvgMarsSpeed:(unsigned int)arg1;
- (id)recentDisconnectInLiveRoomTs;
- (void)setRecentDisconnectInLiveRoomTs:(id)arg1;
- (id)recentLagInLiveRoomTs;
- (void)setRecentLagInLiveRoomTs:(id)arg1;
- (id)recentDisconnectInPreviewTs;
- (void)setRecentDisconnectInPreviewTs:(id)arg1;
- (id)recentLagInPreviewTs;
- (void)setRecentLagInPreviewTs:(id)arg1;
- (id)livePlayerNetStatusForNetworkQuality;
- (void)setLivePlayerNetStatusForNetworkQuality:(id)arg1;
- (id)livePlayerInPreviewNetStatusForNetworkQuality;
- (void)setLivePlayerInPreviewNetStatusForNetworkQuality:(id)arg1;
- (id)liveTRTCNetStatusForNetworkQuality;
- (void)setLiveTRTCNetStatusForNetworkQuality:(id)arg1;
- (id)recentLiveTRTCConnectLostTs;
- (void)setRecentLiveTRTCConnectLostTs:(id)arg1;
- (id)recentLiveCGINetworkFails;
- (void)setRecentLiveCGINetworkFails:(id)arg1;
- (id)recentLiveCGIsDelay;
- (void)setRecentLiveCGIsDelay:(id)arg1;
- (long long)localNetQuality;
- (void)setLocalNetQuality:(long long)arg1;
- (void).cxx_destruct;
@end
