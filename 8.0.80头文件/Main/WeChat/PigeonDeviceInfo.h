@interface PigeonDeviceInfo : NSObject
{
    NSString * _deviceId; // +0x8
    NSNumber * _deviceType; // +0x10
    NSString * _deviceNickname; // +0x18
    NSString * _deviceRemark; // +0x20
    NSString * _devicePath; // +0x28
    NSString * _deviceUUID; // +0x30
    NSString * _uriPath; // +0x38
}
+ (id)makeWithDeviceId:(id)arg1 deviceType:(id)arg2 deviceNickname:(id)arg3 deviceRemark:(id)arg4 devicePath:(id)arg5 deviceUUID:(id)arg6 uriPath:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (id)deviceNickname;
- (void)setDeviceNickname:(id)arg1;
- (id)deviceRemark;
- (void)setDeviceRemark:(id)arg1;
- (id)devicePath;
- (void)setDevicePath:(id)arg1;
- (id)deviceUUID;
- (void)setDeviceUUID:(id)arg1;
- (id)uriPath;
- (void)setUriPath:(id)arg1;
- (void).cxx_destruct;
@end
