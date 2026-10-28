@interface UserIdAuthorizeSmsPhoneItem : MMObject
{
    NSString * _phoneId; // +0x8
    NSString * _showPhone; // +0x10
    NSString * _bankType; // +0x18
}
- (id)phoneId;
- (void)setPhoneId:(id)arg1;
- (id)showPhone;
- (void)setShowPhone:(id)arg1;
- (id)bankType;
- (void)setBankType:(id)arg1;
- (void).cxx_destruct;
@end
