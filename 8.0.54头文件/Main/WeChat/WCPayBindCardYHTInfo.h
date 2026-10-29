@interface WCPayBindCardYHTInfo : NSObject <NSCoding>
{
    int _yht_user_state; // +0x8
    int _yht_system_state; // +0xc
    NSString * _yht_related_bank; // +0x10
    unsigned long long _yht_avail_balance; // +0x18
    NSString * _yht_ext_msg; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)yht_related_bank;
- (void)setYht_related_bank:(id)arg1;
- (unsigned long long)yht_avail_balance;
- (void)setYht_avail_balance:(unsigned long long)arg1;
- (int)yht_user_state;
- (void)setYht_user_state:(int)arg1;
- (int)yht_system_state;
- (void)setYht_system_state:(int)arg1;
- (id)yht_ext_msg;
- (void)setYht_ext_msg:(id)arg1;
- (void).cxx_destruct;
@end

