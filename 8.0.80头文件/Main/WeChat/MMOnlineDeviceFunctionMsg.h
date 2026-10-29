@interface MMOnlineDeviceFunctionMsg : NSObject
{
    unsigned int _createTime; // +0x8
    NSString * _functionName; // +0x10
    NSString * _arg; // +0x18
    NSString * _fromUserName; // +0x20
    NSString * _toUserName; // +0x28
    NSString * _deviceType; // +0x30
}
+ (id)functionMsgWithDictionary:(id)arg1;
- (void)setMessageSvrId:(unsigned long long)arg1;
- (unsigned long long)messageSvrId;
- (void)parseMarkReadMsg;
- (void)setDeviceName:(id)arg1;
- (id)deviceName;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)setShouldMuteNotification:(BOOL)arg1;
- (BOOL)shouldMuteNotification;
- (void)setLockDevice:(unsigned int)arg1;
- (unsigned int)lockDevice;
- (void)parseDeivceActiveMsg;
- (id)functionName;
- (void)setFunctionName:(id)arg1;
- (id)arg;
- (void)setArg:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (void).cxx_destruct;
@end
