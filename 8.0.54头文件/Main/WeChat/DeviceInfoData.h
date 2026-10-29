@interface DeviceInfoData : NSObject
{
    NSString * _deviceName; // +0x8
    NSString * _deviceID; // +0x10
    NSNumber * _RSSI; // +0x18
    NSData * _manuData; // +0x20
}
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)deviceID;
- (void)setDeviceID:(id)arg1;
- (id)RSSI;
- (void)setRSSI:(id)arg1;
- (id)manuData;
- (void)setManuData:(id)arg1;
- (void).cxx_destruct;
@end

