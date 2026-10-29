@interface PayProximityBLEDeviceRecord : NSObject
{
    NSString * _uuid; // +0x8
    NSString * _name; // +0x10
    NSString * _serviceUuid; // +0x18
    NSString * _serviceData; // +0x20
    NSString * _mfrData; // +0x28
    NSString * _payload; // +0x30
    NSMutableArray * _rssiSamples; // +0x38
    long long _rssiMedian; // +0x40
    long long _rssiMin; // +0x48
    long long _rssiMax; // +0x50
}
- (id)init;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)serviceUuid;
- (void)setServiceUuid:(id)arg1;
- (id)serviceData;
- (void)setServiceData:(id)arg1;
- (id)mfrData;
- (void)setMfrData:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (id)rssiSamples;
- (void)setRssiSamples:(id)arg1;
- (long long)rssiMedian;
- (void)setRssiMedian:(long long)arg1;
- (long long)rssiMin;
- (void)setRssiMin:(long long)arg1;
- (long long)rssiMax;
- (void)setRssiMax:(long long)arg1;
- (void).cxx_destruct;
@end
