@interface CNetworkStatus : MMRootService <MMServiceProtocol>
{
    unsigned int m_uiLastStatus; // +0x8
    id <NetworkStatusDelegate> m_delNetworkStatus; // +0x10
    BOOL m_isGettingWifiInfo; // +0x18
    BOOL _isCellularValid; // +0x19
    NSRecursiveLock * _accessWifiSSIDLock; // +0x20
    unsigned long long _lastChangeReachTime; // +0x28
    MMWifiInfo * _wifiInfo; // +0x30
    NSObject<OS_nw_path_monitor> * _cellularMonitor; // +0x38
    NSObject<OS_dispatch_queue> * _cellularQueue; // +0x40
}
+ (id)descriptionForNetType:(int)arg1;
+ (id)descriptionForNewNetType:(int)arg1;
+ (id)NetworkTypeDescription;
+ (void)GetCTNetworkInfo;
+ (id)GetCarrier;
+ (id)getCarrierName;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)getCurrentRadioAccessTechnology:(id)arg1;
+ (unsigned long long)getSimCardCount;
+ (id)getSimCardType;
+ (void)updateUpdateRadioAccessTechFromNetworkInfo:(id)arg1;
+ (BOOL)isSimCardSupport3GPlus;
+ (BOOL)isSimCard4G;
+ (BOOL)isSimCard5G;
+ (BOOL)isTypeEqualToSimCard5G:(id)arg1;
+ (void)asyncCheckCellularIsRestrictedWithCallbackBlock:(id /* block */)arg1;
+ (void)AsyncGetWifiInfo:(id /* block */)arg1;
+ (void)AsyncUpdateCachedWifiInfo;
+ (id)testGetWifiInfo;
- (int)voIPNetState;
- (int)voIPCellularRadioType;
- (int)currentNetType;
- (id)init;
- (void)dealloc;
- (void)initCellularMonitor;
- (BOOL)isCellularValid;
- (void)PingReach;
- (void)Start:(id)arg1;
- (void)Stop;
- (void)ChangeReach;
- (BOOL)isOnWWan;
- (BOOL)isOnWifi;
- (int)getNetworkType;
- (unsigned int)getNewNetType;
- (unsigned int)getNewNetTypeWithNeedDistinguish5G:(BOOL)arg1;
- (unsigned int)getConnectFlagValue;
- (BOOL)isReachable;
- (BOOL)isOnWifiOrOver2G;
- (void)GetCachedWifiInfo:(id *)arg1 BSSID:(id *)arg2;
- (id)GetCachedWifiInfo;
- (void)GetWifiInfo:(id *)arg1 BSSID:(id *)arg2;
- (void)GetWifiInfo:(id *)arg1 BSSID:(id *)arg2 forceRefresh:(BOOL)arg3 logUsage:(BOOL)arg4;
- (BOOL)isGettingWifiInfo;
- (id)accessWifiSSIDLock;
- (void)setAccessWifiSSIDLock:(id)arg1;
- (unsigned long long)lastChangeReachTime;
- (void)setLastChangeReachTime:(unsigned long long)arg1;
- (id)wifiInfo;
- (void)setWifiInfo:(id)arg1;
- (id)cellularMonitor;
- (void)setCellularMonitor:(id)arg1;
- (id)cellularQueue;
- (void)setCellularQueue:(id)arg1;
- (void)setIsCellularValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
