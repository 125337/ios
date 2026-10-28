@interface WXGBackupChatRecordStartExportXmlInfo : NSObject
{
    NSString * _deviceName; // +0x8
    NSString * _contactName; // +0x10
    NSString * _nickName; // +0x18
    unsigned long long _createTime; // +0x20
}
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)contactName;
- (void)setContactName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
