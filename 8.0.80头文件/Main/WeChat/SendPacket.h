@interface SendPacket : NSObject
{
    NSString * _deviceId; // +0x8
    NSData * _data; // +0x10
}
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
