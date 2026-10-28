@interface WAJSContextPlugin_WiFi : WAJSContextPluginBase
{
    BOOL m_registed; // +0x8
    BOOL m_hasPreSet; // +0x9
    NSMutableDictionary * m_wifiInfoMap; // +0x10
    NEHotspotHelperCommand * m_retainScanListCommand; // +0x18
    NEHotspotHelperCommand * m_retainEvaluateCommand; // +0x20
    NEHotspotHelperCommand * m_retainMantainCommand; // +0x28
    NSMutableArray * m_scanWiFiList; // +0x30
    NSObject<OS_dispatch_queue> * m_timerQueue; // +0x38
    NSObject<OS_dispatch_source> * m_deliverTimer; // +0x40
    NEHotspotConfigurationManager * m_configMgr; // +0x48
}
+ (long long)convertStringToNEConfidence:(id)arg1;
- (id)init;
- (void)registerWifiHandler;
- (void)unregisterWifiHandler;
- (BOOL)canHandleWifiList;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)setWifiListInfo:(id)arg1;
- (void)preSetWifiListInfo:(id)arg1;
- (id)wifiInfoWithSSID:(id)arg1 BSSID:(id)arg2;
- (id)connectedWiFi;
- (void)evalueteWiFiWithSSID:(id)arg1 BSSID:(id)arg2 confidence:(id)arg3;
- (void)connectToWifiWithSSID:(id)arg1 password:(id)arg2 isWEP:(BOOL)arg3;
- (void)handleHotspotWiFiCommand:(id)arg1;
- (void)handleCommandForFilterScanList:(id)arg1;
- (void)handleCommandForEvaluate:(id)arg1;
- (void)handleCommandForAuthenticate:(id)arg1;
- (void)handleCommandForPresentUI:(id)arg1;
- (void)handleCommandForMaintain:(id)arg1;
- (void)handleCommandForLogoff:(id)arg1;
- (void)setDeliverTimeoutTimer;
- (void)cancelDeliverTimeoutTimer;
- (void)onDeliverNetworkCommandWhenTimeout;
- (void)deliverNetworkCommand:(id)arg1;
- (void).cxx_destruct;
@end
