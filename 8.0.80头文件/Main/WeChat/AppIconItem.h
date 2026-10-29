@interface AppIconItem : NSObject
{
    NSString * appIconUrl; // +0x8
    NSString * appID; // +0x10
    NSString * cmd; // +0x18
}
- (id)init;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)cmd;
- (void)setCmd:(id)arg1;
- (void).cxx_destruct;
@end
