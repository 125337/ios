@interface WCPayBindCardYHTInfoMinimchInfo : NSObject <NSCoding>
{
    unsigned int _minimch_user_state; // +0x8
    unsigned int _minimch_system_state; // +0xc
    NSString * _minimch_key; // +0x10
    unsigned long long _minimch_avail_balance; // +0x18
    NSString * _minimch_ext_msg; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)minimch_key;
- (void)setMinimch_key:(id)arg1;
- (unsigned long long)minimch_avail_balance;
- (void)setMinimch_avail_balance:(unsigned long long)arg1;
- (unsigned int)minimch_user_state;
- (void)setMinimch_user_state:(unsigned int)arg1;
- (unsigned int)minimch_system_state;
- (void)setMinimch_system_state:(unsigned int)arg1;
- (id)minimch_ext_msg;
- (void)setMinimch_ext_msg:(id)arg1;
- (void).cxx_destruct;
@end
