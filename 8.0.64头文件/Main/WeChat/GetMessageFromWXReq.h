@interface GetMessageFromWXReq : BaseReq
{
    NSString * lang; // +0x18
    NSString * country; // +0x20
}
- (id)init;
- (id)lang;
- (void)setLang:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (void).cxx_destruct;
@end
