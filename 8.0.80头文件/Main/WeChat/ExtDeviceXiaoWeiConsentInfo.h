@interface ExtDeviceXiaoWeiConsentInfo : NSObject
{
    BOOL _showing; // +0x8
    int _bizType; // +0xc
    NSString * _deviceName; // +0x10
    NSString * _fromUser; // +0x18
    NSString * _toUser; // +0x20
    unsigned long long _timestamp; // +0x28
}
+ (id)infoWithDeviceName:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 timestamp:(unsigned long long)arg4 bizType:(int)arg5;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (id)toUser;
- (void)setToUser:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end
