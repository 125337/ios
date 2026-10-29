@interface SafeDeviceData : NSCoder <PBCoding>
{
    BOOL _online; // +0x8
    BOOL _enableautologin; // +0x9
    BOOL _supportautologin; // +0xa
    unsigned int _lastTime; // +0xc
    unsigned int _clientVersion; // +0x10
    NSString * _name; // +0x18
    NSString * _uuid; // +0x20
    NSString * _deviceType; // +0x28
    NSString * _autologinwording; // +0x30
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_uuid;
+ (void)PBArrayAdd_deviceType;
+ (void)PBArrayAdd_lastTime;
+ (void)PBArrayAdd_online;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_enableautologin;
+ (void)PBArrayAdd_supportautologin;
+ (void)PBArrayAdd_autologinwording;
+ (void)initialize;
+ (void)DelSafeDevice:(id)arg1;
+ (void)UpdateSafeDevice:(id)arg1 withName:(id)arg2;
+ (void)UpdateSafeDevice:(id)arg1;
+ (void)SetSafeDeviceList:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentDevice;
- (id)name;
- (void)setName:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (unsigned int)lastTime;
- (void)setLastTime:(unsigned int)arg1;
- (BOOL)online;
- (void)setOnline:(BOOL)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (BOOL)enableautologin;
- (void)setEnableautologin:(BOOL)arg1;
- (BOOL)supportautologin;
- (void)setSupportautologin:(BOOL)arg1;
- (id)autologinwording;
- (void)setAutologinwording:(id)arg1;
- (void).cxx_destruct;
@end
