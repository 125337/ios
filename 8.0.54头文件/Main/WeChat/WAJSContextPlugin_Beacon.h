@interface WAJSContextPlugin_Beacon : WAJSContextPluginBase <IWABeaconMgrExt, CBCentralManagerDelegate>
{
    NSArray * m_uuids; // +0x8
    unsigned long long m_locationTag; // +0x10
    CBCentralManager * m_bleMgr; // +0x18
    NSMutableDictionary * m_beacons; // +0x20
    long long m_bleState; // +0x28
    BOOL m_isInStartWorkFlow; // +0x30
    BOOL m_isRanging; // +0x31
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (int)systemSupportBeacon;
- (int)starMoritoring:(id)arg1 needBLEAbilityCheck:(BOOL)arg2;
- (void)startRanging;
- (void)notifyStartRangingFailed:(id)arg1;
- (int)stopRanging;
- (id)getCurrentBeacons;
- (void)notifyServiceBeaconState;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (id)genBeaconKey:(id)arg1;
- (void).cxx_destruct;
@end

