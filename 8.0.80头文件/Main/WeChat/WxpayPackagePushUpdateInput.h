@interface WxpayPackagePushUpdateInput : NSObject
{
    BOOL _accountReady; // +0x8
    NSString * _xml; // +0x10
    NSString * _msgId; // +0x18
    NSArray * _seen; // +0x20
    id /* block */ _kitAvailable; // +0x28
    NSString * _accountUin; // +0x30
}
- (id)xml;
- (void)setXml:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)seen;
- (void)setSeen:(id)arg1;
- (BOOL)accountReady;
- (void)setAccountReady:(BOOL)arg1;
- (id /* block */)kitAvailable;
- (void)setKitAvailable:(id /* block */)arg1;
- (id)accountUin;
- (void)setAccountUin:(id)arg1;
- (void).cxx_destruct;
@end
