@interface MMFinderLiveCashOutPhoneNumberAuthViewModel : MMFinderLivePhoneNumberAuthViewModel
{
    BOOL _onlyNeedPhoneNumber; // +0x8
    BOOL _success; // +0x9
    NSString * _sessionID; // +0x10
    id /* block */ _onSuccessPageDidQuit; // +0x18
}
- (id)detail;
- (void)sendSMSCode:(id /* block */)arg1;
- (void)auth:(id /* block */)arg1;
- (BOOL)onlyNeedPhoneNumber;
- (void)setOnlyNeedPhoneNumber:(BOOL)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)onSuccessPageDidQuit;
- (void)setOnSuccessPageDidQuit:(id /* block */)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
