@interface SafeDeviceData : NSCoder <PBCoding>
{
    BOOL _online; // +0x8
    unsigned int _lastTime; // +0xc
    NSString * _name; // +0x10
    NSString * _uuid; // +0x18
    NSString * _deviceType; // +0x20
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_uuid;
+ (void)PBArrayAdd_deviceType;
+ (void)PBArrayAdd_lastTime;
+ (void)PBArrayAdd_online;
+ (void)initialize;
+ (void)DelSafeDevice:(id)arg1;
+ (void)UpdateSafeDevice:(id)arg1 withName:(id)arg2;
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
- (void).cxx_destruct;
@end

