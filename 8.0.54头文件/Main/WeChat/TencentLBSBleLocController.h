@interface TencentLBSBleLocController : NSObject
{
    TencentLBSLocation * _beaconLocation; // +0x8
    TencentLBSLocation * _beaconLocation_02; // +0x10
    TencentLBSLocation * _pdrLocation; // +0x18
    TencentLBSLocation * _pdrLocation_02; // +0x20
}
+ (id)sharedInstance;
- (void)updateBleLocation:(id)arg1;
- (id)getTencentBleLocation;
- (void)updatePdrLocation:(id)arg1;
- (id)getTencentPdrLocation;
- (void)updateBleLocation_02:(id)arg1;
- (id)getTencentBleLocation_02;
- (void)updatePdrLocation_02:(id)arg1;
- (id)getTencentPdrLocation_02;
- (id)beaconLocation;
- (void)setBeaconLocation:(id)arg1;
- (id)beaconLocation_02;
- (void)setBeaconLocation_02:(id)arg1;
- (id)pdrLocation;
- (void)setPdrLocation:(id)arg1;
- (id)pdrLocation_02;
- (void)setPdrLocation_02:(id)arg1;
- (void).cxx_destruct;
@end

