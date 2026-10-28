@interface FQFCardInfo : NSObject <NSCoding>
{
    unsigned long long _fqf_avail_quota; // +0x8
    unsigned long long _fqf_interest_rate; // +0x10
    double _fqf_interest_amount; // +0x18
    NSString * _fqf_pay_desk_title; // +0x20
    NSString * _fqf_title; // +0x28
    NSString * _fqf_sub_title; // +0x30
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)fqf_avail_quota;
- (void)setFqf_avail_quota:(unsigned long long)arg1;
- (unsigned long long)fqf_interest_rate;
- (void)setFqf_interest_rate:(unsigned long long)arg1;
- (double)fqf_interest_amount;
- (void)setFqf_interest_amount:(double)arg1;
- (id)fqf_pay_desk_title;
- (void)setFqf_pay_desk_title:(id)arg1;
- (id)fqf_title;
- (void)setFqf_title:(id)arg1;
- (id)fqf_sub_title;
- (void)setFqf_sub_title:(id)arg1;
- (void).cxx_destruct;
@end
