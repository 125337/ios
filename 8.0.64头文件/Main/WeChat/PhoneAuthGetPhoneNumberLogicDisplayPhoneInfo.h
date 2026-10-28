@interface PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo : MMObject
{
    BOOL _isWxPhone; // +0x8
    NSString * _phoneNumberString; // +0x10
    NSString * _showPhoneNumberString; // +0x18
    NSString * _describeString; // +0x20
}
- (id)phoneNumberString;
- (void)setPhoneNumberString:(id)arg1;
- (BOOL)isWxPhone;
- (void)setIsWxPhone:(BOOL)arg1;
- (id)showPhoneNumberString;
- (void)setShowPhoneNumberString:(id)arg1;
- (id)describeString;
- (void)setDescribeString:(id)arg1;
- (void).cxx_destruct;
@end
