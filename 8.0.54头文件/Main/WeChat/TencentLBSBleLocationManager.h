@interface TencentLBSBleLocationManager : NSObject
{
    int _mbearing; // +0x8
    TencentLBSLocationReGeocoder * _reGeoManger; // +0x10
    NSMutableArray * _resultBlocks; // +0x18
    double _lastBeaconUpdate; // +0x20
    TencentLBSLocation * _mlastBleLocation; // +0x28
    NSMutableArray * _singleFixBlocks; // +0x30
}
+ (id)sharedInstance;
- (id)init;
- (void)setTencentLBSBleBlock:(id /* block */)arg1;
- (void)removeTencentLBSBleBlock:(id /* block */)arg1;
- (void)requestBleLocationWithRequestlevel:(unsigned long long)arg1 beacons:(id)arg2 coordinateType:(unsigned long long)arg3 isSingleRequest:(BOOL)arg4 appName:(id)arg5 smallKey:(id)arg6 withLocation:(id)arg7;
- (void)callBackBleResult:(id)arg1 bearing:(int)arg2 wlanFix:(int)arg3 wlanUse:(int)arg4;
- (void)addTencentLBSSingleFixBlock:(id /* block */)arg1;
- (void)removeTencentLBSSingleFixBlock:(id /* block */)arg1;
- (void)singlePosCachUpdate:(id)arg1;
- (id)reGeoManger;
- (void)setReGeoManger:(id)arg1;
- (id)resultBlocks;
- (void)setResultBlocks:(id)arg1;
- (double)lastBeaconUpdate;
- (void)setLastBeaconUpdate:(double)arg1;
- (id)mlastBleLocation;
- (void)setMlastBleLocation:(id)arg1;
- (int)mbearing;
- (void)setMbearing:(int)arg1;
- (id)singleFixBlocks;
- (void)setSingleFixBlocks:(id)arg1;
- (void).cxx_destruct;
@end

