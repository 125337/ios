@interface WABluetoothMonitoredDevice : NSObject <PBCoding>
{
    NSString * _deviceUUID; // +0x8
    NSString * _wechatToken; // +0x10
    NSString * _envVersion; // +0x18
    NSString * _entryPackage; // +0x20
    NSString * _appId; // +0x28
    NSString * _extraData; // +0x30
    double _delayReconnectTime; // +0x38
}
+ (void)PBArrayAdd_deviceUUID;
+ (void)PBArrayAdd_wechatToken;
+ (void)PBArrayAdd_envVersion;
+ (void)PBArrayAdd_entryPackage;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_extraData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)deviceUUID;
- (void)setDeviceUUID:(id)arg1;
- (id)wechatToken;
- (void)setWechatToken:(id)arg1;
- (id)envVersion;
- (void)setEnvVersion:(id)arg1;
- (id)entryPackage;
- (void)setEntryPackage:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (double)delayReconnectTime;
- (void)setDelayReconnectTime:(double)arg1;
- (void).cxx_destruct;
@end

