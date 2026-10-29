@interface FBSDKGraphErrorRecoveryProcessor : NSObject
{
    FBSDKErrorRecoveryAttempter * _recoveryAttempter; // +0x8
    NSError * _error; // +0x10
    id <FBSDKGraphErrorRecoveryProcessorDelegate> _delegate; // +0x18
}
- (void)dealloc;
- (BOOL)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (void)displayAlertWithRecoverySuggestion:(id)arg1 recoveryOptionsTitles:(id)arg2;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

