@interface WABlueToothDeviceAdData : MMObject
{
    BOOL _isConnectable; // +0x8
    NSString * _localName; // +0x10
    NSData * _manufacturerData; // +0x18
    NSArray * _serviceUUIDs; // +0x20
    NSDictionary * _serviceData; // +0x28
}
- (id)localName;
- (void)setLocalName:(id)arg1;
- (id)manufacturerData;
- (void)setManufacturerData:(id)arg1;
- (id)serviceUUIDs;
- (void)setServiceUUIDs:(id)arg1;
- (id)serviceData;
- (void)setServiceData:(id)arg1;
- (BOOL)isConnectable;
- (void)setIsConnectable:(BOOL)arg1;
- (void).cxx_destruct;
@end
