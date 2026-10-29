@interface WABeaconMgrUseInfoHandler : NSObject
{
    NSMutableArray * _usedLocationMgrList; // +0x8
    MMTimer * _checkTimer; // +0x10
    NSMutableArray * _rangingBeaconUUIDArray; // +0x18
}
- (void)dealloc;
- (id)getUseInfoByTag:(unsigned long long)arg1;
- (void)clearAll;
- (void)addUseInfo:(id)arg1;
- (void)removeUseInfoWithTag:(unsigned long long)arg1;
- (void)startRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)stopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)checkLocationUse;
- (id)usedLocationMgrList;
- (void)setUsedLocationMgrList:(id)arg1;
- (id)checkTimer;
- (void)setCheckTimer:(id)arg1;
- (id)rangingBeaconUUIDArray;
- (void)setRangingBeaconUUIDArray:(id)arg1;
- (void).cxx_destruct;
@end

