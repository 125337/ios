@interface FLVNetworkInfo : NSObject <INetworkStatusMgrExt>
{
    BOOL _isWeakNetFromMars; // +0x8
    unsigned int _lastRTTFromMars; // +0xc
    long long _lastNetworkQuality; // +0x10
    NSMutableDictionary * _qosHistoryDict; // +0x18
    NSMutableDictionary * _networkInfoDict; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (long long)calcNetworkQuality:(id)arg1;
- (long long)updateQosData:(id)arg1;
- (long long)getNetworkQuality;
- (long long)getNetworkQuality:(unsigned int)arg1;
- (unsigned int)getFlvAvgSpeed:(unsigned int)arg1;
- (unsigned int)getFlvAvgFps:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (long long)lastNetworkQuality;
- (void)setLastNetworkQuality:(long long)arg1;
- (BOOL)isWeakNetFromMars;
- (void)setIsWeakNetFromMars:(BOOL)arg1;
- (unsigned int)lastRTTFromMars;
- (void)setLastRTTFromMars:(unsigned int)arg1;
- (id)qosHistoryDict;
- (void)setQosHistoryDict:(id)arg1;
- (id)networkInfoDict;
- (void)setNetworkInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
