@interface WCSearchedDevice : NSObject
{
    int _connProto; // +0x8
    WCDevice * _originalDevice; // +0x10
    WCBLEDevice * _bleDevice; // +0x18
    WCLanDeviceInfo * _lanDevice; // +0x20
    NSDictionary * _userData; // +0x28
    CContact * _deviceContact; // +0x30
}
- (id)init;
- (id)initWithBleDevice:(id)arg1;
- (id)initWithLanDevice:(id)arg1;
- (int)connProto;
- (void)setConnProto:(int)arg1;
- (id)originalDevice;
- (void)setOriginalDevice:(id)arg1;
- (id)bleDevice;
- (void)setBleDevice:(id)arg1;
- (id)lanDevice;
- (void)setLanDevice:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)deviceContact;
- (void)setDeviceContact:(id)arg1;
- (void).cxx_destruct;
@end

