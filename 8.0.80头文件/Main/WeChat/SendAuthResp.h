@interface SendAuthResp : BaseResp
{
    NSString * code; // +0x18
    NSString * state; // +0x20
    NSString * lang; // +0x28
    NSString * country; // +0x30
}
- (id)init;
- (void)dealloc;
- (id)code;
- (void)setCode:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)lang;
- (void)setLang:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (void).cxx_destruct;
@end
