@interface ShowMessageFromWXReq : BaseReq
{
    WXMediaMessage * message; // +0x18
    NSString * country; // +0x20
    NSString * lang; // +0x28
}
- (id)init;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)lang;
- (void)setLang:(id)arg1;
- (void).cxx_destruct;
@end
