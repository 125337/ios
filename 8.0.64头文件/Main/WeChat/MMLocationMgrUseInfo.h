@interface MMLocationMgrUseInfo : NSObject
{
    unsigned long long _tag; // +0x8
    unsigned long long _mgrType; // +0x10
    id _locationMgr; // +0x18
    NSArray * _lastClick; // +0x20
    unsigned long long _updatingType; // +0x28
    double _startTime; // +0x30
    NSMutableArray * _rangingUUIDArray; // +0x38
}
- (id)init;
- (id)description;
- (void)startUpdating:(unsigned long long)arg1;
- (void)stopUpdating;
- (void)startRangingBeaconsInRegionWithUUID:(id)arg1;
- (void)stopRangingBeaconInRegionWithUUID:(id)arg1;
- (void)stopRanging;
- (unsigned long long)tag;
- (void)setTag:(unsigned long long)arg1;
- (unsigned long long)mgrType;
- (void)setMgrType:(unsigned long long)arg1;
- (id)locationMgr;
- (void)setLocationMgr:(id)arg1;
- (id)lastClick;
- (void)setLastClick:(id)arg1;
- (unsigned long long)updatingType;
- (void)setUpdatingType:(unsigned long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)rangingUUIDArray;
- (void)setRangingUUIDArray:(id)arg1;
- (void).cxx_destruct;
@end
