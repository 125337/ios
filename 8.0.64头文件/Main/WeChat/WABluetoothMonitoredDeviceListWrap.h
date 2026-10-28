@interface WABluetoothMonitoredDeviceListWrap : NSObject <PBCoding>
{
    NSMutableArray * _deviceList; // +0x8
}
+ (void)PBArrayAdd_deviceList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)deviceList;
- (void)setDeviceList:(id)arg1;
- (void).cxx_destruct;
@end
