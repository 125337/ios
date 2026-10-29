@interface TencentLBSBeacon : NSObject
{
    NSUUID * _proximityUUID; // +0x8
    NSNumber * _major; // +0x10
    NSNumber * _minor; // +0x18
    long long _proximity; // +0x20
    double _accuracy; // +0x28
    long long _rssi; // +0x30
    double _timestamp; // +0x38
}
- (id)proximityUUID;
- (void)setProximityUUID:(id)arg1;
- (id)major;
- (void)setMajor:(id)arg1;
- (id)minor;
- (void)setMinor:(id)arg1;
- (long long)proximity;
- (void)setProximity:(long long)arg1;
- (double)accuracy;
- (void)setAccuracy:(double)arg1;
- (long long)rssi;
- (void)setRssi:(long long)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (void).cxx_destruct;
@end

