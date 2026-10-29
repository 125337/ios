@interface DeviceILinkService : MMUserService <MMKernelExt, IMsgExt, MMServiceProtocol>
{
    NSMutableArray * _iLinkDevices; // +0x8
    NSMutableArray * _privateILinkDevices; // +0x10
    NSMutableArray * _publicILinkDevices; // +0x18
    NSArray * _otherDevices; // +0x20
    long long _deviceCount; // +0x28
}
- (void)onServiceInit;
- (void)restoreData;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)refreshDataFromResp:(id)arg1;
- (void)requestDeviceCount;
- (int)getDeviceCount;
- (int)getDeviceCountWithoutStorageDevice;
- (id)getILinkDevices;
- (id)getILinkDevicesForMsg:(id)arg1;
- (id)getAllDevicesForMsg:(id)arg1;
- (BOOL)hasAvailableDeviceInMessageWrap:(id)arg1;
- (BOOL)hasAvailableDeviceInType:(id)arg1;
- (id)getPrivateILinkDevices;
- (id)getPublicILinkDevices;
- (id)iLinkDevices;
- (id)privateILinkDevices;
- (id)publicILinkDevices;
- (void)setILinkDevices:(id)arg1;
- (void)setPrivateILinkDevices:(id)arg1;
- (void)setPublicILinkDevices:(id)arg1;
- (id)otherDevices;
- (void)setOtherDevices:(id)arg1;
- (long long)deviceCount;
- (void)setDeviceCount:(long long)arg1;
- (void).cxx_destruct;
@end
