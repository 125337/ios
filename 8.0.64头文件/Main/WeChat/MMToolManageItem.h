@interface MMToolManageItem : NSObject
{
    NSString * _name; // +0x8
    NSString * _iconUrl; // +0x10
    NSObject * _rawData; // +0x18
    NSString * _appUserName; // +0x20
}
- (id)initFromChatRoomToolWeAppInfo:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)rawData;
- (void)setRawData:(id)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (void).cxx_destruct;
@end
