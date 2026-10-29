@interface WCPaySimpleCashierInfo : NSObject
{
    unsigned int _use_simple_cashier; // +0x8
    NSString * _bank_type; // +0x10
    NSString * _bind_serial; // +0x18
}
- (unsigned int)use_simple_cashier;
- (void)setUse_simple_cashier:(unsigned int)arg1;
- (id)bank_type;
- (void)setBank_type:(id)arg1;
- (id)bind_serial;
- (void)setBind_serial:(id)arg1;
- (void).cxx_destruct;
@end

