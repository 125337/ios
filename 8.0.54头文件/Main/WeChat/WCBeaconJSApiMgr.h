@interface WCBeaconJSApiMgr : MMUserService <ILocationMgrExt, MMServiceProtocol, PBMessageObserverDelegate, CBCentralManagerDelegate>
{
    MMUIViewController<WXCustomWebViewControllerProtocol> * m_currentWebViewController; // +0x8
    NSString * m_ticket; // +0x10
    CBCentralManager * m_bleMgr; // +0x18
    unsigned long long m_locationMgrTag; // +0x20
    NSMutableArray * m_aryUUID; // +0x28
    NSMutableDictionary * m_canRegionDic; // +0x30
    NSMutableArray * m_hadGetBeacons; // +0x38
    NSMutableArray * m_getBeaconsInfoWatingQueue; // +0x40
    NSMutableArray * m_getBeaconsInfoRunningQueue; // +0x48
    unsigned long long m_verifyReqResult; // +0x50
}
- (void)onServiceInit;
- (unsigned long long)startMonitorBeacon:(id)arg1 ticket:(id)arg2;
- (void)stopMonitoring;
- (void)finishCauseOf:(unsigned long long)arg1;
- (void)notifyStartMonitoringFailWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailByBLEPowerOffWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailByRangeFailedWithErrorMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void).cxx_destruct;
@end

