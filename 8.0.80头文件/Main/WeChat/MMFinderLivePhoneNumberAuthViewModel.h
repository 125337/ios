@interface MMFinderLivePhoneNumberAuthViewModel : NSObject
{
    MMFinderLivePhoneNumberAuthViewController * _viewController; // +0x8
    NSString * _title; // +0x10
    NSString * _detail; // +0x18
    NSString * _phoneNumber; // +0x20
    NSString * _smsCode; // +0x28
}
- (void)auth:(id /* block */)arg1;
- (void)sendSMSCode:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)smsCode;
- (void)setSmsCode:(id)arg1;
- (void).cxx_destruct;
@end
