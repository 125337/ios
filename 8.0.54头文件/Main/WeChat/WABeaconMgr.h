@interface WABeaconMgr : MMUserService <CLLocationManagerDelegate, MMServiceProtocol>
{
    WABeaconMgrUseInfoHandler * _useInfoHandler; // +0x8
}
- (unsigned long long)manualInitLocation;
- (void)manualDeallocLocationWithTag:(unsigned long long)arg1;
- (id)getCLLocationManagerByTag:(unsigned long long)arg1;
- (void)manualStartRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)manualStopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (id)useInfoHandler;
- (void)setUseInfoHandler:(id)arg1;
- (void).cxx_destruct;
@end

