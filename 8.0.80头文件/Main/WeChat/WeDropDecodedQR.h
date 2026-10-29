@interface WeDropDecodedQR : NSObject
{
    MigrateMsgDeviceInfo * _deviceInfo; // +0x8
    NSString * _taskId; // +0x10
    NSData * _encryptKey; // +0x18
    NSData * _authHello; // +0x20
}
- (id)deviceInfo;
- (void)setDeviceInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)authHello;
- (void)setAuthHello:(id)arg1;
- (void).cxx_destruct;
@end
