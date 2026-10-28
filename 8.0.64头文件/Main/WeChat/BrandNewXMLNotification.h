@interface BrandNewXMLNotification : MMObject
{
    NSString * _plain; // +0x8
    BrandNewXMLNotificationAccountInfo * _accountInfo; // +0x10
    BrandNewXMLNotificationMsgInfo * _msgInfo; // +0x18
}
- (id)plain;
- (void)setPlain:(id)arg1;
- (id)accountInfo;
- (void)setAccountInfo:(id)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end
