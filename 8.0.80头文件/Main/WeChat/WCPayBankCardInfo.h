@interface WCPayBankCardInfo : NSObject
{
    NSString * _bank_type; // +0x8
    NSString * _mobile_hint; // +0x10
    NSString * _mobile_tips; // +0x18
}
- (id)bank_type;
- (void)setBank_type:(id)arg1;
- (id)mobile_hint;
- (void)setMobile_hint:(id)arg1;
- (id)mobile_tips;
- (void)setMobile_tips:(id)arg1;
- (void).cxx_destruct;
@end
