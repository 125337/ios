@interface DeviceAutoLoginToastWrap : NSObject
{
    unsigned int _iconType; // +0x8
    NSData * _deviceId; // +0x10
    NSString * _wording; // +0x18
}
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end

