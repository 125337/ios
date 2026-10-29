@interface BluetoothInfo : MMObject
{
    unsigned long long _uploadTimeInterval; // +0x8
    NSString * _peripheralName; // +0x10
}
- (unsigned long long)uploadTimeInterval;
- (void)setUploadTimeInterval:(unsigned long long)arg1;
- (id)peripheralName;
- (void)setPeripheralName:(id)arg1;
- (void).cxx_destruct;
@end

