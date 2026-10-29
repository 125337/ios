@interface WABeaconMgrUseInfo : MMObject
{
    unsigned long long _tag; // +0x8
    CLLocationManager * _locationMgr; // +0x10
    NSArray * _lastClick; // +0x18
    NSArray * _lastCallStack; // +0x20
    double _startTime; // +0x28
    NSMutableArray * _rangingUUIDArray; // +0x30
}
- (id)init;
- (id)description;
- (void)startRangingBeaconsInRegionWithUUID:(id)arg1;
- (void)stopRangingBeaconInRegionWithUUID:(id)arg1;
- (void)stopRanging;
- (unsigned long long)tag;
- (void)setTag:(unsigned long long)arg1;
- (id)locationMgr;
- (void)setLocationMgr:(id)arg1;
- (id)lastClick;
- (void)setLastClick:(id)arg1;
- (id)lastCallStack;
- (void)setLastCallStack:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)rangingUUIDArray;
- (void)setRangingUUIDArray:(id)arg1;
- (void).cxx_destruct;
@end
