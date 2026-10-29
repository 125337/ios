@interface MpCommonImpl : NSObject <MpCommonApi>
- (id)isMpAppInstalledWithError:(id *)arg1;
- (void)isActivityAttachedWithCompletion:(id /* block */)arg1;
- (void)bindPhoneWithCompletion:(id /* block */)arg1;
@end
