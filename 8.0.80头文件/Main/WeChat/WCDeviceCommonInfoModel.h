@interface WCDeviceCommonInfoModel : NSObject
{
    NSString * _bootSecTime; // +0x8
    NSString * _countryCode; // +0x10
    NSString * _language; // +0x18
    NSString * _deviceName; // +0x20
    NSString * _systemVersion; // +0x28
    NSString * _machine; // +0x30
    NSString * _carrierInfo; // +0x38
    NSString * _physicalMemory; // +0x40
    NSString * _disk; // +0x48
    NSString * _sysFileTime; // +0x50
    NSString * _model; // +0x58
    NSString * _timeZone; // +0x60
    NSString * _ua; // +0x68
    WCDeviceSysFileInfo * _mcMetaFileInfo; // +0x70
    NSString * _tnmId; // +0x78
    NSString * _deviceInitTime; // +0x80
}
- (id)bootSecTime;
- (void)setBootSecTime:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg1;
- (id)machine;
- (void)setMachine:(id)arg1;
- (id)carrierInfo;
- (void)setCarrierInfo:(id)arg1;
- (id)physicalMemory;
- (void)setPhysicalMemory:(id)arg1;
- (id)disk;
- (void)setDisk:(id)arg1;
- (id)sysFileTime;
- (void)setSysFileTime:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)ua;
- (void)setUa:(id)arg1;
- (id)mcMetaFileInfo;
- (void)setMcMetaFileInfo:(id)arg1;
- (id)tnmId;
- (void)setTnmId:(id)arg1;
- (id)deviceInitTime;
- (void)setDeviceInitTime:(id)arg1;
- (void).cxx_destruct;
@end
