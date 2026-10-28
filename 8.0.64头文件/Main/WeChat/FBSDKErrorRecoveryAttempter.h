@interface FBSDKErrorRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>
+ (id)recoveryAttempterFromConfiguration:(id)arg1;
- (void)completeRecovery:(BOOL)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
@end
