@interface HoneyPayCardInfo : NSObject <NSCoding>
{
    unsigned long long _total_credit_line; // +0x8
    unsigned long long _use_credit_line; // +0x10
    unsigned long long _unuse_credit_line; // +0x18
    NSString * _payer_username; // +0x20
    unsigned long long _hide_credit_line; // +0x28
    unsigned long long _card_type; // +0x30
    NSString * _card_type_name; // +0x38
    NSString * _icon_url; // +0x40
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)total_credit_line;
- (void)setTotal_credit_line:(unsigned long long)arg1;
- (unsigned long long)use_credit_line;
- (void)setUse_credit_line:(unsigned long long)arg1;
- (unsigned long long)unuse_credit_line;
- (void)setUnuse_credit_line:(unsigned long long)arg1;
- (id)payer_username;
- (void)setPayer_username:(id)arg1;
- (unsigned long long)hide_credit_line;
- (void)setHide_credit_line:(unsigned long long)arg1;
- (unsigned long long)card_type;
- (void)setCard_type:(unsigned long long)arg1;
- (id)card_type_name;
- (void)setCard_type_name:(id)arg1;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (void).cxx_destruct;
@end
