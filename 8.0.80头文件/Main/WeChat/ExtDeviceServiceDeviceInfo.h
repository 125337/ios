@interface ExtDeviceServiceDeviceInfo : NSObject
{
    BOOL _readyToJump; // +0x8
    BOOL _handled; // +0x9
    NSString * _deviceUUID; // +0x10
}
+ (id)infoWithUUID:(id)arg1;
- (id)deviceUUID;
- (void)setDeviceUUID:(id)arg1;
- (BOOL)readyToJump;
- (void)setReadyToJump:(BOOL)arg1;
- (BOOL)handled;
- (void)setHandled:(BOOL)arg1;
- (void).cxx_destruct;
@end
