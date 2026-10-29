@interface WeDropRequestedQR : NSObject
{
    NSString * _qrContent; // +0x8
    UIImage * _qrImage; // +0x10
    NSString * _taskId; // +0x18
    NSData * _encryptKey; // +0x20
    NSData * _authHello; // +0x28
}
- (id)qrContent;
- (void)setQrContent:(id)arg1;
- (id)qrImage;
- (void)setQrImage:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)authHello;
- (void)setAuthHello:(id)arg1;
- (void).cxx_destruct;
@end
